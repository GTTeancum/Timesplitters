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

// Function: vtxlistWaterxyzPre
// Address: 0x278400 - 0x278888
void vtxlistWaterxyzPre_0x278400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("vtxlistWaterxyzPre_0x278400");
#endif

    switch (ctx->pc) {
        case 0x278630u: goto label_278630;
        case 0x278680u: goto label_278680;
        case 0x2786dcu: goto label_2786dc;
        case 0x278710u: goto label_278710;
        case 0x278814u: goto label_278814;
        default: break;
    }

    ctx->pc = 0x278400u;

    // 0x278400: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x278400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x278404: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x278404u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x278408: 0xffb500f0  sd          $s5, 0xF0($sp)
    ctx->pc = 0x278408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 21));
    // 0x27840c: 0x3c07003b  lui         $a3, 0x3B
    ctx->pc = 0x27840cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)59 << 16));
    // 0x278410: 0xffb400e0  sd          $s4, 0xE0($sp)
    ctx->pc = 0x278410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 20));
    // 0x278414: 0x3c08003b  lui         $t0, 0x3B
    ctx->pc = 0x278414u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)59 << 16));
    // 0x278418: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x278418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x27841c: 0x3c0d003b  lui         $t5, 0x3B
    ctx->pc = 0x27841cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)59 << 16));
    // 0x278420: 0xe7b60130  swc1        $f22, 0x130($sp)
    ctx->pc = 0x278420u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x278424: 0x3c0e003b  lui         $t6, 0x3B
    ctx->pc = 0x278424u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)59 << 16));
    // 0x278428: 0xe7b40120  swc1        $f20, 0x120($sp)
    ctx->pc = 0x278428u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x27842c: 0x3c0f003b  lui         $t7, 0x3B
    ctx->pc = 0x27842cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)59 << 16));
    // 0x278430: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x278430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x278434: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x278434u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x278438: 0xffb60100  sd          $s6, 0x100($sp)
    ctx->pc = 0x278438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 22));
    // 0x27843c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x27843cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278440: 0xffb300d0  sd          $s3, 0xD0($sp)
    ctx->pc = 0x278440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 19));
    // 0x278444: 0xffb200c0  sd          $s2, 0xC0($sp)
    ctx->pc = 0x278444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 18));
    // 0x278448: 0xffb100b0  sd          $s1, 0xB0($sp)
    ctx->pc = 0x278448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 17));
    // 0x27844c: 0xe7b50128  swc1        $f21, 0x128($sp)
    ctx->pc = 0x27844cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x278450: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x278450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x278454: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x278454u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x278458: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x278458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x27845c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x27845cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x278460: 0x24cb8528  addiu       $t3, $a2, -0x7AD8
    ctx->pc = 0x278460u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935848));
    // 0x278464: 0x69650007  ldl         $a1, 0x7($t3)
    ctx->pc = 0x278464u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x278468: 0x6d650000  ldr         $a1, 0x0($t3)
    ctx->pc = 0x278468u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x27846c: 0x8d690008  lw          $t1, 0x8($t3)
    ctx->pc = 0x27846cu;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x3A8530u));
    // 0x278470: 0xb3a50007  sdl         $a1, 0x7($sp)
    ctx->pc = 0x278470u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x278474: 0xb7a50000  sdr         $a1, 0x0($sp)
    ctx->pc = 0x278474u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x278478: 0xafa90008  sw          $t1, 0x8($sp)
    ctx->pc = 0x278478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 9));
    // 0x27847c: 0x2454fec5  addiu       $s4, $v0, -0x13B
    ctx->pc = 0x27847cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966981));
    // 0x278480: 0x24ca8528  addiu       $t2, $a2, -0x7AD8
    ctx->pc = 0x278480u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935848));
    // 0x278484: 0x69420007  ldl         $v0, 0x7($t2)
    ctx->pc = 0x278484u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x278488: 0x6d420000  ldr         $v0, 0x0($t2)
    ctx->pc = 0x278488u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x27848c: 0x8d450008  lw          $a1, 0x8($t2)
    ctx->pc = 0x27848cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3A8530u));
    // 0x278490: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x278490u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x278494: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x278494u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x278498: 0xafa50018  sw          $a1, 0x18($sp)
    ctx->pc = 0x278498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
    // 0x27849c: 0x24e68538  addiu       $a2, $a3, -0x7AC8
    ctx->pc = 0x27849cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 4294935864));
    // 0x2784a0: 0x68cb0007  ldl         $t3, 0x7($a2)
    ctx->pc = 0x2784a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x2784a4: 0x6ccb0000  ldr         $t3, 0x0($a2)
    ctx->pc = 0x2784a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x2784a8: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2784a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A8540u));
    // 0x2784ac: 0xb3ab0027  sdl         $t3, 0x27($sp)
    ctx->pc = 0x2784acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2784b0: 0xb7ab0020  sdr         $t3, 0x20($sp)
    ctx->pc = 0x2784b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2784b4: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x2784b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x2784b8: 0x3c09003b  lui         $t1, 0x3B
    ctx->pc = 0x2784b8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)59 << 16));
    // 0x2784bc: 0x24e68538  addiu       $a2, $a3, -0x7AC8
    ctx->pc = 0x2784bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 4294935864));
    // 0x2784c0: 0x68ca0007  ldl         $t2, 0x7($a2)
    ctx->pc = 0x2784c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x2784c4: 0x6cca0000  ldr         $t2, 0x0($a2)
    ctx->pc = 0x2784c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x2784c8: 0x8ccb0008  lw          $t3, 0x8($a2)
    ctx->pc = 0x2784c8u;
    SET_GPR_S32(ctx, 11, (int32_t)FAST_READ32(0x3A8540u));
    // 0x2784cc: 0xb3aa0037  sdl         $t2, 0x37($sp)
    ctx->pc = 0x2784ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2784d0: 0xb7aa0030  sdr         $t2, 0x30($sp)
    ctx->pc = 0x2784d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2784d4: 0xafab0038  sw          $t3, 0x38($sp)
    ctx->pc = 0x2784d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 11));
    // 0x2784d8: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x2784d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x2784dc: 0x25068548  addiu       $a2, $t0, -0x7AB8
    ctx->pc = 0x2784dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 4294935880));
    // 0x2784e0: 0x68c70007  ldl         $a3, 0x7($a2)
    ctx->pc = 0x2784e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2784e4: 0x6cc70000  ldr         $a3, 0x0($a2)
    ctx->pc = 0x2784e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2784e8: 0x8ccb0008  lw          $t3, 0x8($a2)
    ctx->pc = 0x2784e8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2784ec: 0xb3a70047  sdl         $a3, 0x47($sp)
    ctx->pc = 0x2784ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2784f0: 0xb7a70040  sdr         $a3, 0x40($sp)
    ctx->pc = 0x2784f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2784f4: 0xafab0048  sw          $t3, 0x48($sp)
    ctx->pc = 0x2784f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 11));
    // 0x2784f8: 0x3a25021  addu        $t2, $sp, $v0
    ctx->pc = 0x2784f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2784fc: 0x25a68558  addiu       $a2, $t5, -0x7AA8
    ctx->pc = 0x2784fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 13), 4294935896));
    // 0x278500: 0x68c70007  ldl         $a3, 0x7($a2)
    ctx->pc = 0x278500u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x278504: 0x6cc70000  ldr         $a3, 0x0($a2)
    ctx->pc = 0x278504u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x278508: 0x8cc80008  lw          $t0, 0x8($a2)
    ctx->pc = 0x278508u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x27850c: 0xb3a70057  sdl         $a3, 0x57($sp)
    ctx->pc = 0x27850cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x278510: 0xb7a70050  sdr         $a3, 0x50($sp)
    ctx->pc = 0x278510u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x278514: 0xafa80058  sw          $t0, 0x58($sp)
    ctx->pc = 0x278514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 8));
    // 0x278518: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x278518u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27851c: 0x25c58568  addiu       $a1, $t6, -0x7A98
    ctx->pc = 0x27851cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), 4294935912));
    // 0x278520: 0x68a70007  ldl         $a3, 0x7($a1)
    ctx->pc = 0x278520u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x278524: 0x6ca70000  ldr         $a3, 0x0($a1)
    ctx->pc = 0x278524u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x278528: 0x8ca80008  lw          $t0, 0x8($a1)
    ctx->pc = 0x278528u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x27852c: 0xb3a70067  sdl         $a3, 0x67($sp)
    ctx->pc = 0x27852cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x278530: 0xb7a70060  sdr         $a3, 0x60($sp)
    ctx->pc = 0x278530u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x278534: 0xafa80068  sw          $t0, 0x68($sp)
    ctx->pc = 0x278534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 8));
    // 0x278538: 0x140602d  daddu       $t4, $t2, $zero
    ctx->pc = 0x278538u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27853c: 0x25ed8578  addiu       $t5, $t7, -0x7A88
    ctx->pc = 0x27853cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), 4294935928));
    // 0x278540: 0x69a60007  ldl         $a2, 0x7($t5)
    ctx->pc = 0x278540u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x278544: 0x6da60000  ldr         $a2, 0x0($t5)
    ctx->pc = 0x278544u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x278548: 0x8da70008  lw          $a3, 0x8($t5)
    ctx->pc = 0x278548u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x27854c: 0xb3a60077  sdl         $a2, 0x77($sp)
    ctx->pc = 0x27854cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x278550: 0xb7a60070  sdr         $a2, 0x70($sp)
    ctx->pc = 0x278550u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x278554: 0xafa70078  sw          $a3, 0x78($sp)
    ctx->pc = 0x278554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 7));
    // 0x278558: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x278558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x27855c: 0x26078588  addiu       $a3, $s0, -0x7A78
    ctx->pc = 0x27855cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294935944));
    // 0x278560: 0x68ee0007  ldl         $t6, 0x7($a3)
    ctx->pc = 0x278560u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
    // 0x278564: 0x6cee0000  ldr         $t6, 0x0($a3)
    ctx->pc = 0x278564u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
    // 0x278568: 0x8cef0008  lw          $t7, 0x8($a3)
    ctx->pc = 0x278568u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x27856c: 0xb3ae0087  sdl         $t6, 0x87($sp)
    ctx->pc = 0x27856cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x278570: 0xb7ae0080  sdr         $t6, 0x80($sp)
    ctx->pc = 0x278570u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x278574: 0xafaf0088  sw          $t7, 0x88($sp)
    ctx->pc = 0x278574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 15));
    // 0x278578: 0x140402d  daddu       $t0, $t2, $zero
    ctx->pc = 0x278578u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27857c: 0x25278598  addiu       $a3, $t1, -0x7A68
    ctx->pc = 0x27857cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 4294935960));
    // 0x278580: 0x68ed0007  ldl         $t5, 0x7($a3)
    ctx->pc = 0x278580u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x278584: 0x6ced0000  ldr         $t5, 0x0($a3)
    ctx->pc = 0x278584u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x278588: 0x8cee0008  lw          $t6, 0x8($a3)
    ctx->pc = 0x278588u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x27858c: 0xb3ad0097  sdl         $t5, 0x97($sp)
    ctx->pc = 0x27858cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x278590: 0xb7ad0090  sdr         $t5, 0x90($sp)
    ctx->pc = 0x278590u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x278594: 0xafae0098  sw          $t6, 0x98($sp)
    ctx->pc = 0x278594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 14));
    // 0x278598: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x278598u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27859c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x27859cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2785a0: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x2785a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2785a4: 0xc5440000  lwc1        $f4, 0x0($t2)
    ctx->pc = 0x2785a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2785a8: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x2785a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2785ac: 0xc5660010  lwc1        $f6, 0x10($t3)
    ctx->pc = 0x2785acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2785b0: 0xc0682d  daddu       $t5, $a2, $zero
    ctx->pc = 0x2785b0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2785b4: 0xc5020070  lwc1        $f2, 0x70($t0)
    ctx->pc = 0x2785b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2785b8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2785b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2785bc: 0xc4c10060  lwc1        $f1, 0x60($a2)
    ctx->pc = 0x2785bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2785c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2785c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2785c4: 0xc5200080  lwc1        $f0, 0x80($t1)
    ctx->pc = 0x2785c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2785c8: 0x2238823  subu        $s1, $s1, $v1
    ctx->pc = 0x2785c8u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2785cc: 0xc4e30090  lwc1        $f3, 0x90($a3)
    ctx->pc = 0x2785ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2785d0: 0x46011581  sub.s       $f22, $f2, $f1
    ctx->pc = 0x2785d0u;
    ctx->f[22] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2785d4: 0xc5850020  lwc1        $f5, 0x20($t4)
    ctx->pc = 0x2785d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2785d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2785d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2785dc: 0xe784b1a0  swc1        $f4, -0x4E60($gp)
    ctx->pc = 0x2785dcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294947232), bits); }
    // 0x2785e0: 0x46001d01  sub.s       $f20, $f3, $f0
    ctx->pc = 0x2785e0u;
    ctx->f[20] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2785e4: 0xe786b1a4  swc1        $f6, -0x4E5C($gp)
    ctx->pc = 0x2785e4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294947236), bits); }
    // 0x2785e8: 0xe785b1a8  swc1        $f5, -0x4E58($gp)
    ctx->pc = 0x2785e8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294947240), bits); }
    // 0x2785ec: 0xc4a10040  lwc1        $f1, 0x40($a1)
    ctx->pc = 0x2785ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2785f0: 0xc5a20050  lwc1        $f2, 0x50($t5)
    ctx->pc = 0x2785f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2785f4: 0xc5400030  lwc1        $f0, 0x30($t2)
    ctx->pc = 0x2785f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2785f8: 0xe781b1b0  swc1        $f1, -0x4E50($gp)
    ctx->pc = 0x2785f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294947248), bits); }
    // 0x2785fc: 0xe780b1ac  swc1        $f0, -0x4E54($gp)
    ctx->pc = 0x2785fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294947244), bits); }
    // 0x278600: 0x16020014  bne         $s0, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x278600u;
    {
        const bool branch_taken_0x278600 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x278604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278600u;
        // 0x278604: 0xe782b1b4  swc1        $f2, -0x4E4C($gp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294947252), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x278600) {
            ctx->pc = 0x278654u;
            goto label_278654;
        }
    }
    ctx->pc = 0x278608u;
    // 0x278608: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x278608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x27860c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x27860Cu;
    {
        const bool branch_taken_0x27860c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x278610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27860Cu;
        // 0x278610: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27860c) {
            ctx->pc = 0x278654u;
            goto label_278654;
        }
    }
    ctx->pc = 0x278614u;
    // 0x278614: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x278614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x278618: 0x4400022  bltz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x278618u;
    {
        const bool branch_taken_0x278618 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x27861Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278618u;
        // 0x27861c: 0x8e310030  lw          $s1, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278618) {
            ctx->pc = 0x2786A4u;
            goto label_2786a4;
        }
    }
    ctx->pc = 0x278620u;
    // 0x278620: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x278620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x278624: 0x440001f  bltz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x278624u;
    {
        const bool branch_taken_0x278624 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x278624) {
            ctx->pc = 0x2786A4u;
            goto label_2786a4;
        }
    }
    ctx->pc = 0x27862Cu;
    // 0x27862c: 0x0  nop
    ctx->pc = 0x27862cu;
    // NOP
