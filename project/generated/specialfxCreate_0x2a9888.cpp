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

// Function: specialfxCreate
// Address: 0x2a9888 - 0x2aad90
void specialfxCreate_0x2a9888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("specialfxCreate_0x2a9888");
#endif

    switch (ctx->pc) {
        case 0x2a9a38u: goto label_2a9a38;
        case 0x2a9a40u: goto label_2a9a40;
        case 0x2a9a9cu: goto label_2a9a9c;
        case 0x2a9afcu: goto label_2a9afc;
        case 0x2a9b68u: goto label_2a9b68;
        case 0x2a9bccu: goto label_2a9bcc;
        case 0x2a9be8u: goto label_2a9be8;
        case 0x2a9c6cu: goto label_2a9c6c;
        case 0x2a9c98u: goto label_2a9c98;
        case 0x2a9ca0u: goto label_2a9ca0;
        case 0x2a9cf0u: goto label_2a9cf0;
        case 0x2a9d3cu: goto label_2a9d3c;
        case 0x2a9de0u: goto label_2a9de0;
        case 0x2a9e98u: goto label_2a9e98;
        case 0x2a9ec8u: goto label_2a9ec8;
        case 0x2a9f0cu: goto label_2a9f0c;
        case 0x2a9f48u: goto label_2a9f48;
        case 0x2a9f84u: goto label_2a9f84;
        case 0x2a9fb0u: goto label_2a9fb0;
        case 0x2aa060u: goto label_2aa060;
        case 0x2aa068u: goto label_2aa068;
        case 0x2aa0b8u: goto label_2aa0b8;
        case 0x2aa104u: goto label_2aa104;
        case 0x2aa1d4u: goto label_2aa1d4;
        case 0x2aa224u: goto label_2aa224;
        case 0x2aa23cu: goto label_2aa23c;
        case 0x2aa258u: goto label_2aa258;
        case 0x2aa288u: goto label_2aa288;
        case 0x2aa2b8u: goto label_2aa2b8;
        case 0x2aa3c0u: goto label_2aa3c0;
        case 0x2aa3c8u: goto label_2aa3c8;
        case 0x2aa414u: goto label_2aa414;
        case 0x2aa41cu: goto label_2aa41c;
        case 0x2aa468u: goto label_2aa468;
        case 0x2aa470u: goto label_2aa470;
        case 0x2aa4bcu: goto label_2aa4bc;
        case 0x2aa4c4u: goto label_2aa4c4;
        case 0x2aa53cu: goto label_2aa53c;
        case 0x2aa5b4u: goto label_2aa5b4;
        case 0x2aa6ecu: goto label_2aa6ec;
        case 0x2aa758u: goto label_2aa758;
        case 0x2aa788u: goto label_2aa788;
        case 0x2aa790u: goto label_2aa790;
        case 0x2aa7e0u: goto label_2aa7e0;
        case 0x2aa834u: goto label_2aa834;
        case 0x2aa904u: goto label_2aa904;
        case 0x2aa960u: goto label_2aa960;
        case 0x2aa984u: goto label_2aa984;
        case 0x2aaa48u: goto label_2aaa48;
        case 0x2aaa80u: goto label_2aaa80;
        case 0x2aaaccu: goto label_2aaacc;
        case 0x2aaad4u: goto label_2aaad4;
        case 0x2aab20u: goto label_2aab20;
        case 0x2aab28u: goto label_2aab28;
        case 0x2aab74u: goto label_2aab74;
        case 0x2aacf0u: goto label_2aacf0;
        default: break;
    }

    ctx->pc = 0x2a9888u;

    // 0x2a9888: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x2a9888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x2a988c: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x2a988cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x2a9890: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x2a9890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x2a9894: 0x160a82d  daddu       $s5, $t3, $zero
    ctx->pc = 0x2a9894u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9898: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x2a9898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x2a989c: 0x2a25818  mult        $t3, $s5, $v0
    ctx->pc = 0x2a989cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x2a98a0: 0x3c170037  lui         $s7, 0x37
    ctx->pc = 0x2a98a0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)55 << 16));
    // 0x2a98a4: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x2a98a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x2a98a8: 0x26ecc268  addiu       $t4, $s7, -0x3D98
    ctx->pc = 0x2a98a8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 23), 4294951528));
    // 0x2a98ac: 0x25820008  addiu       $v0, $t4, 0x8
    ctx->pc = 0x2a98acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
    // 0x2a98b0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a98b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a98b4: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x2a98b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x2a98b8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2a98b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2a98bc: 0x1622821  addu        $a1, $t3, $v0
    ctx->pc = 0x2a98bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x2a98c0: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x2a98c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x2a98c4: 0x16c1821  addu        $v1, $t3, $t4
    ctx->pc = 0x2a98c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
    // 0x2a98c8: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x2a98c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x2a98cc: 0x18b1021  addu        $v0, $t4, $t3
    ctx->pc = 0x2a98ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x2a98d0: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x2a98d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x2a98d4: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x2a98d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a98d8: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x2a98d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x2a98dc: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x2a98dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a98e0: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x2a98e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x2a98e4: 0xe7b600f0  swc1        $f22, 0xF0($sp)
    ctx->pc = 0x2a98e4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2a98e8: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x2a98e8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x2a98ec: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x2a98ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2a98f0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2a98f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x2a98f4: 0xac480004  sw          $t0, 0x4($v0)
    ctx->pc = 0x2a98f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
    // 0x2a98f8: 0x6410002  bgez        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A98F8u;
    {
        const bool branch_taken_0x2a98f8 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x2A98FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A98F8u;
        // 0x2a98fc: 0xacb20000  sw          $s2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a98f8) {
            ctx->pc = 0x2A9904u;
            goto label_2a9904;
        }
    }
    ctx->pc = 0x2A9900u;
    // 0x2a9900: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2a9900u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2a9904:
    // 0x2a9904: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x2a9904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a9908: 0x18b1021  addu        $v0, $t4, $t3
    ctx->pc = 0x2a9908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x2a990c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a990cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9910: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a9910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9914: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x2a9914u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2a9918: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x2a9918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a991c: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x2a991cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x2a9920: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x2a9920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a9924: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A9924u;
    {
        const bool branch_taken_0x2a9924 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9924u;
        // 0x2a9928: 0xe4810014  swc1        $f1, 0x14($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9924) {
            ctx->pc = 0x2A9944u;
            goto label_2a9944;
        }
    }
    ctx->pc = 0x2A992Cu;
    // 0x2a992c: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x2a992cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a9930: 0xe4410018  swc1        $f1, 0x18($v0)
    ctx->pc = 0x2a9930u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x2a9934: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x2a9934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9938: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x2a9938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x2a993c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2A993Cu;
    {
        const bool branch_taken_0x2a993c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A993Cu;
        // 0x2a9940: 0xc4c10008  lwc1        $f1, 0x8($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a993c) {
            ctx->pc = 0x2A9964u;
            goto label_2a9964;
        }
    }
    ctx->pc = 0x2A9944u;
label_2a9944:
    // 0x2a9944: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x2a9944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a9948: 0x18b1021  addu        $v0, $t4, $t3
    ctx->pc = 0x2a9948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x2a994c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a994cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9950: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a9950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9954: 0xe4410018  swc1        $f1, 0x18($v0)
    ctx->pc = 0x2a9954u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x2a9958: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x2a9958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a995c: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x2a995cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x2a9960: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x2a9960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a9964:
    // 0x2a9964: 0x10e0000d  beqz        $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x2A9964u;
    {
        const bool branch_taken_0x2a9964 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9964u;
        // 0x2a9968: 0xe4810020  swc1        $f1, 0x20($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9964) {
            ctx->pc = 0x2A999Cu;
            goto label_2a999c;
        }
    }
    ctx->pc = 0x2A996Cu;
    // 0x2a996c: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x2a996cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x2a9970: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x2a9970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9974: 0x2a21018  mult        $v0, $s5, $v0
    ctx->pc = 0x2a9974u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2a9978: 0x26e3c268  addiu       $v1, $s7, -0x3D98
    ctx->pc = 0x2a9978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294951528));
    // 0x2a997c: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x2a997cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a9980: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x2a9980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x2a9984: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2a9984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9988: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a9988u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a998c: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x2a998cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9990: 0xe4a00028  swc1        $f0, 0x28($a1)
    ctx->pc = 0x2a9990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
    // 0x2a9994: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2A9994u;
    {
        const bool branch_taken_0x2a9994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9994u;
        // 0x2a9998: 0xc4e10008  lwc1        $f1, 0x8($a3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9994) {
            ctx->pc = 0x2A99C8u;
            goto label_2a99c8;
        }
    }
    ctx->pc = 0x2A999Cu;
label_2a999c:
    // 0x2a999c: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x2a999cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x2a99a0: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2a99a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a99a4: 0x2a21018  mult        $v0, $s5, $v0
    ctx->pc = 0x2a99a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2a99a8: 0x26e3c268  addiu       $v1, $s7, -0x3D98
    ctx->pc = 0x2a99a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294951528));
    // 0x2a99ac: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x2a99acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a99b0: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x2a99b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x2a99b4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2a99b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a99b8: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a99b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a99bc: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x2a99bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a99c0: 0xe4a00028  swc1        $f0, 0x28($a1)
    ctx->pc = 0x2a99c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
    // 0x2a99c4: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x2a99c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a99c8:
    // 0x2a99c8: 0xe461002c  swc1        $f1, 0x2C($v1)
    ctx->pc = 0x2a99c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 44), bits); }
    // 0x2a99cc: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x2a99ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x2a99d0: 0x26e3c268  addiu       $v1, $s7, -0x3D98
    ctx->pc = 0x2a99d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294951528));
    // 0x2a99d4: 0x2a21018  mult        $v0, $s5, $v0
    ctx->pc = 0x2a99d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2a99d8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2a99d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a99dc: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2a99dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a99e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a99e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a99e4: 0x2c82000c  sltiu       $v0, $a0, 0xC
    ctx->pc = 0x2a99e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x2a99e8: 0x104004d6  beqz        $v0, . + 4 + (0x4D6 << 2)
    ctx->pc = 0x2A99E8u;
    {
        const bool branch_taken_0x2a99e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A99ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A99E8u;
        // 0x2a99ec: 0xac600030  sw          $zero, 0x30($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a99e8) {
            ctx->pc = 0x2AAD44u;
            goto label_2aad44;
        }
    }
    ctx->pc = 0x2A99F0u;
    // 0x2a99f0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2a99f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2a99f4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2a99f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2a99f8: 0x244296d0  addiu       $v0, $v0, -0x6930
    ctx->pc = 0x2a99f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940368));
    // 0x2a99fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a99fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a9a00: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2a9a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a9a04: 0x800008  jr          $a0
    ctx->pc = 0x2A9A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A9A0Cu: goto label_2a9a0c;
            case 0x2A9B60u: goto label_2a9b60;
            case 0x2A9BBCu: goto label_2a9bbc;
            case 0x2A9E38u: goto label_2a9e38;
            case 0x2A9E5Cu: goto label_2a9e5c;
            case 0x2A9E80u: goto label_2a9e80;
            case 0x2AA204u: goto label_2aa204;
            case 0x2AA244u: goto label_2aa244;
            case 0x2AA94Cu: goto label_2aa94c;
            case 0x2AAD30u: goto label_2aad30;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9A04u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2A9A0Cu;
label_2a9a0c:
    // 0x2a9a0c: 0x2411005c  addiu       $s1, $zero, 0x5C
    ctx->pc = 0x2a9a0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x2a9a10: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x2a9a10u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
    // 0x2a9a14: 0x2b18818  mult        $s1, $s5, $s1
    ctx->pc = 0x2a9a14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x2a9a18: 0x2610c2b0  addiu       $s0, $s0, -0x3D50
    ctx->pc = 0x2a9a18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294951600));
    // 0x2a9a1c: 0x2606ffc4  addiu       $a2, $s0, -0x3C
    ctx->pc = 0x2a9a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967236));
    // 0x2a9a20: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x2a9a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2a9a24: 0x2407003c  addiu       $a3, $zero, 0x3C
    ctx->pc = 0x2a9a24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2a9a28: 0x2309021  addu        $s2, $s1, $s0
    ctx->pc = 0x2a9a28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2a9a2c: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x2a9a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x2a9a30: 0xc0a6098  jal         func_298260
    ctx->pc = 0x2A9A30u;
    SET_GPR_U32(ctx, 31, 0x2A9A38u);
    ctx->pc = 0x2A9A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9A30u;
    // 0x2a9a34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298260u, 0x2A9A30u, 0x2A9A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9A38u;
label_2a9a38:
    // 0x2a9a38: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2A9A38u;
    SET_GPR_U32(ctx, 31, 0x2A9A40u);
    ctx->pc = 0x2A9A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9A38u;
    // 0x2a9a3c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2A9A38u, 0x2A9A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9A40u;
label_2a9a40:
    // 0x2a9a40: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x2a9a40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2a9a44: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A9A44u;
    {
        const bool branch_taken_0x2a9a44 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2A9A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9A44u;
        // 0x2a9a48: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9a44) {
            ctx->pc = 0x2A9A58u;
            goto label_2a9a58;
        }
    }
    ctx->pc = 0x2A9A4Cu;
    // 0x2a9a4c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a9a4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a9a50: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A9A50u;
    {
        const bool branch_taken_0x2a9a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9A50u;
        // 0x2a9a54: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9a50) {
            ctx->pc = 0x2A9A70u;
            goto label_2a9a70;
        }
    }
    ctx->pc = 0x2A9A58u;
label_2a9a58:
    // 0x2a9a58: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2a9a58u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2a9a5c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a9a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2a9a60: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a9a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a9a64: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a9a64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a9a68: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2a9a68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2a9a6c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2a9a6cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2a9a70:
    // 0x2a9a70: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2a9a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2a9a74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a9a74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9a78: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2a9a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2a9a7c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2a9a7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a9a80: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a9a80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a9a84: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2a9a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2a9a88: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a9a88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a9a8c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2a9a8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2a9a90: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a9a90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a9a94: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2A9A94u;
    SET_GPR_U32(ctx, 31, 0x2A9A9Cu);
    ctx->pc = 0x2A9A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9A94u;
    // 0x2a9a98: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2A9A94u, 0x2A9A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9A9Cu;
label_2a9a9c:
    // 0x2a9a9c: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x2a9a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x2a9aa0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a9aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9aa4: 0x2a31818  mult        $v1, $s5, $v1
    ctx->pc = 0x2a9aa4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2a9aa8: 0x26e2c268  addiu       $v0, $s7, -0x3D98
    ctx->pc = 0x2a9aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294951528));
    // 0x2a9aac: 0x24420054  addiu       $v0, $v0, 0x54
    ctx->pc = 0x2a9aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x2a9ab0: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A9AB0u;
    {
        const bool branch_taken_0x2a9ab0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2A9AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9AB0u;
        // 0x2a9ab4: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9ab0) {
            ctx->pc = 0x2A9AC4u;
            goto label_2a9ac4;
        }
    }
    ctx->pc = 0x2A9AB8u;
    // 0x2a9ab8: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x2a9ab8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a9abc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A9ABCu;
    {
        const bool branch_taken_0x2a9abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9ABCu;
        // 0x2a9ac0: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9abc) {
            ctx->pc = 0x2A9ADCu;
            goto label_2a9adc;
        }
    }
    ctx->pc = 0x2A9AC4u;
