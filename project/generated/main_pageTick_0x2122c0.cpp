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

// Function: main_pageTick
// Address: 0x2122c0 - 0x2124a0
void main_pageTick_0x2122c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("main_pageTick_0x2122c0");
#endif

    switch (ctx->pc) {
        case 0x2122c0u: goto label_2122c0;
        case 0x2122c4u: goto label_2122c4;
        case 0x2122c8u: goto label_2122c8;
        case 0x2122ccu: goto label_2122cc;
        case 0x2122d0u: goto label_2122d0;
        case 0x2122d4u: goto label_2122d4;
        case 0x2122d8u: goto label_2122d8;
        case 0x2122dcu: goto label_2122dc;
        case 0x2122e0u: goto label_2122e0;
        case 0x2122e4u: goto label_2122e4;
        case 0x2122e8u: goto label_2122e8;
        case 0x2122ecu: goto label_2122ec;
        case 0x2122f0u: goto label_2122f0;
        case 0x2122f4u: goto label_2122f4;
        case 0x2122f8u: goto label_2122f8;
        case 0x2122fcu: goto label_2122fc;
        case 0x212300u: goto label_212300;
        case 0x212304u: goto label_212304;
        case 0x212308u: goto label_212308;
        case 0x21230cu: goto label_21230c;
        case 0x212310u: goto label_212310;
        case 0x212314u: goto label_212314;
        case 0x212318u: goto label_212318;
        case 0x21231cu: goto label_21231c;
        case 0x212320u: goto label_212320;
        case 0x212324u: goto label_212324;
        case 0x212328u: goto label_212328;
        case 0x21232cu: goto label_21232c;
        case 0x212330u: goto label_212330;
        case 0x212334u: goto label_212334;
        case 0x212338u: goto label_212338;
        case 0x21233cu: goto label_21233c;
        case 0x212340u: goto label_212340;
        case 0x212344u: goto label_212344;
        case 0x212348u: goto label_212348;
        case 0x21234cu: goto label_21234c;
        case 0x212350u: goto label_212350;
        case 0x212354u: goto label_212354;
        case 0x212358u: goto label_212358;
        case 0x21235cu: goto label_21235c;
        case 0x212360u: goto label_212360;
        case 0x212364u: goto label_212364;
        case 0x212368u: goto label_212368;
        case 0x21236cu: goto label_21236c;
        case 0x212370u: goto label_212370;
        case 0x212374u: goto label_212374;
        case 0x212378u: goto label_212378;
        case 0x21237cu: goto label_21237c;
        case 0x212380u: goto label_212380;
        case 0x212384u: goto label_212384;
        case 0x212388u: goto label_212388;
        case 0x21238cu: goto label_21238c;
        case 0x212390u: goto label_212390;
        case 0x212394u: goto label_212394;
        case 0x212398u: goto label_212398;
        case 0x21239cu: goto label_21239c;
        case 0x2123a0u: goto label_2123a0;
        case 0x2123a4u: goto label_2123a4;
        case 0x2123a8u: goto label_2123a8;
        case 0x2123acu: goto label_2123ac;
        case 0x2123b0u: goto label_2123b0;
        case 0x2123b4u: goto label_2123b4;
        case 0x2123b8u: goto label_2123b8;
        case 0x2123bcu: goto label_2123bc;
        case 0x2123c0u: goto label_2123c0;
        case 0x2123c4u: goto label_2123c4;
        case 0x2123c8u: goto label_2123c8;
        case 0x2123ccu: goto label_2123cc;
        case 0x2123d0u: goto label_2123d0;
        case 0x2123d4u: goto label_2123d4;
        case 0x2123d8u: goto label_2123d8;
        case 0x2123dcu: goto label_2123dc;
        case 0x2123e0u: goto label_2123e0;
        case 0x2123e4u: goto label_2123e4;
        case 0x2123e8u: goto label_2123e8;
        case 0x2123ecu: goto label_2123ec;
        case 0x2123f0u: goto label_2123f0;
        case 0x2123f4u: goto label_2123f4;
        case 0x2123f8u: goto label_2123f8;
        case 0x2123fcu: goto label_2123fc;
        case 0x212400u: goto label_212400;
        case 0x212404u: goto label_212404;
        case 0x212408u: goto label_212408;
        case 0x21240cu: goto label_21240c;
        case 0x212410u: goto label_212410;
        case 0x212414u: goto label_212414;
        case 0x212418u: goto label_212418;
        case 0x21241cu: goto label_21241c;
        case 0x212420u: goto label_212420;
        case 0x212424u: goto label_212424;
        case 0x212428u: goto label_212428;
        case 0x21242cu: goto label_21242c;
        case 0x212430u: goto label_212430;
        case 0x212434u: goto label_212434;
        case 0x212438u: goto label_212438;
        case 0x21243cu: goto label_21243c;
        case 0x212440u: goto label_212440;
        case 0x212444u: goto label_212444;
        case 0x212448u: goto label_212448;
        case 0x21244cu: goto label_21244c;
        case 0x212450u: goto label_212450;
        case 0x212454u: goto label_212454;
        case 0x212458u: goto label_212458;
        case 0x21245cu: goto label_21245c;
        case 0x212460u: goto label_212460;
        case 0x212464u: goto label_212464;
        case 0x212468u: goto label_212468;
        case 0x21246cu: goto label_21246c;
        case 0x212470u: goto label_212470;
        case 0x212474u: goto label_212474;
        case 0x212478u: goto label_212478;
        case 0x21247cu: goto label_21247c;
        case 0x212480u: goto label_212480;
        case 0x212484u: goto label_212484;
        case 0x212488u: goto label_212488;
        case 0x21248cu: goto label_21248c;
        case 0x212490u: goto label_212490;
        case 0x212494u: goto label_212494;
        case 0x212498u: goto label_212498;
        case 0x21249cu: goto label_21249c;
        default: break;
    }

    ctx->pc = 0x2122c0u;

