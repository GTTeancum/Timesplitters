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

// Function: __udivdi3
// Address: 0x2e2260 - 0x2e2830
void ps2___udivdi3_0x2e2260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___udivdi3_0x2e2260");
#endif

    ctx->pc = 0x2e2260u;

    // 0x2e2260: 0x5403f  dsra32      $t0, $a1, 0
    ctx->pc = 0x2e2260u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x2e2264: 0x4583f  dsra32      $t3, $a0, 0
    ctx->pc = 0x2e2264u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x2e2268: 0x5483c  dsll32      $t1, $a1, 0
    ctx->pc = 0x2e2268u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2e226c: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x2e226cu;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x2e2270: 0x4603c  dsll32      $t4, $a0, 0
    ctx->pc = 0x2e2270u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2e2274: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x2e2274u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x2e2278: 0x150000f2  bnez        $t0, . + 4 + (0xF2 << 2)
    ctx->pc = 0x2E2278u;
    {
        const bool branch_taken_0x2e2278 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E227Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2278u;
        // 0x2e227c: 0x27bdfff0  addiu       $sp, $sp, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2278) {
            ctx->pc = 0x2E2644u;
            goto label_2e2644;
        }
    }
    ctx->pc = 0x2E2280u;
    // 0x2e2280: 0x169102b  sltu        $v0, $t3, $t1
    ctx->pc = 0x2e2280u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2e2284: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x2E2284u;
    {
        const bool branch_taken_0x2e2284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2284u;
        // 0x2e2288: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2284) {
            ctx->pc = 0x2E23D4u;
            goto label_2e23d4;
        }
    }
    ctx->pc = 0x2E228Cu;
    // 0x2e228c: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x2e228cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2e2290: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2290u;
    {
        const bool branch_taken_0x2e2290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2290u;
        // 0x2e2294: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2290) {
            ctx->pc = 0x2E22A8u;
            goto label_2e22a8;
        }
    }
    ctx->pc = 0x2E2298u;
    // 0x2e2298: 0x2d220100  sltiu       $v0, $t1, 0x100
    ctx->pc = 0x2e2298u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x2e229c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2e229cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2e22a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E22A0u;
    {
        const bool branch_taken_0x2e22a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E22A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E22A0u;
        // 0x2e22a4: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e22a0) {
            ctx->pc = 0x2E22C0u;
            goto label_2e22c0;
        }
    }
    ctx->pc = 0x2E22A8u;
label_2e22a8:
    // 0x2e22a8: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x2e22a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2e22ac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e22acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2e22b0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2e22b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2e22b4: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x2e22b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2e22b8: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x2e22b8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x2e22bc: 0x0  nop
    ctx->pc = 0x2e22bcu;
    // NOP
label_2e22c0:
    // 0x2e22c0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2e22c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2e22c4: 0xa92006  srlv        $a0, $t1, $a1
    ctx->pc = 0x2e22c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 5) & 0x1F));
    // 0x2e22c8: 0x2442b970  addiu       $v0, $v0, -0x4690
    ctx->pc = 0x2e22c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949232));
    // 0x2e22cc: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x2e22ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2e22d0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2e22d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2e22d4: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2e22d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e22d8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2e22d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2e22dc: 0xe33023  subu        $a2, $a3, $v1
    ctx->pc = 0x2e22dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2e22e0: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E22E0u;
    {
        const bool branch_taken_0x2e22e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E22E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E22E0u;
        // 0x2e22e4: 0xe61023  subu        $v0, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e22e0) {
            ctx->pc = 0x2E22FCu;
            goto label_2e22fc;
        }
    }
    ctx->pc = 0x2E22E8u;
    // 0x2e22e8: 0xcb1804  sllv        $v1, $t3, $a2
    ctx->pc = 0x2e22e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 6) & 0x1F));
    // 0x2e22ec: 0x4c1006  srlv        $v0, $t4, $v0
    ctx->pc = 0x2e22ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 2) & 0x1F));
    // 0x2e22f0: 0xc94804  sllv        $t1, $t1, $a2
    ctx->pc = 0x2e22f0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x2e22f4: 0x625825  or          $t3, $v1, $v0
    ctx->pc = 0x2e22f4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e22f8: 0xcc6004  sllv        $t4, $t4, $a2
    ctx->pc = 0x2e22f8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 6) & 0x1F));