label_2a9ac4:
    // 0x2a9ac4: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x2a9ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x2a9ac8: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2a9ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2a9acc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a9accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a9ad0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2a9ad0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a9ad4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2a9ad4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2a9ad8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2a9ad8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2a9adc:
    // 0x2a9adc: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2a9adcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2a9ae0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a9ae0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9ae4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a9ae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a9ae8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a9ae8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a9aec: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2a9aecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2a9af0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a9af0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a9af4: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2A9AF4u;
    SET_GPR_U32(ctx, 31, 0x2A9AFCu);
    ctx->pc = 0x2A9AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9AF4u;
    // 0x2a9af8: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2A9AF4u, 0x2A9AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9AFCu;
label_2a9afc:
    // 0x2a9afc: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x2a9afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x2a9b00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a9b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9b04: 0x2a31818  mult        $v1, $s5, $v1
    ctx->pc = 0x2a9b04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2a9b08: 0x26e2c268  addiu       $v0, $s7, -0x3D98
    ctx->pc = 0x2a9b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294951528));
    // 0x2a9b0c: 0x24420058  addiu       $v0, $v0, 0x58
    ctx->pc = 0x2a9b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x2a9b10: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A9B10u;
    {
        const bool branch_taken_0x2a9b10 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2A9B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9B10u;
        // 0x2a9b14: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9b10) {
            ctx->pc = 0x2A9B24u;
            goto label_2a9b24;
        }
    }
    ctx->pc = 0x2A9B18u;
    // 0x2a9b18: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2a9b18u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a9b1c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A9B1Cu;
    {
        const bool branch_taken_0x2a9b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9B1Cu;
        // 0x2a9b20: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9b1c) {
            ctx->pc = 0x2A9B3Cu;
            goto label_2a9b3c;
        }
    }
    ctx->pc = 0x2A9B24u;
label_2a9b24:
    // 0x2a9b24: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x2a9b24u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x2a9b28: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2a9b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2a9b2c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a9b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a9b30: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a9b30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a9b34: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2a9b34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2a9b38: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2a9b38u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2a9b3c:
    // 0x2a9b3c: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2a9b3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2a9b40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a9b40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9b44: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2a9b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2a9b48: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2a9b48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a9b4c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a9b4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a9b50: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2a9b50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2a9b54: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a9b54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a9b58: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2A9B58u;
    {
        const bool branch_taken_0x2a9b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9B58u;
        // 0x2a9b5c: 0x46020001  sub.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9b58) {
            ctx->pc = 0x2A9BB0u;
            goto label_2a9bb0;
        }
    }
    ctx->pc = 0x2A9B60u;
label_2a9b60:
    // 0x2a9b60: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2A9B60u;
    SET_GPR_U32(ctx, 31, 0x2A9B68u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2A9B60u, 0x2A9B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9B68u;
label_2a9b68:
    // 0x2a9b68: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x2a9b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x2a9b6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a9b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9b70: 0x2a31818  mult        $v1, $s5, $v1
    ctx->pc = 0x2a9b70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2a9b74: 0x26e2c268  addiu       $v0, $s7, -0x3D98
    ctx->pc = 0x2a9b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294951528));
    // 0x2a9b78: 0x24420034  addiu       $v0, $v0, 0x34
    ctx->pc = 0x2a9b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x2a9b7c: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A9B7Cu;
    {
        const bool branch_taken_0x2a9b7c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2A9B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9B7Cu;
        // 0x2a9b80: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9b7c) {
            ctx->pc = 0x2A9B90u;
            goto label_2a9b90;
        }
    }
    ctx->pc = 0x2A9B84u;
    // 0x2a9b84: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2a9b84u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a9b88: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A9B88u;
    {
        const bool branch_taken_0x2a9b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9B88u;
        // 0x2a9b8c: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9b88) {
            ctx->pc = 0x2A9BA8u;
            goto label_2a9ba8;
        }
    }
    ctx->pc = 0x2A9B90u;
label_2a9b90:
    // 0x2a9b90: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x2a9b90u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x2a9b94: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2a9b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2a9b98: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a9b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a9b9c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a9b9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a9ba0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2a9ba0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2a9ba4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2a9ba4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2a9ba8:
    // 0x2a9ba8: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2a9ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2a9bac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a9bacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a9bb0:
    // 0x2a9bb0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a9bb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a9bb4: 0x10000463  b           . + 4 + (0x463 << 2)
    ctx->pc = 0x2A9BB4u;
    {
        const bool branch_taken_0x2a9bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9BB4u;
        // 0x2a9bb8: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9bb4) {
            ctx->pc = 0x2AAD44u;
            goto label_2aad44;
        }
    }
    ctx->pc = 0x2A9BBCu;
label_2a9bbc:
    // 0x2a9bbc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a9bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9bc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a9bc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9bc4: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x2A9BC4u;
    SET_GPR_U32(ctx, 31, 0x2A9BCCu);
    ctx->pc = 0x2A9BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9BC4u;
    // 0x2a9bc8: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x2A9BC4u, 0x2A9BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9BCCu;
label_2a9bcc:
    // 0x2a9bcc: 0xc62e0008  lwc1        $f14, 0x8($s1)
    ctx->pc = 0x2a9bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2a9bd0: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x2a9bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x2a9bd4: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x2a9bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a9bd8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2a9bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a9bdc: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x2a9bdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2a9be0: 0xc09defe  jal         func_277BF8
    ctx->pc = 0x2A9BE0u;
    SET_GPR_U32(ctx, 31, 0x2A9BE8u);
    ctx->pc = 0x2A9BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9BE0u;
    // 0x2a9be4: 0xc62d0004  lwc1        $f13, 0x4($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x277BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277BF8u, 0x2A9BE0u, 0x2A9BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9BE8u;
label_2a9be8:
    // 0x2a9be8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a9be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9bec: 0x26e5c268  addiu       $a1, $s7, -0x3D98
    ctx->pc = 0x2a9becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294951528));
    // 0x2a9bf0: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x2a9bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x2a9bf4: 0x2a23018  mult        $a2, $s5, $v0
    ctx->pc = 0x2a9bf4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2a9bf8: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x2a9bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2a9bfc: 0xac640038  sw          $a0, 0x38($v1)
    ctx->pc = 0x2a9bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 4));
    // 0x2a9c00: 0x10800454  beqz        $a0, . + 4 + (0x454 << 2)
    ctx->pc = 0x2A9C00u;
    {
        const bool branch_taken_0x2a9c00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9C00u;
        // 0x2a9c04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9c00) {
            ctx->pc = 0x2AAD54u;
            goto label_2aad54;
        }
    }
    ctx->pc = 0x2A9C08u;
    // 0x2a9c08: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x2A9C08u;
    {
        const bool branch_taken_0x2a9c08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9C08u;
        // 0x2a9c0c: 0x8c820160  lw          $v0, 0x160($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9c08) {
            ctx->pc = 0x2A9C40u;
            goto label_2a9c40;
        }
    }
    ctx->pc = 0x2A9C10u;
    // 0x2a9c10: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2a9c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9c14: 0xe440004c  swc1        $f0, 0x4C($v0)
    ctx->pc = 0x2a9c14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 76), bits); }
    // 0x2a9c18: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2a9c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a9c1c: 0xe4410050  swc1        $f1, 0x50($v0)
    ctx->pc = 0x2a9c1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x2a9c20: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2a9c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9c24: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x2a9c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x2a9c28: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x2a9c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a9c2c: 0xe4410058  swc1        $f1, 0x58($v0)
    ctx->pc = 0x2a9c2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x2a9c30: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x2a9c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9c34: 0xe440005c  swc1        $f0, 0x5C($v0)
    ctx->pc = 0x2a9c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 92), bits); }
    // 0x2a9c38: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x2a9c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a9c3c: 0xe4410060  swc1        $f1, 0x60($v0)
    ctx->pc = 0x2a9c3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
label_2a9c40:
    // 0x2a9c40: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x2a9c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2a9c44: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2a9c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a9c48: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a9c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a9c4c: 0x1464043e  bne         $v1, $a0, . + 4 + (0x43E << 2)
    ctx->pc = 0x2A9C4Cu;
    {
        const bool branch_taken_0x2a9c4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2A9C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9C4Cu;
        // 0x2a9c50: 0x2402005c  addiu       $v0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9c4c) {
            ctx->pc = 0x2AAD48u;
            goto label_2aad48;
        }
    }
    ctx->pc = 0x2A9C54u;
    // 0x2a9c54: 0x24a20048  addiu       $v0, $a1, 0x48
    ctx->pc = 0x2a9c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 72));
    // 0x2a9c58: 0xc28021  addu        $s0, $a2, $v0
    ctx->pc = 0x2a9c58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2a9c5c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2a9c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2a9c60: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2a9c60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9c64: 0xc0a60ca  jal         func_298328
    ctx->pc = 0x2A9C64u;
    SET_GPR_U32(ctx, 31, 0x2A9C6Cu);
    ctx->pc = 0x2A9C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9C64u;
    // 0x2a9c68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298328u, 0x2A9C64u, 0x2A9C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9C6Cu;
label_2a9c6c:
    // 0x2a9c6c: 0x10400435  beqz        $v0, . + 4 + (0x435 << 2)
    ctx->pc = 0x2A9C6Cu;
    {
        const bool branch_taken_0x2a9c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9C6Cu;
        // 0x2a9c70: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9c6c) {
            ctx->pc = 0x2AAD44u;
            goto label_2aad44;
        }
    }
    ctx->pc = 0x2A9C74u;
    // 0x2a9c74: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x2a9c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2a9c78: 0x18400051  blez        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x2A9C78u;
    {
        const bool branch_taken_0x2a9c78 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2A9C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9C78u;
        // 0x2a9c7c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9c78) {
            ctx->pc = 0x2A9DC0u;
            goto label_2a9dc0;
        }
    }
    ctx->pc = 0x2A9C80u;
    // 0x2a9c80: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2a9c80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2a9c84: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2a9c84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2a9c88: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2a9c88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9c8c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2a9c8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2a9c90: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2a9c90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2a9c94: 0x0  nop
    ctx->pc = 0x2a9c94u;
    // NOP
label_2a9c98:
    // 0x2a9c98: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2A9C98u;
    SET_GPR_U32(ctx, 31, 0x2A9CA0u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2A9C98u, 0x2A9CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9CA0u;
label_2a9ca0:
    // 0x2a9ca0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a9ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9ca4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2a9ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2a9ca8: 0x244203e0  addiu       $v0, $v0, 0x3E0
    ctx->pc = 0x2a9ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 992));
    // 0x2a9cac: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A9CACu;
    {
        const bool branch_taken_0x2a9cac = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2A9CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9CACu;
        // 0x2a9cb0: 0x522821  addu        $a1, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9cac) {
            ctx->pc = 0x2A9CC4u;
            goto label_2a9cc4;
        }
    }
    ctx->pc = 0x2A9CB4u;
    // 0x2a9cb4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a9cb4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9cb8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a9cb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2a9cbc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A9CBCu;
    {
        const bool branch_taken_0x2a9cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9CBCu;
        // 0x2a9cc0: 0x46140002  mul.s       $f0, $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9cbc) {
            ctx->pc = 0x2A9CE0u;
            goto label_2a9ce0;
        }
    }
    ctx->pc = 0x2A9CC4u;
label_2a9cc4:
    // 0x2a9cc4: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x2a9cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x2a9cc8: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2a9cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2a9ccc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a9cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a9cd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a9cd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9cd4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a9cd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2a9cd8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2a9cd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2a9cdc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2a9cdcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_2a9ce0:
    // 0x2a9ce0: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x2a9ce0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x2a9ce4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2a9ce4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2a9ce8: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2A9CE8u;
    SET_GPR_U32(ctx, 31, 0x2A9CF0u);
    ctx->pc = 0x2A9CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9CE8u;
    // 0x2a9cec: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2A9CE8u, 0x2A9CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9CF0u;
label_2a9cf0:
    // 0x2a9cf0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a9cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9cf4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2a9cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2a9cf8: 0x244203e4  addiu       $v0, $v0, 0x3E4
    ctx->pc = 0x2a9cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 996));
    // 0x2a9cfc: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A9CFCu;
    {
        const bool branch_taken_0x2a9cfc = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2A9D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9CFCu;
        // 0x2a9d00: 0x522821  addu        $a1, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9cfc) {
            ctx->pc = 0x2A9D14u;
            goto label_2a9d14;
        }
    }
    ctx->pc = 0x2A9D04u;
    // 0x2a9d04: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a9d04u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9d08: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a9d08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2a9d0c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A9D0Cu;
    {
        const bool branch_taken_0x2a9d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9D0Cu;
        // 0x2a9d10: 0x46140002  mul.s       $f0, $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9d0c) {
            ctx->pc = 0x2A9D30u;
            goto label_2a9d30;
        }
    }
    ctx->pc = 0x2A9D14u;
label_2a9d14:
    // 0x2a9d14: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x2a9d14u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x2a9d18: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2a9d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2a9d1c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a9d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a9d20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a9d20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9d24: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a9d24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2a9d28: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2a9d28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2a9d2c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2a9d2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_2a9d30:
    // 0x2a9d30: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2a9d30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2a9d34: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2A9D34u;
    SET_GPR_U32(ctx, 31, 0x2A9D3Cu);
    ctx->pc = 0x2A9D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9D34u;
    // 0x2a9d38: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2A9D34u, 0x2A9D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9D3Cu;
label_2a9d3c:
    // 0x2a9d3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a9d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9d40: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2a9d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2a9d44: 0x244203e8  addiu       $v0, $v0, 0x3E8
    ctx->pc = 0x2a9d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1000));
    // 0x2a9d48: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A9D48u;
    {
        const bool branch_taken_0x2a9d48 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2A9D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9D48u;
        // 0x2a9d4c: 0x522821  addu        $a1, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9d48) {
            ctx->pc = 0x2A9D60u;
            goto label_2a9d60;
        }
    }
    ctx->pc = 0x2A9D50u;
    // 0x2a9d50: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a9d50u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9d54: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a9d54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2a9d58: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A9D58u;
    {
        const bool branch_taken_0x2a9d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9D58u;
        // 0x2a9d5c: 0x46140002  mul.s       $f0, $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9d58) {
            ctx->pc = 0x2A9D7Cu;
            goto label_2a9d7c;
        }
    }
    ctx->pc = 0x2A9D60u;
label_2a9d60:
    // 0x2a9d60: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x2a9d60u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x2a9d64: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2a9d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2a9d68: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a9d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a9d6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a9d6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9d70: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a9d70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2a9d74: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2a9d74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2a9d78: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2a9d78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_2a9d7c:
    // 0x2a9d7c: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x2a9d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2a9d80: 0xc7818e60  lwc1        $f1, -0x71A0($gp)
    ctx->pc = 0x2a9d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a9d84: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2a9d84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2a9d88: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x2a9d88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x2a9d8c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2a9d8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2a9d90: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x2a9d90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2a9d94: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2a9d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2a9d98: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2a9d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2a9d9c: 0xac400a20  sw          $zero, 0xA20($v0)
    ctx->pc = 0x2a9d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2592), GPR_U32(ctx, 0));
    // 0x2a9da0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2a9da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2a9da4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2a9da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a9da8: 0xe4610890  swc1        $f1, 0x890($v1)
    ctx->pc = 0x2a9da8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 2192), bits); }
    // 0x2a9dac: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2a9dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2a9db0: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x2a9db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2a9db4: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2a9db4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a9db8: 0x1440ffb7  bnez        $v0, . + 4 + (-0x49 << 2)
    ctx->pc = 0x2A9DB8u;
    {
        const bool branch_taken_0x2a9db8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A9DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9DB8u;
        // 0x2a9dbc: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9db8) {
            ctx->pc = 0x2A9C98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a9c98;
        }
    }
    ctx->pc = 0x2A9DC0u;