label_2122c0:
    // 0x2122c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2122c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2122c4:
    // 0x2122c4: 0x8f86b234  lw          $a2, -0x4DCC($gp)
    ctx->pc = 0x2122c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
label_2122c8:
    // 0x2122c8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2122c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2122cc:
    // 0x2122cc: 0x2407005c  addiu       $a3, $zero, 0x5C
    ctx->pc = 0x2122ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_2122d0:
    // 0x2122d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2122d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2122d4:
    // 0x2122d4: 0x3c0301fb  lui         $v1, 0x1FB
    ctx->pc = 0x2122d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)507 << 16));
label_2122d8:
    // 0x2122d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2122d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2122dc:
    // 0x2122dc: 0x24633240  addiu       $v1, $v1, 0x3240
    ctx->pc = 0x2122dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12864));
label_2122e0:
    // 0x2122e0: 0x8f859dac  lw          $a1, -0x6254($gp)
    ctx->pc = 0x2122e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942124)));
label_2122e4:
    // 0x2122e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2122e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2122e8:
    // 0x2122e8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2122e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2122ec:
    // 0x2122ec: 0x28a50005  slti        $a1, $a1, 0x5
    ctx->pc = 0x2122ecu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
label_2122f0:
    // 0x2122f0: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x2122f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2122f4:
    // 0x2122f4: 0x10a00065  beqz        $a1, . + 4 + (0x65 << 2)
label_2122f8:
    if (ctx->pc == 0x2122F8u) {
        ctx->pc = 0x2122F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2122F4u;
        // 0x2122f8: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2122FCu;
        goto label_2122fc;
    }
    ctx->pc = 0x2122F4u;
    {
        const bool branch_taken_0x2122f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2122F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2122F4u;
        // 0x2122f8: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2122f4) {
            ctx->pc = 0x21248Cu;
            goto label_21248c;
        }
    }
    ctx->pc = 0x2122FCu;
label_2122fc:
    // 0x2122fc: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x2122fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_212300:
    // 0x212300: 0x26030034  addiu       $v1, $s0, 0x34
    ctx->pc = 0x212300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