label_2e22fc:
    // 0x2e22fc: 0x92c02  srl         $a1, $t1, 16
    ctx->pc = 0x2e22fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x2e2300: 0x3128ffff  andi        $t0, $t1, 0xFFFF
    ctx->pc = 0x2e2300u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x2e2304: 0x165001b  divu        $zero, $t3, $a1
    ctx->pc = 0x2e2304u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 11) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 11) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,11); } }
    // 0x2e2308: 0xc2402  srl         $a0, $t4, 16
    ctx->pc = 0x2e2308u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), 16));
    // 0x2e230c: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E230Cu;
    {
        const bool branch_taken_0x2e230c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e230c) {
            ctx->pc = 0x2E2310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E230Cu;
            // 0x2e2310: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2314u;
            goto label_2e2314;
        }
    }
    ctx->pc = 0x2E2314u;
label_2e2314:
    // 0x2e2314: 0x1012  mflo        $v0
    ctx->pc = 0x2e2314u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2e2318: 0x1810  mfhi        $v1
    ctx->pc = 0x2e2318u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2e231c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2e231cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2320: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2e2320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2e2324: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2e2324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2e2328: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2e2328u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2e232c: 0xe83018  mult        $a2, $a3, $t0
    ctx->pc = 0x2e232cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2e2330: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e2330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2e2334: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2e2334u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2e2338: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2E2338u;
    {
        const bool branch_taken_0x2e2338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2338) {
            ctx->pc = 0x2E233Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2338u;
            // 0x2e233c: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E236Cu;
            goto label_2e236c;
        }
    }
    ctx->pc = 0x2E2340u;
    // 0x2e2340: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2e2340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2e2344: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x2e2344u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2e2348: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E2348u;
    {
        const bool branch_taken_0x2e2348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E234Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2348u;
        // 0x2e234c: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2348) {
            ctx->pc = 0x2E2368u;
            goto label_2e2368;
        }
    }
    ctx->pc = 0x2E2350u;
    // 0x2e2350: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2e2350u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2e2354: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2354u;
    {
        const bool branch_taken_0x2e2354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2354) {
            ctx->pc = 0x2E2358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2354u;
            // 0x2e2358: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E236Cu;
            goto label_2e236c;
        }
    }
    ctx->pc = 0x2E235Cu;
    // 0x2e235c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2e235cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2e2360: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2e2360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2e2364: 0x0  nop
    ctx->pc = 0x2e2364u;
    // NOP
label_2e2368:
    // 0x2e2368: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x2e2368u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2e236c:
    // 0x2e236c: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E236Cu;
    {
        const bool branch_taken_0x2e236c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e236c) {
            ctx->pc = 0x2E2370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E236Cu;
            // 0x2e2370: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2374u;
            goto label_2e2374;
        }
    }
    ctx->pc = 0x2E2374u;
label_2e2374:
    // 0x2e2374: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x2e2374u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2e2378: 0x3184ffff  andi        $a0, $t4, 0xFFFF
    ctx->pc = 0x2e2378u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x2e237c: 0x1012  mflo        $v0
    ctx->pc = 0x2e237cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2e2380: 0x1810  mfhi        $v1
    ctx->pc = 0x2e2380u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2e2384: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e2384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2388: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2e2388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2e238c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2e238cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2e2390: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2e2390u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2e2394: 0xa83018  mult        $a2, $a1, $t0
    ctx->pc = 0x2e2394u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2e2398: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e2398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2e239c: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2e239cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2e23a0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E23A0u;
    {
        const bool branch_taken_0x2e23a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E23A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E23A0u;
        // 0x2e23a4: 0x691821  addu        $v1, $v1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e23a0) {
            ctx->pc = 0x2E23C0u;
            goto label_2e23c0;
        }
    }
    ctx->pc = 0x2E23A8u;
    // 0x2e23a8: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x2e23a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2e23ac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E23ACu;
    {
        const bool branch_taken_0x2e23ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E23B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E23ACu;
        // 0x2e23b0: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e23ac) {
            ctx->pc = 0x2E23C0u;
            goto label_2e23c0;
        }
    }
    ctx->pc = 0x2E23B4u;
    // 0x2e23b4: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2e23b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2e23b8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E23B8u;
    {
        const bool branch_taken_0x2e23b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e23b8) {
            ctx->pc = 0x2E23BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E23B8u;
            // 0x2e23bc: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E23C0u;
            goto label_2e23c0;
        }
    }
    ctx->pc = 0x2E23C0u;
label_2e23c0:
    // 0x2e23c0: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x2e23c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2e23c4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2e23c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2e23c8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2e23c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2e23cc: 0x10000110  b           . + 4 + (0x110 << 2)
    ctx->pc = 0x2E23CCu;
    {
        const bool branch_taken_0x2e23cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E23D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E23CCu;
        // 0x2e23d0: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e23cc) {
            ctx->pc = 0x2E2810u;
            goto label_2e2810;
        }
    }
    ctx->pc = 0x2E23D4u;