label_2a9dc0:
    // 0x2a9dc0: 0x2410005c  addiu       $s0, $zero, 0x5C
    ctx->pc = 0x2a9dc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x2a9dc4: 0x26f1c268  addiu       $s1, $s7, -0x3D98
    ctx->pc = 0x2a9dc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 4294951528));
    // 0x2a9dc8: 0x2b08018  mult        $s0, $s5, $s0
    ctx->pc = 0x2a9dc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2a9dcc: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x2a9dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2a9dd0: 0x8c530048  lw          $s3, 0x48($v0)
    ctx->pc = 0x2a9dd0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2a9dd4: 0x267203a0  addiu       $s2, $s3, 0x3A0
    ctx->pc = 0x2a9dd4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 928));
    // 0x2a9dd8: 0xc0b5862  jal         func_2D6188
    ctx->pc = 0x2A9DD8u;
    SET_GPR_U32(ctx, 31, 0x2A9DE0u);
    ctx->pc = 0x2A9DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9DD8u;
    // 0x2a9ddc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6188u, 0x2A9DD8u, 0x2A9DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9DE0u;
label_2a9de0:
    // 0x2a9de0: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x2a9de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2a9de4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a9de4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a9de8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a9de8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a9dec: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2a9decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9df0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a9df0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9df4: 0xc7828e64  lwc1        $f2, -0x719C($gp)
    ctx->pc = 0x2a9df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a9df8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a9df8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9dfc: 0xe6400030  swc1        $f0, 0x30($s2)
    ctx->pc = 0x2a9dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x2a9e00: 0x3c014150  lui         $at, 0x4150
    ctx->pc = 0x2a9e00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16720 << 16));
    // 0x2a9e04: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2a9e04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2a9e08: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x2a9e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9e0c: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x2a9e0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
    // 0x2a9e10: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2a9e10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2a9e14: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a9e14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a9e18: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2a9e18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2a9e1c: 0xe6400034  swc1        $f0, 0x34($s2)
    ctx->pc = 0x2a9e1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    // 0x2a9e20: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x2a9e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a9e24: 0xe6410038  swc1        $f1, 0x38($s2)
    ctx->pc = 0x2a9e24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
    // 0x2a9e28: 0xe66303a0  swc1        $f3, 0x3A0($s3)
    ctx->pc = 0x2a9e28u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 928), bits); }
    // 0x2a9e2c: 0xe6430028  swc1        $f3, 0x28($s2)
    ctx->pc = 0x2a9e2cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
    // 0x2a9e30: 0x100003c4  b           . + 4 + (0x3C4 << 2)
    ctx->pc = 0x2A9E30u;
    {
        const bool branch_taken_0x2a9e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9E30u;
        // 0x2a9e34: 0xe6440014  swc1        $f4, 0x14($s2) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9e30) {
            ctx->pc = 0x2AAD44u;
            goto label_2aad44;
        }
    }
    ctx->pc = 0x2A9E38u;
label_2a9e38:
    // 0x2a9e38: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x2a9e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9e3c: 0x24040127  addiu       $a0, $zero, 0x127
    ctx->pc = 0x2a9e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 295));
    // 0x2a9e40: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a9e40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a9e44: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2a9e44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a9e48: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2a9e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a9e4c: 0xc62e0008  lwc1        $f14, 0x8($s1)
    ctx->pc = 0x2a9e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2a9e50: 0x460d0340  add.s       $f13, $f0, $f13
    ctx->pc = 0x2a9e50u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
    // 0x2a9e54: 0x100000f0  b           . + 4 + (0xF0 << 2)
    ctx->pc = 0x2A9E54u;
    {
        const bool branch_taken_0x2a9e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9E54u;
        // 0x2a9e58: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9e54) {
            ctx->pc = 0x2AA218u;
            goto label_2aa218;
        }
    }
    ctx->pc = 0x2A9E5Cu;
label_2a9e5c:
    // 0x2a9e5c: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x2a9e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9e60: 0x26440128  addiu       $a0, $s2, 0x128
    ctx->pc = 0x2a9e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 296));
    // 0x2a9e64: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a9e64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a9e68: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2a9e68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a9e6c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2a9e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a9e70: 0xc62e0008  lwc1        $f14, 0x8($s1)
    ctx->pc = 0x2a9e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2a9e74: 0x460d0340  add.s       $f13, $f0, $f13
    ctx->pc = 0x2a9e74u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
    // 0x2a9e78: 0x100000e7  b           . + 4 + (0xE7 << 2)
    ctx->pc = 0x2A9E78u;
    {
        const bool branch_taken_0x2a9e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9E78u;
        // 0x2a9e7c: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9e78) {
            ctx->pc = 0x2AA218u;
            goto label_2aa218;
        }
    }
    ctx->pc = 0x2A9E80u;
label_2a9e80:
    // 0x2a9e80: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a9e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9e84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a9e84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9e88: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a9e88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a9e8c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2a9e8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2a9e90: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x2A9E90u;
    SET_GPR_U32(ctx, 31, 0x2A9E98u);
    ctx->pc = 0x2A9E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9E90u;
    // 0x2a9e94: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x2A9E90u, 0x2A9E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9E98u;
label_2a9e98:
    // 0x2a9e98: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2a9e98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2a9e9c: 0xc62d0004  lwc1        $f13, 0x4($s1)
    ctx->pc = 0x2a9e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2a9ea0: 0x26500128  addiu       $s0, $s2, 0x128
    ctx->pc = 0x2a9ea0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 296));
    // 0x2a9ea4: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x2a9ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a9ea8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a9ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9eac: 0x46156b40  add.s       $f13, $f13, $f21
    ctx->pc = 0x2a9eacu;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[21]);
    // 0x2a9eb0: 0xc62e0008  lwc1        $f14, 0x8($s1)
    ctx->pc = 0x2a9eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2a9eb4: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x2a9eb4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x2a9eb8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2a9eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a9ebc: 0x26f6c268  addiu       $s6, $s7, -0x3D98
    ctx->pc = 0x2a9ebcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 23), 4294951528));
    // 0x2a9ec0: 0xc09defe  jal         func_277BF8
    ctx->pc = 0x2A9EC0u;
    SET_GPR_U32(ctx, 31, 0x2A9EC8u);
    ctx->pc = 0x2A9EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9EC0u;
    // 0x2a9ec4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277BF8u, 0x2A9EC0u, 0x2A9EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9EC8u;
label_2a9ec8:
    // 0x2a9ec8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a9ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9ecc: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x2a9eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x2a9ed0: 0x2a2a018  mult        $s4, $s5, $v0
    ctx->pc = 0x2a9ed0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 20, (int32_t)result); }
    // 0x2a9ed4: 0x2d41821  addu        $v1, $s6, $s4
    ctx->pc = 0x2a9ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
    // 0x2a9ed8: 0x108000d8  beqz        $a0, . + 4 + (0xD8 << 2)
    ctx->pc = 0x2A9ED8u;
    {
        const bool branch_taken_0x2a9ed8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9ED8u;
        // 0x2a9edc: 0xac640038  sw          $a0, 0x38($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9ed8) {
            ctx->pc = 0x2AA23Cu;
            goto label_2aa23c;
        }
    }
    ctx->pc = 0x2A9EE0u;
    // 0x2a9ee0: 0xe4940048  swc1        $f20, 0x48($a0)
    ctx->pc = 0x2a9ee0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
    // 0x2a9ee4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2a9ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a9ee8: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2a9ee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2a9eec: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2a9eecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2a9ef0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a9ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9ef4: 0xc62d0004  lwc1        $f13, 0x4($s1)
    ctx->pc = 0x2a9ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2a9ef8: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x2a9ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a9efc: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x2a9efcu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x2a9f00: 0x46156b40  add.s       $f13, $f13, $f21
    ctx->pc = 0x2a9f00u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[21]);
    // 0x2a9f04: 0xc09defe  jal         func_277BF8
    ctx->pc = 0x2A9F04u;
    SET_GPR_U32(ctx, 31, 0x2A9F0Cu);
    ctx->pc = 0x2A9F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9F04u;
    // 0x2a9f08: 0xc62e0008  lwc1        $f14, 0x8($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x277BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277BF8u, 0x2A9F04u, 0x2A9F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9F0Cu;
label_2a9f0c:
    // 0x2a9f0c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a9f0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9f10: 0x2d41021  addu        $v0, $s6, $s4
    ctx->pc = 0x2a9f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
    // 0x2a9f14: 0x106000c9  beqz        $v1, . + 4 + (0xC9 << 2)
    ctx->pc = 0x2A9F14u;
    {
        const bool branch_taken_0x2a9f14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9F14u;
        // 0x2a9f18: 0xac43003c  sw          $v1, 0x3C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9f14) {
            ctx->pc = 0x2AA23Cu;
            goto label_2aa23c;
        }
    }
    ctx->pc = 0x2A9F1Cu;
    // 0x2a9f1c: 0xe4740048  swc1        $f20, 0x48($v1)
    ctx->pc = 0x2a9f1cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 72), bits); }
    // 0x2a9f20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a9f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9f24: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2a9f24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2a9f28: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2a9f28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2a9f2c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2a9f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a9f30: 0xc62d0004  lwc1        $f13, 0x4($s1)
    ctx->pc = 0x2a9f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2a9f34: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x2a9f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a9f38: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x2a9f38u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x2a9f3c: 0x46156b40  add.s       $f13, $f13, $f21
    ctx->pc = 0x2a9f3cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[21]);
    // 0x2a9f40: 0xc09defe  jal         func_277BF8
    ctx->pc = 0x2A9F40u;
    SET_GPR_U32(ctx, 31, 0x2A9F48u);
    ctx->pc = 0x2A9F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9F40u;
    // 0x2a9f44: 0xc62e0008  lwc1        $f14, 0x8($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x277BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277BF8u, 0x2A9F40u, 0x2A9F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9F48u;
label_2a9f48:
    // 0x2a9f48: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a9f48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9f4c: 0x2d41021  addu        $v0, $s6, $s4
    ctx->pc = 0x2a9f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
    // 0x2a9f50: 0x106000ba  beqz        $v1, . + 4 + (0xBA << 2)
    ctx->pc = 0x2A9F50u;
    {
        const bool branch_taken_0x2a9f50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9F50u;
        // 0x2a9f54: 0xac430040  sw          $v1, 0x40($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9f50) {
            ctx->pc = 0x2AA23Cu;
            goto label_2aa23c;
        }
    }
    ctx->pc = 0x2A9F58u;
    // 0x2a9f58: 0xe4740048  swc1        $f20, 0x48($v1)
    ctx->pc = 0x2a9f58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 72), bits); }
    // 0x2a9f5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a9f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9f60: 0x3c014387  lui         $at, 0x4387
    ctx->pc = 0x2a9f60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17287 << 16));
    // 0x2a9f64: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2a9f64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2a9f68: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2a9f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a9f6c: 0xc62d0004  lwc1        $f13, 0x4($s1)
    ctx->pc = 0x2a9f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2a9f70: 0xc62e0008  lwc1        $f14, 0x8($s1)
    ctx->pc = 0x2a9f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2a9f74: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x2a9f74u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x2a9f78: 0x46156b40  add.s       $f13, $f13, $f21
    ctx->pc = 0x2a9f78u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[21]);
    // 0x2a9f7c: 0xc09defe  jal         func_277BF8
    ctx->pc = 0x2A9F7Cu;
    SET_GPR_U32(ctx, 31, 0x2A9F84u);
    ctx->pc = 0x2A9F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9F7Cu;
    // 0x2a9f80: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x277BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277BF8u, 0x2A9F7Cu, 0x2A9F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9F84u;
label_2a9f84:
    // 0x2a9f84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a9f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9f88: 0x2d41021  addu        $v0, $s6, $s4
    ctx->pc = 0x2a9f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
    // 0x2a9f8c: 0x108000ab  beqz        $a0, . + 4 + (0xAB << 2)
    ctx->pc = 0x2A9F8Cu;
    {
        const bool branch_taken_0x2a9f8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9F8Cu;
        // 0x2a9f90: 0xac440044  sw          $a0, 0x44($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9f8c) {
            ctx->pc = 0x2AA23Cu;
            goto label_2aa23c;
        }
    }
    ctx->pc = 0x2A9F94u;
    // 0x2a9f94: 0x26d00048  addiu       $s0, $s6, 0x48
    ctx->pc = 0x2a9f94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 72));
    // 0x2a9f98: 0xe4940048  swc1        $f20, 0x48($a0)
    ctx->pc = 0x2a9f98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
    // 0x2a9f9c: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x2a9f9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x2a9fa0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2a9fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2a9fa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a9fa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9fa8: 0xc0a60ca  jal         func_298328
    ctx->pc = 0x2A9FA8u;
    SET_GPR_U32(ctx, 31, 0x2A9FB0u);
    ctx->pc = 0x2A9FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9FA8u;
    // 0x2a9fac: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298328u, 0x2A9FA8u, 0x2A9FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9FB0u;
label_2a9fb0:
    // 0x2a9fb0: 0x10400364  beqz        $v0, . + 4 + (0x364 << 2)
    ctx->pc = 0x2A9FB0u;
    {
        const bool branch_taken_0x2a9fb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9FB0u;
        // 0x2a9fb4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9fb0) {
            ctx->pc = 0x2AAD44u;
            goto label_2aad44;
        }
    }
    ctx->pc = 0x2A9FB8u;
    // 0x2a9fb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a9fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a9fbc: 0x12420010  beq         $s2, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2A9FBCu;
    {
        const bool branch_taken_0x2a9fbc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A9FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9FBCu;
        // 0x2a9fc0: 0x2a420002  slti        $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9fbc) {
            ctx->pc = 0x2AA000u;
            goto label_2aa000;
        }
    }
    ctx->pc = 0x2A9FC4u;
    // 0x2a9fc4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A9FC4u;
    {
        const bool branch_taken_0x2a9fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9FC4u;
        // 0x2a9fc8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9fc4) {
            ctx->pc = 0x2A9FDCu;
            goto label_2a9fdc;
        }
    }
    ctx->pc = 0x2A9FCCu;
    // 0x2a9fcc: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A9FCCu;
    {
        const bool branch_taken_0x2a9fcc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9FCCu;
        // 0x2a9fd0: 0x2404005c  addiu       $a0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9fcc) {
            ctx->pc = 0x2A9FF4u;
            goto label_2a9ff4;
        }
    }
    ctx->pc = 0x2A9FD4u;
    // 0x2a9fd4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2A9FD4u;
    {
        const bool branch_taken_0x2a9fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9FD4u;
        // 0x2a9fd8: 0x26e2c268  addiu       $v0, $s7, -0x3D98 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294951528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9fd4) {
            ctx->pc = 0x2AA028u;
            goto label_2aa028;
        }
    }
    ctx->pc = 0x2A9FDCu;