label_212304:
    // 0x212304: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x212304u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_212308:
    // 0x212308: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x212308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_21230c:
    // 0x21230c: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x21230cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_212310:
    // 0x212310: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_212314:
    if (ctx->pc == 0x212314u) {
        ctx->pc = 0x212314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212310u;
        // 0x212314: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212318u;
        goto label_212318;
    }
    ctx->pc = 0x212310u;
    {
        const bool branch_taken_0x212310 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x212314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212310u;
        // 0x212314: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212310) {
            ctx->pc = 0x21233Cu;
            goto label_21233c;
        }
    }
    ctx->pc = 0x212318u;
label_212318:
    // 0x212318: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x212318u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_21231c:
    // 0x21231c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x21231cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_212320:
    // 0x212320: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x212320u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_212324:
    // 0x212324: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x212324u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_212328:
    // 0x212328: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x212328u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_21232c:
    // 0x21232c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x21232cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_212330:
    // 0x212330: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x212330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_212334:
    // 0x212334: 0x94430008  lhu         $v1, 0x8($v0)
    ctx->pc = 0x212334u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_212338:
    // 0x212338: 0xa6230004  sh          $v1, 0x4($s1)
    ctx->pc = 0x212338u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 3));
label_21233c:
    // 0x21233c: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x21233cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_212340:
    // 0x212340: 0x96020006  lhu         $v0, 0x6($s0)
    ctx->pc = 0x212340u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_212344:
    // 0x212344: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
label_212348:
    if (ctx->pc == 0x212348u) {
        ctx->pc = 0x212348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212344u;
        // 0x212348: 0x3062ffff  andi        $v0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21234Cu;
        goto label_21234c;
    }
    ctx->pc = 0x212344u;
    {
        const bool branch_taken_0x212344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x212348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212344u;
        // 0x212348: 0x3062ffff  andi        $v0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x212344) {
            ctx->pc = 0x212370u;
            goto label_212370;
        }
    }
    ctx->pc = 0x21234Cu;
label_21234c:
    // 0x21234c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21234cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_212350:
    // 0x212350: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x212350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_212354:
    // 0x212354: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x212354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_212358:
    // 0x212358: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_21235c:
    if (ctx->pc == 0x21235Cu) {
        ctx->pc = 0x21235Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212358u;
        // 0x21235c: 0xa6030006  sh          $v1, 0x6($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212360u;
        goto label_212360;
    }
    ctx->pc = 0x212358u;
    {
        const bool branch_taken_0x212358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x212358) {
            ctx->pc = 0x21235Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x212358u;
            // 0x21235c: 0xa6030006  sh          $v1, 0x6($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x212370u;
            goto label_212370;
        }
    }
    ctx->pc = 0x212360u;
label_212360:
    // 0x212360: 0x94420008  lhu         $v0, 0x8($v0)
    ctx->pc = 0x212360u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_212364:
    // 0x212364: 0xa6220004  sh          $v0, 0x4($s1)
    ctx->pc = 0x212364u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 2));
label_212368:
    // 0x212368: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x212368u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_21236c:
    // 0x21236c: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x21236cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
label_212370:
    // 0x212370: 0x96030008  lhu         $v1, 0x8($s0)
    ctx->pc = 0x212370u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_212374:
    // 0x212374: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x212374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_212378:
    // 0x212378: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_21237c:
    if (ctx->pc == 0x21237Cu) {
        ctx->pc = 0x21237Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212378u;
        // 0x21237c: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x212380u;
        goto label_212380;
    }
    ctx->pc = 0x212378u;
    {
        const bool branch_taken_0x212378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21237Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212378u;
        // 0x21237c: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x212378) {
            ctx->pc = 0x2123C8u;
            goto label_2123c8;
        }
    }
    ctx->pc = 0x212380u;
label_212380:
    // 0x212380: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x212380u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_212384:
    // 0x212384: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_212388:
    if (ctx->pc == 0x212388u) {
        ctx->pc = 0x212388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212384u;
        // 0x212388: 0x96020004  lhu         $v0, 0x4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21238Cu;
        goto label_21238c;
    }
    ctx->pc = 0x212384u;
    {
        const bool branch_taken_0x212384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x212384) {
            ctx->pc = 0x212388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x212384u;
            // 0x212388: 0x96020004  lhu         $v0, 0x4($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x212398u;
            goto label_212398;
        }
    }
    ctx->pc = 0x21238Cu;