label_2e23d4:
    // 0x2e23d4: 0x1520000a  bnez        $t1, . + 4 + (0xA << 2)
    ctx->pc = 0x2E23D4u;
    {
        const bool branch_taken_0x2e23d4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E23D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E23D4u;
        // 0x2e23d8: 0x49102b  sltu        $v0, $v0, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e23d4) {
            ctx->pc = 0x2E2400u;
            goto label_2e2400;
        }
    }
    ctx->pc = 0x2E23DCu;
    // 0x2e23dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e23dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e23e0: 0x51200001  beql        $t1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E23E0u;
    {
        const bool branch_taken_0x2e23e0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e23e0) {
            ctx->pc = 0x2E23E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E23E0u;
            // 0x2e23e4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E23E8u;
            goto label_2e23e8;
        }
    }
    ctx->pc = 0x2E23E8u;
label_2e23e8:
    // 0x2e23e8: 0x48001b  divu        $zero, $v0, $t0
    ctx->pc = 0x2e23e8u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2e23ec: 0x1012  mflo        $v0
    ctx->pc = 0x2e23ecu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2e23f0: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2e23f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e23f4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2e23f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2e23f8: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x2e23f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2e23fc: 0x0  nop
    ctx->pc = 0x2e23fcu;
    // NOP
label_2e2400:
    // 0x2e2400: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2400u;
    {
        const bool branch_taken_0x2e2400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2400u;
        // 0x2e2404: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2400) {
            ctx->pc = 0x2E2418u;
            goto label_2e2418;
        }
    }
    ctx->pc = 0x2E2408u;
    // 0x2e2408: 0x2d220100  sltiu       $v0, $t1, 0x100
    ctx->pc = 0x2e2408u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x2e240c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2e240cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2e2410: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E2410u;
    {
        const bool branch_taken_0x2e2410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2410u;
        // 0x2e2414: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2410) {
            ctx->pc = 0x2E2430u;
            goto label_2e2430;
        }
    }
    ctx->pc = 0x2E2418u;
label_2e2418:
    // 0x2e2418: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x2e2418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2e241c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e241cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2e2420: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2e2420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2e2424: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x2e2424u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2e2428: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x2e2428u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x2e242c: 0x0  nop
    ctx->pc = 0x2e242cu;
    // NOP
label_2e2430:
    // 0x2e2430: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2e2430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2e2434: 0xa92006  srlv        $a0, $t1, $a1
    ctx->pc = 0x2e2434u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 5) & 0x1F));
    // 0x2e2438: 0x2442b970  addiu       $v0, $v0, -0x4690
    ctx->pc = 0x2e2438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949232));
    // 0x2e243c: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x2e243cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2e2440: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2e2440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2e2444: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2e2444u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e2448: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2e2448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2e244c: 0xe33023  subu        $a2, $a3, $v1
    ctx->pc = 0x2e244cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2e2450: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E2450u;
    {
        const bool branch_taken_0x2e2450 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2450u;
        // 0x2e2454: 0xe63823  subu        $a3, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2450) {
            ctx->pc = 0x2E246Cu;
            goto label_2e246c;
        }
    }
    ctx->pc = 0x2E2458u;
    // 0x2e2458: 0x1695823  subu        $t3, $t3, $t1
    ctx->pc = 0x2e2458u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x2e245c: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x2e245cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e2460: 0x94402  srl         $t0, $t1, 16
    ctx->pc = 0x2e2460u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x2e2464: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x2E2464u;
    {
        const bool branch_taken_0x2e2464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2464u;
        // 0x2e2468: 0x312affff  andi        $t2, $t1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2464) {
            ctx->pc = 0x2E2570u;
            goto label_2e2570;
        }
    }
    ctx->pc = 0x2E246Cu;