label_2a9fdc:
    // 0x2a9fdc: 0x1242000b  beq         $s2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2A9FDCu;
    {
        const bool branch_taken_0x2a9fdc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A9FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9FDCu;
        // 0x2a9fe0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9fdc) {
            ctx->pc = 0x2AA00Cu;
            goto label_2aa00c;
        }
    }
    ctx->pc = 0x2A9FE4u;
    // 0x2a9fe4: 0x1242000c  beq         $s2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2A9FE4u;
    {
        const bool branch_taken_0x2a9fe4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A9FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9FE4u;
        // 0x2a9fe8: 0x2404005c  addiu       $a0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9fe4) {
            ctx->pc = 0x2AA018u;
            goto label_2aa018;
        }
    }
    ctx->pc = 0x2A9FECu;
    // 0x2a9fec: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2A9FECu;
    {
        const bool branch_taken_0x2a9fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9FECu;
        // 0x2a9ff0: 0x26e2c268  addiu       $v0, $s7, -0x3D98 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294951528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9fec) {
            ctx->pc = 0x2AA028u;
            goto label_2aa028;
        }
    }
    ctx->pc = 0x2A9FF4u;
label_2a9ff4:
    // 0x2a9ff4: 0x3c13002f  lui         $s3, 0x2F
    ctx->pc = 0x2a9ff4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)47 << 16));
    // 0x2a9ff8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2A9FF8u;
    {
        const bool branch_taken_0x2a9ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9FF8u;
        // 0x2a9ffc: 0x36734f7f  ori         $s3, $s3, 0x4F7F (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)20351);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9ff8) {
            ctx->pc = 0x2AA020u;
            goto label_2aa020;
        }
    }
    ctx->pc = 0x2AA000u;
label_2aa000:
    // 0x2aa000: 0x3c13002f  lui         $s3, 0x2F
    ctx->pc = 0x2aa000u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)47 << 16));
    // 0x2aa004: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2AA004u;
    {
        const bool branch_taken_0x2aa004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA004u;
        // 0x2aa008: 0x36735f5f  ori         $s3, $s3, 0x5F5F (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)24415);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa004) {
            ctx->pc = 0x2AA020u;
            goto label_2aa020;
        }
    }
    ctx->pc = 0x2AA00Cu;
label_2aa00c:
    // 0x2aa00c: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x2aa00cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x2aa010: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2AA010u;
    {
        const bool branch_taken_0x2aa010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA010u;
        // 0x2aa014: 0x36734f2f  ori         $s3, $s3, 0x4F2F (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)20271);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa010) {
            ctx->pc = 0x2AA020u;
            goto label_2aa020;
        }
    }
    ctx->pc = 0x2AA018u;
label_2aa018:
    // 0x2aa018: 0x3c13002f  lui         $s3, 0x2F
    ctx->pc = 0x2aa018u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)47 << 16));
    // 0x2aa01c: 0x36737f2f  ori         $s3, $s3, 0x7F2F
    ctx->pc = 0x2aa01cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)32559);
label_2aa020:
    // 0x2aa020: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x2aa020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x2aa024: 0x26e2c268  addiu       $v0, $s7, -0x3D98
    ctx->pc = 0x2aa024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294951528));
label_2aa028:
    // 0x2aa028: 0x2a42018  mult        $a0, $s5, $a0
    ctx->pc = 0x2aa028u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2aa02c: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x2aa02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x2aa030: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2aa030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2aa034: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2aa034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2aa038: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2aa038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2aa03c: 0x1840005d  blez        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x2AA03Cu;
    {
        const bool branch_taken_0x2aa03c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2AA040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA03Cu;
        // 0x2aa040: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa03c) {
            ctx->pc = 0x2AA1B4u;
            goto label_2aa1b4;
        }
    }
    ctx->pc = 0x2AA044u;
    // 0x2aa044: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2aa044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2aa048: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2aa048u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2aa04c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2aa04cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa050: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2aa050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2aa054: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2aa054u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2aa058: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2aa058u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa05c: 0xc7958e68  lwc1        $f21, -0x7198($gp)
    ctx->pc = 0x2aa05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2aa060:
    // 0x2aa060: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2AA060u;
    SET_GPR_U32(ctx, 31, 0x2AA068u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2AA060u, 0x2AA068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA068u;
label_2aa068:
    // 0x2aa068: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2aa068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa06c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2aa06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2aa070: 0x244203e0  addiu       $v0, $v0, 0x3E0
    ctx->pc = 0x2aa070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 992));
    // 0x2aa074: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AA074u;
    {
        const bool branch_taken_0x2aa074 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2AA078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA074u;
        // 0x2aa078: 0x522821  addu        $a1, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa074) {
            ctx->pc = 0x2AA08Cu;
            goto label_2aa08c;
        }
    }
    ctx->pc = 0x2AA07Cu;
    // 0x2aa07c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2aa07cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa080: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2aa080u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2aa084: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2AA084u;
    {
        const bool branch_taken_0x2aa084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA084u;
        // 0x2aa088: 0x46140002  mul.s       $f0, $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa084) {
            ctx->pc = 0x2AA0A8u;
            goto label_2aa0a8;
        }
    }
    ctx->pc = 0x2AA08Cu;
label_2aa08c:
    // 0x2aa08c: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x2aa08cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x2aa090: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2aa090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2aa094: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2aa094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2aa098: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aa098u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa09c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2aa09cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2aa0a0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2aa0a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2aa0a4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2aa0a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_2aa0a8:
    // 0x2aa0a8: 0x46160001  sub.s       $f0, $f0, $f22
    ctx->pc = 0x2aa0a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x2aa0ac: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2aa0acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2aa0b0: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2AA0B0u;
    SET_GPR_U32(ctx, 31, 0x2AA0B8u);
    ctx->pc = 0x2AA0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA0B0u;
    // 0x2aa0b4: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2AA0B0u, 0x2AA0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA0B8u;
label_2aa0b8:
    // 0x2aa0b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2aa0b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa0bc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2aa0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2aa0c0: 0x244203e4  addiu       $v0, $v0, 0x3E4
    ctx->pc = 0x2aa0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 996));
    // 0x2aa0c4: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AA0C4u;
    {
        const bool branch_taken_0x2aa0c4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2AA0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA0C4u;
        // 0x2aa0c8: 0x522821  addu        $a1, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa0c4) {
            ctx->pc = 0x2AA0DCu;
            goto label_2aa0dc;
        }
    }
    ctx->pc = 0x2AA0CCu;
    // 0x2aa0cc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2aa0ccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa0d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2aa0d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2aa0d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2AA0D4u;
    {
        const bool branch_taken_0x2aa0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA0D4u;
        // 0x2aa0d8: 0x46140002  mul.s       $f0, $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa0d4) {
            ctx->pc = 0x2AA0F8u;
            goto label_2aa0f8;
        }
    }
    ctx->pc = 0x2AA0DCu;
label_2aa0dc:
    // 0x2aa0dc: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x2aa0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x2aa0e0: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2aa0e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2aa0e4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2aa0e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2aa0e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aa0e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa0ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2aa0ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2aa0f0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2aa0f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2aa0f4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2aa0f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_2aa0f8:
    // 0x2aa0f8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2aa0f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2aa0fc: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2AA0FCu;
    SET_GPR_U32(ctx, 31, 0x2AA104u);
    ctx->pc = 0x2AA100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA0FCu;
    // 0x2aa100: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2AA0FCu, 0x2AA104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA104u;
label_2aa104:
    // 0x2aa104: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2aa104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa108: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2aa108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2aa10c: 0x244203e8  addiu       $v0, $v0, 0x3E8
    ctx->pc = 0x2aa10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1000));
    // 0x2aa110: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AA110u;
    {
        const bool branch_taken_0x2aa110 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2AA114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA110u;
        // 0x2aa114: 0x522821  addu        $a1, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa110) {
            ctx->pc = 0x2AA128u;
            goto label_2aa128;
        }
    }
    ctx->pc = 0x2AA118u;
    // 0x2aa118: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2aa118u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa11c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2aa11cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2aa120: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2AA120u;
    {
        const bool branch_taken_0x2aa120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA120u;
        // 0x2aa124: 0x46140002  mul.s       $f0, $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa120) {
            ctx->pc = 0x2AA144u;
            goto label_2aa144;
        }
    }
    ctx->pc = 0x2AA128u;
label_2aa128:
    // 0x2aa128: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x2aa128u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x2aa12c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2aa12cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2aa130: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2aa130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2aa134: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aa134u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa138: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2aa138u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2aa13c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2aa13cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2aa140: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2aa140u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_2aa144:
    // 0x2aa144: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x2aa144u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2aa148: 0x46160001  sub.s       $f0, $f0, $f22
    ctx->pc = 0x2aa148u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x2aa14c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2aa14cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2aa150: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x2aa150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2aa154: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2aa154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2aa158: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2aa158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2aa15c: 0xac400a20  sw          $zero, 0xA20($v0)
    ctx->pc = 0x2aa15cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2592), GPR_U32(ctx, 0));
    // 0x2aa160: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2aa160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2aa164: 0x24630890  addiu       $v1, $v1, 0x890
    ctx->pc = 0x2aa164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2192));
    // 0x2aa168: 0x6600005  bltz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AA168u;
    {
        const bool branch_taken_0x2aa168 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x2AA16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA168u;
        // 0x2aa16c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa168) {
            ctx->pc = 0x2AA180u;
            goto label_2aa180;
        }
    }
    ctx->pc = 0x2AA170u;
    // 0x2aa170: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x2aa170u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa174: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2aa174u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2aa178: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2AA178u;
    {
        const bool branch_taken_0x2aa178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA178u;
        // 0x2aa17c: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa178) {
            ctx->pc = 0x2AA19Cu;
            goto label_2aa19c;
        }
    }
    ctx->pc = 0x2AA180u;
label_2aa180:
    // 0x2aa180: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x2aa180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x2aa184: 0x131842  srl         $v1, $s3, 1
    ctx->pc = 0x2aa184u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
    // 0x2aa188: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2aa188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2aa18c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aa18cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa190: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2aa190u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2aa194: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2aa194u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2aa198: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2aa198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_2aa19c:
    // 0x2aa19c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2aa19cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2aa1a0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2aa1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2aa1a4: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2aa1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2aa1a8: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2aa1a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2aa1ac: 0x1440ffac  bnez        $v0, . + 4 + (-0x54 << 2)
    ctx->pc = 0x2AA1ACu;
    {
        const bool branch_taken_0x2aa1ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AA1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA1ACu;
        // 0x2aa1b0: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa1ac) {
            ctx->pc = 0x2AA060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2aa060;
        }
    }
    ctx->pc = 0x2AA1B4u;
label_2aa1b4:
    // 0x2aa1b4: 0x2410005c  addiu       $s0, $zero, 0x5C
    ctx->pc = 0x2aa1b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x2aa1b8: 0x26f1c268  addiu       $s1, $s7, -0x3D98
    ctx->pc = 0x2aa1b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 4294951528));
    // 0x2aa1bc: 0x2b08018  mult        $s0, $s5, $s0
    ctx->pc = 0x2aa1bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2aa1c0: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x2aa1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2aa1c4: 0x8c530048  lw          $s3, 0x48($v0)
    ctx->pc = 0x2aa1c4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2aa1c8: 0x267203a0  addiu       $s2, $s3, 0x3A0
    ctx->pc = 0x2aa1c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 928));
    // 0x2aa1cc: 0xc0b5862  jal         func_2D6188
    ctx->pc = 0x2AA1CCu;
    SET_GPR_U32(ctx, 31, 0x2AA1D4u);
    ctx->pc = 0x2AA1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA1CCu;
    // 0x2aa1d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6188u, 0x2AA1CCu, 0x2AA1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA1D4u;
label_2aa1d4:
    // 0x2aa1d4: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x2aa1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2aa1d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2aa1d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2aa1dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2aa1dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aa1e0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2aa1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa1e4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2aa1e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa1e8: 0xc7828e6c  lwc1        $f2, -0x7194($gp)
    ctx->pc = 0x2aa1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2aa1ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2aa1ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa1f0: 0xe6400030  swc1        $f0, 0x30($s2)
    ctx->pc = 0x2aa1f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x2aa1f4: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x2aa1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa1f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2aa1f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2aa1fc: 0x100001cc  b           . + 4 + (0x1CC << 2)
    ctx->pc = 0x2AA1FCu;
    {
        const bool branch_taken_0x2aa1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA1FCu;
        // 0x2aa200: 0x46020001  sub.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa1fc) {
            ctx->pc = 0x2AA930u;
            goto label_2aa930;
        }
    }
    ctx->pc = 0x2AA204u;
label_2aa204:
    // 0x2aa204: 0xc62e0008  lwc1        $f14, 0x8($s1)
    ctx->pc = 0x2aa204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2aa208: 0x2644012c  addiu       $a0, $s2, 0x12C
    ctx->pc = 0x2aa208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 300));
    // 0x2aa20c: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x2aa20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2aa210: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2aa210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2aa214: 0xc62d0004  lwc1        $f13, 0x4($s1)
    ctx->pc = 0x2aa214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2aa218:
    // 0x2aa218: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x2aa218u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2aa21c: 0xc09defe  jal         func_277BF8
    ctx->pc = 0x2AA21Cu;
    SET_GPR_U32(ctx, 31, 0x2AA224u);
    ctx->pc = 0x277BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277BF8u, 0x2AA21Cu, 0x2AA224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA224u;
label_2aa224:
    // 0x2aa224: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x2aa224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x2aa228: 0x26e4c268  addiu       $a0, $s7, -0x3D98
    ctx->pc = 0x2aa228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294951528));
    // 0x2aa22c: 0x2a31818  mult        $v1, $s5, $v1
    ctx->pc = 0x2aa22cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2aa230: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2aa230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2aa234: 0x144002c3  bnez        $v0, . + 4 + (0x2C3 << 2)
    ctx->pc = 0x2AA234u;
    {
        const bool branch_taken_0x2aa234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AA238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA234u;
        // 0x2aa238: 0xac820038  sw          $v0, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa234) {
            ctx->pc = 0x2AAD44u;
            goto label_2aad44;
        }
    }
    ctx->pc = 0x2AA23Cu;
label_2aa23c:
    // 0x2aa23c: 0x100002c5  b           . + 4 + (0x2C5 << 2)
    ctx->pc = 0x2AA23Cu;
    {
        const bool branch_taken_0x2aa23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA23Cu;
        // 0x2aa240: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa23c) {
            ctx->pc = 0x2AAD54u;
            goto label_2aad54;
        }
    }
    ctx->pc = 0x2AA244u;
label_2aa244:
    // 0x2aa244: 0x27b60010  addiu       $s6, $sp, 0x10
    ctx->pc = 0x2aa244u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2aa248: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2aa248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa24c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2aa24cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa250: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x2AA250u;
    SET_GPR_U32(ctx, 31, 0x2AA258u);
    ctx->pc = 0x2AA254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA250u;
    // 0x2aa254: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x2AA250u, 0x2AA258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA258u;
