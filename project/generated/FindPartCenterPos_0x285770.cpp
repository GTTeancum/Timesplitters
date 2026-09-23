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

// Function: FindPartCenterPos
// Address: 0x285770 - 0x285a4c
void FindPartCenterPos_0x285770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FindPartCenterPos_0x285770");
#endif

    switch (ctx->pc) {
        case 0x285838u: goto label_285838;
        case 0x285868u: goto label_285868;
        case 0x28590cu: goto label_28590c;
        default: break;
    }

    ctx->pc = 0x285770u;

    // 0x285770: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x285770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x285774: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x285774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x285778: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x285778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x28577c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x28577cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285780: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x285780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x285784: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x285784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x285788: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x285788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x28578c: 0xa42818  mult        $a1, $a1, $a0
    ctx->pc = 0x28578cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x285790: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x285790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x285794: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x285794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x285798: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x285798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x28579c: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x28579cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x2857a0: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x2857a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x2857a4: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2857a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2857a8: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x2857a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2857ac: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x2857acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x2857b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2857b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2857b4: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x2857b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2857b8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2857b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2857bc: 0x65a021  addu        $s4, $v1, $a1
    ctx->pc = 0x2857bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2857c0: 0x82820002  lb          $v0, 0x2($s4)
    ctx->pc = 0x2857c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x2857c4: 0x4420005  bltzl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2857C4u;
    {
        const bool branch_taken_0x2857c4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2857c4) {
            ctx->pc = 0x2857C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2857C4u;
            // 0x2857c8: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2857DCu;
            goto label_2857dc;
        }
    }
    ctx->pc = 0x2857CCu;
    // 0x2857cc: 0x600013  mtlo        $v1
    ctx->pc = 0x2857ccu;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x2857d0: 0x70440000  madd        $zero, $v0, $a0
    ctx->pc = 0x2857d0u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
    // 0x2857d4: 0x2812  mflo        $a1
    ctx->pc = 0x2857d4u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x2857d8: 0xafa50034  sw          $a1, 0x34($sp)
    ctx->pc = 0x2857d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 5));
label_2857dc:
    // 0x2857dc: 0x82840003  lb          $a0, 0x3($s4)
    ctx->pc = 0x2857dcu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 3)));
    // 0x2857e0: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2857E0u;
    {
        const bool branch_taken_0x2857e0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2857E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2857E0u;
        // 0x2857e4: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2857e0) {
            ctx->pc = 0x2857F4u;
            goto label_2857f4;
        }
    }
    ctx->pc = 0x2857E8u;
    // 0x2857e8: 0x822818  mult        $a1, $a0, $v0
    ctx->pc = 0x2857e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2857ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2857ECu;
    {
        const bool branch_taken_0x2857ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2857F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2857ECu;
        // 0x2857f0: 0xa3f021  addu        $fp, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2857ec) {
            ctx->pc = 0x2857F8u;
            goto label_2857f8;
        }
    }
    ctx->pc = 0x2857F4u;