label_2e246c:
    // 0x2e246c: 0xcb1804  sllv        $v1, $t3, $a2
    ctx->pc = 0x2e246cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 6) & 0x1F));
    // 0x2e2470: 0xec1006  srlv        $v0, $t4, $a3
    ctx->pc = 0x2e2470u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 7) & 0x1F));
    // 0x2e2474: 0xc94804  sllv        $t1, $t1, $a2
    ctx->pc = 0x2e2474u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x2e2478: 0xeb3806  srlv        $a3, $t3, $a3
    ctx->pc = 0x2e2478u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 11), GPR_U32(ctx, 7) & 0x1F));
    // 0x2e247c: 0xcc6004  sllv        $t4, $t4, $a2
    ctx->pc = 0x2e247cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 6) & 0x1F));
    // 0x2e2480: 0x625825  or          $t3, $v1, $v0
    ctx->pc = 0x2e2480u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e2484: 0x94402  srl         $t0, $t1, 16
    ctx->pc = 0x2e2484u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x2e2488: 0xe8001b  divu        $zero, $a3, $t0
    ctx->pc = 0x2e2488u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x2e248c: 0x312affff  andi        $t2, $t1, 0xFFFF
    ctx->pc = 0x2e248cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x2e2490: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x2e2490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2494: 0xb2402  srl         $a0, $t3, 16
    ctx->pc = 0x2e2494u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
    // 0x2e2498: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E2498u;
    {
        const bool branch_taken_0x2e2498 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2498) {
            ctx->pc = 0x2E249Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2498u;
            // 0x2e249c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E24A0u;
            goto label_2e24a0;
        }
    }
    ctx->pc = 0x2E24A0u;
label_2e24a0:
    // 0x2e24a0: 0x140682d  daddu       $t5, $t2, $zero
    ctx->pc = 0x2e24a0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e24a4: 0x1012  mflo        $v0
    ctx->pc = 0x2e24a4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2e24a8: 0x1810  mfhi        $v1
    ctx->pc = 0x2e24a8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2e24ac: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2e24acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e24b0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2e24b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2e24b4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2e24b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2e24b8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2e24b8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2e24bc: 0xea3018  mult        $a2, $a3, $t2
    ctx->pc = 0x2e24bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2e24c0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e24c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2e24c4: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2e24c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2e24c8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2E24C8u;
    {
        const bool branch_taken_0x2e24c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e24c8) {
            ctx->pc = 0x2E24CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E24C8u;
            // 0x2e24cc: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E24FCu;
            goto label_2e24fc;
        }
    }
    ctx->pc = 0x2E24D0u;
    // 0x2e24d0: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2e24d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2e24d4: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x2e24d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2e24d8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E24D8u;
    {
        const bool branch_taken_0x2e24d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E24DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E24D8u;
        // 0x2e24dc: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e24d8) {
            ctx->pc = 0x2E24F8u;
            goto label_2e24f8;
        }
    }
    ctx->pc = 0x2E24E0u;
    // 0x2e24e0: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2e24e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2e24e4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E24E4u;
    {
        const bool branch_taken_0x2e24e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e24e4) {
            ctx->pc = 0x2E24E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E24E4u;
            // 0x2e24e8: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E24FCu;
            goto label_2e24fc;
        }
    }
    ctx->pc = 0x2E24ECu;
    // 0x2e24ec: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2e24ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2e24f0: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2e24f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2e24f4: 0x0  nop
    ctx->pc = 0x2e24f4u;
    // NOP
label_2e24f8:
    // 0x2e24f8: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x2e24f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2e24fc:
    // 0x2e24fc: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E24FCu;
    {
        const bool branch_taken_0x2e24fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e24fc) {
            ctx->pc = 0x2E2500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E24FCu;
            // 0x2e2500: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2504u;
            goto label_2e2504;
        }
    }
    ctx->pc = 0x2E2504u;
label_2e2504:
    // 0x2e2504: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x2e2504u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2e2508: 0x3164ffff  andi        $a0, $t3, 0xFFFF
    ctx->pc = 0x2e2508u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x2e250c: 0x1012  mflo        $v0
    ctx->pc = 0x2e250cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2e2510: 0x1810  mfhi        $v1
    ctx->pc = 0x2e2510u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2e2514: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e2514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2518: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2e2518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2e251c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2e251cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2e2520: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2e2520u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2e2524: 0xad3018  mult        $a2, $a1, $t5
    ctx->pc = 0x2e2524u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2e2528: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e2528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2e252c: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2e252cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2e2530: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E2530u;
    {
        const bool branch_taken_0x2e2530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2530u;
        // 0x2e2534: 0x7103c  dsll32      $v0, $a3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2530) {
            ctx->pc = 0x2E2560u;
            goto label_2e2560;
        }
    }
    ctx->pc = 0x2E2538u;
    // 0x2e2538: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2e2538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2e253c: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x2e253cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2e2540: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E2540u;
    {
        const bool branch_taken_0x2e2540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2540u;
        // 0x2e2544: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2540) {
            ctx->pc = 0x2E255Cu;
            goto label_2e255c;
        }
    }
    ctx->pc = 0x2E2548u;
    // 0x2e2548: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2e2548u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2e254c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E254Cu;
    {
        const bool branch_taken_0x2e254c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E254Cu;
        // 0x2e2550: 0x7103c  dsll32      $v0, $a3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e254c) {
            ctx->pc = 0x2E2560u;
            goto label_2e2560;
        }
    }
    ctx->pc = 0x2E2554u;
    // 0x2e2554: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2e2554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2e2558: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2e2558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_2e255c:
    // 0x2e255c: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x2e255cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