label_2aa258:
    // 0x2aa258: 0xc62d0004  lwc1        $f13, 0x4($s1)
    ctx->pc = 0x2aa258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2aa25c: 0x26440130  addiu       $a0, $s2, 0x130
    ctx->pc = 0x2aa25cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 304));
    // 0x2aa260: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2aa260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2aa264: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2aa264u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa268: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2aa268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2aa26c: 0xc7818e70  lwc1        $f1, -0x7190($gp)
    ctx->pc = 0x2aa26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aa270: 0x46006b40  add.s       $f13, $f13, $f0
    ctx->pc = 0x2aa270u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x2aa274: 0xc62e0008  lwc1        $f14, 0x8($s1)
    ctx->pc = 0x2aa274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2aa278: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x2aa278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2aa27c: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x2aa27cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2aa280: 0xc09defe  jal         func_277BF8
    ctx->pc = 0x2AA280u;
    SET_GPR_U32(ctx, 31, 0x2AA288u);
    ctx->pc = 0x2AA284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA280u;
    // 0x2aa284: 0x46016b40  add.s       $f13, $f13, $f1 (Delay Slot)
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x277BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277BF8u, 0x2AA280u, 0x2AA288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA288u;
label_2aa288:
    // 0x2aa288: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x2aa288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x2aa28c: 0x26f0c268  addiu       $s0, $s7, -0x3D98
    ctx->pc = 0x2aa28cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4294951528));
    // 0x2aa290: 0x2a32018  mult        $a0, $s5, $v1
    ctx->pc = 0x2aa290u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2aa294: 0x2041821  addu        $v1, $s0, $a0
    ctx->pc = 0x2aa294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2aa298: 0x1040ffe8  beqz        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x2AA298u;
    {
        const bool branch_taken_0x2aa298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA298u;
        // 0x2aa29c: 0xac620038  sw          $v0, 0x38($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa298) {
            ctx->pc = 0x2AA23Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2aa23c;
        }
    }
    ctx->pc = 0x2AA2A0u;
    // 0x2aa2a0: 0x26100048  addiu       $s0, $s0, 0x48
    ctx->pc = 0x2aa2a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    // 0x2aa2a4: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2aa2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2aa2a8: 0x908021  addu        $s0, $a0, $s0
    ctx->pc = 0x2aa2a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2aa2ac: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2aa2acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa2b0: 0xc0a60ca  jal         func_298328
    ctx->pc = 0x2AA2B0u;
    SET_GPR_U32(ctx, 31, 0x2AA2B8u);
    ctx->pc = 0x2AA2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA2B0u;
    // 0x2aa2b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298328u, 0x2AA2B0u, 0x2AA2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA2B8u;
label_2aa2b8:
    // 0x2aa2b8: 0x1040011e  beqz        $v0, . + 4 + (0x11E << 2)
    ctx->pc = 0x2AA2B8u;
    {
        const bool branch_taken_0x2aa2b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA2B8u;
        // 0x2aa2bc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa2b8) {
            ctx->pc = 0x2AA734u;
            goto label_2aa734;
        }
    }
    ctx->pc = 0x2AA2C0u;
    // 0x2aa2c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2aa2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aa2c4: 0x12420019  beq         $s2, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2AA2C4u;
    {
        const bool branch_taken_0x2aa2c4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AA2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA2C4u;
        // 0x2aa2c8: 0x2a420002  slti        $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa2c4) {
            ctx->pc = 0x2AA32Cu;
            goto label_2aa32c;
        }
    }
    ctx->pc = 0x2AA2CCu;
    // 0x2aa2cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AA2CCu;
    {
        const bool branch_taken_0x2aa2cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA2CCu;
        // 0x2aa2d0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa2cc) {
            ctx->pc = 0x2AA2E4u;
            goto label_2aa2e4;
        }
    }
    ctx->pc = 0x2AA2D4u;
    // 0x2aa2d4: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x2AA2D4u;
    {
        const bool branch_taken_0x2aa2d4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA2D4u;
        // 0x2aa2d8: 0x2402005c  addiu       $v0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa2d4) {
            ctx->pc = 0x2AA2FCu;
            goto label_2aa2fc;
        }
    }
    ctx->pc = 0x2AA2DCu;
    // 0x2aa2dc: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2AA2DCu;
    {
        const bool branch_taken_0x2aa2dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA2DCu;
        // 0x2aa2e0: 0x26e3c268  addiu       $v1, $s7, -0x3D98 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294951528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa2dc) {
            ctx->pc = 0x2AA3A0u;
            goto label_2aa3a0;
        }
    }
    ctx->pc = 0x2AA2E4u;
label_2aa2e4:
    // 0x2aa2e4: 0x1242001a  beq         $s2, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2AA2E4u;
    {
        const bool branch_taken_0x2aa2e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AA2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA2E4u;
        // 0x2aa2e8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa2e4) {
            ctx->pc = 0x2AA350u;
            goto label_2aa350;
        }
    }
    ctx->pc = 0x2AA2ECu;
    // 0x2aa2ec: 0x12420021  beq         $s2, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2AA2ECu;
    {
        const bool branch_taken_0x2aa2ec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AA2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA2ECu;
        // 0x2aa2f0: 0x2402005c  addiu       $v0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa2ec) {
            ctx->pc = 0x2AA374u;
            goto label_2aa374;
        }
    }
    ctx->pc = 0x2AA2F4u;
    // 0x2aa2f4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2AA2F4u;
    {
        const bool branch_taken_0x2aa2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA2F4u;
        // 0x2aa2f8: 0x26e3c268  addiu       $v1, $s7, -0x3D98 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294951528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa2f4) {
            ctx->pc = 0x2AA3A0u;
            goto label_2aa3a0;
        }
    }
    ctx->pc = 0x2AA2FCu;
label_2aa2fc:
    // 0x2aa2fc: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x2aa2fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
    // 0x2aa300: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2aa300u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2aa304: 0x3c14002f  lui         $s4, 0x2F
    ctx->pc = 0x2aa304u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)47 << 16));
    // 0x2aa308: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x2aa308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x2aa30c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2aa30cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aa310: 0x36945f7f  ori         $s4, $s4, 0x5F7F
    ctx->pc = 0x2aa310u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)24447);
    // 0x2aa314: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x2aa314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x2aa318: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2aa318u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa31c: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x2aa31cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2aa320: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x2aa320u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2aa324: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2AA324u;
    {
        const bool branch_taken_0x2aa324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA324u;
        // 0x2aa328: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa324) {
            ctx->pc = 0x2AA398u;
            goto label_2aa398;
        }
    }
    ctx->pc = 0x2AA32Cu;
label_2aa32c:
    // 0x2aa32c: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2aa32cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x2aa330: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2aa330u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aa334: 0x3c14002f  lui         $s4, 0x2F
    ctx->pc = 0x2aa334u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)47 << 16));
    // 0x2aa338: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x2aa338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x2aa33c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2aa33cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa340: 0x36945f5f  ori         $s4, $s4, 0x5F5F
    ctx->pc = 0x2aa340u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)24415);
    // 0x2aa344: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x2aa344u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2aa348: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2AA348u;
    {
        const bool branch_taken_0x2aa348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA348u;
        // 0x2aa34c: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa348) {
            ctx->pc = 0x2AA394u;
            goto label_2aa394;
        }
    }
    ctx->pc = 0x2AA350u;
label_2aa350:
    // 0x2aa350: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x2aa350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x2aa354: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2aa354u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aa358: 0x3c14007f  lui         $s4, 0x7F
    ctx->pc = 0x2aa358u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)127 << 16));
    // 0x2aa35c: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x2aa35cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
    // 0x2aa360: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2aa360u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa364: 0x36943f2f  ori         $s4, $s4, 0x3F2F
    ctx->pc = 0x2aa364u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)16175);
    // 0x2aa368: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x2aa368u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2aa36c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2AA36Cu;
    {
        const bool branch_taken_0x2aa36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA36Cu;
        // 0x2aa370: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa36c) {
            ctx->pc = 0x2AA394u;
            goto label_2aa394;
        }
    }
    ctx->pc = 0x2AA374u;
label_2aa374:
    // 0x2aa374: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x2aa374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x2aa378: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2aa378u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aa37c: 0x3c14003f  lui         $s4, 0x3F
    ctx->pc = 0x2aa37cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)63 << 16));
    // 0x2aa380: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x2aa380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
    // 0x2aa384: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2aa384u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa388: 0x36947f3f  ori         $s4, $s4, 0x7F3F
    ctx->pc = 0x2aa388u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)32575);
    // 0x2aa38c: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x2aa38cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2aa390: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2aa390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_2aa394:
    // 0x2aa394: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x2aa394u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_2aa398:
    // 0x2aa398: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x2aa398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x2aa39c: 0x26e3c268  addiu       $v1, $s7, -0x3D98
    ctx->pc = 0x2aa39cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294951528));
label_2aa3a0:
    // 0x2aa3a0: 0x2a21018  mult        $v0, $s5, $v0
    ctx->pc = 0x2aa3a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2aa3a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2aa3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2aa3a8: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x2aa3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2aa3ac: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x2aa3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2aa3b0: 0x184000c5  blez        $v0, . + 4 + (0xC5 << 2)
    ctx->pc = 0x2AA3B0u;
    {
        const bool branch_taken_0x2aa3b0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2AA3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA3B0u;
        // 0x2aa3b4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa3b0) {
            ctx->pc = 0x2AA6C8u;
            goto label_2aa6c8;
        }
    }
    ctx->pc = 0x2AA3B8u;
    // 0x2aa3b8: 0x3c1e0037  lui         $fp, 0x37
    ctx->pc = 0x2aa3b8u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)55 << 16));
    // 0x2aa3bc: 0x0  nop
    ctx->pc = 0x2aa3bcu;
    // NOP
label_2aa3c0:
    // 0x2aa3c0: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2AA3C0u;
    SET_GPR_U32(ctx, 31, 0x2AA3C8u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2AA3C0u, 0x2AA3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA3C8u;
label_2aa3c8:
    // 0x2aa3c8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AA3C8u;
    {
        const bool branch_taken_0x2aa3c8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2AA3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA3C8u;
        // 0x2aa3cc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa3c8) {
            ctx->pc = 0x2AA3DCu;
            goto label_2aa3dc;
        }
    }
    ctx->pc = 0x2AA3D0u;
    // 0x2aa3d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aa3d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa3d4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2AA3D4u;
    {
        const bool branch_taken_0x2aa3d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA3D4u;
        // 0x2aa3d8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa3d4) {
            ctx->pc = 0x2AA3F0u;
            goto label_2aa3f0;
        }
    }
    ctx->pc = 0x2AA3DCu;
label_2aa3dc:
    // 0x2aa3dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2aa3dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2aa3e0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2aa3e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2aa3e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aa3e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa3e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2aa3e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2aa3ec: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2aa3ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2aa3f0:
    // 0x2aa3f0: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2aa3f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2aa3f4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2aa3f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2aa3f8: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2aa3f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2aa3fc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2aa3fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aa400: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x2aa400u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x2aa404: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2aa404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa408: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x2aa408u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x2aa40c: 0xc0b9142  jal         func_2E4508
    ctx->pc = 0x2AA40Cu;
    SET_GPR_U32(ctx, 31, 0x2AA414u);
    ctx->pc = 0x2AA410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA40Cu;
    // 0x2aa410: 0x460c0301  sub.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4508u, 0x2AA40Cu, 0x2AA414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA414u;
label_2aa414:
    // 0x2aa414: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2AA414u;
    SET_GPR_U32(ctx, 31, 0x2AA41Cu);
    ctx->pc = 0x2AA418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA414u;
    // 0x2aa418: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2AA414u, 0x2AA41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA41Cu;
label_2aa41c:
    // 0x2aa41c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AA41Cu;
    {
        const bool branch_taken_0x2aa41c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2AA420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA41Cu;
        // 0x2aa420: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa41c) {
            ctx->pc = 0x2AA430u;
            goto label_2aa430;
        }
    }
    ctx->pc = 0x2AA424u;
    // 0x2aa424: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aa424u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa428: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2AA428u;
    {
        const bool branch_taken_0x2aa428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA428u;
        // 0x2aa42c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa428) {
            ctx->pc = 0x2AA444u;
            goto label_2aa444;
        }
    }
    ctx->pc = 0x2AA430u;
label_2aa430:
    // 0x2aa430: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2aa430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2aa434: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2aa434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2aa438: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aa438u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa43c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2aa43cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2aa440: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2aa440u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2aa444:
    // 0x2aa444: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2aa444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2aa448: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2aa448u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2aa44c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2aa44cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2aa450: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2aa450u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aa454: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x2aa454u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x2aa458: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2aa458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa45c: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x2aa45cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x2aa460: 0xc0b9142  jal         func_2E4508
    ctx->pc = 0x2AA460u;
    SET_GPR_U32(ctx, 31, 0x2AA468u);
    ctx->pc = 0x2AA464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA460u;
    // 0x2aa464: 0x460c0301  sub.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4508u, 0x2AA460u, 0x2AA468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA468u;
label_2aa468:
    // 0x2aa468: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2AA468u;
    SET_GPR_U32(ctx, 31, 0x2AA470u);
    ctx->pc = 0x2AA46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA468u;
    // 0x2aa46c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2AA468u, 0x2AA470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA470u;
label_2aa470:
    // 0x2aa470: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AA470u;
    {
        const bool branch_taken_0x2aa470 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2AA474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA470u;
        // 0x2aa474: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa470) {
            ctx->pc = 0x2AA484u;
            goto label_2aa484;
        }
    }
    ctx->pc = 0x2AA478u;
    // 0x2aa478: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aa478u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa47c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2AA47Cu;
    {
        const bool branch_taken_0x2aa47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA47Cu;
        // 0x2aa480: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa47c) {
            ctx->pc = 0x2AA498u;
            goto label_2aa498;
        }
    }
    ctx->pc = 0x2AA484u;
label_2aa484:
    // 0x2aa484: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2aa484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2aa488: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2aa488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2aa48c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aa48cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa490: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2aa490u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2aa494: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2aa494u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2aa498:
    // 0x2aa498: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2aa498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2aa49c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2aa49cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2aa4a0: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2aa4a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2aa4a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2aa4a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aa4a8: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x2aa4a8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x2aa4ac: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2aa4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa4b0: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x2aa4b0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x2aa4b4: 0xc0b9142  jal         func_2E4508
    ctx->pc = 0x2AA4B4u;
    SET_GPR_U32(ctx, 31, 0x2AA4BCu);
    ctx->pc = 0x2AA4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA4B4u;
    // 0x2aa4b8: 0x460c0301  sub.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4508u, 0x2AA4B4u, 0x2AA4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA4BCu;
label_2aa4bc:
    // 0x2aa4bc: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2AA4BCu;
    SET_GPR_U32(ctx, 31, 0x2AA4C4u);
    ctx->pc = 0x2AA4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA4BCu;
    // 0x2aa4c0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2AA4BCu, 0x2AA4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA4C4u;