label_278630:
    // 0x278630: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x278630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x278634: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x278634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x278638: 0x0  nop
    ctx->pc = 0x278638u;
    // NOP
    // 0x27863c: 0x0  nop
    ctx->pc = 0x27863cu;
    // NOP
    // 0x278640: 0x0  nop
    ctx->pc = 0x278640u;
    // NOP
    // 0x278644: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x278644u;
    {
        const bool branch_taken_0x278644 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x278644) {
            ctx->pc = 0x278630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278630;
        }
    }
    ctx->pc = 0x27864Cu;
    // 0x27864c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x27864Cu;
    {
        const bool branch_taken_0x27864c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27864Cu;
        // 0x278650: 0x8c830010  lw          $v1, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27864c) {
            ctx->pc = 0x2786A8u;
            goto label_2786a8;
        }
    }
    ctx->pc = 0x278654u;
label_278654:
    // 0x278654: 0x16000017  bnez        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x278654u;
    {
        const bool branch_taken_0x278654 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x278654) {
            ctx->pc = 0x2786B4u;
            goto label_2786b4;
        }
    }
    ctx->pc = 0x27865Cu;
    // 0x27865c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x27865cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x278660: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x278660u;
    {
        const bool branch_taken_0x278660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x278664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278660u;
        // 0x278664: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278660) {
            ctx->pc = 0x2786B4u;
            goto label_2786b4;
        }
    }
    ctx->pc = 0x278668u;
    // 0x278668: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x278668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x27866c: 0x440000d  bltz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x27866Cu;
    {
        const bool branch_taken_0x27866c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x278670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27866Cu;
        // 0x278670: 0x8e310018  lw          $s1, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27866c) {
            ctx->pc = 0x2786A4u;
            goto label_2786a4;
        }
    }
    ctx->pc = 0x278674u;
    // 0x278674: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x278674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x278678: 0x440000a  bltz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x278678u;
    {
        const bool branch_taken_0x278678 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x278678) {
            ctx->pc = 0x2786A4u;
            goto label_2786a4;
        }
    }
    ctx->pc = 0x278680u;