label_2e2560:
    // 0x2e2560: 0x665823  subu        $t3, $v1, $a2
    ctx->pc = 0x2e2560u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2e2564: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2e2564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2e2568: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2e2568u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2e256c: 0x456825  or          $t5, $v0, $a1
    ctx->pc = 0x2e256cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_2e2570:
    // 0x2e2570: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x2e2570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2574: 0xc2402  srl         $a0, $t4, 16
    ctx->pc = 0x2e2574u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), 16));
    // 0x2e2578: 0x165001b  divu        $zero, $t3, $a1
    ctx->pc = 0x2e2578u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 11) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 11) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,11); } }
    // 0x2e257c: 0x140402d  daddu       $t0, $t2, $zero
    ctx->pc = 0x2e257cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2580: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E2580u;
    {
        const bool branch_taken_0x2e2580 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2580) {
            ctx->pc = 0x2E2584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2580u;
            // 0x2e2584: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2588u;
            goto label_2e2588;
        }
    }
    ctx->pc = 0x2E2588u;
label_2e2588:
    // 0x2e2588: 0x1012  mflo        $v0
    ctx->pc = 0x2e2588u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2e258c: 0x1810  mfhi        $v1
    ctx->pc = 0x2e258cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2e2590: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2e2590u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2594: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2e2594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2e2598: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2e2598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2e259c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2e259cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2e25a0: 0xe83018  mult        $a2, $a3, $t0
    ctx->pc = 0x2e25a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2e25a4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e25a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2e25a8: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2e25a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2e25ac: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2E25ACu;
    {
        const bool branch_taken_0x2e25ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e25ac) {
            ctx->pc = 0x2E25B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E25ACu;
            // 0x2e25b0: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E25DCu;
            goto label_2e25dc;
        }
    }
    ctx->pc = 0x2E25B4u;
    // 0x2e25b4: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2e25b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2e25b8: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x2e25b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2e25bc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E25BCu;
    {
        const bool branch_taken_0x2e25bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E25C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E25BCu;
        // 0x2e25c0: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e25bc) {
            ctx->pc = 0x2E25D8u;
            goto label_2e25d8;
        }
    }
    ctx->pc = 0x2E25C4u;
    // 0x2e25c4: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2e25c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2e25c8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E25C8u;
    {
        const bool branch_taken_0x2e25c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e25c8) {
            ctx->pc = 0x2E25CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E25C8u;
            // 0x2e25cc: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E25DCu;
            goto label_2e25dc;
        }
    }
    ctx->pc = 0x2E25D0u;
    // 0x2e25d0: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2e25d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2e25d4: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2e25d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_2e25d8:
    // 0x2e25d8: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x2e25d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2e25dc:
    // 0x2e25dc: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E25DCu;
    {
        const bool branch_taken_0x2e25dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e25dc) {
            ctx->pc = 0x2E25E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E25DCu;
            // 0x2e25e0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E25E4u;
            goto label_2e25e4;
        }
    }
    ctx->pc = 0x2E25E4u;
label_2e25e4:
    // 0x2e25e4: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x2e25e4u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2e25e8: 0x3184ffff  andi        $a0, $t4, 0xFFFF
    ctx->pc = 0x2e25e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x2e25ec: 0x1012  mflo        $v0
    ctx->pc = 0x2e25ecu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2e25f0: 0x1810  mfhi        $v1
    ctx->pc = 0x2e25f0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2e25f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e25f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e25f8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2e25f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2e25fc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2e25fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2e2600: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2e2600u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2e2604: 0xa83018  mult        $a2, $a1, $t0
    ctx->pc = 0x2e2604u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2e2608: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e2608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2e260c: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2e260cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2e2610: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E2610u;
    {
        const bool branch_taken_0x2e2610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2610u;
        // 0x2e2614: 0x691821  addu        $v1, $v1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2610) {
            ctx->pc = 0x2E2630u;
            goto label_2e2630;
        }
    }
    ctx->pc = 0x2E2618u;
    // 0x2e2618: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x2e2618u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2e261c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E261Cu;
    {
        const bool branch_taken_0x2e261c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E261Cu;
        // 0x2e2620: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e261c) {
            ctx->pc = 0x2E2630u;
            goto label_2e2630;
        }
    }
    ctx->pc = 0x2E2624u;
    // 0x2e2624: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2e2624u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2e2628: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E2628u;
    {
        const bool branch_taken_0x2e2628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e2628) {
            ctx->pc = 0x2E262Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2628u;
            // 0x2e262c: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2630u;
            goto label_2e2630;
        }
    }
    ctx->pc = 0x2E2630u;