label_2857f4:
    // 0x2857f4: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2857f4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2857f8:
    // 0x2857f8: 0x8e900008  lw          $s0, 0x8($s4)
    ctx->pc = 0x2857f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2857fc: 0x12000072  beqz        $s0, . + 4 + (0x72 << 2)
    ctx->pc = 0x2857FCu;
    {
        const bool branch_taken_0x2857fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x285800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2857FCu;
        // 0x285800: 0x26970014  addiu       $s7, $s4, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2857fc) {
            ctx->pc = 0x2859C8u;
            goto label_2859c8;
        }
    }
    ctx->pc = 0x285804u;
    // 0x285804: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x285804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x285808: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x285808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x28580c: 0xc440fa3c  lwc1        $f0, -0x5C4($v0)
    ctx->pc = 0x28580cu;
    { uint32_t bits = FAST_READ32(0x3AFA3Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285810: 0xc461fa40  lwc1        $f1, -0x5C0($v1)
    ctx->pc = 0x285810u;
    { uint32_t bits = FAST_READ32(0x3AFA40u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x285814: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x285814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x285818: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x285818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x28581c: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x28581cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x285820: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x285820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x285824: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x285824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x285828: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x285828u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x28582c: 0x4400066  bltz        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x28582Cu;
    {
        const bool branch_taken_0x28582c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x285830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28582Cu;
        // 0x285830: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28582c) {
            ctx->pc = 0x2859C8u;
            goto label_2859c8;
        }
    }
    ctx->pc = 0x285834u;
    // 0x285834: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x285834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_285838:
    // 0x285838: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x285838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x28583c: 0x8ee50004  lw          $a1, 0x4($s7)
    ctx->pc = 0x28583cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x285840: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x285840u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285844: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x285844u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x285848: 0x8ee40010  lw          $a0, 0x10($s7)
    ctx->pc = 0x285848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x28584c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28584cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x285850: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x285850u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x285854: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x285854u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x285858: 0x18c00056  blez        $a2, . + 4 + (0x56 << 2)
    ctx->pc = 0x285858u;
    {
        const bool branch_taken_0x285858 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x28585Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285858u;
        // 0x28585c: 0xa38821  addu        $s1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285858) {
            ctx->pc = 0x2859B4u;
            goto label_2859b4;
        }
    }
    ctx->pc = 0x285860u;
    // 0x285860: 0x26160018  addiu       $s6, $s0, 0x18
    ctx->pc = 0x285860u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x285864: 0x0  nop
    ctx->pc = 0x285864u;
    // NOP
label_285868:
    // 0x285868: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x285868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28586c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x28586cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x285870: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x285870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x285874: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x285874u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x285878: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x285878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28587c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x28587cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x285880: 0x82820000  lb          $v0, 0x0($s4)
    ctx->pc = 0x285880u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x285884: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x285884u;
    {
        const bool branch_taken_0x285884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x285884) {
            ctx->pc = 0x285888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285884u;
            // 0x285888: 0x92430000  lbu         $v1, 0x0($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28589Cu;
            goto label_28589c;
        }
    }
    ctx->pc = 0x28588Cu;
    // 0x28588c: 0x82840001  lb          $a0, 0x1($s4)
    ctx->pc = 0x28588cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x285890: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x285890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x285894: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x285894u;
    {
        const bool branch_taken_0x285894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285894u;
        // 0x285898: 0x8ea20004  lw          $v0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285894) {
            ctx->pc = 0x285900u;
            goto label_285900;
        }
    }
    ctx->pc = 0x28589Cu;
label_28589c:
    // 0x28589c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28589cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2858a0: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2858A0u;
    {
        const bool branch_taken_0x2858a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2858A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2858A0u;
        // 0x2858a4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2858a0) {
            ctx->pc = 0x2858E4u;
            goto label_2858e4;
        }
    }
    ctx->pc = 0x2858A8u;
    // 0x2858a8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2858A8u;
    {
        const bool branch_taken_0x2858a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2858a8) {
            ctx->pc = 0x2858ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2858A8u;
            // 0x2858ac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2858C0u;
            goto label_2858c0;
        }
    }
    ctx->pc = 0x2858B0u;
    // 0x2858b0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2858B0u;
    {
        const bool branch_taken_0x2858b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2858B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2858B0u;
        // 0x2858b4: 0xc7a10020  lwc1        $f1, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2858b0) {
            ctx->pc = 0x2858D0u;
            goto label_2858d0;
        }
    }
    ctx->pc = 0x2858B8u;
    // 0x2858b8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2858B8u;
    {
        const bool branch_taken_0x2858b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2858BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2858B8u;
        // 0x2858bc: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2858b8) {
            ctx->pc = 0x285918u;
            goto label_285918;
        }
    }
    ctx->pc = 0x2858C0u;
label_2858c0:
    // 0x2858c0: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2858C0u;
    {
        const bool branch_taken_0x2858c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2858C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2858C0u;
        // 0x2858c4: 0xc7a10020  lwc1        $f1, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2858c0) {
            ctx->pc = 0x2858F4u;
            goto label_2858f4;
        }
    }
    ctx->pc = 0x2858C8u;
    // 0x2858c8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2858C8u;
    {
        const bool branch_taken_0x2858c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2858CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2858C8u;
        // 0x2858cc: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2858c8) {
            ctx->pc = 0x285918u;
            goto label_285918;
        }
    }
    ctx->pc = 0x2858D0u;