label_278680:
    // 0x278680: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x278680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x278684: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x278684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x278688: 0x0  nop
    ctx->pc = 0x278688u;
    // NOP
    // 0x27868c: 0x0  nop
    ctx->pc = 0x27868cu;
    // NOP
    // 0x278690: 0x0  nop
    ctx->pc = 0x278690u;
    // NOP
    // 0x278694: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x278694u;
    {
        const bool branch_taken_0x278694 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x278694) {
            ctx->pc = 0x278680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278680;
        }
    }
    ctx->pc = 0x27869Cu;
    // 0x27869c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27869Cu;
    {
        const bool branch_taken_0x27869c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2786A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27869Cu;
        // 0x2786a0: 0x8c830010  lw          $v1, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27869c) {
            ctx->pc = 0x2786A8u;
            goto label_2786a8;
        }
    }
    ctx->pc = 0x2786A4u;
label_2786a4:
    // 0x2786a4: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2786a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_2786a8:
    // 0x2786a8: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x2786a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2786ac: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2786acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2786b0: 0x43a821  addu        $s5, $v0, $v1
    ctx->pc = 0x2786b0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2786b4:
    // 0x2786b4: 0x12a0000d  beqz        $s5, . + 4 + (0xD << 2)
    ctx->pc = 0x2786B4u;
    {
        const bool branch_taken_0x2786b4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2786B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2786B4u;
        // 0x2786b8: 0x8f82935c  lw          $v0, -0x6CA4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939484)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2786b4) {
            ctx->pc = 0x2786ECu;
            goto label_2786ec;
        }
    }
    ctx->pc = 0x2786BCu;
    // 0x2786bc: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2786BCu;
    {
        const bool branch_taken_0x2786bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2786C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2786BCu;
        // 0x2786c0: 0x151080  sll         $v0, $s5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2786bc) {
            ctx->pc = 0x2786ECu;
            goto label_2786ec;
        }
    }
    ctx->pc = 0x2786C4u;
    // 0x2786c4: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2786c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x2786c8: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2786c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2786cc: 0x3484fff0  ori         $a0, $a0, 0xFFF0
    ctx->pc = 0x2786ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65520);
    // 0x2786d0: 0x442024  and         $a0, $v0, $a0
    ctx->pc = 0x2786d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2786d4: 0xc08070e  jal         func_201C38
    ctx->pc = 0x2786D4u;
    SET_GPR_U32(ctx, 31, 0x2786DCu);
    ctx->pc = 0x2786D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2786D4u;
    // 0x2786d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x2786D4u, 0x2786DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2786DCu;