label_2e2630:
    // 0x2e2630: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x2e2630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2e2634: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2e2634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2e2638: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2e2638u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2e263c: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x2E263Cu;
    {
        const bool branch_taken_0x2e263c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E263Cu;
        // 0x2e2640: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e263c) {
            ctx->pc = 0x2E2818u;
            goto label_2e2818;
        }
    }
    ctx->pc = 0x2E2644u;
label_2e2644:
    // 0x2e2644: 0x168102b  sltu        $v0, $t3, $t0
    ctx->pc = 0x2e2644u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2e2648: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E2648u;
    {
        const bool branch_taken_0x2e2648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E264Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2648u;
        // 0x2e264c: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2648) {
            ctx->pc = 0x2E2658u;
            goto label_2e2658;
        }
    }
    ctx->pc = 0x2E2650u;
    // 0x2e2650: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x2E2650u;
    {
        const bool branch_taken_0x2e2650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2650u;
        // 0x2e2654: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2650) {
            ctx->pc = 0x2E2810u;
            goto label_2e2810;
        }
    }
    ctx->pc = 0x2E2658u;
label_2e2658:
    // 0x2e2658: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x2e2658u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2e265c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E265Cu;
    {
        const bool branch_taken_0x2e265c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E265Cu;
        // 0x2e2660: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e265c) {
            ctx->pc = 0x2E2678u;
            goto label_2e2678;
        }
    }
    ctx->pc = 0x2E2664u;
    // 0x2e2664: 0x2d020100  sltiu       $v0, $t0, 0x100
    ctx->pc = 0x2e2664u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x2e2668: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2e2668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2e266c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E266Cu;
    {
        const bool branch_taken_0x2e266c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E266Cu;
        // 0x2e2670: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e266c) {
            ctx->pc = 0x2E2690u;
            goto label_2e2690;
        }
    }
    ctx->pc = 0x2E2674u;
    // 0x2e2674: 0x0  nop
    ctx->pc = 0x2e2674u;
    // NOP
label_2e2678:
    // 0x2e2678: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x2e2678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2e267c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e267cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2e2680: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2e2680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2e2684: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x2e2684u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2e2688: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x2e2688u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x2e268c: 0x0  nop
    ctx->pc = 0x2e268cu;
    // NOP
label_2e2690:
    // 0x2e2690: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2e2690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2e2694: 0xa82006  srlv        $a0, $t0, $a1
    ctx->pc = 0x2e2694u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x2e2698: 0x2442b970  addiu       $v0, $v0, -0x4690
    ctx->pc = 0x2e2698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949232));
    // 0x2e269c: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x2e269cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2e26a0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2e26a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2e26a4: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2e26a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e26a8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2e26a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2e26ac: 0xe33023  subu        $a2, $a3, $v1
    ctx->pc = 0x2e26acu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2e26b0: 0x54c00009  bnel        $a2, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E26B0u;
    {
        const bool branch_taken_0x2e26b0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e26b0) {
            ctx->pc = 0x2E26B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E26B0u;
            // 0x2e26b4: 0xe63823  subu        $a3, $a3, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E26D8u;
            goto label_2e26d8;
        }
    }
    ctx->pc = 0x2E26B8u;
    // 0x2e26b8: 0x10b102b  sltu        $v0, $t0, $t3
    ctx->pc = 0x2e26b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x2e26bc: 0x14400054  bnez        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x2E26BCu;
    {
        const bool branch_taken_0x2e26bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E26C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E26BCu;
        // 0x2e26c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e26bc) {
            ctx->pc = 0x2E2810u;
            goto label_2e2810;
        }
    }
    ctx->pc = 0x2E26C4u;
    // 0x2e26c4: 0x189102b  sltu        $v0, $t4, $t1
    ctx->pc = 0x2e26c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2e26c8: 0x14400051  bnez        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x2E26C8u;
    {
        const bool branch_taken_0x2e26c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E26CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E26C8u;
        // 0x2e26cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e26c8) {
            ctx->pc = 0x2E2810u;
            goto label_2e2810;
        }
    }
    ctx->pc = 0x2E26D0u;
    // 0x2e26d0: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x2E26D0u;
    {
        const bool branch_taken_0x2e26d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E26D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E26D0u;
        // 0x2e26d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e26d0) {
            ctx->pc = 0x2E2810u;
            goto label_2e2810;
        }
    }
    ctx->pc = 0x2E26D8u;