label_2aa4c4:
    // 0x2aa4c4: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x2aa4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x2aa4c8: 0x26e3c268  addiu       $v1, $s7, -0x3D98
    ctx->pc = 0x2aa4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294951528));
    // 0x2aa4cc: 0x2a42018  mult        $a0, $s5, $a0
    ctx->pc = 0x2aa4ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2aa4d0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2aa4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2aa4d4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2aa4d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa4d8: 0x2252818  mult        $a1, $s1, $a1
    ctx->pc = 0x2aa4d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2aa4dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2aa4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2aa4e0: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2aa4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2aa4e4: 0x244203e0  addiu       $v0, $v0, 0x3E0
    ctx->pc = 0x2aa4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 992));
    // 0x2aa4e8: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AA4E8u;
    {
        const bool branch_taken_0x2aa4e8 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x2AA4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA4E8u;
        // 0x2aa4ec: 0x452021  addu        $a0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa4e8) {
            ctx->pc = 0x2AA4FCu;
            goto label_2aa4fc;
        }
    }
    ctx->pc = 0x2AA4F0u;
    // 0x2aa4f0: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x2aa4f0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aa4f4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2AA4F4u;
    {
        const bool branch_taken_0x2aa4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA4F4u;
        // 0x2aa4f8: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa4f4) {
            ctx->pc = 0x2AA514u;
            goto label_2aa514;
        }
    }
    ctx->pc = 0x2AA4FCu;
label_2aa4fc:
    // 0x2aa4fc: 0x61842  srl         $v1, $a2, 1
    ctx->pc = 0x2aa4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x2aa500: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x2aa500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x2aa504: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2aa504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2aa508: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2aa508u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aa50c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2aa50cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2aa510: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2aa510u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2aa514:
    // 0x2aa514: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2aa514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2aa518: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2aa518u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa51c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2aa51cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2aa520: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2aa520u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2aa524: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2aa524u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2aa528: 0xc7818e74  lwc1        $f1, -0x718C($gp)
    ctx->pc = 0x2aa528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aa52c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2aa52cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2aa530: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2aa530u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2aa534: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2AA534u;
    SET_GPR_U32(ctx, 31, 0x2AA53Cu);
    ctx->pc = 0x2AA538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA534u;
    // 0x2aa538: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2AA534u, 0x2AA53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA53Cu;
label_2aa53c:
    // 0x2aa53c: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x2aa53cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x2aa540: 0x26e3c268  addiu       $v1, $s7, -0x3D98
    ctx->pc = 0x2aa540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294951528));
    // 0x2aa544: 0x2a42018  mult        $a0, $s5, $a0
    ctx->pc = 0x2aa544u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2aa548: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2aa548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2aa54c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2aa54cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa550: 0x2252818  mult        $a1, $s1, $a1
    ctx->pc = 0x2aa550u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2aa554: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2aa554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2aa558: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2aa558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2aa55c: 0x244203e4  addiu       $v0, $v0, 0x3E4
    ctx->pc = 0x2aa55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 996));
    // 0x2aa560: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AA560u;
    {
        const bool branch_taken_0x2aa560 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x2AA564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA560u;
        // 0x2aa564: 0x452021  addu        $a0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa560) {
            ctx->pc = 0x2AA574u;
            goto label_2aa574;
        }
    }
    ctx->pc = 0x2AA568u;
    // 0x2aa568: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x2aa568u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aa56c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2AA56Cu;
    {
        const bool branch_taken_0x2aa56c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA56Cu;
        // 0x2aa570: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa56c) {
            ctx->pc = 0x2AA58Cu;
            goto label_2aa58c;
        }
    }
    ctx->pc = 0x2AA574u;
label_2aa574:
    // 0x2aa574: 0x61842  srl         $v1, $a2, 1
    ctx->pc = 0x2aa574u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x2aa578: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x2aa578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x2aa57c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2aa57cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2aa580: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2aa580u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aa584: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2aa584u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2aa588: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2aa588u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2aa58c:
    // 0x2aa58c: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2aa58cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2aa590: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2aa590u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa594: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2aa594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2aa598: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2aa598u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2aa59c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2aa59cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2aa5a0: 0xc7818e78  lwc1        $f1, -0x7188($gp)
    ctx->pc = 0x2aa5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aa5a4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2aa5a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2aa5a8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2aa5a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2aa5ac: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2AA5ACu;
    SET_GPR_U32(ctx, 31, 0x2AA5B4u);
    ctx->pc = 0x2AA5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA5ACu;
    // 0x2aa5b0: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2AA5ACu, 0x2AA5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA5B4u;
label_2aa5b4:
    // 0x2aa5b4: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x2aa5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x2aa5b8: 0x26e3c268  addiu       $v1, $s7, -0x3D98
    ctx->pc = 0x2aa5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294951528));
    // 0x2aa5bc: 0x2a42018  mult        $a0, $s5, $a0
    ctx->pc = 0x2aa5bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2aa5c0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2aa5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2aa5c4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2aa5c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa5c8: 0x2252818  mult        $a1, $s1, $a1
    ctx->pc = 0x2aa5c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2aa5cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2aa5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2aa5d0: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2aa5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2aa5d4: 0x244203e8  addiu       $v0, $v0, 0x3E8
    ctx->pc = 0x2aa5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1000));
    // 0x2aa5d8: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AA5D8u;
    {
        const bool branch_taken_0x2aa5d8 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x2AA5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA5D8u;
        // 0x2aa5dc: 0x453821  addu        $a3, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa5d8) {
            ctx->pc = 0x2AA5ECu;
            goto label_2aa5ec;
        }
    }
    ctx->pc = 0x2AA5E0u;
    // 0x2aa5e0: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x2aa5e0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2aa5e4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2AA5E4u;
    {
        const bool branch_taken_0x2aa5e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA5E4u;
        // 0x2aa5e8: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa5e4) {
            ctx->pc = 0x2AA604u;
            goto label_2aa604;
        }
    }
    ctx->pc = 0x2AA5ECu;
label_2aa5ec:
    // 0x2aa5ec: 0x61842  srl         $v1, $a2, 1
    ctx->pc = 0x2aa5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x2aa5f0: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x2aa5f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x2aa5f4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2aa5f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2aa5f8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2aa5f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2aa5fc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2aa5fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2aa600: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2aa600u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2aa604:
    // 0x2aa604: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2aa604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2aa608: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2aa608u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa60c: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x2aa60cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x2aa610: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2aa610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2aa614: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2aa614u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aa618: 0x2a42018  mult        $a0, $s5, $a0
    ctx->pc = 0x2aa618u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2aa61c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2aa61cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2aa620: 0x26e2c268  addiu       $v0, $s7, -0x3D98
    ctx->pc = 0x2aa620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294951528));
    // 0x2aa624: 0xc7828e7c  lwc1        $f2, -0x7184($gp)
    ctx->pc = 0x2aa624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2aa628: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x2aa628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x2aa62c: 0x121a00  sll         $v1, $s2, 8
    ctx->pc = 0x2aa62cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
    // 0x2aa630: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x2aa630u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2aa634: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2aa634u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2aa638: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2aa638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2aa63c: 0x2631825  or          $v1, $s3, $v1
    ctx->pc = 0x2aa63cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
    // 0x2aa640: 0x101400  sll         $v0, $s0, 16
    ctx->pc = 0x2aa640u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x2aa644: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x2aa644u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2aa648: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2aa648u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2aa64c: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x2aa64cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x2aa650: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2aa650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2aa654: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2aa654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2aa658: 0xac400a20  sw          $zero, 0xA20($v0)
    ctx->pc = 0x2aa658u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2592), GPR_U32(ctx, 0));
    // 0x2aa65c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2aa65cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2aa660: 0x24630890  addiu       $v1, $v1, 0x890
    ctx->pc = 0x2aa660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2192));
    // 0x2aa664: 0x4c00005  bltz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AA664u;
    {
        const bool branch_taken_0x2aa664 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x2AA668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA664u;
        // 0x2aa668: 0x652021  addu        $a0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa664) {
            ctx->pc = 0x2AA67Cu;
            goto label_2aa67c;
        }
    }
    ctx->pc = 0x2AA66Cu;
    // 0x2aa66c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2aa66cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa670: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2aa670u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2aa674: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2AA674u;
    {
        const bool branch_taken_0x2aa674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA674u;
        // 0x2aa678: 0x2402005c  addiu       $v0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa674) {
            ctx->pc = 0x2AA698u;
            goto label_2aa698;
        }
    }
    ctx->pc = 0x2AA67Cu;
label_2aa67c:
    // 0x2aa67c: 0x61842  srl         $v1, $a2, 1
    ctx->pc = 0x2aa67cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x2aa680: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x2aa680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x2aa684: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2aa684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2aa688: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aa688u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa68c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2aa68cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2aa690: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2aa690u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2aa694: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x2aa694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_2aa698:
    // 0x2aa698: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2aa698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2aa69c: 0x2a21018  mult        $v0, $s5, $v0
    ctx->pc = 0x2aa69cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2aa6a0: 0x26e3c268  addiu       $v1, $s7, -0x3D98
    ctx->pc = 0x2aa6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294951528));
    // 0x2aa6a4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2aa6a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2aa6a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2aa6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2aa6ac: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x2aa6acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2aa6b0: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x2aa6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2aa6b4: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2aa6b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2aa6b8: 0x1440ff41  bnez        $v0, . + 4 + (-0xBF << 2)
    ctx->pc = 0x2AA6B8u;
    {
        const bool branch_taken_0x2aa6b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AA6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA6B8u;
        // 0x2aa6bc: 0x2410005c  addiu       $s0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa6b8) {
            ctx->pc = 0x2AA3C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2aa3c0;
        }
    }
    ctx->pc = 0x2AA6C0u;
    // 0x2aa6c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2AA6C0u;
    {
        const bool branch_taken_0x2aa6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA6C0u;
        // 0x2aa6c4: 0x26f1c268  addiu       $s1, $s7, -0x3D98 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 4294951528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa6c0) {
            ctx->pc = 0x2AA6D4u;
            goto label_2aa6d4;
        }
    }
    ctx->pc = 0x2AA6C8u;
label_2aa6c8:
    // 0x2aa6c8: 0x3c1e0037  lui         $fp, 0x37
    ctx->pc = 0x2aa6c8u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)55 << 16));
    // 0x2aa6cc: 0x2410005c  addiu       $s0, $zero, 0x5C
    ctx->pc = 0x2aa6ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x2aa6d0: 0x26f1c268  addiu       $s1, $s7, -0x3D98
    ctx->pc = 0x2aa6d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 4294951528));
label_2aa6d4:
    // 0x2aa6d4: 0x2b08018  mult        $s0, $s5, $s0
    ctx->pc = 0x2aa6d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2aa6d8: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x2aa6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2aa6dc: 0x8c530048  lw          $s3, 0x48($v0)
    ctx->pc = 0x2aa6dcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2aa6e0: 0x267203a0  addiu       $s2, $s3, 0x3A0
    ctx->pc = 0x2aa6e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 928));
    // 0x2aa6e4: 0xc0b5862  jal         func_2D6188
    ctx->pc = 0x2AA6E4u;
    SET_GPR_U32(ctx, 31, 0x2AA6ECu);
    ctx->pc = 0x2AA6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA6E4u;
    // 0x2aa6e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6188u, 0x2AA6E4u, 0x2AA6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA6ECu;
label_2aa6ec:
    // 0x2aa6ec: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x2aa6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2aa6f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2aa6f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2aa6f4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2aa6f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2aa6f8: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2aa6f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa6fc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2aa6fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa700: 0xc7818e80  lwc1        $f1, -0x7180($gp)
    ctx->pc = 0x2aa700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aa704: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2aa704u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa708: 0xe6400030  swc1        $f0, 0x30($s2)
    ctx->pc = 0x2aa708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x2aa70c: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x2aa70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa710: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2aa710u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2aa714: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2aa714u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2aa718: 0xe6400034  swc1        $f0, 0x34($s2)
    ctx->pc = 0x2aa718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    // 0x2aa71c: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x2aa71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aa720: 0xe6410038  swc1        $f1, 0x38($s2)
    ctx->pc = 0x2aa720u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
    // 0x2aa724: 0xe66203a0  swc1        $f2, 0x3A0($s3)
    ctx->pc = 0x2aa724u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 928), bits); }
    // 0x2aa728: 0xe6420028  swc1        $f2, 0x28($s2)
    ctx->pc = 0x2aa728u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
    // 0x2aa72c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2AA72Cu;
    {
        const bool branch_taken_0x2aa72c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA72Cu;
        // 0x2aa730: 0xe6420014  swc1        $f2, 0x14($s2) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa72c) {
            ctx->pc = 0x2AA738u;
            goto label_2aa738;
        }
    }
    ctx->pc = 0x2AA734u;
label_2aa734:
    // 0x2aa734: 0x3c1e0037  lui         $fp, 0x37
    ctx->pc = 0x2aa734u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)55 << 16));
label_2aa738:
    // 0x2aa738: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x2aa738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x2aa73c: 0x27c3c2b4  addiu       $v1, $fp, -0x3D4C
    ctx->pc = 0x2aa73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294951604));
    // 0x2aa740: 0x2a21018  mult        $v0, $s5, $v0
    ctx->pc = 0x2aa740u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2aa744: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2aa744u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa748: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2aa748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2aa74c: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x2aa74cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2aa750: 0xc0a60ca  jal         func_298328
    ctx->pc = 0x2AA750u;
    SET_GPR_U32(ctx, 31, 0x2AA758u);
    ctx->pc = 0x2AA754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA750u;
    // 0x2aa754: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298328u, 0x2AA750u, 0x2AA758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA758u;
label_2aa758:
    // 0x2aa758: 0x1040017a  beqz        $v0, . + 4 + (0x17A << 2)
    ctx->pc = 0x2AA758u;
    {
        const bool branch_taken_0x2aa758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA758u;
        // 0x2aa75c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa758) {
            ctx->pc = 0x2AAD44u;
            goto label_2aad44;
        }
    }
    ctx->pc = 0x2AA760u;
    // 0x2aa760: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x2aa760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2aa764: 0x1840005f  blez        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x2AA764u;
    {
        const bool branch_taken_0x2aa764 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2AA768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA764u;
        // 0x2aa768: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa764) {
            ctx->pc = 0x2AA8E4u;
            goto label_2aa8e4;
        }
    }
    ctx->pc = 0x2AA76Cu;
    // 0x2aa76c: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2aa76cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2aa770: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2aa770u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2aa774: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2aa774u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa778: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2aa778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2aa77c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2aa77cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2aa780: 0xc7968e84  lwc1        $f22, -0x717C($gp)
    ctx->pc = 0x2aa780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2aa784: 0x0  nop
    ctx->pc = 0x2aa784u;
    // NOP
label_2aa788:
    // 0x2aa788: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2AA788u;
    SET_GPR_U32(ctx, 31, 0x2AA790u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2AA788u, 0x2AA790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA790u;
label_2aa790:
    // 0x2aa790: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2aa790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa794: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2aa794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2aa798: 0x244203e0  addiu       $v0, $v0, 0x3E0
    ctx->pc = 0x2aa798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 992));
    // 0x2aa79c: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AA79Cu;
    {
        const bool branch_taken_0x2aa79c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2AA7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA79Cu;
        // 0x2aa7a0: 0x522821  addu        $a1, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa79c) {
            ctx->pc = 0x2AA7B4u;
            goto label_2aa7b4;
        }
    }
    ctx->pc = 0x2AA7A4u;
    // 0x2aa7a4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2aa7a4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa7a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2aa7a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2aa7ac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2AA7ACu;
    {
        const bool branch_taken_0x2aa7ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA7ACu;
        // 0x2aa7b0: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa7ac) {
            ctx->pc = 0x2AA7D0u;
            goto label_2aa7d0;
        }
    }
    ctx->pc = 0x2AA7B4u;