label_2786dc:
    // 0x2786dc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2786dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2786e0: 0x2784b198  addiu       $a0, $gp, -0x4E68
    ctx->pc = 0x2786e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947224));
    // 0x2786e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2786e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2786e8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2786e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2786ec:
    // 0x2786ec: 0x1aa00059  blez        $s5, . + 4 + (0x59 << 2)
    ctx->pc = 0x2786ECu;
    {
        const bool branch_taken_0x2786ec = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x2786F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2786ECu;
        // 0x2786f0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2786ec) {
            ctx->pc = 0x278854u;
            goto label_278854;
        }
    }
    ctx->pc = 0x2786F4u;
    // 0x2786f4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2786f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2786f8: 0x2782b198  addiu       $v0, $gp, -0x4E68
    ctx->pc = 0x2786f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947224));
    // 0x2786fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2786fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x278700: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x278700u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x278704: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x278704u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x278708: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x278708u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27870c: 0x0  nop
    ctx->pc = 0x27870cu;
    // NOP
label_278710:
    // 0x278710: 0xc6650000  lwc1        $f5, 0x0($s3)
    ctx->pc = 0x278710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x278714: 0x12960031  beq         $s4, $s6, . + 4 + (0x31 << 2)
    ctx->pc = 0x278714u;
    {
        const bool branch_taken_0x278714 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 22));
        ctx->pc = 0x278718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278714u;
        // 0x278718: 0xc6630008  lwc1        $f3, 0x8($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x278714) {
            ctx->pc = 0x2787DCu;
            goto label_2787dc;
        }
    }
    ctx->pc = 0x27871Cu;
    // 0x27871c: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x27871cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x278720: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x278720u;
    {
        const bool branch_taken_0x278720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x278724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278720u;
        // 0x278724: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278720) {
            ctx->pc = 0x278738u;
            goto label_278738;
        }
    }
    ctx->pc = 0x278728u;
    // 0x278728: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x278728u;
    {
        const bool branch_taken_0x278728 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x27872Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278728u;
        // 0x27872c: 0xc7a00080  lwc1        $f0, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x278728) {
            ctx->pc = 0x278748u;
            goto label_278748;
        }
    }
    ctx->pc = 0x278730u;
    // 0x278730: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x278730u;
    {
        const bool branch_taken_0x278730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278730u;
        // 0x278734: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278730) {
            ctx->pc = 0x278848u;
            goto label_278848;
        }
    }
    ctx->pc = 0x278738u;