label_2e26d8:
    // 0x2e26d8: 0xc82804  sllv        $a1, $t0, $a2
    ctx->pc = 0x2e26d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x2e26dc: 0xec2006  srlv        $a0, $t4, $a3
    ctx->pc = 0x2e26dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 7) & 0x1F));
    // 0x2e26e0: 0xe91806  srlv        $v1, $t1, $a3
    ctx->pc = 0x2e26e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 7) & 0x1F));
    // 0x2e26e4: 0xeb3806  srlv        $a3, $t3, $a3
    ctx->pc = 0x2e26e4u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 11), GPR_U32(ctx, 7) & 0x1F));
    // 0x2e26e8: 0xcb1004  sllv        $v0, $t3, $a2
    ctx->pc = 0x2e26e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 6) & 0x1F));
    // 0x2e26ec: 0x445825  or          $t3, $v0, $a0
    ctx->pc = 0x2e26ecu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2e26f0: 0xa34025  or          $t0, $a1, $v1
    ctx->pc = 0x2e26f0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x2e26f4: 0xcc6004  sllv        $t4, $t4, $a2
    ctx->pc = 0x2e26f4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 6) & 0x1F));
    // 0x2e26f8: 0xc94804  sllv        $t1, $t1, $a2
    ctx->pc = 0x2e26f8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x2e26fc: 0x83402  srl         $a2, $t0, 16
    ctx->pc = 0x2e26fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x2e2700: 0xe6001b  divu        $zero, $a3, $a2
    ctx->pc = 0x2e2700u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x2e2704: 0x3105ffff  andi        $a1, $t0, 0xFFFF
    ctx->pc = 0x2e2704u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x2e2708: 0xb2402  srl         $a0, $t3, 16
    ctx->pc = 0x2e2708u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
    // 0x2e270c: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E270Cu;
    {
        const bool branch_taken_0x2e270c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e270c) {
            ctx->pc = 0x2E2710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E270Cu;
            // 0x2e2710: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2714u;
            goto label_2e2714;
        }
    }
    ctx->pc = 0x2E2714u;
label_2e2714:
    // 0x2e2714: 0x1012  mflo        $v0
    ctx->pc = 0x2e2714u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2e2718: 0x1810  mfhi        $v1
    ctx->pc = 0x2e2718u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2e271c: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x2e271cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2720: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2e2720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2e2724: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2e2724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2e2728: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2e2728u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2e272c: 0x1453818  mult        $a3, $t2, $a1
    ctx->pc = 0x2e272cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2e2730: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e2730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2e2734: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x2e2734u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2e2738: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2E2738u;
    {
        const bool branch_taken_0x2e2738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2738) {
            ctx->pc = 0x2E273Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2738u;
            // 0x2e273c: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E276Cu;
            goto label_2e276c;
        }
    }
    ctx->pc = 0x2E2740u;
    // 0x2e2740: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2e2740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2e2744: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x2e2744u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2e2748: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E2748u;
    {
        const bool branch_taken_0x2e2748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E274Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2748u;
        // 0x2e274c: 0x254affff  addiu       $t2, $t2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2748) {
            ctx->pc = 0x2E2768u;
            goto label_2e2768;
        }
    }
    ctx->pc = 0x2E2750u;
    // 0x2e2750: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x2e2750u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2e2754: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2754u;
    {
        const bool branch_taken_0x2e2754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2754) {
            ctx->pc = 0x2E2758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2754u;
            // 0x2e2758: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E276Cu;
            goto label_2e276c;
        }
    }
    ctx->pc = 0x2E275Cu;
    // 0x2e275c: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x2e275cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x2e2760: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2e2760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2e2764: 0x0  nop
    ctx->pc = 0x2e2764u;
    // NOP
label_2e2768:
    // 0x2e2768: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x2e2768u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2e276c:
    // 0x2e276c: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E276Cu;
    {
        const bool branch_taken_0x2e276c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e276c) {
            ctx->pc = 0x2E2770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E276Cu;
            // 0x2e2770: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2774u;
            goto label_2e2774;
        }
    }
    ctx->pc = 0x2E2774u;
