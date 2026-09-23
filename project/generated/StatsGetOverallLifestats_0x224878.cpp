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

// Function: StatsGetOverallLifestats
// Address: 0x224878 - 0x224b20
void StatsGetOverallLifestats_0x224878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StatsGetOverallLifestats_0x224878");
#endif

    switch (ctx->pc) {
        case 0x224a60u: goto label_224a60;
        case 0x224ae8u: goto label_224ae8;
        default: break;
    }

    ctx->pc = 0x224878u;

    // 0x224878: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x224878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22487c: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x22487cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224880: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x224880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x224884: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x224884u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224888: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x224888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22488c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x22488cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224890: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x224890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x224894: 0x2533015c  addiu       $s3, $t1, 0x15C
    ctx->pc = 0x224894u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 9), 348));
    // 0x224898: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x224898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22489c: 0x2512015c  addiu       $s2, $t0, 0x15C
    ctx->pc = 0x22489cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 8), 348));
    // 0x2248a0: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x2248a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2248a4: 0x251000c8  addiu       $s0, $t0, 0xC8
    ctx->pc = 0x2248a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), 200));
    // 0x2248a8: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x2248a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2248ac: 0x24f900c8  addiu       $t9, $a3, 0xC8
    ctx->pc = 0x2248acu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 7), 200));
    // 0x2248b0: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x2248b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2248b4: 0x253800c8  addiu       $t8, $t1, 0xC8
    ctx->pc = 0x2248b4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 9), 200));
    // 0x2248b8: 0x254f00c8  addiu       $t7, $t2, 0xC8
    ctx->pc = 0x2248b8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 10), 200));
    // 0x2248bc: 0x250e0040  addiu       $t6, $t0, 0x40
    ctx->pc = 0x2248bcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    // 0x2248c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2248c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2248c4: 0x24ed0040  addiu       $t5, $a3, 0x40
    ctx->pc = 0x2248c4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x2248c8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2248c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2248cc: 0x252c0040  addiu       $t4, $t1, 0x40
    ctx->pc = 0x2248ccu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), 64));
    // 0x2248d0: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x2248d0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x2248d4: 0x254b0040  addiu       $t3, $t2, 0x40
    ctx->pc = 0x2248d4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 64));
    // 0x2248d8: 0x24110021  addiu       $s1, $zero, 0x21
    ctx->pc = 0x2248d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2248dc: 0x8d240004  lw          $a0, 0x4($t1)
    ctx->pc = 0x2248dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x2248e0: 0x8d430004  lw          $v1, 0x4($t2)
    ctx->pc = 0x2248e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x2248e4: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x2248e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2248e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2248e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2248ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2248ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2248f0: 0xad030004  sw          $v1, 0x4($t0)
    ctx->pc = 0x2248f0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
    // 0x2248f4: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x2248f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x2248f8: 0x8d420008  lw          $v0, 0x8($t2)
    ctx->pc = 0x2248f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x2248fc: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x2248fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x224900: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x224900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x224904: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x224904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x224908: 0xad020008  sw          $v0, 0x8($t0)
    ctx->pc = 0x224908u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
    // 0x22490c: 0x8d22000c  lw          $v0, 0xC($t1)
    ctx->pc = 0x22490cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x224910: 0x8d43000c  lw          $v1, 0xC($t2)
    ctx->pc = 0x224910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x224914: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x224914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x224918: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x224918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22491c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x22491cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x224920: 0xad03000c  sw          $v1, 0xC($t0)
    ctx->pc = 0x224920u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 3));
    // 0x224924: 0x8d250010  lw          $a1, 0x10($t1)
    ctx->pc = 0x224924u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x224928: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x224928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x22492c: 0x8d460010  lw          $a2, 0x10($t2)
    ctx->pc = 0x22492cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x224930: 0x45182a  slt         $v1, $v0, $a1
    ctx->pc = 0x224930u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x224934: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x224934u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x224938: 0x46202a  slt         $a0, $v0, $a2
    ctx->pc = 0x224938u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x22493c: 0xc4100b  movn        $v0, $a2, $a0
    ctx->pc = 0x22493cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x224940: 0xad020010  sw          $v0, 0x10($t0)
    ctx->pc = 0x224940u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 2));
    // 0x224944: 0x8d250014  lw          $a1, 0x14($t1)
    ctx->pc = 0x224944u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x224948: 0x8ce30014  lw          $v1, 0x14($a3)
    ctx->pc = 0x224948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x22494c: 0x8d460014  lw          $a2, 0x14($t2)
    ctx->pc = 0x22494cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 20)));
    // 0x224950: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x224950u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x224954: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x224954u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x224958: 0x66202a  slt         $a0, $v1, $a2
    ctx->pc = 0x224958u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x22495c: 0xc4180b  movn        $v1, $a2, $a0
    ctx->pc = 0x22495cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x224960: 0xad030014  sw          $v1, 0x14($t0)
    ctx->pc = 0x224960u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 3));
    // 0x224964: 0x8ce20018  lw          $v0, 0x18($a3)
    ctx->pc = 0x224964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x224968: 0x8d250018  lw          $a1, 0x18($t1)
    ctx->pc = 0x224968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x22496c: 0x8d460018  lw          $a2, 0x18($t2)
    ctx->pc = 0x22496cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 24)));
    // 0x224970: 0x45182a  slt         $v1, $v0, $a1
    ctx->pc = 0x224970u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x224974: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x224974u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x224978: 0x46202a  slt         $a0, $v0, $a2
    ctx->pc = 0x224978u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x22497c: 0xc4100b  movn        $v0, $a2, $a0
    ctx->pc = 0x22497cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x224980: 0xad020018  sw          $v0, 0x18($t0)
    ctx->pc = 0x224980u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 2));
    // 0x224984: 0x8d22001c  lw          $v0, 0x1C($t1)
    ctx->pc = 0x224984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 28)));
    // 0x224988: 0x8d43001c  lw          $v1, 0x1C($t2)
    ctx->pc = 0x224988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 28)));
    // 0x22498c: 0x8ce4001c  lw          $a0, 0x1C($a3)
    ctx->pc = 0x22498cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x224990: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x224990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x224994: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x224994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x224998: 0xad03001c  sw          $v1, 0x1C($t0)
    ctx->pc = 0x224998u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 3));
    // 0x22499c: 0x8d230020  lw          $v1, 0x20($t1)
    ctx->pc = 0x22499cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x2249a0: 0x8d420020  lw          $v0, 0x20($t2)
    ctx->pc = 0x2249a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 32)));
    // 0x2249a4: 0x8ce40020  lw          $a0, 0x20($a3)
    ctx->pc = 0x2249a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2249a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2249a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2249ac: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2249acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2249b0: 0xad020020  sw          $v0, 0x20($t0)
    ctx->pc = 0x2249b0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 32), GPR_U32(ctx, 2));
    // 0x2249b4: 0xc5210024  lwc1        $f1, 0x24($t1)
    ctx->pc = 0x2249b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2249b8: 0xc5400024  lwc1        $f0, 0x24($t2)
    ctx->pc = 0x2249b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2249bc: 0xc4e20024  lwc1        $f2, 0x24($a3)
    ctx->pc = 0x2249bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2249c0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2249c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2249c4: 0x8d230034  lw          $v1, 0x34($t1)
    ctx->pc = 0x2249c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 52)));
    // 0x2249c8: 0x8d420034  lw          $v0, 0x34($t2)
    ctx->pc = 0x2249c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 52)));
    // 0x2249cc: 0x8ce40034  lw          $a0, 0x34($a3)
    ctx->pc = 0x2249ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x2249d0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2249d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2249d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2249d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2249d8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2249d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2249dc: 0xad020034  sw          $v0, 0x34($t0)
    ctx->pc = 0x2249dcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 52), GPR_U32(ctx, 2));
    // 0x2249e0: 0xe5000024  swc1        $f0, 0x24($t0)
    ctx->pc = 0x2249e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 36), bits); }
    // 0x2249e4: 0x8d230038  lw          $v1, 0x38($t1)
    ctx->pc = 0x2249e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 56)));
    // 0x2249e8: 0xc5210028  lwc1        $f1, 0x28($t1)
    ctx->pc = 0x2249e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2249ec: 0xc5400028  lwc1        $f0, 0x28($t2)
    ctx->pc = 0x2249ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2249f0: 0xc4e20028  lwc1        $f2, 0x28($a3)
    ctx->pc = 0x2249f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2249f4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2249f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2249f8: 0x8d420038  lw          $v0, 0x38($t2)
    ctx->pc = 0x2249f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 56)));
    // 0x2249fc: 0x8ce40038  lw          $a0, 0x38($a3)
    ctx->pc = 0x2249fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x224a00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x224a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x224a04: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x224a04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x224a08: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x224a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x224a0c: 0xad020038  sw          $v0, 0x38($t0)
    ctx->pc = 0x224a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 56), GPR_U32(ctx, 2));
    // 0x224a10: 0xe5000028  swc1        $f0, 0x28($t0)
    ctx->pc = 0x224a10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 40), bits); }
    // 0x224a14: 0x8d42003c  lw          $v0, 0x3C($t2)
    ctx->pc = 0x224a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 60)));
    // 0x224a18: 0xc520002c  lwc1        $f0, 0x2C($t1)
    ctx->pc = 0x224a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224a1c: 0xc541002c  lwc1        $f1, 0x2C($t2)
    ctx->pc = 0x224a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224a20: 0xc4e2002c  lwc1        $f2, 0x2C($a3)
    ctx->pc = 0x224a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x224a24: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x224a24u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x224a28: 0x8d23003c  lw          $v1, 0x3C($t1)
    ctx->pc = 0x224a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 60)));
    // 0x224a2c: 0x8ce4003c  lw          $a0, 0x3C($a3)
    ctx->pc = 0x224a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x224a30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x224a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x224a34: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x224a34u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x224a38: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x224a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x224a3c: 0xad02003c  sw          $v0, 0x3C($t0)
    ctx->pc = 0x224a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 60), GPR_U32(ctx, 2));
    // 0x224a40: 0xe501002c  swc1        $f1, 0x2C($t0)
    ctx->pc = 0x224a40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 44), bits); }
    // 0x224a44: 0xc5400030  lwc1        $f0, 0x30($t2)
    ctx->pc = 0x224a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224a48: 0xc5210030  lwc1        $f1, 0x30($t1)
    ctx->pc = 0x224a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224a4c: 0xc4e20030  lwc1        $f2, 0x30($a3)
    ctx->pc = 0x224a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x224a50: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x224a50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x224a54: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x224a54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x224a58: 0xe5000030  swc1        $f0, 0x30($t0)
    ctx->pc = 0x224a58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 48), bits); }
    // 0x224a5c: 0x0  nop
    ctx->pc = 0x224a5cu;
    // NOP