label_278738:
    // 0x278738: 0x5282003f  beql        $s4, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x278738u;
    {
        const bool branch_taken_0x278738 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x278738) {
            ctx->pc = 0x27873Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278738u;
            // 0x27873c: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x278838u;
            goto label_278838;
        }
    }
    ctx->pc = 0x278740u;
    // 0x278740: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x278740u;
    {
        const bool branch_taken_0x278740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278740u;
        // 0x278744: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278740) {
            ctx->pc = 0x278848u;
            goto label_278848;
        }
    }
    ctx->pc = 0x278748u;
label_278748:
    // 0x278748: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x278748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x27874c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x27874cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x278750: 0x46001881  sub.s       $f2, $f3, $f0
    ctx->pc = 0x278750u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x278754: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x278754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x278758: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x278758u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x27875c: 0x0  nop
    ctx->pc = 0x27875cu;
    // NOP
    // 0x278760: 0x0  nop
    ctx->pc = 0x278760u;
    // NOP
    // 0x278764: 0x46141043  div.s       $f1, $f2, $f20
    ctx->pc = 0x278764u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[20];
    // 0x278768: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x278768u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27876c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x27876Cu;
    {
        const bool branch_taken_0x27876c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27876c) {
            ctx->pc = 0x278784u;
            goto label_278784;
        }
    }
    ctx->pc = 0x278774u;
    // 0x278774: 0x4604a002  mul.s       $f0, $f20, $f4
    ctx->pc = 0x278774u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[4]);
    // 0x278778: 0x0  nop
    ctx->pc = 0x278778u;
    // NOP
    // 0x27877c: 0x0  nop
    ctx->pc = 0x27877cu;
    // NOP
    // 0x278780: 0x46001183  div.s       $f6, $f2, $f0
    ctx->pc = 0x278780u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[6] = ctx->f[2] / ctx->f[0];