label_21238c:
    // 0x21238c: 0xc083712  jal         func_20DC48
label_212390:
    if (ctx->pc == 0x212390u) {
        ctx->pc = 0x212390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21238Cu;
        // 0x212390: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212394u;
        goto label_212394;
    }
    ctx->pc = 0x21238Cu;
    SET_GPR_U32(ctx, 31, 0x212394u);
    ctx->pc = 0x212390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21238Cu;
    // 0x212390: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DC48u, 0x21238Cu, 0x212394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212394u;
label_212394:
    // 0x212394: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x212394u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_212398:
    // 0x212398: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x212398u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_21239c:
    // 0x21239c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x21239cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2123a0:
    // 0x2123a0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2123a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2123a4:
    // 0x2123a4: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_2123a8:
    if (ctx->pc == 0x2123A8u) {
        ctx->pc = 0x2123A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2123A4u;
        // 0x2123a8: 0x96030008  lhu         $v1, 0x8($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2123ACu;
        goto label_2123ac;
    }
    ctx->pc = 0x2123A4u;
    {
        const bool branch_taken_0x2123a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2123a4) {
            ctx->pc = 0x2123A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2123A4u;
            // 0x2123a8: 0x96030008  lhu         $v1, 0x8($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2123C4u;
            goto label_2123c4;
        }
    }
    ctx->pc = 0x2123ACu;
label_2123ac:
    // 0x2123ac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2123acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2123b0:
    // 0x2123b0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2123b4:
    if (ctx->pc == 0x2123B4u) {
        ctx->pc = 0x2123B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2123B0u;
        // 0x2123b4: 0x96030008  lhu         $v1, 0x8($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2123B8u;
        goto label_2123b8;
    }
    ctx->pc = 0x2123B0u;
    {
        const bool branch_taken_0x2123b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2123b0) {
            ctx->pc = 0x2123B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2123B0u;
            // 0x2123b4: 0x96030008  lhu         $v1, 0x8($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2123C4u;
            goto label_2123c4;
        }
    }
    ctx->pc = 0x2123B8u;
label_2123b8:
    // 0x2123b8: 0x40f809  jalr        $v0
label_2123bc:
    if (ctx->pc == 0x2123BCu) {
        ctx->pc = 0x2123BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2123B8u;
        // 0x2123bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2123C0u;
        goto label_2123c0;
    }
    ctx->pc = 0x2123B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2123C0u);
        ctx->pc = 0x2123BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2123B8u;
        // 0x2123bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2123B8u, 0x2123C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2123C0u;
label_2123c0:
    // 0x2123c0: 0x96030008  lhu         $v1, 0x8($s0)
    ctx->pc = 0x2123c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_2123c4:
    // 0x2123c4: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x2123c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_2123c8:
    // 0x2123c8: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_2123cc:
    if (ctx->pc == 0x2123CCu) {
        ctx->pc = 0x2123CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2123C8u;
        // 0x2123cc: 0x96040002  lhu         $a0, 0x2($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2123D0u;
        goto label_2123d0;
    }
    ctx->pc = 0x2123C8u;
    {
        const bool branch_taken_0x2123c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2123CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2123C8u;
        // 0x2123cc: 0x96040002  lhu         $a0, 0x2($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2123c8) {
            ctx->pc = 0x212444u;
            goto label_212444;
        }
    }
    ctx->pc = 0x2123D0u;
label_2123d0:
    // 0x2123d0: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x2123d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_2123d4:
    // 0x2123d4: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
label_2123d8:
    if (ctx->pc == 0x2123D8u) {
        ctx->pc = 0x2123D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2123D4u;
        // 0x2123d8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2123DCu;
        goto label_2123dc;
    }
    ctx->pc = 0x2123D4u;
    {
        const bool branch_taken_0x2123d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2123D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2123D4u;
        // 0x2123d8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2123d4) {
            ctx->pc = 0x212490u;
            goto label_212490;
        }
    }
    ctx->pc = 0x2123DCu;