label_2aa7b4:
    // 0x2aa7b4: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x2aa7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x2aa7b8: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2aa7b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2aa7bc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2aa7bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2aa7c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aa7c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa7c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2aa7c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2aa7c8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2aa7c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2aa7cc: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2aa7ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_2aa7d0:
    // 0x2aa7d0: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x2aa7d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x2aa7d4: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x2aa7d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x2aa7d8: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2AA7D8u;
    SET_GPR_U32(ctx, 31, 0x2AA7E0u);
    ctx->pc = 0x2AA7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA7D8u;
    // 0x2aa7dc: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2AA7D8u, 0x2AA7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA7E0u;
label_2aa7e0:
    // 0x2aa7e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2aa7e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa7e4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2aa7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2aa7e8: 0x244203e4  addiu       $v0, $v0, 0x3E4
    ctx->pc = 0x2aa7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 996));
    // 0x2aa7ec: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AA7ECu;
    {
        const bool branch_taken_0x2aa7ec = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2AA7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA7ECu;
        // 0x2aa7f0: 0x522821  addu        $a1, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa7ec) {
            ctx->pc = 0x2AA804u;
            goto label_2aa804;
        }
    }
    ctx->pc = 0x2AA7F4u;
    // 0x2aa7f4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2aa7f4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa7f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2aa7f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2aa7fc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2AA7FCu;
    {
        const bool branch_taken_0x2aa7fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA7FCu;
        // 0x2aa800: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa7fc) {
            ctx->pc = 0x2AA820u;
            goto label_2aa820;
        }
    }
    ctx->pc = 0x2AA804u;
label_2aa804:
    // 0x2aa804: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x2aa804u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x2aa808: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2aa808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2aa80c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2aa80cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2aa810: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aa810u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa814: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2aa814u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2aa818: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2aa818u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2aa81c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2aa81cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_2aa820:
    // 0x2aa820: 0xc7818e88  lwc1        $f1, -0x7178($gp)
    ctx->pc = 0x2aa820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aa824: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x2aa824u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x2aa828: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2aa828u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2aa82c: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2AA82Cu;
    SET_GPR_U32(ctx, 31, 0x2AA834u);
    ctx->pc = 0x2AA830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA82Cu;
    // 0x2aa830: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2AA82Cu, 0x2AA834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA834u;
label_2aa834:
    // 0x2aa834: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2aa834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa838: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2aa838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2aa83c: 0x244203e8  addiu       $v0, $v0, 0x3E8
    ctx->pc = 0x2aa83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1000));
    // 0x2aa840: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AA840u;
    {
        const bool branch_taken_0x2aa840 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2AA844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA840u;
        // 0x2aa844: 0x522821  addu        $a1, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa840) {
            ctx->pc = 0x2AA858u;
            goto label_2aa858;
        }
    }
    ctx->pc = 0x2AA848u;
    // 0x2aa848: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2aa848u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa84c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2aa84cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2aa850: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2AA850u;
    {
        const bool branch_taken_0x2aa850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA850u;
        // 0x2aa854: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa850) {
            ctx->pc = 0x2AA874u;
            goto label_2aa874;
        }
    }
    ctx->pc = 0x2AA858u;
label_2aa858:
    // 0x2aa858: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x2aa858u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x2aa85c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2aa85cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2aa860: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2aa860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2aa864: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aa864u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa868: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2aa868u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2aa86c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2aa86cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2aa870: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2aa870u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_2aa874:
    // 0x2aa874: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x2aa874u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2aa878: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x2aa878u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x2aa87c: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x2aa87cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x2aa880: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x2aa880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2aa884: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2aa884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2aa888: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2aa888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2aa88c: 0xac400a20  sw          $zero, 0xA20($v0)
    ctx->pc = 0x2aa88cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2592), GPR_U32(ctx, 0));
    // 0x2aa890: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2aa890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2aa894: 0x24630890  addiu       $v1, $v1, 0x890
    ctx->pc = 0x2aa894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2192));
    // 0x2aa898: 0x6800005  bltz        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AA898u;
    {
        const bool branch_taken_0x2aa898 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x2AA89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA898u;
        // 0x2aa89c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa898) {
            ctx->pc = 0x2AA8B0u;
            goto label_2aa8b0;
        }
    }
    ctx->pc = 0x2AA8A0u;
    // 0x2aa8a0: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x2aa8a0u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa8a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2aa8a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2aa8a8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2AA8A8u;
    {
        const bool branch_taken_0x2aa8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA8A8u;
        // 0x2aa8ac: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa8a8) {
            ctx->pc = 0x2AA8CCu;
            goto label_2aa8cc;
        }
    }
    ctx->pc = 0x2AA8B0u;
label_2aa8b0:
    // 0x2aa8b0: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x2aa8b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x2aa8b4: 0x141842  srl         $v1, $s4, 1
    ctx->pc = 0x2aa8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 20), 1));
    // 0x2aa8b8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2aa8b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2aa8bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aa8bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa8c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2aa8c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2aa8c4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2aa8c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2aa8c8: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2aa8c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_2aa8cc:
    // 0x2aa8cc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2aa8ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2aa8d0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2aa8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2aa8d4: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2aa8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2aa8d8: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2aa8d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2aa8dc: 0x1440ffaa  bnez        $v0, . + 4 + (-0x56 << 2)
    ctx->pc = 0x2AA8DCu;
    {
        const bool branch_taken_0x2aa8dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AA8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA8DCu;
        // 0x2aa8e0: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa8dc) {
            ctx->pc = 0x2AA788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2aa788;
        }
    }
    ctx->pc = 0x2AA8E4u;
label_2aa8e4:
    // 0x2aa8e4: 0x2410005c  addiu       $s0, $zero, 0x5C
    ctx->pc = 0x2aa8e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x2aa8e8: 0x26f1c268  addiu       $s1, $s7, -0x3D98
    ctx->pc = 0x2aa8e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 4294951528));
    // 0x2aa8ec: 0x2b08018  mult        $s0, $s5, $s0
    ctx->pc = 0x2aa8ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2aa8f0: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x2aa8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2aa8f4: 0x8c53004c  lw          $s3, 0x4C($v0)
    ctx->pc = 0x2aa8f4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x2aa8f8: 0x267203a0  addiu       $s2, $s3, 0x3A0
    ctx->pc = 0x2aa8f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 928));
    // 0x2aa8fc: 0xc0b5862  jal         func_2D6188
    ctx->pc = 0x2AA8FCu;
    SET_GPR_U32(ctx, 31, 0x2AA904u);
    ctx->pc = 0x2AA900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA8FCu;
    // 0x2aa900: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6188u, 0x2AA8FCu, 0x2AA904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA904u;
label_2aa904:
    // 0x2aa904: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x2aa904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2aa908: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2aa908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2aa90c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2aa90cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2aa910: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2aa910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa914: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2aa914u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa918: 0xc7818e8c  lwc1        $f1, -0x7174($gp)
    ctx->pc = 0x2aa918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aa91c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2aa91cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa920: 0xe6400030  swc1        $f0, 0x30($s2)
    ctx->pc = 0x2aa920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x2aa924: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x2aa924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa928: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2aa928u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2aa92c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2aa92cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2aa930:
    // 0x2aa930: 0xe6400034  swc1        $f0, 0x34($s2)
    ctx->pc = 0x2aa930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    // 0x2aa934: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x2aa934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aa938: 0xe6410038  swc1        $f1, 0x38($s2)
    ctx->pc = 0x2aa938u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
    // 0x2aa93c: 0xe66203a0  swc1        $f2, 0x3A0($s3)
    ctx->pc = 0x2aa93cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 928), bits); }
    // 0x2aa940: 0xe6420028  swc1        $f2, 0x28($s2)
    ctx->pc = 0x2aa940u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
    // 0x2aa944: 0x100000ff  b           . + 4 + (0xFF << 2)
    ctx->pc = 0x2AA944u;
    {
        const bool branch_taken_0x2aa944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA944u;
        // 0x2aa948: 0xe6420014  swc1        $f2, 0x14($s2) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa944) {
            ctx->pc = 0x2AAD44u;
            goto label_2aad44;
        }
    }
    ctx->pc = 0x2AA94Cu;
label_2aa94c:
    // 0x2aa94c: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x2aa94cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2aa950: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2aa950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa954: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2aa954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa958: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x2AA958u;
    SET_GPR_U32(ctx, 31, 0x2AA960u);
    ctx->pc = 0x2AA95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA958u;
    // 0x2aa95c: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x2AA958u, 0x2AA960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA960u;
label_2aa960:
    // 0x2aa960: 0x2410005c  addiu       $s0, $zero, 0x5C
    ctx->pc = 0x2aa960u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x2aa964: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2aa964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x2aa968: 0x2b08018  mult        $s0, $s5, $s0
    ctx->pc = 0x2aa968u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2aa96c: 0x2442c2b0  addiu       $v0, $v0, -0x3D50
    ctx->pc = 0x2aa96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951600));
    // 0x2aa970: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2aa970u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa974: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2aa974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2aa978: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2aa978u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2aa97c: 0xc0a60ca  jal         func_298328
    ctx->pc = 0x2AA97Cu;
    SET_GPR_U32(ctx, 31, 0x2AA984u);
    ctx->pc = 0x2AA980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA97Cu;
    // 0x2aa980: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298328u, 0x2AA97Cu, 0x2AA984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA984u;
label_2aa984:
    // 0x2aa984: 0x104000ef  beqz        $v0, . + 4 + (0xEF << 2)
    ctx->pc = 0x2AA984u;
    {
        const bool branch_taken_0x2aa984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA984u;
        // 0x2aa988: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa984) {
            ctx->pc = 0x2AAD44u;
            goto label_2aad44;
        }
    }
    ctx->pc = 0x2AA98Cu;
    // 0x2aa98c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2aa98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aa990: 0x12420015  beq         $s2, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2AA990u;
    {
        const bool branch_taken_0x2aa990 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AA994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA990u;
        // 0x2aa994: 0x2a420002  slti        $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa990) {
            ctx->pc = 0x2AA9E8u;
            goto label_2aa9e8;
        }
    }
    ctx->pc = 0x2AA998u;
    // 0x2aa998: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AA998u;
    {
        const bool branch_taken_0x2aa998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA998u;
        // 0x2aa99c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa998) {
            ctx->pc = 0x2AA9B0u;
            goto label_2aa9b0;
        }
    }
    ctx->pc = 0x2AA9A0u;
    // 0x2aa9a0: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AA9A0u;
    {
        const bool branch_taken_0x2aa9a0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA9A0u;
        // 0x2aa9a4: 0x2403005c  addiu       $v1, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa9a0) {
            ctx->pc = 0x2AA9C0u;
            goto label_2aa9c0;
        }
    }
    ctx->pc = 0x2AA9A8u;
    // 0x2aa9a8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2AA9A8u;
    {
        const bool branch_taken_0x2aa9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA9A8u;
        // 0x2aa9ac: 0x26e4c268  addiu       $a0, $s7, -0x3D98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294951528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa9a8) {
            ctx->pc = 0x2AAA24u;
            goto label_2aaa24;
        }
    }
    ctx->pc = 0x2AA9B0u;
label_2aa9b0:
    // 0x2aa9b0: 0x12420013  beq         $s2, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2AA9B0u;
    {
        const bool branch_taken_0x2aa9b0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AA9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA9B0u;
        // 0x2aa9b4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa9b0) {
            ctx->pc = 0x2AAA00u;
            goto label_2aaa00;
        }
    }
    ctx->pc = 0x2AA9B8u;
    // 0x2aa9b8: 0x16420019  bne         $s2, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2AA9B8u;
    {
        const bool branch_taken_0x2aa9b8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AA9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA9B8u;
        // 0x2aa9bc: 0x2403005c  addiu       $v1, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa9b8) {
            ctx->pc = 0x2AAA20u;
            goto label_2aaa20;
        }
    }
    ctx->pc = 0x2AA9C0u;
label_2aa9c0:
    // 0x2aa9c0: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x2aa9c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
    // 0x2aa9c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2aa9c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa9c8: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x2aa9c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x2aa9cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2aa9ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aa9d0: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x2aa9d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x2aa9d4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2aa9d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2aa9d8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2aa9d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2aa9dc: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x2aa9dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2aa9e0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2AA9E0u;
    {
        const bool branch_taken_0x2aa9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA9E0u;
        // 0x2aa9e4: 0xe7a20038  swc1        $f2, 0x38($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa9e0) {
            ctx->pc = 0x2AAA1Cu;
            goto label_2aaa1c;
        }
    }
    ctx->pc = 0x2AA9E8u;
label_2aa9e8:
    // 0x2aa9e8: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2aa9e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x2aa9ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2aa9ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aa9f0: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x2aa9f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x2aa9f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2aa9f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa9f8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2AA9F8u;
    {
        const bool branch_taken_0x2aa9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA9F8u;
        // 0x2aa9fc: 0xe7a10034  swc1        $f1, 0x34($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa9f8) {
            ctx->pc = 0x2AAA14u;
            goto label_2aaa14;
        }
    }
    ctx->pc = 0x2AAA00u;
label_2aaa00:
    // 0x2aaa00: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x2aaa00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x2aaa04: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2aaa04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aaa08: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x2aaa08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
    // 0x2aaa0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2aaa0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aaa10: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x2aaa10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_2aaa14:
    // 0x2aaa14: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2aaa14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2aaa18: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x2aaa18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_2aaa1c:
    // 0x2aaa1c: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x2aaa1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_2aaa20:
    // 0x2aaa20: 0x26e4c268  addiu       $a0, $s7, -0x3D98
    ctx->pc = 0x2aaa20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294951528));
label_2aaa24:
    // 0x2aaa24: 0x2a31818  mult        $v1, $s5, $v1
    ctx->pc = 0x2aaa24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2aaa28: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2aaa28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aaa2c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2aaa2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2aaa30: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x2aaa30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2aaa34: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x2aaa34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2aaa38: 0x186000a5  blez        $v1, . + 4 + (0xA5 << 2)
    ctx->pc = 0x2AAA38u;
    {
        const bool branch_taken_0x2aaa38 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2AAA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAA38u;
        // 0x2aaa3c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaa38) {
            ctx->pc = 0x2AACD0u;
            goto label_2aacd0;
        }
    }
    ctx->pc = 0x2AAA40u;
    // 0x2aaa40: 0x3c130037  lui         $s3, 0x37
    ctx->pc = 0x2aaa40u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)55 << 16));
    // 0x2aaa44: 0x0  nop
    ctx->pc = 0x2aaa44u;
    // NOP