label_278784:
    // 0x278784: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x278784u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x278788: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x278788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27878c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27878cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x278790: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x278790u;
    {
        const bool branch_taken_0x278790 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x278794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278790u;
        // 0x278794: 0xc7a00090  lwc1        $f0, 0x90($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x278790) {
            ctx->pc = 0x2787ACu;
            goto label_2787ac;
        }
    }
    ctx->pc = 0x278798u;
    // 0x278798: 0x4604a042  mul.s       $f1, $f20, $f4
    ctx->pc = 0x278798u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[4]);
    // 0x27879c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x27879cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2787a0: 0x0  nop
    ctx->pc = 0x2787a0u;
    // NOP
    // 0x2787a4: 0x0  nop
    ctx->pc = 0x2787a4u;
    // NOP
    // 0x2787a8: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x2787a8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[1];
label_2787ac:
    // 0x2787ac: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x2787acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2787b0: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x2787b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x2787b4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2787b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2787b8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2787b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2787bc: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x2787bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x2787c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2787c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2787c4: 0x0  nop
    ctx->pc = 0x2787c4u;
    // NOP
    // 0x2787c8: 0x0  nop
    ctx->pc = 0x2787c8u;
    // NOP
    // 0x2787cc: 0x46160003  div.s       $f0, $f0, $f22
    ctx->pc = 0x2787ccu;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[22];
    // 0x2787d0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2787d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2787d4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2787D4u;
    {
        const bool branch_taken_0x2787d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2787D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2787D4u;
        // 0x2787d8: 0xe4410000  swc1        $f1, 0x0($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2787d4) {
            ctx->pc = 0x278844u;
            goto label_278844;
        }
    }
    ctx->pc = 0x2787DCu;