label_2123dc:
    // 0x2123dc: 0x8f839dac  lw          $v1, -0x6254($gp)
    ctx->pc = 0x2123dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942124)));
label_2123e0:
    // 0x2123e0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2123e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2123e4:
    // 0x2123e4: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
label_2123e8:
    if (ctx->pc == 0x2123E8u) {
        ctx->pc = 0x2123E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2123E4u;
        // 0x2123e8: 0x8f82b234  lw          $v0, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2123ECu;
        goto label_2123ec;
    }
    ctx->pc = 0x2123E4u;
    {
        const bool branch_taken_0x2123e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2123E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2123E4u;
        // 0x2123e8: 0x8f82b234  lw          $v0, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2123e4) {
            ctx->pc = 0x212444u;
            goto label_212444;
        }
    }
    ctx->pc = 0x2123ECu;
label_2123ec:
    // 0x2123ec: 0xc080e3a  jal         func_2038E8
label_2123f0:
    if (ctx->pc == 0x2123F0u) {
        ctx->pc = 0x2123F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2123ECu;
        // 0x2123f0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2123F4u;
        goto label_2123f4;
    }
    ctx->pc = 0x2123ECu;
    SET_GPR_U32(ctx, 31, 0x2123F4u);
    ctx->pc = 0x2123F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2123ECu;
    // 0x2123f0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x2123ECu, 0x2123F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2123F4u;
label_2123f4:
    // 0x2123f4: 0x30420910  andi        $v0, $v0, 0x910
    ctx->pc = 0x2123f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2320);
label_2123f8:
    // 0x2123f8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_2123fc:
    if (ctx->pc == 0x2123FCu) {
        ctx->pc = 0x2123FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2123F8u;
        // 0x2123fc: 0x8f82b234  lw          $v0, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212400u;
        goto label_212400;
    }
    ctx->pc = 0x2123F8u;
    {
        const bool branch_taken_0x2123f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2123FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2123F8u;
        // 0x2123fc: 0x8f82b234  lw          $v0, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2123f8) {
            ctx->pc = 0x212440u;
            goto label_212440;
        }
    }
    ctx->pc = 0x212400u;
label_212400:
    // 0x212400: 0xc080e3a  jal         func_2038E8
label_212404:
    if (ctx->pc == 0x212404u) {
        ctx->pc = 0x212404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212400u;
        // 0x212404: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212408u;
        goto label_212408;
    }
    ctx->pc = 0x212400u;
    SET_GPR_U32(ctx, 31, 0x212408u);
    ctx->pc = 0x212404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212400u;
    // 0x212404: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x212400u, 0x212408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212408u;
label_212408:
    // 0x212408: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x212408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_21240c:
    // 0x21240c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_212410:
    if (ctx->pc == 0x212410u) {
        ctx->pc = 0x212410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21240Cu;
        // 0x212410: 0x8f82a004  lw          $v0, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212414u;
        goto label_212414;
    }
    ctx->pc = 0x21240Cu;
    {
        const bool branch_taken_0x21240c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21240Cu;
        // 0x212410: 0x8f82a004  lw          $v0, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21240c) {
            ctx->pc = 0x212428u;
            goto label_212428;
        }
    }
    ctx->pc = 0x212414u;
label_212414:
    // 0x212414: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x212414u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_212418:
    // 0x212418: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x212418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_21241c:
    // 0x21241c: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_212420:
    if (ctx->pc == 0x212420u) {
        ctx->pc = 0x212420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21241Cu;
        // 0x212420: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212424u;
        goto label_212424;
    }
    ctx->pc = 0x21241Cu;
    {
        const bool branch_taken_0x21241c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x212420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21241Cu;
        // 0x212420: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21241c) {
            ctx->pc = 0x212490u;
            goto label_212490;
        }
    }
    ctx->pc = 0x212424u;
label_212424:
    // 0x212424: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x212424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
label_212428:
    // 0x212428: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x212428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_21242c:
    // 0x21242c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x21242cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_212430:
    // 0x212430: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x212430u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_212434:
    // 0x212434: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x212434u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_212438:
    // 0x212438: 0x8084aba  j           func_212AE8