label_2858d0:
    // 0x2858d0: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x2858d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x2858d4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2858d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2858d8: 0x80440001  lb          $a0, 0x1($v0)
    ctx->pc = 0x2858d8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x2858dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2858DCu;
    {
        const bool branch_taken_0x2858dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2858E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2858DCu;
        // 0x2858e0: 0x8ea20004  lw          $v0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2858dc) {
            ctx->pc = 0x285900u;
            goto label_285900;
        }
    }
    ctx->pc = 0x2858E4u;
label_2858e4:
    // 0x2858e4: 0x83c40001  lb          $a0, 0x1($fp)
    ctx->pc = 0x2858e4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 1)));
    // 0x2858e8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2858e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2858ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2858ECu;
    {
        const bool branch_taken_0x2858ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2858F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2858ECu;
        // 0x2858f0: 0x8ea20004  lw          $v0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2858ec) {
            ctx->pc = 0x285900u;
            goto label_285900;
        }
    }
    ctx->pc = 0x2858F4u;
label_2858f4:
    // 0x2858f4: 0x82840001  lb          $a0, 0x1($s4)
    ctx->pc = 0x2858f4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x2858f8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2858f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2858fc: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x2858fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_285900:
    // 0x285900: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x285900u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x285904: 0xc0ad50a  jal         func_2B5428
    ctx->pc = 0x285904u;
    SET_GPR_U32(ctx, 31, 0x28590Cu);
    ctx->pc = 0x285908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285904u;
    // 0x285908: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5428u, 0x285904u, 0x28590Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28590Cu;
label_28590c:
    // 0x28590c: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x28590cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x285910: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x285910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x285914: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x285914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_285918:
    // 0x285918: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x285918u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28591c: 0x0  nop
    ctx->pc = 0x28591cu;
    // NOP
    // 0x285920: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x285920u;
    {
        const bool branch_taken_0x285920 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x285924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285920u;
        // 0x285924: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x285920) {
            ctx->pc = 0x28592Cu;
            goto label_28592c;
        }
    }
    ctx->pc = 0x285928u;
    // 0x285928: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x285928u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_28592c:
    // 0x28592c: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x28592cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x285930: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x285930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285934: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x285934u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x285938: 0x0  nop
    ctx->pc = 0x285938u;
    // NOP
    // 0x28593c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x28593Cu;
    {
        const bool branch_taken_0x28593c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28593c) {
            ctx->pc = 0x285940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28593Cu;
            // 0x285940: 0xe7a20004  swc1        $f2, 0x4($sp) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x285944u;
            goto label_285944;
        }
    }
    ctx->pc = 0x285944u;
label_285944:
    // 0x285944: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x285944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x285948: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x285948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28594c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x28594cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x285950: 0x0  nop
    ctx->pc = 0x285950u;
    // NOP
    // 0x285954: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x285954u;
    {
        const bool branch_taken_0x285954 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x285954) {
            ctx->pc = 0x285958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285954u;
            // 0x285958: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x28595Cu;
            goto label_28595c;
        }
    }
    ctx->pc = 0x28595Cu;
label_28595c:
    // 0x28595c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x28595cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285960: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x285960u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x285964: 0x0  nop
    ctx->pc = 0x285964u;
    // NOP
    // 0x285968: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x285968u;
    {
        const bool branch_taken_0x285968 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x285968) {
            ctx->pc = 0x28596Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285968u;
            // 0x28596c: 0xe7a30010  swc1        $f3, 0x10($sp) (Delay Slot)
            { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x285970u;
            goto label_285970;
        }
    }
    ctx->pc = 0x285970u;