label_2787dc:
    // 0x2787dc: 0x46052842  mul.s       $f1, $f5, $f5
    ctx->pc = 0x2787dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x2787e0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2787e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2787e4: 0x46031802  mul.s       $f0, $f3, $f3
    ctx->pc = 0x2787e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2787e8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2787e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2787ec: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2787ecu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2787f0: 0x0  nop
    ctx->pc = 0x2787f0u;
    // NOP
    // 0x2787f4: 0x0  nop
    ctx->pc = 0x2787f4u;
    // NOP
    // 0x2787f8: 0x460c0084  c1          0xC0084
    ctx->pc = 0x2787f8u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[12]);
    // 0x2787fc: 0x46021032  c.eq.s      $f2, $f2
    ctx->pc = 0x2787fcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x278800: 0x0  nop
    ctx->pc = 0x278800u;
    // NOP
    // 0x278804: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x278804u;
    {
        const bool branch_taken_0x278804 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x278808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278804u;
        // 0x278808: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278804) {
            ctx->pc = 0x278818u;
            goto label_278818;
        }
    }
    ctx->pc = 0x27880Cu;
    // 0x27880c: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x27880Cu;
    SET_GPR_U32(ctx, 31, 0x278814u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x27880Cu, 0x278814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278814u;
label_278814:
    // 0x278814: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x278814u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_278818:
    // 0x278818: 0x3c0142a0  lui         $at, 0x42A0
    ctx->pc = 0x278818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17056 << 16));
    // 0x27881c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27881cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x278820: 0x0  nop
    ctx->pc = 0x278820u;
    // NOP
    // 0x278824: 0x0  nop
    ctx->pc = 0x278824u;
    // NOP
    // 0x278828: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x278828u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
    // 0x27882c: 0x4600a801  sub.s       $f0, $f21, $f0
    ctx->pc = 0x27882cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x278830: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x278830u;
    {
        const bool branch_taken_0x278830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278830u;
        // 0x278834: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x278830) {
            ctx->pc = 0x278844u;
            goto label_278844;
        }
    }
    ctx->pc = 0x278838u;
label_278838:
    // 0x278838: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x278838u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x27883c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27883cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x278840: 0xe4550000  swc1        $f21, 0x0($v0)
    ctx->pc = 0x278840u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_278844:
    // 0x278844: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x278844u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_278848:
    // 0x278848: 0x235102a  slt         $v0, $s1, $s5
    ctx->pc = 0x278848u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x27884c: 0x1440ffb0  bnez        $v0, . + 4 + (-0x50 << 2)
    ctx->pc = 0x27884Cu;
    {
        const bool branch_taken_0x27884c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x278850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27884Cu;
        // 0x278850: 0x2673000c  addiu       $s3, $s3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27884c) {
            ctx->pc = 0x278710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278710;
        }
    }
    ctx->pc = 0x278854u;
label_278854:
    // 0x278854: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x278854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x278858: 0xdfb60100  ld          $s6, 0x100($sp)
    ctx->pc = 0x278858u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x27885c: 0xdfb500f0  ld          $s5, 0xF0($sp)
    ctx->pc = 0x27885cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x278860: 0xdfb400e0  ld          $s4, 0xE0($sp)
    ctx->pc = 0x278860u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x278864: 0xdfb300d0  ld          $s3, 0xD0($sp)
    ctx->pc = 0x278864u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x278868: 0xdfb200c0  ld          $s2, 0xC0($sp)
    ctx->pc = 0x278868u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x27886c: 0xdfb100b0  ld          $s1, 0xB0($sp)
    ctx->pc = 0x27886cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x278870: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x278870u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x278874: 0xc7b60130  lwc1        $f22, 0x130($sp)
    ctx->pc = 0x278874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x278878: 0xc7b50128  lwc1        $f21, 0x128($sp)
    ctx->pc = 0x278878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27887c: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x27887cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x278880: 0x3e00008  jr          $ra
    ctx->pc = 0x278880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x278884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278880u;
        // 0x278884: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278888u;
}