label_224a60:
    // 0x224a60: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x224a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224a64: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x224a64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x224a68: 0xc7010000  lwc1        $f1, 0x0($t8)
    ctx->pc = 0x224a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224a6c: 0x25ef0004  addiu       $t7, $t7, 0x4
    ctx->pc = 0x224a6cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4));
    // 0x224a70: 0xc7220000  lwc1        $f2, 0x0($t9)
    ctx->pc = 0x224a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x224a74: 0x27180004  addiu       $t8, $t8, 0x4
    ctx->pc = 0x224a74u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
    // 0x224a78: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x224a78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x224a7c: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x224a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x224a80: 0x8d840000  lw          $a0, 0x0($t4)
    ctx->pc = 0x224a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x224a84: 0x27390004  addiu       $t9, $t9, 0x4
    ctx->pc = 0x224a84u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4));
    // 0x224a88: 0x8da30000  lw          $v1, 0x0($t5)
    ctx->pc = 0x224a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x224a8c: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x224a8cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x224a90: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x224a90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x224a94: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x224a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x224a98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x224a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x224a9c: 0x25ad0004  addiu       $t5, $t5, 0x4
    ctx->pc = 0x224a9cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    // 0x224aa0: 0xadc20000  sw          $v0, 0x0($t6)
    ctx->pc = 0x224aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 2));
    // 0x224aa4: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x224aa4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x224aa8: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x224aa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x224aac: 0x25ce0004  addiu       $t6, $t6, 0x4
    ctx->pc = 0x224aacu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
    // 0x224ab0: 0x621ffeb  bgez        $s1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x224AB0u;
    {
        const bool branch_taken_0x224ab0 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x224AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224AB0u;
        // 0x224ab4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224ab0) {
            ctx->pc = 0x224A60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_224a60;
        }
    }
    ctx->pc = 0x224AB8u;
    // 0x224ab8: 0xc5210158  lwc1        $f1, 0x158($t1)
    ctx->pc = 0x224ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224abc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x224abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x224ac0: 0xc5400158  lwc1        $f0, 0x158($t2)
    ctx->pc = 0x224ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224ac4: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x224ac4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224ac8: 0xc4e20158  lwc1        $f2, 0x158($a3)
    ctx->pc = 0x224ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x224acc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x224accu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224ad0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x224ad0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x224ad4: 0xad020154  sw          $v0, 0x154($t0)
    ctx->pc = 0x224ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 340), GPR_U32(ctx, 2));
    // 0x224ad8: 0xad020150  sw          $v0, 0x150($t0)
    ctx->pc = 0x224ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 336), GPR_U32(ctx, 2));
    // 0x224adc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x224adcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224ae0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x224ae0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x224ae4: 0xe5000158  swc1        $f0, 0x158($t0)
    ctx->pc = 0x224ae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 344), bits); }
label_224ae8:
    // 0x224ae8: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x224ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x224aec: 0x1252021  addu        $a0, $t1, $a1
    ctx->pc = 0x224aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x224af0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x224af0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x224af4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x224af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x224af8: 0x28a20030  slti        $v0, $a1, 0x30
    ctx->pc = 0x224af8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x224afc: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x224afcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x224b00: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x224B00u;
    {
        const bool branch_taken_0x224b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x224b00) {
            ctx->pc = 0x224AE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_224ae8;
        }
    }
    ctx->pc = 0x224B08u;
    // 0x224b08: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x224b08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x224b0c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x224b0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x224b10: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x224b10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x224b14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x224b14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224b18: 0x3e00008  jr          $ra
    ctx->pc = 0x224B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224B18u;
        // 0x224b1c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224B18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224B20u;
}