label_285970:
    // 0x285970: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x285970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285974: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x285974u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x285978: 0x0  nop
    ctx->pc = 0x285978u;
    // NOP
    // 0x28597c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x28597Cu;
    {
        const bool branch_taken_0x28597c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28597c) {
            ctx->pc = 0x285980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28597Cu;
            // 0x285980: 0xe7a20014  swc1        $f2, 0x14($sp) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x285984u;
            goto label_285984;
        }
    }
    ctx->pc = 0x285984u;
label_285984:
    // 0x285984: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x285984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285988: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x285988u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28598c: 0x0  nop
    ctx->pc = 0x28598cu;
    // NOP
    // 0x285990: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x285990u;
    {
        const bool branch_taken_0x285990 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x285990) {
            ctx->pc = 0x285994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285990u;
            // 0x285994: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x285998u;
            goto label_285998;
        }
    }
    ctx->pc = 0x285998u;
label_285998:
    // 0x285998: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x285998u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x28599c: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x28599cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x2859a0: 0x266102a  slt         $v0, $s3, $a2
    ctx->pc = 0x2859a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2859a4: 0x1440ffb0  bnez        $v0, . + 4 + (-0x50 << 2)
    ctx->pc = 0x2859A4u;
    {
        const bool branch_taken_0x2859a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2859A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2859A4u;
        // 0x2859a8: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2859a4) {
            ctx->pc = 0x285868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_285868;
        }
    }
    ctx->pc = 0x2859ACu;
    // 0x2859ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2859ACu;
    {
        const bool branch_taken_0x2859ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2859B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2859ACu;
        // 0x2859b0: 0x2c0802d  daddu       $s0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2859ac) {
            ctx->pc = 0x2859BCu;
            goto label_2859bc;
        }
    }
    ctx->pc = 0x2859B4u;
label_2859b4:
    // 0x2859b4: 0x26160018  addiu       $s6, $s0, 0x18
    ctx->pc = 0x2859b4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x2859b8: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x2859b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2859bc:
    // 0x2859bc: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2859bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2859c0: 0x443ff9d  bgezl       $v0, . + 4 + (-0x63 << 2)
    ctx->pc = 0x2859C0u;
    {
        const bool branch_taken_0x2859c0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2859c0) {
            ctx->pc = 0x2859C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2859C0u;
            // 0x2859c4: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_285838;
        }
    }
    ctx->pc = 0x2859C8u;
label_2859c8:
    // 0x2859c8: 0xc7a40000  lwc1        $f4, 0x0($sp)
    ctx->pc = 0x2859c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2859cc: 0xc7a50004  lwc1        $f5, 0x4($sp)
    ctx->pc = 0x2859ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2859d0: 0xc7a60008  lwc1        $f6, 0x8($sp)
    ctx->pc = 0x2859d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2859d4: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x2859d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2859d8: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x2859d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2859dc: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x2859dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2859e0: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x2859e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x2859e4: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x2859e4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x2859e8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2859e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2859ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2859ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2859f0: 0x460618c1  sub.s       $f3, $f3, $f6
    ctx->pc = 0x2859f0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
    // 0x2859f4: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2859f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2859f8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2859f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2859fc: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x2859fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x285a00: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x285a00u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x285a04: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x285a04u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x285a08: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x285a08u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x285a0c: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x285a0cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x285a10: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x285a10u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x285a14: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x285a14u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x285a18: 0x46022940  add.s       $f5, $f5, $f2
    ctx->pc = 0x285a18u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x285a1c: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x285a1cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x285a20: 0x46033180  add.s       $f6, $f6, $f3
    ctx->pc = 0x285a20u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[3]);
    // 0x285a24: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x285a24u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x285a28: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x285a28u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x285a2c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x285a2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x285a30: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x285a30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x285a34: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x285a34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x285a38: 0xe4a40000  swc1        $f4, 0x0($a1)
    ctx->pc = 0x285a38u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x285a3c: 0xe4a50004  swc1        $f5, 0x4($a1)
    ctx->pc = 0x285a3cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x285a40: 0xe4a60008  swc1        $f6, 0x8($a1)
    ctx->pc = 0x285a40u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x285a44: 0x3e00008  jr          $ra
    ctx->pc = 0x285A44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285A44u;
        // 0x285a48: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285A44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x285A4Cu;
}