label_2aaa48:
    // 0x2aaa48: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x2aaa48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x2aaa4c: 0x24a4c268  addiu       $a0, $a1, -0x3D98
    ctx->pc = 0x2aaa4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951528));
    // 0x2aaa50: 0x2a31818  mult        $v1, $s5, $v1
    ctx->pc = 0x2aaa50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2aaa54: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x2aaa54u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aaa58: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2aaa58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2aaa5c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2aaa5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2aaa60: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x2aaa60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2aaa64: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x2aaa64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aaa68: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2aaa68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2aaa6c: 0x0  nop
    ctx->pc = 0x2aaa6cu;
    // NOP
    // 0x2aaa70: 0x0  nop
    ctx->pc = 0x2aaa70u;
    // NOP
    // 0x2aaa74: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x2aaa74u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
    // 0x2aaa78: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2AAA78u;
    SET_GPR_U32(ctx, 31, 0x2AAA80u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2AAA78u, 0x2AAA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAA80u;
label_2aaa80:
    // 0x2aaa80: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AAA80u;
    {
        const bool branch_taken_0x2aaa80 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2AAA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAA80u;
        // 0x2aaa84: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaa80) {
            ctx->pc = 0x2AAA94u;
            goto label_2aaa94;
        }
    }
    ctx->pc = 0x2AAA88u;
    // 0x2aaa88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aaa88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aaa8c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2AAA8Cu;
    {
        const bool branch_taken_0x2aaa8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAA8Cu;
        // 0x2aaa90: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaa8c) {
            ctx->pc = 0x2AAAA8u;
            goto label_2aaaa8;
        }
    }
    ctx->pc = 0x2AAA94u;
label_2aaa94:
    // 0x2aaa94: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2aaa94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2aaa98: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2aaa98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2aaa9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aaa9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aaaa0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2aaaa0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2aaaa4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2aaaa4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2aaaa8:
    // 0x2aaaa8: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2aaaa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2aaaac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2aaaacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2aaab0: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2aaab0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2aaab4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2aaab4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aaab8: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x2aaab8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x2aaabc: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2aaabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aaac0: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x2aaac0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x2aaac4: 0xc0b9142  jal         func_2E4508
    ctx->pc = 0x2AAAC4u;
    SET_GPR_U32(ctx, 31, 0x2AAACCu);
    ctx->pc = 0x2AAAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AAAC4u;
    // 0x2aaac8: 0x460c0301  sub.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4508u, 0x2AAAC4u, 0x2AAACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAACCu;
label_2aaacc:
    // 0x2aaacc: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2AAACCu;
    SET_GPR_U32(ctx, 31, 0x2AAAD4u);
    ctx->pc = 0x2AAAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AAACCu;
    // 0x2aaad0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2AAACCu, 0x2AAAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAAD4u;
label_2aaad4:
    // 0x2aaad4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AAAD4u;
    {
        const bool branch_taken_0x2aaad4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2AAAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAAD4u;
        // 0x2aaad8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaad4) {
            ctx->pc = 0x2AAAE8u;
            goto label_2aaae8;
        }
    }
    ctx->pc = 0x2AAADCu;
    // 0x2aaadc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aaadcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aaae0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2AAAE0u;
    {
        const bool branch_taken_0x2aaae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAAE0u;
        // 0x2aaae4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaae0) {
            ctx->pc = 0x2AAAFCu;
            goto label_2aaafc;
        }
    }
    ctx->pc = 0x2AAAE8u;
label_2aaae8:
    // 0x2aaae8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2aaae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2aaaec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2aaaecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2aaaf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aaaf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aaaf4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2aaaf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2aaaf8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2aaaf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2aaafc:
    // 0x2aaafc: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2aaafcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2aab00: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2aab00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2aab04: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2aab04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2aab08: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2aab08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aab0c: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x2aab0cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x2aab10: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2aab10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aab14: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x2aab14u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x2aab18: 0xc0b9142  jal         func_2E4508
    ctx->pc = 0x2AAB18u;
    SET_GPR_U32(ctx, 31, 0x2AAB20u);
    ctx->pc = 0x2AAB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AAB18u;
    // 0x2aab1c: 0x460c0301  sub.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4508u, 0x2AAB18u, 0x2AAB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAB20u;
label_2aab20:
    // 0x2aab20: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2AAB20u;
    SET_GPR_U32(ctx, 31, 0x2AAB28u);
    ctx->pc = 0x2AAB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AAB20u;
    // 0x2aab24: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2AAB20u, 0x2AAB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAB28u;
label_2aab28:
    // 0x2aab28: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AAB28u;
    {
        const bool branch_taken_0x2aab28 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2AAB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAB28u;
        // 0x2aab2c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aab28) {
            ctx->pc = 0x2AAB3Cu;
            goto label_2aab3c;
        }
    }
    ctx->pc = 0x2AAB30u;
    // 0x2aab30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aab30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aab34: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2AAB34u;
    {
        const bool branch_taken_0x2aab34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAB34u;
        // 0x2aab38: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aab34) {
            ctx->pc = 0x2AAB50u;
            goto label_2aab50;
        }
    }
    ctx->pc = 0x2AAB3Cu;
label_2aab3c:
    // 0x2aab3c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2aab3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2aab40: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2aab40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2aab44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aab44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aab48: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2aab48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2aab4c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2aab4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2aab50:
    // 0x2aab50: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2aab50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2aab54: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2aab54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2aab58: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2aab58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2aab5c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2aab5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aab60: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x2aab60u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x2aab64: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2aab64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aab68: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x2aab68u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x2aab6c: 0xc0b9142  jal         func_2E4508
    ctx->pc = 0x2AAB6Cu;
    SET_GPR_U32(ctx, 31, 0x2AAB74u);
    ctx->pc = 0x2AAB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AAB6Cu;
    // 0x2aab70: 0x460c0301  sub.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4508u, 0x2AAB6Cu, 0x2AAB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAB74u;
label_2aab74:
    // 0x2aab74: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x2aab74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x2aab78: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x2aab78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x2aab7c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2aab7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aab80: 0xc7838e90  lwc1        $f3, -0x7170($gp)
    ctx->pc = 0x2aab80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2aab84: 0x2405005c  addiu       $a1, $zero, 0x5C
    ctx->pc = 0x2aab84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x2aab88: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2aab88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2aab8c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2aab8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2aab90: 0x2a52818  mult        $a1, $s5, $a1
    ctx->pc = 0x2aab90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2aab94: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2aab94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2aab98: 0xc7868e94  lwc1        $f6, -0x716C($gp)
    ctx->pc = 0x2aab98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2aab9c: 0x26e3c268  addiu       $v1, $s7, -0x3D98
    ctx->pc = 0x2aab9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294951528));
    // 0x2aaba0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2aaba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2aaba4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2aaba4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2aaba8: 0x24630048  addiu       $v1, $v1, 0x48
    ctx->pc = 0x2aaba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
    // 0x2aabac: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2aabacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2aabb0: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x2aabb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x2aabb4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2aabb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2aabb8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2aabb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2aabbc: 0x46141081  sub.s       $f2, $f2, $f20
    ctx->pc = 0x2aabbcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[20]);
    // 0x2aabc0: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x2aabc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x2aabc4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2aabc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aabc8: 0x111a00  sll         $v1, $s1, 8
    ctx->pc = 0x2aabc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 8));
    // 0x2aabcc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2aabccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2aabd0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2aabd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2aabd4: 0x2431825  or          $v1, $s2, $v1
    ctx->pc = 0x2aabd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
    // 0x2aabd8: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x2aabd8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2aabdc: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2aabdcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2aabe0: 0x26685c60  addiu       $t0, $s3, 0x5C60
    ctx->pc = 0x2aabe0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 23648));
    // 0x2aabe4: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x2aabe4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2aabe8: 0x0  nop
    ctx->pc = 0x2aabe8u;
    // NOP
    // 0x2aabec: 0x0  nop
    ctx->pc = 0x2aabecu;
    // NOP
    // 0x2aabf0: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x2aabf0u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
    // 0x2aabf4: 0x2073818  mult        $a3, $s0, $a3
    ctx->pc = 0x2aabf4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2aabf8: 0xc7858e98  lwc1        $f5, -0x7168($gp)
    ctx->pc = 0x2aabf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2aabfc: 0x104880  sll         $t1, $s0, 2
    ctx->pc = 0x2aabfcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2aac00: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x2aac00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2aac04: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2aac04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2aac08: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x2aac08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x2aac0c: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x2aac0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x2aac10: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2aac10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2aac14: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2aac14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2aac18: 0x24820200  addiu       $v0, $a0, 0x200
    ctx->pc = 0x2aac18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 512));
    // 0x2aac1c: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x2aac1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x2aac20: 0x308407ff  andi        $a0, $a0, 0x7FF
    ctx->pc = 0x2aac20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2047);
    // 0x2aac24: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2aac24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2aac28: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2aac28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2aac2c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2aac2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2aac30: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x2aac30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x2aac34: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2aac34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aac38: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2aac38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2aac3c: 0xe4c003e0  swc1        $f0, 0x3E0($a2)
    ctx->pc = 0x2aac3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 992), bits); }
    // 0x2aac40: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2aac40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2aac44: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2aac44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2aac48: 0xac4003e4  sw          $zero, 0x3E4($v0)
    ctx->pc = 0x2aac48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 996), GPR_U32(ctx, 0));
    // 0x2aac4c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2aac4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aac50: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2aac50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2aac54: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2aac54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2aac58: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2aac58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2aac5c: 0xe46003e8  swc1        $f0, 0x3E8($v1)
    ctx->pc = 0x2aac5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1000), bits); }
    // 0x2aac60: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2aac60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2aac64: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2aac64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2aac68: 0xe4420a20  swc1        $f2, 0xA20($v0)
    ctx->pc = 0x2aac68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 2592), bits); }
    // 0x2aac6c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2aac6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2aac70: 0x24630890  addiu       $v1, $v1, 0x890
    ctx->pc = 0x2aac70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2192));
    // 0x2aac74: 0x5400005  bltz        $t2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AAC74u;
    {
        const bool branch_taken_0x2aac74 = (GPR_S32(ctx, 10) < 0);
        ctx->pc = 0x2AAC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAC74u;
        // 0x2aac78: 0x692021  addu        $a0, $v1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aac74) {
            ctx->pc = 0x2AAC8Cu;
            goto label_2aac8c;
        }
    }
    ctx->pc = 0x2AAC7Cu;
    // 0x2aac7c: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x2aac7cu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aac80: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2aac80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2aac84: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2AAC84u;
    {
        const bool branch_taken_0x2aac84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAC84u;
        // 0x2aac88: 0x2402005c  addiu       $v0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aac84) {
            ctx->pc = 0x2AACA8u;
            goto label_2aaca8;
        }
    }
    ctx->pc = 0x2AAC8Cu;
label_2aac8c:
    // 0x2aac8c: 0xa1842  srl         $v1, $t2, 1
    ctx->pc = 0x2aac8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
    // 0x2aac90: 0x31420001  andi        $v0, $t2, 0x1
    ctx->pc = 0x2aac90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x2aac94: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2aac94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2aac98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aac98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aac9c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2aac9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2aaca0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2aaca0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2aaca4: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x2aaca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_2aaca8:
    // 0x2aaca8: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2aaca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2aacac: 0x2a21018  mult        $v0, $s5, $v0
    ctx->pc = 0x2aacacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2aacb0: 0x26e4c268  addiu       $a0, $s7, -0x3D98
    ctx->pc = 0x2aacb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294951528));
    // 0x2aacb4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2aacb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2aacb8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2aacb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2aacbc: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2aacbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2aacc0: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2aacc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2aacc4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2aacc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2aacc8: 0x1440ff5f  bnez        $v0, . + 4 + (-0xA1 << 2)
    ctx->pc = 0x2AACC8u;
    {
        const bool branch_taken_0x2aacc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AACCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AACC8u;
        // 0x2aaccc: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aacc8) {
            ctx->pc = 0x2AAA48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2aaa48;
        }
    }
    ctx->pc = 0x2AACD0u;
label_2aacd0:
    // 0x2aacd0: 0x2410005c  addiu       $s0, $zero, 0x5C
    ctx->pc = 0x2aacd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x2aacd4: 0x26f1c268  addiu       $s1, $s7, -0x3D98
    ctx->pc = 0x2aacd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 4294951528));
    // 0x2aacd8: 0x2b08018  mult        $s0, $s5, $s0
    ctx->pc = 0x2aacd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2aacdc: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x2aacdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2aace0: 0x8c530048  lw          $s3, 0x48($v0)
    ctx->pc = 0x2aace0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2aace4: 0x267203a0  addiu       $s2, $s3, 0x3A0
    ctx->pc = 0x2aace4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 928));
    // 0x2aace8: 0xc0b5862  jal         func_2D6188
    ctx->pc = 0x2AACE8u;
    SET_GPR_U32(ctx, 31, 0x2AACF0u);
    ctx->pc = 0x2AACECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AACE8u;
    // 0x2aacec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6188u, 0x2AACE8u, 0x2AACF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AACF0u;
label_2aacf0:
    // 0x2aacf0: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x2aacf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2aacf4: 0xc7828e9c  lwc1        $f2, -0x7164($gp)
    ctx->pc = 0x2aacf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2aacf8: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2aacf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aacfc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2aacfcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aad00: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2aad00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aad04: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2aad04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2aad08: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2aad08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2aad0c: 0xe6400030  swc1        $f0, 0x30($s2)
    ctx->pc = 0x2aad0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x2aad10: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x2aad10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aad14: 0xe6400034  swc1        $f0, 0x34($s2)
    ctx->pc = 0x2aad14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    // 0x2aad18: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x2aad18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aad1c: 0xe6410038  swc1        $f1, 0x38($s2)
    ctx->pc = 0x2aad1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
    // 0x2aad20: 0xe66203a0  swc1        $f2, 0x3A0($s3)
    ctx->pc = 0x2aad20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 928), bits); }
    // 0x2aad24: 0xe6420028  swc1        $f2, 0x28($s2)
    ctx->pc = 0x2aad24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
    // 0x2aad28: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2AAD28u;
    {
        const bool branch_taken_0x2aad28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAD28u;
        // 0x2aad2c: 0xe6430014  swc1        $f3, 0x14($s2) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aad28) {
            ctx->pc = 0x2AAD44u;
            goto label_2aad44;
        }
    }
    ctx->pc = 0x2AAD30u;
label_2aad30:
    // 0x2aad30: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x2aad30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x2aad34: 0x26e3c268  addiu       $v1, $s7, -0x3D98
    ctx->pc = 0x2aad34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294951528));
    // 0x2aad38: 0x2a21018  mult        $v0, $s5, $v0
    ctx->pc = 0x2aad38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2aad3c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2aad3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2aad40: 0xac600034  sw          $zero, 0x34($v1)
    ctx->pc = 0x2aad40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 0));
label_2aad44:
    // 0x2aad44: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x2aad44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_2aad48:
    // 0x2aad48: 0x26e3c268  addiu       $v1, $s7, -0x3D98
    ctx->pc = 0x2aad48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294951528));
    // 0x2aad4c: 0x2a21018  mult        $v0, $s5, $v0
    ctx->pc = 0x2aad4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2aad50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2aad50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2aad54:
    // 0x2aad54: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x2aad54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2aad58: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x2aad58u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2aad5c: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x2aad5cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2aad60: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x2aad60u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2aad64: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x2aad64u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2aad68: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x2aad68u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2aad6c: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x2aad6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2aad70: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x2aad70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2aad74: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x2aad74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2aad78: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2aad78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2aad7c: 0xc7b600f0  lwc1        $f22, 0xF0($sp)
    ctx->pc = 0x2aad7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2aad80: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x2aad80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2aad84: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x2aad84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2aad88: 0x3e00008  jr          $ra
    ctx->pc = 0x2AAD88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AAD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAD88u;
        // 0x2aad8c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AAD88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AAD90u;
}