label_21243c:
    if (ctx->pc == 0x21243Cu) {
        ctx->pc = 0x21243Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212438u;
        // 0x21243c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212440u;
        goto label_212440;
    }
    ctx->pc = 0x212438u;
    ctx->pc = 0x21243Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212438u;
    // 0x21243c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212AE8u;
    ingamemenuExit_0x212ae8(rdram, ctx, runtime); return;
    ctx->pc = 0x212440u;
label_212440:
    // 0x212440: 0x96040002  lhu         $a0, 0x2($s0)
    ctx->pc = 0x212440u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_212444:
    // 0x212444: 0x14800012  bnez        $a0, . + 4 + (0x12 << 2)
label_212448:
    if (ctx->pc == 0x212448u) {
        ctx->pc = 0x212448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212444u;
        // 0x212448: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21244Cu;
        goto label_21244c;
    }
    ctx->pc = 0x212444u;
    {
        const bool branch_taken_0x212444 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x212448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212444u;
        // 0x212448: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212444) {
            ctx->pc = 0x212490u;
            goto label_212490;
        }
    }
    ctx->pc = 0x21244Cu;
label_21244c:
    // 0x21244c: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x21244cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
label_212450:
    // 0x212450: 0xc080e3a  jal         func_2038E8
label_212454:
    if (ctx->pc == 0x212454u) {
        ctx->pc = 0x212454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212450u;
        // 0x212454: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212458u;
        goto label_212458;
    }
    ctx->pc = 0x212450u;
    SET_GPR_U32(ctx, 31, 0x212458u);
    ctx->pc = 0x212454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212450u;
    // 0x212454: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x212450u, 0x212458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212458u;
label_212458:
    // 0x212458: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x212458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_21245c:
    // 0x21245c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_212460:
    if (ctx->pc == 0x212460u) {
        ctx->pc = 0x212460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21245Cu;
        // 0x212460: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212464u;
        goto label_212464;
    }
    ctx->pc = 0x21245Cu;
    {
        const bool branch_taken_0x21245c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21245Cu;
        // 0x212460: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21245c) {
            ctx->pc = 0x212490u;
            goto label_212490;
        }
    }
    ctx->pc = 0x212464u;
label_212464:
    // 0x212464: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x212464u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_212468:
    // 0x212468: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x212468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_21246c:
    // 0x21246c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_212470:
    if (ctx->pc == 0x212470u) {
        ctx->pc = 0x212470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21246Cu;
        // 0x212470: 0xdfb10010  ld          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212474u;
        goto label_212474;
    }
    ctx->pc = 0x21246Cu;
    {
        const bool branch_taken_0x21246c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21246Cu;
        // 0x212470: 0xdfb10010  ld          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21246c) {
            ctx->pc = 0x212494u;
            goto label_212494;
        }
    }
    ctx->pc = 0x212474u;
label_212474:
    // 0x212474: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x212474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
label_212478:
    // 0x212478: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x212478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_21247c:
    // 0x21247c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x21247cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_212480:
    // 0x212480: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x212480u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_212484:
    // 0x212484: 0x8084aba  j           func_212AE8
label_212488:
    if (ctx->pc == 0x212488u) {
        ctx->pc = 0x212488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212484u;
        // 0x212488: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21248Cu;
        goto label_21248c;
    }
    ctx->pc = 0x212484u;
    ctx->pc = 0x212488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212484u;
    // 0x212488: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212AE8u;
    ingamemenuExit_0x212ae8(rdram, ctx, runtime); return;
    ctx->pc = 0x21248Cu;
label_21248c:
    // 0x21248c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x21248cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_212490:
    // 0x212490: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x212490u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_212494:
    // 0x212494: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x212494u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_212498:
    // 0x212498: 0x3e00008  jr          $ra
label_21249c:
    if (ctx->pc == 0x21249Cu) {
        ctx->pc = 0x21249Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212498u;
        // 0x21249c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2124A0u;
        goto label_fallthrough_0x212498;
    }
    ctx->pc = 0x212498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21249Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212498u;
        // 0x21249c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x212498:
    ctx->pc = 0x2124A0u;
}