label_2e2774:
    // 0x2e2774: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x2e2774u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2e2778: 0x3164ffff  andi        $a0, $t3, 0xFFFF
    ctx->pc = 0x2e2778u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x2e277c: 0x1012  mflo        $v0
    ctx->pc = 0x2e277cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2e2780: 0x1810  mfhi        $v1
    ctx->pc = 0x2e2780u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2e2784: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2e2784u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2788: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2e2788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2e278c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2e278cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2e2790: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2e2790u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2e2794: 0xc53818  mult        $a3, $a2, $a1
    ctx->pc = 0x2e2794u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2e2798: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e2798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2e279c: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x2e279cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2e27a0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E27A0u;
    {
        const bool branch_taken_0x2e27a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E27A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E27A0u;
        // 0x2e27a4: 0xa103c  dsll32      $v0, $t2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e27a0) {
            ctx->pc = 0x2E27D0u;
            goto label_2e27d0;
        }
    }
    ctx->pc = 0x2E27A8u;
    // 0x2e27a8: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2e27a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2e27ac: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x2e27acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2e27b0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E27B0u;
    {
        const bool branch_taken_0x2e27b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E27B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E27B0u;
        // 0x2e27b4: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e27b0) {
            ctx->pc = 0x2E27CCu;
            goto label_2e27cc;
        }
    }
    ctx->pc = 0x2E27B8u;
    // 0x2e27b8: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x2e27b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2e27bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E27BCu;
    {
        const bool branch_taken_0x2e27bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E27C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E27BCu;
        // 0x2e27c0: 0xa103c  dsll32      $v0, $t2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e27bc) {
            ctx->pc = 0x2E27D0u;
            goto label_2e27d0;
        }
    }
    ctx->pc = 0x2E27C4u;
    // 0x2e27c4: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2e27c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2e27c8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2e27c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_2e27cc:
    // 0x2e27cc: 0xa103c  dsll32      $v0, $t2, 0
    ctx->pc = 0x2e27ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
label_2e27d0:
    // 0x2e27d0: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x2e27d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2e27d4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2e27d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2e27d8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2e27d8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2e27dc: 0x462825  or          $a1, $v0, $a2
    ctx->pc = 0x2e27dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2e27e0: 0xa90019  multu       $a1, $t1
    ctx->pc = 0x2e27e0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 5) * (uint64_t)GPR_U32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2e27e4: 0x3010  mfhi        $a2
    ctx->pc = 0x2e27e4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x2e27e8: 0x2012  mflo        $a0
    ctx->pc = 0x2e27e8u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x2e27ec: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2e27ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2e27f0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E27F0u;
    {
        const bool branch_taken_0x2e27f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e27f0) {
            ctx->pc = 0x2E27F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E27F0u;
            // 0x2e27f4: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2810u;
            goto label_2e2810;
        }
    }
    ctx->pc = 0x2E27F8u;
    // 0x2e27f8: 0x14c30007  bne         $a2, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E27F8u;
    {
        const bool branch_taken_0x2e27f8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x2E27FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E27F8u;
        // 0x2e27fc: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e27f8) {
            ctx->pc = 0x2E2818u;
            goto label_2e2818;
        }
    }
    ctx->pc = 0x2E2800u;
    // 0x2e2800: 0x184102b  sltu        $v0, $t4, $a0
    ctx->pc = 0x2e2800u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2e2804: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2804u;
    {
        const bool branch_taken_0x2e2804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2804u;
        // 0x2e2808: 0x5183c  dsll32      $v1, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2804) {
            ctx->pc = 0x2E281Cu;
            goto label_2e281c;
        }
    }
    ctx->pc = 0x2E280Cu;
    // 0x2e280c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2e280cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_2e2810:
    // 0x2e2810: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x2e2810u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2814: 0x0  nop
    ctx->pc = 0x2e2814u;
    // NOP
label_2e2818:
    // 0x2e2818: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x2e2818u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
label_2e281c:
    // 0x2e281c: 0xd103c  dsll32      $v0, $t5, 0
    ctx->pc = 0x2e281cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) << (32 + 0));
    // 0x2e2820: 0x3703e  dsrl32      $t6, $v1, 0
    ctx->pc = 0x2e2820u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2e2824: 0x1c21025  or          $v0, $t6, $v0
    ctx->pc = 0x2e2824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) | GPR_U64(ctx, 2));
    // 0x2e2828: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E282Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2828u;
        // 0x2e282c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2828u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2830u;
}
