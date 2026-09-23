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

// Function: gunUpdate
// Address: 0x2922d8 - 0x2941a4
void gunUpdate_0x2922d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gunUpdate_0x2922d8");
#endif

    switch (ctx->pc) {
        case 0x292368u: goto label_292368;
        case 0x292380u: goto label_292380;
        case 0x2924d4u: goto label_2924d4;
        case 0x2925ecu: goto label_2925ec;
        case 0x29269cu: goto label_29269c;
        case 0x292720u: goto label_292720;
        case 0x292750u: goto label_292750;
        case 0x292770u: goto label_292770;
        case 0x29277cu: goto label_29277c;
        case 0x29278cu: goto label_29278c;
        case 0x2927e8u: goto label_2927e8;
        case 0x2927f8u: goto label_2927f8;
        case 0x292854u: goto label_292854;
        case 0x292918u: goto label_292918;
        case 0x292924u: goto label_292924;
        case 0x292978u: goto label_292978;
        case 0x292988u: goto label_292988;
        case 0x2929b0u: goto label_2929b0;
        case 0x2929f0u: goto label_2929f0;
        case 0x292a18u: goto label_292a18;
        case 0x292a54u: goto label_292a54;
        case 0x292b4cu: goto label_292b4c;
        case 0x292b94u: goto label_292b94;
        case 0x292c14u: goto label_292c14;
        case 0x292c68u: goto label_292c68;
        case 0x292c90u: goto label_292c90;
        case 0x292cc0u: goto label_292cc0;
        case 0x292cecu: goto label_292cec;
        case 0x292d08u: goto label_292d08;
        case 0x292d24u: goto label_292d24;
        case 0x292d48u: goto label_292d48;
        case 0x292d98u: goto label_292d98;
        case 0x292dc8u: goto label_292dc8;
        case 0x292e00u: goto label_292e00;
        case 0x292e1cu: goto label_292e1c;
        case 0x292e74u: goto label_292e74;
        case 0x292e88u: goto label_292e88;
        case 0x292edcu: goto label_292edc;
        case 0x292eecu: goto label_292eec;
        case 0x292f24u: goto label_292f24;
        case 0x29302cu: goto label_29302c;
        case 0x293058u: goto label_293058;
        case 0x293064u: goto label_293064;
        case 0x2930c8u: goto label_2930c8;
        case 0x293128u: goto label_293128;
        case 0x293194u: goto label_293194;
        case 0x2931fcu: goto label_2931fc;
        case 0x293208u: goto label_293208;
        case 0x293224u: goto label_293224;
        case 0x29327cu: goto label_29327c;
        case 0x2932b8u: goto label_2932b8;
        case 0x293368u: goto label_293368;
        case 0x2933d0u: goto label_2933d0;
        case 0x2933f0u: goto label_2933f0;
        case 0x29340cu: goto label_29340c;
        case 0x29347cu: goto label_29347c;
        case 0x2934e8u: goto label_2934e8;
        case 0x2934f0u: goto label_2934f0;
        case 0x29357cu: goto label_29357c;
        case 0x2935e8u: goto label_2935e8;
        case 0x2935f4u: goto label_2935f4;
        case 0x293630u: goto label_293630;
        case 0x2936e4u: goto label_2936e4;
        case 0x2936f0u: goto label_2936f0;
        case 0x29372cu: goto label_29372c;
        case 0x29381cu: goto label_29381c;
        case 0x293828u: goto label_293828;
        case 0x2938c8u: goto label_2938c8;
        case 0x29390cu: goto label_29390c;
        case 0x29394cu: goto label_29394c;
        case 0x293980u: goto label_293980;
        case 0x2939ecu: goto label_2939ec;
        case 0x2939f8u: goto label_2939f8;
        case 0x293a48u: goto label_293a48;
        case 0x293aacu: goto label_293aac;
        case 0x293ab8u: goto label_293ab8;
        case 0x293b00u: goto label_293b00;
        case 0x293b0cu: goto label_293b0c;
        case 0x293b38u: goto label_293b38;
        case 0x293b80u: goto label_293b80;
        case 0x293b98u: goto label_293b98;
        case 0x293ba4u: goto label_293ba4;
        case 0x293bbcu: goto label_293bbc;
        case 0x293c84u: goto label_293c84;
        case 0x293cbcu: goto label_293cbc;
        case 0x293ce4u: goto label_293ce4;
        case 0x293d14u: goto label_293d14;
        case 0x293d28u: goto label_293d28;
        case 0x293d7cu: goto label_293d7c;
        case 0x293e1cu: goto label_293e1c;
        case 0x293e2cu: goto label_293e2c;
        case 0x293e74u: goto label_293e74;
        case 0x293e90u: goto label_293e90;
        case 0x293e98u: goto label_293e98;
        case 0x293ea8u: goto label_293ea8;
        case 0x293ec4u: goto label_293ec4;
        case 0x293eecu: goto label_293eec;
        case 0x293efcu: goto label_293efc;
        case 0x293f38u: goto label_293f38;
        case 0x293f54u: goto label_293f54;
        case 0x293f70u: goto label_293f70;
        case 0x293f8cu: goto label_293f8c;
        case 0x293fa8u: goto label_293fa8;
        case 0x294044u: goto label_294044;
        case 0x2940dcu: goto label_2940dc;
        default: break;
    }

    ctx->pc = 0x2922d8u;

    // 0x2922d8: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x2922d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
    // 0x2922dc: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x2922dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2922e0: 0xffb50160  sd          $s5, 0x160($sp)
    ctx->pc = 0x2922e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 21));
    // 0x2922e4: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x2922e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x2922e8: 0xffb30140  sd          $s3, 0x140($sp)
    ctx->pc = 0x2922e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 19));
    // 0x2922ec: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2922ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2922f0: 0xffb20130  sd          $s2, 0x130($sp)
    ctx->pc = 0x2922f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 18));
    // 0x2922f4: 0x246590f8  addiu       $a1, $v1, -0x6F08
    ctx->pc = 0x2922f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938872));
    // 0x2922f8: 0xffbf01a0  sd          $ra, 0x1A0($sp)
    ctx->pc = 0x2922f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 31));
    // 0x2922fc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2922fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292300: 0xffbe0190  sd          $fp, 0x190($sp)
    ctx->pc = 0x292300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 30));
    // 0x292304: 0xffb70180  sd          $s7, 0x180($sp)
    ctx->pc = 0x292304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 23));
    // 0x292308: 0xffb60170  sd          $s6, 0x170($sp)
    ctx->pc = 0x292308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 22));
    // 0x29230c: 0xffb40150  sd          $s4, 0x150($sp)
    ctx->pc = 0x29230cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 20));
    // 0x292310: 0xffb10120  sd          $s1, 0x120($sp)
    ctx->pc = 0x292310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 17));
    // 0x292314: 0xffb00110  sd          $s0, 0x110($sp)
    ctx->pc = 0x292314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
    // 0x292318: 0xe7b701c8  swc1        $f23, 0x1C8($sp)
    ctx->pc = 0x292318u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
    // 0x29231c: 0xe7b601c0  swc1        $f22, 0x1C0($sp)
    ctx->pc = 0x29231cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
    // 0x292320: 0xe7b501b8  swc1        $f21, 0x1B8($sp)
    ctx->pc = 0x292320u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
    // 0x292324: 0xe7b401b0  swc1        $f20, 0x1B0($sp)
    ctx->pc = 0x292324u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x292328: 0x8c430180  lw          $v1, 0x180($v0)
    ctx->pc = 0x292328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 384)));
    // 0x29232c: 0x8c740160  lw          $s4, 0x160($v1)
    ctx->pc = 0x29232cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 352)));
    // 0x292330: 0x8e820104  lw          $v0, 0x104($s4)
    ctx->pc = 0x292330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 260)));
    // 0x292334: 0x26930178  addiu       $s3, $s4, 0x178
    ctx->pc = 0x292334u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 376));
    // 0x292338: 0x2683010c  addiu       $v1, $s4, 0x10C
    ctx->pc = 0x292338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 268));
    // 0x29233c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x29233cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x292340: 0x75980b  movn        $s3, $v1, $s5
    ctx->pc = 0x292340u;
    if (GPR_U64(ctx, 21) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
    // 0x292344: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x292344u;
    {
        const bool branch_taken_0x292344 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x292348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292344u;
        // 0x292348: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292344) {
            ctx->pc = 0x292354u;
            goto label_292354;
        }
    }
    ctx->pc = 0x29234Cu;
    // 0x29234c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29234Cu;
    {
        const bool branch_taken_0x29234c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29234Cu;
        // 0x292350: 0x84570002  lh          $s7, 0x2($v0) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29234c) {
            ctx->pc = 0x292358u;
            goto label_292358;
        }
    }
    ctx->pc = 0x292354u;
label_292354:
    // 0x292354: 0x84570004  lh          $s7, 0x4($v0)
    ctx->pc = 0x292354u;
    SET_GPR_S32(ctx, 23, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_292358:
    // 0x292358: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x292358u;
    {
        const bool branch_taken_0x292358 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x292358) {
            ctx->pc = 0x292378u;
            goto label_292378;
        }
    }
    ctx->pc = 0x292360u;
    // 0x292360: 0xc0a542e  jal         func_2950B8
    ctx->pc = 0x292360u;
    SET_GPR_U32(ctx, 31, 0x292368u);
    ctx->pc = 0x292364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292360u;
    // 0x292364: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2950B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2950B8u, 0x292360u, 0x292368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292368u;
label_292368:
    // 0x292368: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x292368u;
    {
        const bool branch_taken_0x292368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29236Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292368u;
        // 0x29236c: 0x8f84b460  lw          $a0, -0x4BA0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292368) {
            ctx->pc = 0x292388u;
            goto label_292388;
        }
    }
    ctx->pc = 0x292370u;
    // 0x292370: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x292370u;
    {
        const bool branch_taken_0x292370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292370u;
        // 0x292374: 0x8e430094  lw          $v1, 0x94($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292370) {
            ctx->pc = 0x292394u;
            goto label_292394;
        }
    }
    ctx->pc = 0x292378u;
label_292378:
    // 0x292378: 0xc0a5432  jal         func_2950C8
    ctx->pc = 0x292378u;
    SET_GPR_U32(ctx, 31, 0x292380u);
    ctx->pc = 0x29237Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292378u;
    // 0x29237c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2950C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2950C8u, 0x292378u, 0x292380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292380u;
label_292380:
    // 0x292380: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x292380u;
    {
        const bool branch_taken_0x292380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x292384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292380u;
        // 0x292384: 0x8f84b460  lw          $a0, -0x4BA0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292380) {
            ctx->pc = 0x292390u;
            goto label_292390;
        }
    }
    ctx->pc = 0x292388u;
label_292388:
    // 0x292388: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x292388u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29238c: 0x8f84b460  lw          $a0, -0x4BA0($gp)
    ctx->pc = 0x29238cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
label_292390:
    // 0x292390: 0x8e430094  lw          $v1, 0x94($s2)
    ctx->pc = 0x292390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
label_292394:
    // 0x292394: 0x8e50000c  lw          $s0, 0xC($s2)
    ctx->pc = 0x292394u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x292398: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x292398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x29239c: 0xae430094  sw          $v1, 0x94($s2)
    ctx->pc = 0x29239cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 3));
    // 0x2923a0: 0x8e620044  lw          $v0, 0x44($s3)
    ctx->pc = 0x2923a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x2923a4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2923a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2923a8: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2923A8u;
    {
        const bool branch_taken_0x2923a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2923ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2923A8u;
        // 0x2923ac: 0xae620044  sw          $v0, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2923a8) {
            ctx->pc = 0x2923C0u;
            goto label_2923c0;
        }
    }
    ctx->pc = 0x2923B0u;
    // 0x2923b0: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x2923b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2923b4: 0x94620124  lhu         $v0, 0x124($v1)
    ctx->pc = 0x2923b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 292)));
    // 0x2923b8: 0x3042fffe  andi        $v0, $v0, 0xFFFE
    ctx->pc = 0x2923b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65534);
    // 0x2923bc: 0xa4620124  sh          $v0, 0x124($v1)
    ctx->pc = 0x2923bcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 292), (uint16_t)GPR_U32(ctx, 2));
label_2923c0:
    // 0x2923c0: 0x8e620040  lw          $v0, 0x40($s3)
    ctx->pc = 0x2923c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x2923c4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2923C4u;
    {
        const bool branch_taken_0x2923c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2923c4) {
            ctx->pc = 0x2923C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2923C4u;
            // 0x2923c8: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2923E0u;
            goto label_2923e0;
        }
    }
    ctx->pc = 0x2923CCu;
    // 0x2923cc: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x2923ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2923d0: 0x94620124  lhu         $v0, 0x124($v1)
    ctx->pc = 0x2923d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 292)));
    // 0x2923d4: 0x3042fffc  andi        $v0, $v0, 0xFFFC
    ctx->pc = 0x2923d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65532);
    // 0x2923d8: 0xa4620124  sh          $v0, 0x124($v1)
    ctx->pc = 0x2923d8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 292), (uint16_t)GPR_U32(ctx, 2));
    // 0x2923dc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2923dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2923e0:
    // 0x2923e0: 0x10600096  beqz        $v1, . + 4 + (0x96 << 2)
    ctx->pc = 0x2923E0u;
    {
        const bool branch_taken_0x2923e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2923E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2923E0u;
        // 0x2923e4: 0x2c620014  sltiu       $v0, $v1, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2923e0) {
            ctx->pc = 0x29263Cu;
            goto label_29263c;
        }
    }
    ctx->pc = 0x2923E8u;
    // 0x2923e8: 0x12000093  beqz        $s0, . + 4 + (0x93 << 2)
    ctx->pc = 0x2923E8u;
    {
        const bool branch_taken_0x2923e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2923ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2923E8u;
        // 0x2923ec: 0x8f829da8  lw          $v0, -0x6258($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2923e8) {
            ctx->pc = 0x292638u;
            goto label_292638;
        }
    }
    ctx->pc = 0x2923F0u;
    // 0x2923f0: 0x24040190  addiu       $a0, $zero, 0x190
    ctx->pc = 0x2923f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x2923f4: 0x8f83b460  lw          $v1, -0x4BA0($gp)
    ctx->pc = 0x2923f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
    // 0x2923f8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2923f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2923fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2923fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x292400: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x292400u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x292404: 0xc7828bc0  lwc1        $f2, -0x7440($gp)
    ctx->pc = 0x292404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x292408: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x292408u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29240c: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x29240cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x292410: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x292410u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x292414: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x292414u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x292418: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x292418u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x29241c: 0xc7848bc4  lwc1        $f4, -0x743C($gp)
    ctx->pc = 0x29241cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x292420: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x292420u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x292424: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x292424u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x292428: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x292428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x29242c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x29242cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x292430: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x292430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x292434: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x292434u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x292438: 0xc42018  mult        $a0, $a2, $a0
    ctx->pc = 0x292438u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x29243c: 0x0  nop
    ctx->pc = 0x29243cu;
    // NOP
    // 0x292440: 0x0  nop
    ctx->pc = 0x292440u;
    // NOP
    // 0x292444: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x292444u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[3];
    // 0x292448: 0x24426218  addiu       $v0, $v0, 0x6218
    ctx->pc = 0x292448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25112));
    // 0x29244c: 0x24a55c60  addiu       $a1, $a1, 0x5C60
    ctx->pc = 0x29244cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23648));
    // 0x292450: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x292450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x292454: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x292454u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x292458: 0x0  nop
    ctx->pc = 0x292458u;
    // NOP
    // 0x29245c: 0x0  nop
    ctx->pc = 0x29245cu;
    // NOP
    // 0x292460: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x292460u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x292464: 0x82b021  addu        $s6, $a0, $v0
    ctx->pc = 0x292464u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x292468: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x292468u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x29246c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x29246cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x292470: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x292470u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x292474: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x292474u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x292478: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x292478u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x29247c: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x29247cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x292480: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x292480u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x292484: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x292484u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x292488: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x292488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x29248c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29248cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x292490: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x292490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x292494: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x292494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x292498: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x292498u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29249c: 0xc4540000  lwc1        $f20, 0x0($v0)
    ctx->pc = 0x29249cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2924a0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2924a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2924a4: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x2924A4u;
    {
        const bool branch_taken_0x2924a4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2924A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2924A4u;
        // 0x2924a8: 0xc4600000  lwc1        $f0, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2924a4) {
            ctx->pc = 0x2924B4u;
            goto label_2924b4;
        }
    }
    ctx->pc = 0x2924ACu;
    // 0x2924ac: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2924acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2924b0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2924b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_2924b4:
    // 0x2924b4: 0x46142836  c.le.s      $f5, $f20
    ctx->pc = 0x2924b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2924b8: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x2924B8u;
    {
        const bool branch_taken_0x2924b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2924b8) {
            ctx->pc = 0x292520u;
            goto label_292520;
        }
    }
    ctx->pc = 0x2924C0u;
    // 0x2924c0: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x2924c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2924c4: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x2924C4u;
    {
        const bool branch_taken_0x2924c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2924c4) {
            ctx->pc = 0x292520u;
            goto label_292520;
        }
    }
    ctx->pc = 0x2924CCu;
    // 0x2924cc: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2924CCu;
    SET_GPR_U32(ctx, 31, 0x2924D4u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2924CCu, 0x2924D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2924D4u;
label_2924d4:
    // 0x2924d4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2924D4u;
    {
        const bool branch_taken_0x2924d4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2924D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2924D4u;
        // 0x2924d8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2924d4) {
            ctx->pc = 0x2924E8u;
            goto label_2924e8;
        }
    }
    ctx->pc = 0x2924DCu;
    // 0x2924dc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2924dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2924e0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2924E0u;
    {
        const bool branch_taken_0x2924e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2924E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2924E0u;
        // 0x2924e4: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2924e0) {
            ctx->pc = 0x2924FCu;
            goto label_2924fc;
        }
    }
    ctx->pc = 0x2924E8u;
label_2924e8:
    // 0x2924e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2924e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2924ec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2924ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2924f0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2924f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2924f4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2924f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2924f8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2924f8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2924fc:
    // 0x2924fc: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2924fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x292500: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x292500u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x292504: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x292504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x292508: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x292508u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29250c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x29250cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x292510: 0x8e50000c  lw          $s0, 0xC($s2)
    ctx->pc = 0x292510u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x292514: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x292514u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x292518: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x292518u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29251c: 0xe6400040  swc1        $f0, 0x40($s2)
    ctx->pc = 0x29251cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
label_292520:
    // 0x292520: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x292520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x292524: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x292524u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x292528: 0xc6410040  lwc1        $f1, 0x40($s2)
    ctx->pc = 0x292528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29252c: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x29252cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x292530: 0x8f91b234  lw          $s1, -0x4DCC($gp)
    ctx->pc = 0x292530u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x292534: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x292534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292538: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x292538u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29253c: 0xc481018c  lwc1        $f1, 0x18C($a0)
    ctx->pc = 0x29253cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x292540: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x292540u;
    {
        const bool branch_taken_0x292540 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x292544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292540u;
        // 0x292544: 0x4600adc2  mul.s       $f23, $f21, $f0 (Delay Slot)
        ctx->f[23] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x292540) {
            ctx->pc = 0x292554u;
            goto label_292554;
        }
    }
    ctx->pc = 0x292548u;
    // 0x292548: 0xc6c00020  lwc1        $f0, 0x20($s6)
    ctx->pc = 0x292548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29254c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29254Cu;
    {
        const bool branch_taken_0x29254c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29254Cu;
        // 0x292550: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29254c) {
            ctx->pc = 0x292558u;
            goto label_292558;
        }
    }
    ctx->pc = 0x292554u;
label_292554:
    // 0x292554: 0xc6c00020  lwc1        $f0, 0x20($s6)
    ctx->pc = 0x292554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_292558:
    // 0x292558: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x292558u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29255c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x29255cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x292560: 0xc4800190  lwc1        $f0, 0x190($a0)
    ctx->pc = 0x292560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x292564: 0x24c2fff2  addiu       $v0, $a2, -0xE
    ctx->pc = 0x292564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967282));
    // 0x292568: 0xc6c10024  lwc1        $f1, 0x24($s6)
    ctx->pc = 0x292568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29256c: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x29256cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x292570: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x292570u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x292574: 0xe6010034  swc1        $f1, 0x34($s0)
    ctx->pc = 0x292574u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x292578: 0xc6c00028  lwc1        $f0, 0x28($s6)
    ctx->pc = 0x292578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29257c: 0xc4810194  lwc1        $f1, 0x194($a0)
    ctx->pc = 0x29257cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x292580: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x292580u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x292584: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x292584u;
    {
        const bool branch_taken_0x292584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x292588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292584u;
        // 0x292588: 0xe6000038  swc1        $f0, 0x38($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x292584) {
            ctx->pc = 0x292598u;
            goto label_292598;
        }
    }
    ctx->pc = 0x29258Cu;
    // 0x29258c: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x29258cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x292590: 0x54c20004  bnel        $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x292590u;
    {
        const bool branch_taken_0x292590 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x292590) {
            ctx->pc = 0x292594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292590u;
            // 0x292594: 0xc4820104  lwc1        $f2, 0x104($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2925A4u;
            goto label_2925a4;
        }
    }
    ctx->pc = 0x292598u;
label_292598:
    // 0x292598: 0xc7848bc8  lwc1        $f4, -0x7438($gp)
    ctx->pc = 0x292598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x29259c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x29259Cu;
    {
        const bool branch_taken_0x29259c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2925A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29259Cu;
        // 0x2925a0: 0xc4820104  lwc1        $f2, 0x104($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29259c) {
            ctx->pc = 0x2925ACu;
            goto label_2925ac;
        }
    }
    ctx->pc = 0x2925A4u;
label_2925a4:
    // 0x2925a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2925a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2925a8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2925a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_2925ac:
    // 0x2925ac: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x2925acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x2925b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2925b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2925b4: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x2925b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x2925b8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2925b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2925bc: 0x0  nop
    ctx->pc = 0x2925bcu;
    // NOP
    // 0x2925c0: 0x0  nop
    ctx->pc = 0x2925c0u;
    // NOP
    // 0x2925c4: 0x46011543  div.s       $f21, $f2, $f1
    ctx->pc = 0x2925c4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[21] = ctx->f[2] / ctx->f[1];
    // 0x2925c8: 0xc4800330  lwc1        $f0, 0x330($a0)
    ctx->pc = 0x2925c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2925cc: 0x46032502  mul.s       $f20, $f4, $f3
    ctx->pc = 0x2925ccu;
    ctx->f[20] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x2925d0: 0xc641003c  lwc1        $f1, 0x3C($s2)
    ctx->pc = 0x2925d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2925d4: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2925d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2925d8: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2925d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2925dc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2925dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2925e0: 0xe6010048  swc1        $f1, 0x48($s0)
    ctx->pc = 0x2925e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x2925e4: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x2925E4u;
    SET_GPR_U32(ctx, 31, 0x2925ECu);
    ctx->pc = 0x2925E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2925E4u;
    // 0x2925e8: 0xc496032c  lwc1        $f22, 0x32C($a0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x2925E4u, 0x2925ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2925ECu;
label_2925ec:
    // 0x2925ec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2925ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2925f0: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2925F0u;
    {
        const bool branch_taken_0x2925f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2925f0) {
            ctx->pc = 0x2925F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2925F0u;
            // 0x2925f4: 0x4616a002  mul.s       $f0, $f20, $f22 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x29260Cu;
            goto label_29260c;
        }
    }
    ctx->pc = 0x2925F8u;
    // 0x2925f8: 0x4614a000  add.s       $f0, $f20, $f20
    ctx->pc = 0x2925f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
    // 0x2925fc: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2925fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x292600: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x292600u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x292604: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x292604u;
    {
        const bool branch_taken_0x292604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292604u;
        // 0x292608: 0x46160002  mul.s       $f0, $f0, $f22 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x292604) {
            ctx->pc = 0x292614u;
            goto label_292614;
        }
    }
    ctx->pc = 0x29260Cu;
label_29260c:
    // 0x29260c: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x29260cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x292610: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x292610u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_292614:
    // 0x292614: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x292614u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x292618: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x292618u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29261c: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x29261cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
    // 0x292620: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x292620u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x292624: 0xe601004c  swc1        $f1, 0x4C($s0)
    ctx->pc = 0x292624u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x292628: 0x4600b800  add.s       $f0, $f23, $f0
    ctx->pc = 0x292628u;
    ctx->f[0] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
    // 0x29262c: 0x8e50000c  lw          $s0, 0xC($s2)
    ctx->pc = 0x29262cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x292630: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x292630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x292634: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x292634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
label_292638:
    // 0x292638: 0x2c620014  sltiu       $v0, $v1, 0x14
    ctx->pc = 0x292638u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
label_29263c:
    // 0x29263c: 0x104006bd  beqz        $v0, . + 4 + (0x6BD << 2)
    ctx->pc = 0x29263Cu;
    {
        const bool branch_taken_0x29263c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x292640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29263Cu;
        // 0x292640: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29263c) {
            ctx->pc = 0x294134u;
            goto label_294134;
        }
    }
    ctx->pc = 0x292644u;
    // 0x292644: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x292644u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x292648: 0x24428dc0  addiu       $v0, $v0, -0x7240
    ctx->pc = 0x292648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938048));
    // 0x29264c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x29264cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x292650: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x292650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x292654: 0x800008  jr          $a0
    ctx->pc = 0x292654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29265Cu: goto label_29265c;
            case 0x292F00u: goto label_292f00;
            case 0x293284u: goto label_293284;
            case 0x29330Cu: goto label_29330c;
            case 0x293414u: goto label_293414;
            case 0x293508u: goto label_293508;
            case 0x2935A0u: goto label_2935a0;
            case 0x293654u: goto label_293654;
            case 0x293774u: goto label_293774;
            case 0x293874u: goto label_293874;
            case 0x293988u: goto label_293988;
            case 0x293A50u: goto label_293a50;
            case 0x293B18u: goto label_293b18;
            case 0x293BF0u: goto label_293bf0;
            case 0x293D30u: goto label_293d30;
            case 0x293DC0u: goto label_293dc0;
            case 0x293ECCu: goto label_293ecc;
            case 0x293FCCu: goto label_293fcc;
            case 0x294074u: goto label_294074;
            case 0x294134u: goto label_294134;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292654u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29265Cu;
label_29265c:
    // 0x29265c: 0x6e00012  bltz        $s7, . + 4 + (0x12 << 2)
    ctx->pc = 0x29265Cu;
    {
        const bool branch_taken_0x29265c = (GPR_S32(ctx, 23) < 0);
        ctx->pc = 0x292660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29265Cu;
        // 0x292660: 0x8f82b234  lw          $v0, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29265c) {
            ctx->pc = 0x2926A8u;
            goto label_2926a8;
        }
    }
    ctx->pc = 0x292664u;
    // 0x292664: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x292664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x292668: 0x8c440128  lw          $a0, 0x128($v0)
    ctx->pc = 0x292668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 296)));
    // 0x29266c: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x29266Cu;
    {
        const bool branch_taken_0x29266c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x292670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29266Cu;
        // 0x292670: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29266c) {
            ctx->pc = 0x2926A8u;
            goto label_2926a8;
        }
    }
    ctx->pc = 0x292674u;
    // 0x292674: 0x1082000c  beq         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x292674u;
    {
        const bool branch_taken_0x292674 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x292678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292674u;
        // 0x292678: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292674) {
            ctx->pc = 0x2926A8u;
            goto label_2926a8;
        }
    }
    ctx->pc = 0x29267Cu;
    // 0x29267c: 0xae770000  sw          $s7, 0x0($s3)
    ctx->pc = 0x29267cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 23));
    // 0x292680: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x292680u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x292684: 0x8e820104  lw          $v0, 0x104($s4)
    ctx->pc = 0x292684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 260)));
    // 0x292688: 0xae820108  sw          $v0, 0x108($s4)
    ctx->pc = 0x292688u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 264), GPR_U32(ctx, 2));
    // 0x29268c: 0x120006b5  beqz        $s0, . + 4 + (0x6B5 << 2)
    ctx->pc = 0x29268Cu;
    {
        const bool branch_taken_0x29268c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x292690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29268Cu;
        // 0x292690: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29268c) {
            ctx->pc = 0x294164u;
            goto label_294164;
        }
    }
    ctx->pc = 0x292694u;
    // 0x292694: 0xc09a4d0  jal         func_269340
    ctx->pc = 0x292694u;
    SET_GPR_U32(ctx, 31, 0x29269Cu);
    ctx->pc = 0x292698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292694u;
    // 0x292698: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269340u, 0x292694u, 0x29269Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29269Cu;
label_29269c:
    // 0x29269c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x29269cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2926a0: 0x100006a4  b           . + 4 + (0x6A4 << 2)
    ctx->pc = 0x2926A0u;
    {
        const bool branch_taken_0x2926a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2926A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2926A0u;
        // 0x2926a4: 0xae40000c  sw          $zero, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2926a0) {
            ctx->pc = 0x294134u;
            goto label_294134;
        }
    }
    ctx->pc = 0x2926A8u;
label_2926a8:
    // 0x2926a8: 0x16a006a2  bnez        $s5, . + 4 + (0x6A2 << 2)
    ctx->pc = 0x2926A8u;
    {
        const bool branch_taken_0x2926a8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x2926ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2926A8u;
        // 0x2926ac: 0x8f91b234  lw          $s1, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2926a8) {
            ctx->pc = 0x294134u;
            goto label_294134;
        }
    }
    ctx->pc = 0x2926B0u;
    // 0x2926b0: 0x241701d1  addiu       $s7, $zero, 0x1D1
    ctx->pc = 0x2926b0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 465));
    // 0x2926b4: 0x240501f7  addiu       $a1, $zero, 0x1F7
    ctx->pc = 0x2926b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 503));
    // 0x2926b8: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x2926b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2926bc: 0x8e350180  lw          $s5, 0x180($s1)
    ctx->pc = 0x2926bcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x2926c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2926c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2926c4: 0x8e260128  lw          $a2, 0x128($s1)
    ctx->pc = 0x2926c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
    // 0x2926c8: 0x8ea20020  lw          $v0, 0x20($s5)
    ctx->pc = 0x2926c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x2926cc: 0x24c3fffa  addiu       $v1, $a2, -0x6
    ctx->pc = 0x2926ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967290));
    // 0x2926d0: 0x8c440058  lw          $a0, 0x58($v0)
    ctx->pc = 0x2926d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2926d4: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x2926d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2926d8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2926d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2926dc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2926dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2926e0: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2926E0u;
    {
        const bool branch_taken_0x2926e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2926E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2926E0u;
        // 0x2926e4: 0xa2b80a  movz        $s7, $a1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2926e0) {
            ctx->pc = 0x2926FCu;
            goto label_2926fc;
        }
    }
    ctx->pc = 0x2926E8u;
    // 0x2926e8: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x2926e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x2926ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2926ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2926f0: 0xe6200110  swc1        $f0, 0x110($s1)
    ctx->pc = 0x2926f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 272), bits); }
    // 0x2926f4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2926F4u;
    {
        const bool branch_taken_0x2926f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2926F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2926F4u;
        // 0x2926f8: 0xe620010c  swc1        $f0, 0x10C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 268), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2926f4) {
            ctx->pc = 0x292730u;
            goto label_292730;
        }
    }
    ctx->pc = 0x2926FCu;
label_2926fc:
    // 0x2926fc: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2926fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x292700: 0x14c2000b  bne         $a2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x292700u;
    {
        const bool branch_taken_0x292700 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x292700) {
            ctx->pc = 0x292730u;
            goto label_292730;
        }
    }
    ctx->pc = 0x292708u;
    // 0x292708: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x292708u;
    {
        const bool branch_taken_0x292708 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x29270Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292708u;
        // 0x29270c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292708) {
            ctx->pc = 0x292718u;
            goto label_292718;
        }
    }
    ctx->pc = 0x292710u;
    // 0x292710: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x292710u;
    {
        const bool branch_taken_0x292710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292710u;
        // 0x292714: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292710) {
            ctx->pc = 0x292730u;
            goto label_292730;
        }
    }
    ctx->pc = 0x292718u;
label_292718:
    // 0x292718: 0xc085608  jal         func_215820
    ctx->pc = 0x292718u;
    SET_GPR_U32(ctx, 31, 0x292720u);
    ctx->pc = 0x29271Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292718u;
    // 0x29271c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x292718u, 0x292720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292720u;
label_292720:
    // 0x292720: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x292720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x292724: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x292724u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292728: 0x8f91b234  lw          $s1, -0x4DCC($gp)
    ctx->pc = 0x292728u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x29272c: 0x62380a  movz        $a3, $v1, $v0
    ctx->pc = 0x29272cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
label_292730:
    // 0x292730: 0x10e0001f  beqz        $a3, . + 4 + (0x1F << 2)
    ctx->pc = 0x292730u;
    {
        const bool branch_taken_0x292730 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x292730) {
            ctx->pc = 0x2927B0u;
            goto label_2927b0;
        }
    }
    ctx->pc = 0x292738u;
    // 0x292738: 0x8ea30160  lw          $v1, 0x160($s5)
    ctx->pc = 0x292738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 352)));
    // 0x29273c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x29273cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x292740: 0x8c7011b4  lw          $s0, 0x11B4($v1)
    ctx->pc = 0x292740u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4532)));
    // 0x292744: 0x8e020160  lw          $v0, 0x160($s0)
    ctx->pc = 0x292744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x292748: 0xc080e18  jal         func_203860
    ctx->pc = 0x292748u;
    SET_GPR_U32(ctx, 31, 0x292750u);
    ctx->pc = 0x29274Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292748u;
    // 0x29274c: 0x8c510064  lw          $s1, 0x64($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203860u, 0x292748u, 0x292750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292750u;
label_292750:
    // 0x292750: 0x8f84b234  lw          $a0, -0x4DCC($gp)
    ctx->pc = 0x292750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x292754: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x292754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x292758: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x292758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x29275c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x29275Cu;
    {
        const bool branch_taken_0x29275c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x292760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29275Cu;
        // 0x292760: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29275c) {
            ctx->pc = 0x292784u;
            goto label_292784;
        }
    }
    ctx->pc = 0x292764u;
    // 0x292764: 0x8c890000  lw          $t1, 0x0($a0)
    ctx->pc = 0x292764u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x292768: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x292768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29276c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29276cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_292770:
    // 0x292770: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x292770u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292774: 0xc0a4004  jal         func_290010
    ctx->pc = 0x292774u;
    SET_GPR_U32(ctx, 31, 0x29277Cu);
    ctx->pc = 0x292778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292774u;
    // 0x292778: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290010u, 0x292774u, 0x29277Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29277Cu;
label_29277c:
    // 0x29277c: 0x1000066d  b           . + 4 + (0x66D << 2)
    ctx->pc = 0x29277Cu;
    {
        const bool branch_taken_0x29277c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29277Cu;
        // 0x292780: 0x8e50000c  lw          $s0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29277c) {
            ctx->pc = 0x294134u;
            goto label_294134;
        }
    }
    ctx->pc = 0x292784u;
label_292784:
    // 0x292784: 0xc080e18  jal         func_203860
    ctx->pc = 0x292784u;
    SET_GPR_U32(ctx, 31, 0x29278Cu);
    ctx->pc = 0x292788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292784u;
    // 0x292788: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203860u, 0x292784u, 0x29278Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29278Cu;
label_29278c:
    // 0x29278c: 0x8f89b234  lw          $t1, -0x4DCC($gp)
    ctx->pc = 0x29278cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x292790: 0x8d230020  lw          $v1, 0x20($t1)
    ctx->pc = 0x292790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x292794: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x292794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x292798: 0x10400665  beqz        $v0, . + 4 + (0x665 << 2)
    ctx->pc = 0x292798u;
    {
        const bool branch_taken_0x292798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29279Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292798u;
        // 0x29279c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292798) {
            ctx->pc = 0x294130u;
            goto label_294130;
        }
    }
    ctx->pc = 0x2927A0u;
    // 0x2927a0: 0x8d290000  lw          $t1, 0x0($t1)
    ctx->pc = 0x2927a0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2927a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2927a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2927a8: 0x1000fff1  b           . + 4 + (-0xF << 2)
    ctx->pc = 0x2927A8u;
    {
        const bool branch_taken_0x2927a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2927ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2927A8u;
        // 0x2927ac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2927a8) {
            ctx->pc = 0x292770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_292770;
        }
    }
    ctx->pc = 0x2927B0u;
label_2927b0:
    // 0x2927b0: 0x5600002a  bnel        $s0, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x2927B0u;
    {
        const bool branch_taken_0x2927b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2927b0) {
            ctx->pc = 0x2927B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2927B0u;
            // 0x2927b4: 0xc6a1004c  lwc1        $f1, 0x4C($s5) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x29285Cu;
            goto label_29285c;
        }
    }
    ctx->pc = 0x2927B8u;
    // 0x2927b8: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x2927b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2927bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2927bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2927c0: 0x86840004  lh          $a0, 0x4($s4)
    ctx->pc = 0x2927c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2927c4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2927c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2927c8: 0xc6ac0030  lwc1        $f12, 0x30($s5)
    ctx->pc = 0x2927c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2927cc: 0x24e70068  addiu       $a3, $a3, 0x68
    ctx->pc = 0x2927ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 104));
    // 0x2927d0: 0xc6ad0034  lwc1        $f13, 0x34($s5)
    ctx->pc = 0x2927d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2927d4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2927d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2927d8: 0xc6ae0038  lwc1        $f14, 0x38($s5)
    ctx->pc = 0x2927d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2927dc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2927dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2927e0: 0xc0a1f30  jal         func_287CC0
    ctx->pc = 0x2927E0u;
    SET_GPR_U32(ctx, 31, 0x2927E8u);
    ctx->pc = 0x2927E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2927E0u;
    // 0x2927e4: 0xc6af004c  lwc1        $f15, 0x4C($s5) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x287CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287CC0u, 0x2927E0u, 0x2927E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2927E8u;
label_2927e8:
    // 0x2927e8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2927e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2927ec: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x2927ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x2927f0: 0xc09a4f2  jal         func_2693C8
    ctx->pc = 0x2927F0u;
    SET_GPR_U32(ctx, 31, 0x2927F8u);
    ctx->pc = 0x2927F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2927F0u;
    // 0x2927f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2693C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2693C8u, 0x2927F0u, 0x2927F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2927F8u;
label_2927f8:
    // 0x2927f8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2927f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2927fc: 0x8f89b234  lw          $t1, -0x4DCC($gp)
    ctx->pc = 0x2927fcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x292800: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x292800u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x292804: 0x3c0a4000  lui         $t2, 0x4000
    ctx->pc = 0x292804u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16384 << 16));
    // 0x292808: 0x8e670020  lw          $a3, 0x20($s3)
    ctx->pc = 0x292808u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x29280c: 0x3c080100  lui         $t0, 0x100
    ctx->pc = 0x29280cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)256 << 16));
    // 0x292810: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x292810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x292814: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x292814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x292818: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x292818u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x29281c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x29281cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292820: 0x244200c9  addiu       $v0, $v0, 0xC9
    ctx->pc = 0x292820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 201));
    // 0x292824: 0x94e30124  lhu         $v1, 0x124($a3)
    ctx->pc = 0x292824u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 292)));
    // 0x292828: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x292828u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
    // 0x29282c: 0xca3025  or          $a2, $a2, $t2
    ctx->pc = 0x29282cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 10));
    // 0x292830: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x292830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x292834: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x292834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x292838: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x292838u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x29283c: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x29283cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x292840: 0xa4e30124  sh          $v1, 0x124($a3)
    ctx->pc = 0x292840u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 292), (uint16_t)GPR_U32(ctx, 3));
    // 0x292844: 0x484004  sllv        $t0, $t0, $v0
    ctx->pc = 0x292844u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x292848: 0xc83025  or          $a2, $a2, $t0
    ctx->pc = 0x292848u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x29284c: 0xc09829e  jal         func_260A78
    ctx->pc = 0x29284Cu;
    SET_GPR_U32(ctx, 31, 0x292854u);
    ctx->pc = 0x292850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29284Cu;
    // 0x292850: 0xae660010  sw          $a2, 0x10($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260A78u, 0x29284Cu, 0x292854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292854u;
label_292854:
    // 0x292854: 0x8f91b234  lw          $s1, -0x4DCC($gp)
    ctx->pc = 0x292854u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x292858: 0xc6a1004c  lwc1        $f1, 0x4C($s5)
    ctx->pc = 0x292858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29285c:
    // 0x29285c: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x29285cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x292860: 0x8e760160  lw          $s6, 0x160($s3)
    ctx->pc = 0x292860u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 352)));
    // 0x292864: 0xe661004c  swc1        $f1, 0x4C($s3)
    ctx->pc = 0x292864u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 76), bits); }
    // 0x292868: 0xc6a00050  lwc1        $f0, 0x50($s5)
    ctx->pc = 0x292868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29286c: 0xe6600050  swc1        $f0, 0x50($s3)
    ctx->pc = 0x29286cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 80), bits); }
    // 0x292870: 0xc6a10054  lwc1        $f1, 0x54($s5)
    ctx->pc = 0x292870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x292874: 0xe6610054  swc1        $f1, 0x54($s3)
    ctx->pc = 0x292874u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 84), bits); }
    // 0x292878: 0xc620011c  lwc1        $f0, 0x11C($s1)
    ctx->pc = 0x292878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29287c: 0xe6c00b98  swc1        $f0, 0xB98($s6)
    ctx->pc = 0x29287cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 2968), bits); }
    // 0x292880: 0xc6210114  lwc1        $f1, 0x114($s1)
    ctx->pc = 0x292880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x292884: 0xe6c10b9c  swc1        $f1, 0xB9C($s6)
    ctx->pc = 0x292884u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 2972), bits); }
    // 0x292888: 0x86820004  lh          $v0, 0x4($s4)
    ctx->pc = 0x292888u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x29288c: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x29288Cu;
    {
        const bool branch_taken_0x29288c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x29288c) {
            ctx->pc = 0x292890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29288Cu;
            // 0x292890: 0x8e220180  lw          $v0, 0x180($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2928A4u;
            goto label_2928a4;
        }
    }
    ctx->pc = 0x292894u;
    // 0x292894: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x292894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x292898: 0x244392b0  addiu       $v1, $v0, -0x6D50
    ctx->pc = 0x292898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939312));
    // 0x29289c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x29289Cu;
    {
        const bool branch_taken_0x29289c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2928A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29289Cu;
        // 0x2928a0: 0xc44192b0  lwc1        $f1, -0x6D50($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294939312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29289c) {
            ctx->pc = 0x2928DCu;
            goto label_2928dc;
        }
    }
    ctx->pc = 0x2928A4u;
label_2928a4:
    // 0x2928a4: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x2928a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2928a8: 0x8c640058  lw          $a0, 0x58($v1)
    ctx->pc = 0x2928a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x2928ac: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x2928acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2928b0: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2928B0u;
    {
        const bool branch_taken_0x2928b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2928B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2928B0u;
        // 0x2928b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2928b0) {
            ctx->pc = 0x2928C8u;
            goto label_2928c8;
        }
    }
    ctx->pc = 0x2928B8u;
    // 0x2928b8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2928b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x2928bc: 0x24439290  addiu       $v1, $v0, -0x6D70
    ctx->pc = 0x2928bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939280));
    // 0x2928c0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2928C0u;
    {
        const bool branch_taken_0x2928c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2928C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2928C0u;
        // 0x2928c4: 0xc4419290  lwc1        $f1, -0x6D70($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294939280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2928c0) {
            ctx->pc = 0x2928DCu;
            goto label_2928dc;
        }
    }
    ctx->pc = 0x2928C8u;
label_2928c8:
    // 0x2928c8: 0x5482000a  bnel        $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2928C8u;
    {
        const bool branch_taken_0x2928c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2928c8) {
            ctx->pc = 0x2928CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2928C8u;
            // 0x2928cc: 0xc6ac0050  lwc1        $f12, 0x50($s5) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2928F4u;
            goto label_2928f4;
        }
    }
    ctx->pc = 0x2928D0u;
    // 0x2928d0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2928d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x2928d4: 0x244392a0  addiu       $v1, $v0, -0x6D60
    ctx->pc = 0x2928d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939296));
    // 0x2928d8: 0xc44192a0  lwc1        $f1, -0x6D60($v0)
    ctx->pc = 0x2928d8u;
    { uint32_t bits = FAST_READ32(0x3692A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2928dc:
    // 0x2928dc: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x2928dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2928e0: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2928e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2928e4: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x2928e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2928e8: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2928e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2928ec: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x2928ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2928f0: 0xc6ac0050  lwc1        $f12, 0x50($s5)
    ctx->pc = 0x2928f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2928f4:
    // 0x2928f4: 0xc7948bcc  lwc1        $f20, -0x7434($gp)
    ctx->pc = 0x2928f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2928f8: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2928f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2928fc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2928fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x292900: 0x46146302  mul.s       $f12, $f12, $f20
    ctx->pc = 0x292900u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    // 0x292904: 0x0  nop
    ctx->pc = 0x292904u;
    // NOP
    // 0x292908: 0x0  nop
    ctx->pc = 0x292908u;
    // NOP
    // 0x29290c: 0x46156303  div.s       $f12, $f12, $f21
    ctx->pc = 0x29290cu;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[21];
    // 0x292910: 0xc0ad296  jal         func_2B4A58
    ctx->pc = 0x292910u;
    SET_GPR_U32(ctx, 31, 0x292918u);
    ctx->pc = 0x292914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292910u;
    // 0x292914: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4A58u, 0x292910u, 0x292918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292918u;
label_292918:
    // 0x292918: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x292918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29291c: 0xc0ad532  jal         func_2B54C8
    ctx->pc = 0x29291Cu;
    SET_GPR_U32(ctx, 31, 0x292924u);
    ctx->pc = 0x292920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29291Cu;
    // 0x292920: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B54C8u, 0x29291Cu, 0x292924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292924u;
label_292924:
    // 0x292924: 0x8ea20164  lw          $v0, 0x164($s5)
    ctx->pc = 0x292924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 356)));
    // 0x292928: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x292928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29292c: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x29292cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x292930: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x292930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292934: 0xc440008c  lwc1        $f0, 0x8C($v0)
    ctx->pc = 0x292934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x292938: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x292938u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29293c: 0xe6600030  swc1        $f0, 0x30($s3)
    ctx->pc = 0x29293cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 48), bits); }
    // 0x292940: 0xc4410090  lwc1        $f1, 0x90($v0)
    ctx->pc = 0x292940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x292944: 0xc440009c  lwc1        $f0, 0x9C($v0)
    ctx->pc = 0x292944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x292948: 0xc4430068  lwc1        $f3, 0x68($v0)
    ctx->pc = 0x292948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29294c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x29294cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x292950: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x292950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x292954: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x292954u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x292958: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x292958u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x29295c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x29295cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x292960: 0xe6610034  swc1        $f1, 0x34($s3)
    ctx->pc = 0x292960u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 52), bits); }
    // 0x292964: 0xc4400094  lwc1        $f0, 0x94($v0)
    ctx->pc = 0x292964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x292968: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x292968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29296c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x29296cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x292970: 0xc085608  jal         func_215820
    ctx->pc = 0x292970u;
    SET_GPR_U32(ctx, 31, 0x292978u);
    ctx->pc = 0x292974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292970u;
    // 0x292974: 0xe6600038  swc1        $f0, 0x38($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x292970u, 0x292978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292978u;
label_292978:
    // 0x292978: 0x5040011b  beql        $v0, $zero, . + 4 + (0x11B << 2)
    ctx->pc = 0x292978u;
    {
        const bool branch_taken_0x292978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x292978) {
            ctx->pc = 0x29297Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292978u;
            // 0x29297c: 0x8e820a94  lw          $v0, 0xA94($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2708)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x292DE8u;
            goto label_292de8;
        }
    }
    ctx->pc = 0x292980u;
    // 0x292980: 0xc0856c0  jal         func_215B00
    ctx->pc = 0x292980u;
    SET_GPR_U32(ctx, 31, 0x292988u);
    ctx->pc = 0x292984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292980u;
    // 0x292984: 0x8e640020  lw          $a0, 0x20($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215B00u, 0x292980u, 0x292988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292988u;
label_292988:
    // 0x292988: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x292988u;
    {
        const bool branch_taken_0x292988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29298Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292988u;
        // 0x29298c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292988) {
            ctx->pc = 0x2929B8u;
            goto label_2929b8;
        }
    }
    ctx->pc = 0x292990u;
    // 0x292990: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x292990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x292994: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x292994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x292998: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x292998u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x29299c: 0x94620124  lhu         $v0, 0x124($v1)
    ctx->pc = 0x29299cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 292)));
    // 0x2929a0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2929a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2929a4: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x2929a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x2929a8: 0xc09829e  jal         func_260A78
    ctx->pc = 0x2929A8u;
    SET_GPR_U32(ctx, 31, 0x2929B0u);
    ctx->pc = 0x2929ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2929A8u;
    // 0x2929ac: 0xa4620124  sh          $v0, 0x124($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 292), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260A78u, 0x2929A8u, 0x2929B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2929B0u;
label_2929b0:
    // 0x2929b0: 0x100005e0  b           . + 4 + (0x5E0 << 2)
    ctx->pc = 0x2929B0u;
    {
        const bool branch_taken_0x2929b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2929B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2929B0u;
        // 0x2929b4: 0x8e50000c  lw          $s0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2929b0) {
            ctx->pc = 0x294134u;
            goto label_294134;
        }
    }
    ctx->pc = 0x2929B8u;
label_2929b8:
    // 0x2929b8: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x2929b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x2929bc: 0x104005dc  beqz        $v0, . + 4 + (0x5DC << 2)
    ctx->pc = 0x2929BCu;
    {
        const bool branch_taken_0x2929bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2929C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2929BCu;
        // 0x2929c0: 0x27b00050  addiu       $s0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2929bc) {
            ctx->pc = 0x294130u;
            goto label_294130;
        }
    }
    ctx->pc = 0x2929C4u;
    // 0x2929c4: 0xc66f004c  lwc1        $f15, 0x4C($s3)
    ctx->pc = 0x2929c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2929c8: 0xc66c0030  lwc1        $f12, 0x30($s3)
    ctx->pc = 0x2929c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2929cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2929ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2929d0: 0x46147bc2  mul.s       $f15, $f15, $f20
    ctx->pc = 0x2929d0u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[20]);
    // 0x2929d4: 0xc66d0034  lwc1        $f13, 0x34($s3)
    ctx->pc = 0x2929d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2929d8: 0xc66e0038  lwc1        $f14, 0x38($s3)
    ctx->pc = 0x2929d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2929dc: 0x0  nop
    ctx->pc = 0x2929dcu;
    // NOP
    // 0x2929e0: 0x0  nop
    ctx->pc = 0x2929e0u;
    // NOP
    // 0x2929e4: 0x46157bc3  div.s       $f15, $f15, $f21
    ctx->pc = 0x2929e4u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[15] = copysignf(INFINITY, ctx->f[15] * 0.0f); } else ctx->f[15] = ctx->f[15] / ctx->f[21];
    // 0x2929e8: 0xc0ad314  jal         func_2B4C50
    ctx->pc = 0x2929E8u;
    SET_GPR_U32(ctx, 31, 0x2929F0u);
    ctx->pc = 0x2929ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2929E8u;
    // 0x2929ec: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4C50u, 0x2929E8u, 0x2929F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2929F0u;
label_2929f0:
    // 0x2929f0: 0x8e660020  lw          $a2, 0x20($s3)
    ctx->pc = 0x2929f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x2929f4: 0x27b10090  addiu       $s1, $sp, 0x90
    ctx->pc = 0x2929f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2929f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2929f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2929fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2929fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292a00: 0x8cc2005c  lw          $v0, 0x5C($a2)
    ctx->pc = 0x292a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 92)));
    // 0x292a04: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x292a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x292a08: 0x8c460014  lw          $a2, 0x14($v0)
    ctx->pc = 0x292a08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x292a0c: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x292a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x292a10: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x292A10u;
    SET_GPR_U32(ctx, 31, 0x292A18u);
    ctx->pc = 0x292A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292A10u;
    // 0x292a14: 0x663021  addu        $a2, $v1, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x292A10u, 0x292A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292A18u;
label_292a18:
    // 0x292a18: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x292a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x292a1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x292a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292a20: 0xc7a200c0  lwc1        $f2, 0xC0($sp)
    ctx->pc = 0x292a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x292a24: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x292a24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292a28: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x292a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x292a2c: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x292a2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x292a30: 0x8c46001c  lw          $a2, 0x1C($v0)
    ctx->pc = 0x292a30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x292a34: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x292a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x292a38: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x292a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x292a3c: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x292a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x292a40: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x292a40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x292a44: 0xe7a200d0  swc1        $f2, 0xD0($sp)
    ctx->pc = 0x292a44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x292a48: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x292a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x292a4c: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x292A4Cu;
    SET_GPR_U32(ctx, 31, 0x292A54u);
    ctx->pc = 0x292A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292A4Cu;
    // 0x292a50: 0xe7a100d8  swc1        $f1, 0xD8($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x292A4Cu, 0x292A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292A54u;
label_292a54:
    // 0x292a54: 0xc7a400d0  lwc1        $f4, 0xD0($sp)
    ctx->pc = 0x292a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x292a58: 0xc7a500d4  lwc1        $f5, 0xD4($sp)
    ctx->pc = 0x292a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x292a5c: 0xc7a600d8  lwc1        $f6, 0xD8($sp)
    ctx->pc = 0x292a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x292a60: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x292a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x292a64: 0xc7a200c4  lwc1        $f2, 0xC4($sp)
    ctx->pc = 0x292a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x292a68: 0xc7a300c8  lwc1        $f3, 0xC8($sp)
    ctx->pc = 0x292a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x292a6c: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x292a6cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x292a70: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x292a70u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x292a74: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x292a74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x292a78: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x292a78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x292a7c: 0x460618c1  sub.s       $f3, $f3, $f6
    ctx->pc = 0x292a7cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
    // 0x292a80: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x292a80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x292a84: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x292a84u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x292a88: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x292a88u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x292a8c: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x292a8cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x292a90: 0x46022940  add.s       $f5, $f5, $f2
    ctx->pc = 0x292a90u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x292a94: 0x46033180  add.s       $f6, $f6, $f3
    ctx->pc = 0x292a94u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[3]);
    // 0x292a98: 0xe7a400e0  swc1        $f4, 0xE0($sp)
    ctx->pc = 0x292a98u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x292a9c: 0xe7a500e4  swc1        $f5, 0xE4($sp)
    ctx->pc = 0x292a9cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x292aa0: 0xe7a600e8  swc1        $f6, 0xE8($sp)
    ctx->pc = 0x292aa0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x292aa4: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x292aa4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x292aa8: 0xc6c00b68  lwc1        $f0, 0xB68($s6)
    ctx->pc = 0x292aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 2920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x292aac: 0x46070032  c.eq.s      $f0, $f7
    ctx->pc = 0x292aacu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292ab0: 0x0  nop
    ctx->pc = 0x292ab0u;
    // NOP
    // 0x292ab4: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
    ctx->pc = 0x292AB4u;
    {
        const bool branch_taken_0x292ab4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x292ab4) {
            ctx->pc = 0x292AB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292AB4u;
            // 0x292ab8: 0x8e630020  lw          $v1, 0x20($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x292AE4u;
            goto label_292ae4;
        }
    }
    ctx->pc = 0x292ABCu;
    // 0x292abc: 0xc6c00b6c  lwc1        $f0, 0xB6C($s6)
    ctx->pc = 0x292abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 2924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x292ac0: 0x46070032  c.eq.s      $f0, $f7
    ctx->pc = 0x292ac0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292ac4: 0x0  nop
    ctx->pc = 0x292ac4u;
    // NOP
    // 0x292ac8: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x292AC8u;
    {
        const bool branch_taken_0x292ac8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x292ac8) {
            ctx->pc = 0x292ACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292AC8u;
            // 0x292acc: 0x8e630020  lw          $v1, 0x20($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x292AE4u;
            goto label_292ae4;
        }
    }
    ctx->pc = 0x292AD0u;
    // 0x292ad0: 0xc6c00b70  lwc1        $f0, 0xB70($s6)
    ctx->pc = 0x292ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 2928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x292ad4: 0x46070032  c.eq.s      $f0, $f7
    ctx->pc = 0x292ad4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292ad8: 0x45010026  bc1t        . + 4 + (0x26 << 2)
    ctx->pc = 0x292AD8u;
    {
        const bool branch_taken_0x292ad8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x292ad8) {
            ctx->pc = 0x292B74u;
            goto label_292b74;
        }
    }
    ctx->pc = 0x292AE0u;
    // 0x292ae0: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x292ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_292ae4:
    // 0x292ae4: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x292ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x292ae8: 0x2484ab60  addiu       $a0, $a0, -0x54A0
    ctx->pc = 0x292ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945632));
    // 0x292aec: 0xc7808bd0  lwc1        $f0, -0x7430($gp)
    ctx->pc = 0x292aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x292af0: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x292af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x292af4: 0xc4620064  lwc1        $f2, 0x64($v1)
    ctx->pc = 0x292af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x292af8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x292af8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x292afc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x292afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x292b00: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x292b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x292b04: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x292b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x292b08: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x292b08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x292b0c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x292b0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292b10: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x292B10u;
    {
        const bool branch_taken_0x292b10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x292b10) {
            ctx->pc = 0x292B74u;
            goto label_292b74;
        }
    }
    ctx->pc = 0x292B18u;
    // 0x292b18: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x292b18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x292b1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x292b1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x292b20: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x292b20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x292b24: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x292b24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292b28: 0x0  nop
    ctx->pc = 0x292b28u;
    // NOP
    // 0x292b2c: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x292B2Cu;
    {
        const bool branch_taken_0x292b2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x292B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292B2Cu;
        // 0x292b30: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292b2c) {
            ctx->pc = 0x292B74u;
            goto label_292b74;
        }
    }
    ctx->pc = 0x292B34u;
    // 0x292b34: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x292b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x292b38: 0x26c60b68  addiu       $a2, $s6, 0xB68
    ctx->pc = 0x292b38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 2920));
    // 0x292b3c: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x292b3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x292b40: 0x27a800f0  addiu       $t0, $sp, 0xF0
    ctx->pc = 0x292b40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x292b44: 0xc09c594  jal         func_271650
    ctx->pc = 0x292B44u;
    SET_GPR_U32(ctx, 31, 0x292B4Cu);
    ctx->pc = 0x292B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292B44u;
    // 0x292b48: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271650u, 0x292B44u, 0x292B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292B4Cu;
label_292b4c:
    // 0x292b4c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x292b4cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292b50: 0x8f85b234  lw          $a1, -0x4DCC($gp)
    ctx->pc = 0x292b50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x292b54: 0x3c0401ff  lui         $a0, 0x1FF
    ctx->pc = 0x292b54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)511 << 16));
    // 0x292b58: 0x248499b0  addiu       $a0, $a0, -0x6650
    ctx->pc = 0x292b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941104));
    // 0x292b5c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x292b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x292b60: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x292b60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x292b64: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x292b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x292b68: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x292b68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x292b6c: 0x452026  xor         $a0, $v0, $a1
    ctx->pc = 0x292b6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x292b70: 0x44a00b  movn        $s4, $v0, $a0
    ctx->pc = 0x292b70u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
label_292b74:
    // 0x292b74: 0x12800094  beqz        $s4, . + 4 + (0x94 << 2)
    ctx->pc = 0x292B74u;
    {
        const bool branch_taken_0x292b74 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x292B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292B74u;
        // 0x292b78: 0x8f82b460  lw          $v0, -0x4BA0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292b74) {
            ctx->pc = 0x292DC8u;
            goto label_292dc8;
        }
    }
    ctx->pc = 0x292B7Cu;
    // 0x292b7c: 0x18400092  blez        $v0, . + 4 + (0x92 << 2)
    ctx->pc = 0x292B7Cu;
    {
        const bool branch_taken_0x292b7c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x292B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292B7Cu;
        // 0x292b80: 0x27b700f0  addiu       $s7, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292b7c) {
            ctx->pc = 0x292DC8u;
            goto label_292dc8;
        }
    }
    ctx->pc = 0x292B84u;
    // 0x292b84: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x292b84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x292b88: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x292b88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x292b8c: 0xc0a291c  jal         func_28A470
    ctx->pc = 0x292B8Cu;
    SET_GPR_U32(ctx, 31, 0x292B94u);
    ctx->pc = 0x292B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292B8Cu;
    // 0x292b90: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28A470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A470u, 0x292B8Cu, 0x292B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292B94u;
label_292b94:
    // 0x292b94: 0xc7a400d0  lwc1        $f4, 0xD0($sp)
    ctx->pc = 0x292b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x292b98: 0x3c0401ff  lui         $a0, 0x1FF
    ctx->pc = 0x292b98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)511 << 16));
    // 0x292b9c: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x292b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x292ba0: 0x248499b0  addiu       $a0, $a0, -0x6650
    ctx->pc = 0x292ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941104));
    // 0x292ba4: 0xc7a300d4  lwc1        $f3, 0xD4($sp)
    ctx->pc = 0x292ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x292ba8: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x292ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x292bac: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x292bacu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x292bb0: 0xc7a400d8  lwc1        $f4, 0xD8($sp)
    ctx->pc = 0x292bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x292bb4: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x292bb4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x292bb8: 0xc7a200e8  lwc1        $f2, 0xE8($sp)
    ctx->pc = 0x292bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x292bbc: 0x460108c2  mul.s       $f3, $f1, $f1
    ctx->pc = 0x292bbcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x292bc0: 0xe7a10100  swc1        $f1, 0x100($sp)
    ctx->pc = 0x292bc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x292bc4: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x292bc4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x292bc8: 0x8f83b234  lw          $v1, -0x4DCC($gp)
    ctx->pc = 0x292bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x292bcc: 0x46000102  mul.s       $f4, $f0, $f0
    ctx->pc = 0x292bccu;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x292bd0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x292bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x292bd4: 0x46021042  mul.s       $f1, $f2, $f2
    ctx->pc = 0x292bd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x292bd8: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x292bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x292bdc: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x292bdcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x292be0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x292be0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x292be4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x292be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x292be8: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x292be8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
    // 0x292bec: 0x46011b00  add.s       $f12, $f3, $f1
    ctx->pc = 0x292becu;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x292bf0: 0x0  nop
    ctx->pc = 0x292bf0u;
    // NOP
    // 0x292bf4: 0x0  nop
    ctx->pc = 0x292bf4u;
    // NOP
    // 0x292bf8: 0x460c0004  c1          0xC0004
    ctx->pc = 0x292bf8u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x292bfc: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x292bfcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292c00: 0x0  nop
    ctx->pc = 0x292c00u;
    // NOP
    // 0x292c04: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x292C04u;
    {
        const bool branch_taken_0x292c04 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x292C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292C04u;
        // 0x292c08: 0xe7a20108  swc1        $f2, 0x108($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x292c04) {
            ctx->pc = 0x292C14u;
            goto label_292c14;
        }
    }
    ctx->pc = 0x292C0Cu;
    // 0x292c0c: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x292C0Cu;
    SET_GPR_U32(ctx, 31, 0x292C14u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x292C0Cu, 0x292C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292C14u;
label_292c14:
    // 0x292c14: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x292c14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x292c18: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x292c18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x292c1c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x292c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x292c20: 0xc7a30100  lwc1        $f3, 0x100($sp)
    ctx->pc = 0x292c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x292c24: 0x0  nop
    ctx->pc = 0x292c24u;
    // NOP
    // 0x292c28: 0x0  nop
    ctx->pc = 0x292c28u;
    // NOP
    // 0x292c2c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x292c2cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x292c30: 0xc7a20104  lwc1        $f2, 0x104($sp)
    ctx->pc = 0x292c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x292c34: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x292c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x292c38: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x292c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x292c3c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x292c3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x292c40: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x292c40u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x292c44: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x292c44u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x292c48: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x292c48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x292c4c: 0xe7a30100  swc1        $f3, 0x100($sp)
    ctx->pc = 0x292c4cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x292c50: 0x14430053  bne         $v0, $v1, . + 4 + (0x53 << 2)
    ctx->pc = 0x292C50u;
    {
        const bool branch_taken_0x292c50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x292C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292C50u;
        // 0x292c54: 0xe7a20104  swc1        $f2, 0x104($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x292c50) {
            ctx->pc = 0x292DA0u;
            goto label_292da0;
        }
    }
    ctx->pc = 0x292C58u;
    // 0x292c58: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x292c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x292c5c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x292c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x292c60: 0xc0a1418  jal         func_285060
    ctx->pc = 0x292C60u;
    SET_GPR_U32(ctx, 31, 0x292C68u);
    ctx->pc = 0x292C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292C60u;
    // 0x292c64: 0x8c730000  lw          $s3, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285060u, 0x292C60u, 0x292C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292C68u;
label_292c68:
    // 0x292c68: 0x8e850020  lw          $a1, 0x20($s4)
    ctx->pc = 0x292c68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x292c6c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x292c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x292c70: 0x8ca3005c  lw          $v1, 0x5C($a1)
    ctx->pc = 0x292c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
    // 0x292c74: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x292c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x292c78: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x292c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x292c7c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x292c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x292c80: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x292C80u;
    {
        const bool branch_taken_0x292c80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x292C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292C80u;
        // 0x292c84: 0x27b100e0  addiu       $s1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292c80) {
            ctx->pc = 0x292CF8u;
            goto label_292cf8;
        }
    }
    ctx->pc = 0x292C88u;
    // 0x292c88: 0xc0a1418  jal         func_285060
    ctx->pc = 0x292C88u;
    SET_GPR_U32(ctx, 31, 0x292C90u);
    ctx->pc = 0x285060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285060u, 0x292C88u, 0x292C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292C90u;
label_292c90:
    // 0x292c90: 0x8e860020  lw          $a2, 0x20($s4)
    ctx->pc = 0x292c90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x292c94: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x292c94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x292c98: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x292c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x292c9c: 0x8cc3005c  lw          $v1, 0x5C($a2)
    ctx->pc = 0x292c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 92)));
    // 0x292ca0: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x292ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x292ca4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x292ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x292ca8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x292ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x292cac: 0x10650011  beq         $v1, $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x292CACu;
    {
        const bool branch_taken_0x292cac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x292CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292CACu;
        // 0x292cb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292cac) {
            ctx->pc = 0x292CF4u;
            goto label_292cf4;
        }
    }
    ctx->pc = 0x292CB4u;
    // 0x292cb4: 0x27b100e0  addiu       $s1, $sp, 0xE0
    ctx->pc = 0x292cb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x292cb8: 0x27b00100  addiu       $s0, $sp, 0x100
    ctx->pc = 0x292cb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x292cbc: 0x0  nop
    ctx->pc = 0x292cbcu;
    // NOP
label_292cc0:
    // 0x292cc0: 0xb3102a  slt         $v0, $a1, $s3
    ctx->pc = 0x292cc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x292cc4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x292CC4u;
    {
        const bool branch_taken_0x292cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x292CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292CC4u;
        // 0x292cc8: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292cc4) {
            ctx->pc = 0x292CFCu;
            goto label_292cfc;
        }
    }
    ctx->pc = 0x292CCCu;
    // 0x292ccc: 0x8cc4005c  lw          $a0, 0x5C($a2)
    ctx->pc = 0x292cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 92)));
    // 0x292cd0: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x292cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x292cd4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x292cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x292cd8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x292cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x292cdc: 0x5480fff8  bnel        $a0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x292CDCu;
    {
        const bool branch_taken_0x292cdc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x292cdc) {
            ctx->pc = 0x292CE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292CDCu;
            // 0x292ce0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x292CC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_292cc0;
        }
    }
    ctx->pc = 0x292CE4u;
    // 0x292ce4: 0xc0a141a  jal         func_285068
    ctx->pc = 0x292CE4u;
    SET_GPR_U32(ctx, 31, 0x292CECu);
    ctx->pc = 0x292CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292CE4u;
    // 0x292ce8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285068u, 0x292CE4u, 0x292CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292CECu;
label_292cec:
    // 0x292cec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x292CECu;
    {
        const bool branch_taken_0x292cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292CECu;
        // 0x292cf0: 0xc6ac0050  lwc1        $f12, 0x50($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x292cec) {
            ctx->pc = 0x292D00u;
            goto label_292d00;
        }
    }
    ctx->pc = 0x292CF4u;
label_292cf4:
    // 0x292cf4: 0x27b100e0  addiu       $s1, $sp, 0xE0
    ctx->pc = 0x292cf4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_292cf8:
    // 0x292cf8: 0x27b00100  addiu       $s0, $sp, 0x100
    ctx->pc = 0x292cf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_292cfc:
    // 0x292cfc: 0xc6ac0050  lwc1        $f12, 0x50($s5)
    ctx->pc = 0x292cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_292d00:
    // 0x292d00: 0xc0a138e  jal         func_284E38
    ctx->pc = 0x292D00u;
    SET_GPR_U32(ctx, 31, 0x292D08u);
    ctx->pc = 0x292D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292D00u;
    // 0x292d04: 0xc68d0050  lwc1        $f13, 0x50($s4) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x284E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284E38u, 0x292D00u, 0x292D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292D08u;
label_292d08:
    // 0x292d08: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x292d08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x292d0c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x292d0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292d10: 0x0  nop
    ctx->pc = 0x292d10u;
    // NOP
    // 0x292d14: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x292D14u;
    {
        const bool branch_taken_0x292d14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x292D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292D14u;
        // 0x292d18: 0xc6ac0050  lwc1        $f12, 0x50($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x292d14) {
            ctx->pc = 0x292D40u;
            goto label_292d40;
        }
    }
    ctx->pc = 0x292D1Cu;
    // 0x292d1c: 0xc0a138e  jal         func_284E38
    ctx->pc = 0x292D1Cu;
    SET_GPR_U32(ctx, 31, 0x292D24u);
    ctx->pc = 0x292D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292D1Cu;
    // 0x292d20: 0xc68d0050  lwc1        $f13, 0x50($s4) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x284E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284E38u, 0x292D1Cu, 0x292D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292D24u;
label_292d24:
    // 0x292d24: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x292d24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x292d28: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x292d28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x292d2c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x292d2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292d30: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x292D30u;
    {
        const bool branch_taken_0x292d30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x292d30) {
            ctx->pc = 0x292D60u;
            goto label_292d60;
        }
    }
    ctx->pc = 0x292D38u;
    // 0x292d38: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x292D38u;
    {
        const bool branch_taken_0x292d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x292d38) {
            ctx->pc = 0x292D6Cu;
            goto label_292d6c;
        }
    }
    ctx->pc = 0x292D40u;
label_292d40:
    // 0x292d40: 0xc0a138e  jal         func_284E38
    ctx->pc = 0x292D40u;
    SET_GPR_U32(ctx, 31, 0x292D48u);
    ctx->pc = 0x292D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292D40u;
    // 0x292d44: 0xc68d0050  lwc1        $f13, 0x50($s4) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x284E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284E38u, 0x292D40u, 0x292D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292D48u;
label_292d48:
    // 0x292d48: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x292d48u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x292d4c: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x292d4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x292d50: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x292d50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x292d54: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x292d54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292d58: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x292D58u;
    {
        const bool branch_taken_0x292d58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x292d58) {
            ctx->pc = 0x292D6Cu;
            goto label_292d6c;
        }
    }
    ctx->pc = 0x292D60u;
label_292d60:
    // 0x292d60: 0xc78c8bd4  lwc1        $f12, -0x742C($gp)
    ctx->pc = 0x292d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x292d64: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x292D64u;
    {
        const bool branch_taken_0x292d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292D64u;
        // 0x292d68: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292d64) {
            ctx->pc = 0x292D78u;
            goto label_292d78;
        }
    }
    ctx->pc = 0x292D6Cu;
label_292d6c:
    // 0x292d6c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x292d6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x292d70: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x292d70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x292d74: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x292d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_292d78:
    // 0x292d78: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x292d78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292d7c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x292d7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292d80: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x292d80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292d84: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x292d84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292d88: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x292d88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x292d8c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x292d8cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292d90: 0xc09c666  jal         func_271998
    ctx->pc = 0x292D90u;
    SET_GPR_U32(ctx, 31, 0x292D98u);
    ctx->pc = 0x292D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292D90u;
    // 0x292d94: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271998u, 0x292D90u, 0x292D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292D98u;
label_292d98:
    // 0x292d98: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x292D98u;
    {
        const bool branch_taken_0x292d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292D98u;
        // 0x292d9c: 0xc7a000e0  lwc1        $f0, 0xE0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x292d98) {
            ctx->pc = 0x292DCCu;
            goto label_292dcc;
        }
    }
    ctx->pc = 0x292DA0u;
label_292da0:
    // 0x292da0: 0xc78c8bd8  lwc1        $f12, -0x7428($gp)
    ctx->pc = 0x292da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x292da4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x292da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292da8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x292da8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292dac: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x292dacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292db0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x292db0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x292db4: 0x27a800e0  addiu       $t0, $sp, 0xE0
    ctx->pc = 0x292db4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x292db8: 0x27a90100  addiu       $t1, $sp, 0x100
    ctx->pc = 0x292db8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x292dbc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x292dbcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292dc0: 0xc09c666  jal         func_271998
    ctx->pc = 0x292DC0u;
    SET_GPR_U32(ctx, 31, 0x292DC8u);
    ctx->pc = 0x292DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292DC0u;
    // 0x292dc4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271998u, 0x292DC0u, 0x292DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292DC8u;
label_292dc8:
    // 0x292dc8: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x292dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_292dcc:
    // 0x292dcc: 0x8e50000c  lw          $s0, 0xC($s2)
    ctx->pc = 0x292dccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x292dd0: 0xe6c00b68  swc1        $f0, 0xB68($s6)
    ctx->pc = 0x292dd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 2920), bits); }
    // 0x292dd4: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x292dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x292dd8: 0xe6c10b6c  swc1        $f1, 0xB6C($s6)
    ctx->pc = 0x292dd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 2924), bits); }
    // 0x292ddc: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x292ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x292de0: 0x100004d4  b           . + 4 + (0x4D4 << 2)
    ctx->pc = 0x292DE0u;
    {
        const bool branch_taken_0x292de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292DE0u;
        // 0x292de4: 0xe6c00b70  swc1        $f0, 0xB70($s6) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 2928), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x292de0) {
            ctx->pc = 0x294134u;
            goto label_294134;
        }
    }
    ctx->pc = 0x292DE8u;
label_292de8:
    // 0x292de8: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x292de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x292dec: 0x544004d1  bnel        $v0, $zero, . + 4 + (0x4D1 << 2)
    ctx->pc = 0x292DECu;
    {
        const bool branch_taken_0x292dec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x292dec) {
            ctx->pc = 0x292DF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292DECu;
            // 0x292df0: 0x8e50000c  lw          $s0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x294134u;
            goto label_294134;
        }
    }
    ctx->pc = 0x292DF4u;
    // 0x292df4: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x292df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x292df8: 0xc080e18  jal         func_203860
    ctx->pc = 0x292DF8u;
    SET_GPR_U32(ctx, 31, 0x292E00u);
    ctx->pc = 0x292DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292DF8u;
    // 0x292dfc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203860u, 0x292DF8u, 0x292E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292E00u;
label_292e00:
    // 0x292e00: 0x8f91b234  lw          $s1, -0x4DCC($gp)
    ctx->pc = 0x292e00u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x292e04: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x292e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x292e08: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x292e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x292e0c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x292E0Cu;
    {
        const bool branch_taken_0x292e0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x292e0c) {
            ctx->pc = 0x292E10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292E0Cu;
            // 0x292e10: 0x8e43000c  lw          $v1, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x292E34u;
            goto label_292e34;
        }
    }
    ctx->pc = 0x292E14u;
    // 0x292e14: 0xc080e18  jal         func_203860
    ctx->pc = 0x292E14u;
    SET_GPR_U32(ctx, 31, 0x292E1Cu);
    ctx->pc = 0x292E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292E14u;
    // 0x292e18: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203860u, 0x292E14u, 0x292E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292E1Cu;
label_292e1c:
    // 0x292e1c: 0x8f91b234  lw          $s1, -0x4DCC($gp)
    ctx->pc = 0x292e1cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x292e20: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x292e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x292e24: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x292e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x292e28: 0x504004c2  beql        $v0, $zero, . + 4 + (0x4C2 << 2)
    ctx->pc = 0x292E28u;
    {
        const bool branch_taken_0x292e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x292e28) {
            ctx->pc = 0x292E2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292E28u;
            // 0x292e2c: 0x8e50000c  lw          $s0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x294134u;
            goto label_294134;
        }
    }
    ctx->pc = 0x292E30u;
    // 0x292e30: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x292e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_292e34:
    // 0x292e34: 0x3c0401ff  lui         $a0, 0x1FF
    ctx->pc = 0x292e34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)511 << 16));
    // 0x292e38: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x292e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x292e3c: 0x248499b0  addiu       $a0, $a0, -0x6650
    ctx->pc = 0x292e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941104));
    // 0x292e40: 0x8c650020  lw          $a1, 0x20($v1)
    ctx->pc = 0x292e40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x292e44: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x292e44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x292e48: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x292e48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x292e4c: 0xc78c8bdc  lwc1        $f12, -0x7424($gp)
    ctx->pc = 0x292e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x292e50: 0x94a30124  lhu         $v1, 0x124($a1)
    ctx->pc = 0x292e50u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 292)));
    // 0x292e54: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x292e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x292e58: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x292e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292e5c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x292e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x292e60: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x292e60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x292e64: 0xae46009c  sw          $a2, 0x9C($s2)
    ctx->pc = 0x292e64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 6));
    // 0x292e68: 0xa4a30124  sh          $v1, 0x124($a1)
    ctx->pc = 0x292e68u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 292), (uint16_t)GPR_U32(ctx, 3));
    // 0x292e6c: 0xc09829e  jal         func_260A78
    ctx->pc = 0x292E6Cu;
    SET_GPR_U32(ctx, 31, 0x292E74u);
    ctx->pc = 0x292E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292E6Cu;
    // 0x292e70: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260A78u, 0x292E6Cu, 0x292E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292E74u;
label_292e74:
    // 0x292e74: 0x8f82b460  lw          $v0, -0x4BA0($gp)
    ctx->pc = 0x292e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
    // 0x292e78: 0x5840001d  blezl       $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x292E78u;
    {
        const bool branch_taken_0x292e78 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x292e78) {
            ctx->pc = 0x292E7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292E78u;
            // 0x292e7c: 0xaec00b70  sw          $zero, 0xB70($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 2928), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x292EF0u;
            goto label_292ef0;
        }
    }
    ctx->pc = 0x292E80u;
    // 0x292e80: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x292E80u;
    SET_GPR_U32(ctx, 31, 0x292E88u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x292E80u, 0x292E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292E88u;
label_292e88:
    // 0x292e88: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x292E88u;
    {
        const bool branch_taken_0x292e88 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x292E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292E88u;
        // 0x292e8c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292e88) {
            ctx->pc = 0x292E9Cu;
            goto label_292e9c;
        }
    }
    ctx->pc = 0x292E90u;
    // 0x292e90: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x292e90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x292e94: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x292E94u;
    {
        const bool branch_taken_0x292e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292E94u;
        // 0x292e98: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x292e94) {
            ctx->pc = 0x292EB0u;
            goto label_292eb0;
        }
    }
    ctx->pc = 0x292E9Cu;
label_292e9c:
    // 0x292e9c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x292e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x292ea0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x292ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x292ea4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x292ea4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x292ea8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x292ea8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x292eac: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x292eacu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_292eb0:
    // 0x292eb0: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x292eb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x292eb4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x292eb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x292eb8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x292eb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x292ebc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x292ebcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x292ec0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x292ec0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x292ec4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x292ec4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292ec8: 0x0  nop
    ctx->pc = 0x292ec8u;
    // NOP
    // 0x292ecc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x292ECCu;
    {
        const bool branch_taken_0x292ecc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x292ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292ECCu;
        // 0x292ed0: 0x26a50030  addiu       $a1, $s5, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292ecc) {
            ctx->pc = 0x292EE4u;
            goto label_292ee4;
        }
    }
    ctx->pc = 0x292ED4u;
    // 0x292ed4: 0xc081546  jal         func_205518
    ctx->pc = 0x292ED4u;
    SET_GPR_U32(ctx, 31, 0x292EDCu);
    ctx->pc = 0x292ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292ED4u;
    // 0x292ed8: 0x240400ab  addiu       $a0, $zero, 0xAB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x292ED4u, 0x292EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292EDCu;
label_292edc:
    // 0x292edc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x292EDCu;
    {
        const bool branch_taken_0x292edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292EDCu;
        // 0x292ee0: 0xaec00b70  sw          $zero, 0xB70($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 2928), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292edc) {
            ctx->pc = 0x292EF0u;
            goto label_292ef0;
        }
    }
    ctx->pc = 0x292EE4u;
label_292ee4:
    // 0x292ee4: 0xc081546  jal         func_205518
    ctx->pc = 0x292EE4u;
    SET_GPR_U32(ctx, 31, 0x292EECu);
    ctx->pc = 0x292EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292EE4u;
    // 0x292ee8: 0x240400ac  addiu       $a0, $zero, 0xAC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x292EE4u, 0x292EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292EECu;
label_292eec:
    // 0x292eec: 0xaec00b70  sw          $zero, 0xB70($s6)
    ctx->pc = 0x292eecu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 2928), GPR_U32(ctx, 0));
label_292ef0:
    // 0x292ef0: 0x8e50000c  lw          $s0, 0xC($s2)
    ctx->pc = 0x292ef0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x292ef4: 0xaec00b68  sw          $zero, 0xB68($s6)
    ctx->pc = 0x292ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 2920), GPR_U32(ctx, 0));
    // 0x292ef8: 0x1000048e  b           . + 4 + (0x48E << 2)
    ctx->pc = 0x292EF8u;
    {
        const bool branch_taken_0x292ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292EF8u;
        // 0x292efc: 0xaec00b6c  sw          $zero, 0xB6C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 2924), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292ef8) {
            ctx->pc = 0x294134u;
            goto label_294134;
        }
    }
    ctx->pc = 0x292F00u;
label_292f00:
    // 0x292f00: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x292f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x292f04: 0x241e0190  addiu       $fp, $zero, 0x190
    ctx->pc = 0x292f04u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x292f08: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x292f08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x292f0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x292f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292f10: 0x5e1018  mult        $v0, $v0, $fp
    ctx->pc = 0x292f10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x292f14: 0x24706218  addiu       $s0, $v1, 0x6218
    ctx->pc = 0x292f14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 25112));
    // 0x292f18: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x292f18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292f1c: 0xc0a4478  jal         func_2911E0
    ctx->pc = 0x292F1Cu;
    SET_GPR_U32(ctx, 31, 0x292F24u);
    ctx->pc = 0x292F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292F1Cu;
    // 0x292f20: 0x50b021  addu        $s6, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2911E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2911E0u, 0x292F1Cu, 0x292F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292F24u;
label_292f24:
    // 0x292f24: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x292f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x292f28: 0x1057000e  beq         $v0, $s7, . + 4 + (0xE << 2)
    ctx->pc = 0x292F28u;
    {
        const bool branch_taken_0x292f28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        ctx->pc = 0x292F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292F28u;
        // 0x292f2c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292f28) {
            ctx->pc = 0x292F64u;
            goto label_292f64;
        }
    }
    ctx->pc = 0x292F30u;
    // 0x292f30: 0x8f83b234  lw          $v1, -0x4DCC($gp)
    ctx->pc = 0x292f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x292f34: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x292f34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x292f38: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x292f38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x292f3c: 0x8c620128  lw          $v0, 0x128($v1)
    ctx->pc = 0x292f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 296)));
    // 0x292f40: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x292f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x292f44: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x292f44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x292f48: 0x1440047a  bnez        $v0, . + 4 + (0x47A << 2)
    ctx->pc = 0x292F48u;
    {
        const bool branch_taken_0x292f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x292F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292F48u;
        // 0x292f4c: 0x8e50000c  lw          $s0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292f48) {
            ctx->pc = 0x294134u;
            goto label_294134;
        }
    }
    ctx->pc = 0x292F50u;
    // 0x292f50: 0xc6c1002c  lwc1        $f1, 0x2C($s6)
    ctx->pc = 0x292f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x292f54: 0xe461010c  swc1        $f1, 0x10C($v1)
    ctx->pc = 0x292f54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 268), bits); }
    // 0x292f58: 0xc6c00030  lwc1        $f0, 0x30($s6)
    ctx->pc = 0x292f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x292f5c: 0x10000475  b           . + 4 + (0x475 << 2)
    ctx->pc = 0x292F5Cu;
    {
        const bool branch_taken_0x292f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292F5Cu;
        // 0x292f60: 0xe4600110  swc1        $f0, 0x110($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 272), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x292f5c) {
            ctx->pc = 0x294134u;
            goto label_294134;
        }
    }
    ctx->pc = 0x292F64u;
label_292f64:
    // 0x292f64: 0x8f91b234  lw          $s1, -0x4DCC($gp)
    ctx->pc = 0x292f64u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x292f68: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x292f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x292f6c: 0x8e220128  lw          $v0, 0x128($s1)
    ctx->pc = 0x292f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
    // 0x292f70: 0x1043046f  beq         $v0, $v1, . + 4 + (0x46F << 2)
    ctx->pc = 0x292F70u;
    {
        const bool branch_taken_0x292f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x292F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292F70u;
        // 0x292f74: 0x220482d  daddu       $t1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292f70) {
            ctx->pc = 0x294130u;
            goto label_294130;
        }
    }
    ctx->pc = 0x292F78u;
    // 0x292f78: 0x8f82b460  lw          $v0, -0x4BA0($gp)
    ctx->pc = 0x292f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
    // 0x292f7c: 0x1840046c  blez        $v0, . + 4 + (0x46C << 2)
    ctx->pc = 0x292F7Cu;
    {
        const bool branch_taken_0x292f7c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x292F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292F7Cu;
        // 0x292f80: 0x2fe1818  mult        $v1, $s7, $fp (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x292f7c) {
            ctx->pc = 0x294130u;
            goto label_294130;
        }
    }
    ctx->pc = 0x292F84u;
    // 0x292f84: 0x8e820108  lw          $v0, 0x108($s4)
    ctx->pc = 0x292f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 264)));
    // 0x292f88: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x292f88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x292f8c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x292f8cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292f90: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x292f90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x292f94: 0x702821  addu        $a1, $v1, $s0
    ctx->pc = 0x292f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x292f98: 0x248390f8  addiu       $v1, $a0, -0x6F08
    ctx->pc = 0x292f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938872));
    // 0x292f9c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x292f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x292fa0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x292fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x292fa4: 0x84620002  lh          $v0, 0x2($v1)
    ctx->pc = 0x292fa4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x292fa8: 0x10440003  beq         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x292FA8u;
    {
        const bool branch_taken_0x292fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x292FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292FA8u;
        // 0x292fac: 0x8ca80010  lw          $t0, 0x10($a1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292fa8) {
            ctx->pc = 0x292FB8u;
            goto label_292fb8;
        }
    }
    ctx->pc = 0x292FB0u;
    // 0x292fb0: 0x8e8201e4  lw          $v0, 0x1E4($s4)
    ctx->pc = 0x292fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 484)));
    // 0x292fb4: 0x2c570001  sltiu       $s7, $v0, 0x1
    ctx->pc = 0x292fb4u;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_292fb8:
    // 0x292fb8: 0x8e2702ec  lw          $a3, 0x2EC($s1)
    ctx->pc = 0x292fb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 748)));
    // 0x292fbc: 0x12e00002  beqz        $s7, . + 4 + (0x2 << 2)
    ctx->pc = 0x292FBCu;
    {
        const bool branch_taken_0x292fbc = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x292FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292FBCu;
        // 0x292fc0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292fbc) {
            ctx->pc = 0x292FC8u;
            goto label_292fc8;
        }
    }
    ctx->pc = 0x292FC4u;
    // 0x292fc4: 0x8e26022c  lw          $a2, 0x22C($s1)
    ctx->pc = 0x292fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 556)));
label_292fc8:
    // 0x292fc8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x292fc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292fcc: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x292fccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292fd0: 0x217100a  movz        $v0, $s0, $s7
    ctx->pc = 0x292fd0u;
    if (GPR_U64(ctx, 23) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 16));
    // 0x292fd4: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x292fd4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292fd8: 0x12e00012  beqz        $s7, . + 4 + (0x12 << 2)
    ctx->pc = 0x292FD8u;
    {
        const bool branch_taken_0x292fd8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x292FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292FD8u;
        // 0x292fdc: 0x55800b  movn        $s0, $v0, $s5 (Delay Slot)
        if (GPR_U64(ctx, 21) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292fd8) {
            ctx->pc = 0x293024u;
            goto label_293024;
        }
    }
    ctx->pc = 0x292FE0u;
    // 0x292fe0: 0x8e250198  lw          $a1, 0x198($s1)
    ctx->pc = 0x292fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 408)));
    // 0x292fe4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x292fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x292fe8: 0x14a2000e  bne         $a1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x292FE8u;
    {
        const bool branch_taken_0x292fe8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x292FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292FE8u;
        // 0x292fec: 0x82080  sll         $a0, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292fe8) {
            ctx->pc = 0x293024u;
            goto label_293024;
        }
    }
    ctx->pc = 0x292FF0u;
    // 0x292ff0: 0x2841021  addu        $v0, $s4, $a0
    ctx->pc = 0x292ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x292ff4: 0x8c430110  lw          $v1, 0x110($v0)
    ctx->pc = 0x292ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x292ff8: 0x1860000a  blez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x292FF8u;
    {
        const bool branch_taken_0x292ff8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x292FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292FF8u;
        // 0x292ffc: 0xe6102a  slt         $v0, $a3, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x292ff8) {
            ctx->pc = 0x293024u;
            goto label_293024;
        }
    }
    ctx->pc = 0x293000u;
    // 0x293000: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x293000u;
    {
        const bool branch_taken_0x293000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x293000) {
            ctx->pc = 0x293004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x293000u;
            // 0x293004: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x293024u;
            goto label_293024;
        }
    }
    ctx->pc = 0x293008u;
    // 0x293008: 0x8e220258  lw          $v0, 0x258($s1)
    ctx->pc = 0x293008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
    // 0x29300c: 0x54450005  bnel        $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x29300Cu;
    {
        const bool branch_taken_0x29300c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x29300c) {
            ctx->pc = 0x293010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29300Cu;
            // 0x293010: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x293024u;
            goto label_293024;
        }
    }
    ctx->pc = 0x293014u;
    // 0x293014: 0x2841021  addu        $v0, $s4, $a0
    ctx->pc = 0x293014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x293018: 0x8c43017c  lw          $v1, 0x17C($v0)
    ctx->pc = 0x293018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 380)));
    // 0x29301c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x29301Cu;
    {
        const bool branch_taken_0x29301c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29301c) {
            ctx->pc = 0x293020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29301Cu;
            // 0x293020: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x293024u;
            goto label_293024;
        }
    }
    ctx->pc = 0x293024u;
label_293024:
    // 0x293024: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x293024u;
    SET_GPR_U32(ctx, 31, 0x29302Cu);
    ctx->pc = 0x293028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293024u;
    // 0x293028: 0x8d240000  lw          $a0, 0x0($t1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x293024u, 0x29302Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29302Cu;
label_29302c:
    // 0x29302c: 0x8f91b234  lw          $s1, -0x4DCC($gp)
    ctx->pc = 0x29302cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x293030: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x293030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x293034: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x293034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x293038: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x293038u;
    {
        const bool branch_taken_0x293038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29303Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293038u;
        // 0x29303c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293038) {
            ctx->pc = 0x29305Cu;
            goto label_29305c;
        }
    }
    ctx->pc = 0x293040u;
    // 0x293040: 0x8e220180  lw          $v0, 0x180($s1)
    ctx->pc = 0x293040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x293044: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x293044u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293048: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x293048u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29304c: 0x8c440160  lw          $a0, 0x160($v0)
    ctx->pc = 0x29304cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x293050: 0xc0a36e4  jal         func_28DB90
    ctx->pc = 0x293050u;
    SET_GPR_U32(ctx, 31, 0x293058u);
    ctx->pc = 0x293054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293050u;
    // 0x293054: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB90u, 0x293050u, 0x293058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293058u;
label_293058:
    // 0x293058: 0x8f91b234  lw          $s1, -0x4DCC($gp)
    ctx->pc = 0x293058u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
label_29305c:
    // 0x29305c: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x29305Cu;
    SET_GPR_U32(ctx, 31, 0x293064u);
    ctx->pc = 0x293060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29305Cu;
    // 0x293060: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x29305Cu, 0x293064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293064u;
label_293064:
    // 0x293064: 0x8f91b234  lw          $s1, -0x4DCC($gp)
    ctx->pc = 0x293064u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x293068: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x293068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x29306c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x29306cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x293070: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x293070u;
    {
        const bool branch_taken_0x293070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x293070) {
            ctx->pc = 0x2930C0u;
            goto label_2930c0;
        }
    }
    ctx->pc = 0x293078u;
    // 0x293078: 0x8e420094  lw          $v0, 0x94($s2)
    ctx->pc = 0x293078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x29307c: 0x8ec3003c  lw          $v1, 0x3C($s6)
    ctx->pc = 0x29307cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 60)));
    // 0x293080: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x293080u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x293084: 0x1440005e  bnez        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x293084u;
    {
        const bool branch_taken_0x293084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x293084) {
            ctx->pc = 0x293200u;
            goto label_293200;
        }
    }
    ctx->pc = 0x29308Cu;
    // 0x29308c: 0x12e00006  beqz        $s7, . + 4 + (0x6 << 2)
    ctx->pc = 0x29308Cu;
    {
        const bool branch_taken_0x29308c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x293090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29308Cu;
        // 0x293090: 0x317c2  srl         $v0, $v1, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29308c) {
            ctx->pc = 0x2930A8u;
            goto label_2930a8;
        }
    }
    ctx->pc = 0x293094u;
    // 0x293094: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x293094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x293098: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x293098u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x29309c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x29309cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2930a0: 0x14400057  bnez        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x2930A0u;
    {
        const bool branch_taken_0x2930a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2930a0) {
            ctx->pc = 0x293200u;
            goto label_293200;
        }
    }
    ctx->pc = 0x2930A8u;
label_2930a8:
    // 0x2930a8: 0x16be0055  bne         $s5, $fp, . + 4 + (0x55 << 2)
    ctx->pc = 0x2930A8u;
    {
        const bool branch_taken_0x2930a8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 30));
        ctx->pc = 0x2930ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2930A8u;
        // 0x2930ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2930a8) {
            ctx->pc = 0x293200u;
            goto label_293200;
        }
    }
    ctx->pc = 0x2930B0u;
    // 0x2930b0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2930b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2930b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2930b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2930b8: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x2930B8u;
    {
        const bool branch_taken_0x2930b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2930BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2930B8u;
        // 0x2930bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2930b8) {
            ctx->pc = 0x2931F4u;
            goto label_2931f4;
        }
    }
    ctx->pc = 0x2930C0u;
label_2930c0:
    // 0x2930c0: 0xc080e18  jal         func_203860
    ctx->pc = 0x2930C0u;
    SET_GPR_U32(ctx, 31, 0x2930C8u);
    ctx->pc = 0x2930C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2930C0u;
    // 0x2930c4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203860u, 0x2930C0u, 0x2930C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2930C8u;
label_2930c8:
    // 0x2930c8: 0x8f91b234  lw          $s1, -0x4DCC($gp)
    ctx->pc = 0x2930c8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2930cc: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x2930ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2930d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2930d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2930d4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2930D4u;
    {
        const bool branch_taken_0x2930d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2930d4) {
            ctx->pc = 0x293120u;
            goto label_293120;
        }
    }
    ctx->pc = 0x2930DCu;
    // 0x2930dc: 0x8e420094  lw          $v0, 0x94($s2)
    ctx->pc = 0x2930dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x2930e0: 0x8ec30040  lw          $v1, 0x40($s6)
    ctx->pc = 0x2930e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 64)));
    // 0x2930e4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2930e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2930e8: 0x14400045  bnez        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x2930E8u;
    {
        const bool branch_taken_0x2930e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2930e8) {
            ctx->pc = 0x293200u;
            goto label_293200;
        }
    }
    ctx->pc = 0x2930F0u;
    // 0x2930f0: 0x12e00006  beqz        $s7, . + 4 + (0x6 << 2)
    ctx->pc = 0x2930F0u;
    {
        const bool branch_taken_0x2930f0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2930F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2930F0u;
        // 0x2930f4: 0x317c2  srl         $v0, $v1, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2930f0) {
            ctx->pc = 0x29310Cu;
            goto label_29310c;
        }
    }
    ctx->pc = 0x2930F8u;
    // 0x2930f8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2930f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2930fc: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2930fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x293100: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x293100u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x293104: 0x1440003e  bnez        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x293104u;
    {
        const bool branch_taken_0x293104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x293104) {
            ctx->pc = 0x293200u;
            goto label_293200;
        }
    }
    ctx->pc = 0x29310Cu;
label_29310c:
    // 0x29310c: 0x16be003c  bne         $s5, $fp, . + 4 + (0x3C << 2)
    ctx->pc = 0x29310Cu;
    {
        const bool branch_taken_0x29310c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 30));
        ctx->pc = 0x293110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29310Cu;
        // 0x293110: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29310c) {
            ctx->pc = 0x293200u;
            goto label_293200;
        }
    }
    ctx->pc = 0x293114u;
    // 0x293114: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x293114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293118: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x293118u;
    {
        const bool branch_taken_0x293118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29311Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293118u;
        // 0x29311c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293118) {
            ctx->pc = 0x2931F0u;
            goto label_2931f0;
        }
    }
    ctx->pc = 0x293120u;
label_293120:
    // 0x293120: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x293120u;
    SET_GPR_U32(ctx, 31, 0x293128u);
    ctx->pc = 0x293124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293120u;
    // 0x293124: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x293120u, 0x293128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293128u;
label_293128:
    // 0x293128: 0x8f91b234  lw          $s1, -0x4DCC($gp)
    ctx->pc = 0x293128u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x29312c: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x29312cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x293130: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x293130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x293134: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x293134u;
    {
        const bool branch_taken_0x293134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x293134) {
            ctx->pc = 0x29318Cu;
            goto label_29318c;
        }
    }
    ctx->pc = 0x29313Cu;
    // 0x29313c: 0x8e420094  lw          $v0, 0x94($s2)
    ctx->pc = 0x29313cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x293140: 0x8ec300c4  lw          $v1, 0xC4($s6)
    ctx->pc = 0x293140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 196)));
    // 0x293144: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x293144u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x293148: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x293148u;
    {
        const bool branch_taken_0x293148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x293148) {
            ctx->pc = 0x293200u;
            goto label_293200;
        }
    }
    ctx->pc = 0x293150u;
    // 0x293150: 0x12e00008  beqz        $s7, . + 4 + (0x8 << 2)
    ctx->pc = 0x293150u;
    {
        const bool branch_taken_0x293150 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x293150) {
            ctx->pc = 0x293174u;
            goto label_293174;
        }
    }
    ctx->pc = 0x293158u;
    // 0x293158: 0x8ec2003c  lw          $v0, 0x3C($s6)
    ctx->pc = 0x293158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 60)));
    // 0x29315c: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x29315cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x293160: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x293160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x293164: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x293164u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x293168: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x293168u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29316c: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x29316Cu;
    {
        const bool branch_taken_0x29316c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29316c) {
            ctx->pc = 0x293200u;
            goto label_293200;
        }
    }
    ctx->pc = 0x293174u;
label_293174:
    // 0x293174: 0x16be0022  bne         $s5, $fp, . + 4 + (0x22 << 2)
    ctx->pc = 0x293174u;
    {
        const bool branch_taken_0x293174 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 30));
        ctx->pc = 0x293178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293174u;
        // 0x293178: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293174) {
            ctx->pc = 0x293200u;
            goto label_293200;
        }
    }
    ctx->pc = 0x29317Cu;
    // 0x29317c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x29317cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293180: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x293180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x293184: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x293184u;
    {
        const bool branch_taken_0x293184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293184u;
        // 0x293188: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293184) {
            ctx->pc = 0x2931F4u;
            goto label_2931f4;
        }
    }
    ctx->pc = 0x29318Cu;
label_29318c:
    // 0x29318c: 0xc080e18  jal         func_203860
    ctx->pc = 0x29318Cu;
    SET_GPR_U32(ctx, 31, 0x293194u);
    ctx->pc = 0x293190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29318Cu;
    // 0x293190: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203860u, 0x29318Cu, 0x293194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293194u;
label_293194:
    // 0x293194: 0x8f91b234  lw          $s1, -0x4DCC($gp)
    ctx->pc = 0x293194u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x293198: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x293198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x29319c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x29319cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2931a0: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x2931A0u;
    {
        const bool branch_taken_0x2931a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2931a0) {
            ctx->pc = 0x2931A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2931A0u;
            // 0x2931a4: 0xae400038  sw          $zero, 0x38($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x293200u;
            goto label_293200;
        }
    }
    ctx->pc = 0x2931A8u;
    // 0x2931a8: 0x8e420094  lw          $v0, 0x94($s2)
    ctx->pc = 0x2931a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x2931ac: 0x8ec300c8  lw          $v1, 0xC8($s6)
    ctx->pc = 0x2931acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 200)));
    // 0x2931b0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2931b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2931b4: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2931B4u;
    {
        const bool branch_taken_0x2931b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2931b4) {
            ctx->pc = 0x293200u;
            goto label_293200;
        }
    }
    ctx->pc = 0x2931BCu;
    // 0x2931bc: 0x12e00008  beqz        $s7, . + 4 + (0x8 << 2)
    ctx->pc = 0x2931BCu;
    {
        const bool branch_taken_0x2931bc = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x2931bc) {
            ctx->pc = 0x2931E0u;
            goto label_2931e0;
        }
    }
    ctx->pc = 0x2931C4u;
    // 0x2931c4: 0x8ec20040  lw          $v0, 0x40($s6)
    ctx->pc = 0x2931c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 64)));
    // 0x2931c8: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x2931c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2931cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2931ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2931d0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2931d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2931d4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2931d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2931d8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2931D8u;
    {
        const bool branch_taken_0x2931d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2931d8) {
            ctx->pc = 0x293200u;
            goto label_293200;
        }
    }
    ctx->pc = 0x2931E0u;
label_2931e0:
    // 0x2931e0: 0x16be0007  bne         $s5, $fp, . + 4 + (0x7 << 2)
    ctx->pc = 0x2931E0u;
    {
        const bool branch_taken_0x2931e0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 30));
        ctx->pc = 0x2931E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2931E0u;
        // 0x2931e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2931e0) {
            ctx->pc = 0x293200u;
            goto label_293200;
        }
    }
    ctx->pc = 0x2931E8u;
    // 0x2931e8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2931e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2931ec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2931ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2931f0:
    // 0x2931f0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2931f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2931f4:
    // 0x2931f4: 0xc0a3c04  jal         func_28F010
    ctx->pc = 0x2931F4u;
    SET_GPR_U32(ctx, 31, 0x2931FCu);
    ctx->pc = 0x2931F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2931F4u;
    // 0x2931f8: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F010u, 0x2931F4u, 0x2931FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2931FCu;
label_2931fc:
    // 0x2931fc: 0x8f91b234  lw          $s1, -0x4DCC($gp)
    ctx->pc = 0x2931fcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
label_293200:
    // 0x293200: 0xc080e18  jal         func_203860
    ctx->pc = 0x293200u;
    SET_GPR_U32(ctx, 31, 0x293208u);
    ctx->pc = 0x293204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293200u;
    // 0x293204: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203860u, 0x293200u, 0x293208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293208u;
label_293208:
    // 0x293208: 0x8f84b234  lw          $a0, -0x4DCC($gp)
    ctx->pc = 0x293208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x29320c: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x29320cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x293210: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x293210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x293214: 0x544003c7  bnel        $v0, $zero, . + 4 + (0x3C7 << 2)
    ctx->pc = 0x293214u;
    {
        const bool branch_taken_0x293214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x293214) {
            ctx->pc = 0x293218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x293214u;
            // 0x293218: 0x8e50000c  lw          $s0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x294134u;
            goto label_294134;
        }
    }
    ctx->pc = 0x29321Cu;
    // 0x29321c: 0xc080e18  jal         func_203860
    ctx->pc = 0x29321Cu;
    SET_GPR_U32(ctx, 31, 0x293224u);
    ctx->pc = 0x293220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29321Cu;
    // 0x293220: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203860u, 0x29321Cu, 0x293224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293224u;
label_293224:
    // 0x293224: 0x8f84b234  lw          $a0, -0x4DCC($gp)
    ctx->pc = 0x293224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x293228: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x293228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x29322c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x29322cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x293230: 0x544003c0  bnel        $v0, $zero, . + 4 + (0x3C0 << 2)
    ctx->pc = 0x293230u;
    {
        const bool branch_taken_0x293230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x293230) {
            ctx->pc = 0x293234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x293230u;
            // 0x293234: 0x8e50000c  lw          $s0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x294134u;
            goto label_294134;
        }
    }
    ctx->pc = 0x293238u;
    // 0x293238: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x293238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x29323c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x29323cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x293240: 0x506203bc  beql        $v1, $v0, . + 4 + (0x3BC << 2)
    ctx->pc = 0x293240u;
    {
        const bool branch_taken_0x293240 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x293240) {
            ctx->pc = 0x293244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x293240u;
            // 0x293244: 0x8e50000c  lw          $s0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x294134u;
            goto label_294134;
        }
    }
    ctx->pc = 0x293248u;
    // 0x293248: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x293248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x29324c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29324cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x293250: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x293250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x293254: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x293254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x293258: 0x546003b6  bnel        $v1, $zero, . + 4 + (0x3B6 << 2)
    ctx->pc = 0x293258u;
    {
        const bool branch_taken_0x293258 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x293258) {
            ctx->pc = 0x29325Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x293258u;
            // 0x29325c: 0x8e50000c  lw          $s0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x294134u;
            goto label_294134;
        }
    }
    ctx->pc = 0x293260u;
    // 0x293260: 0x8c820180  lw          $v0, 0x180($a0)
    ctx->pc = 0x293260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 384)));
    // 0x293264: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x293264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293268: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x293268u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29326c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x29326cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293270: 0x8c440160  lw          $a0, 0x160($v0)
    ctx->pc = 0x293270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x293274: 0xc0a36e4  jal         func_28DB90
    ctx->pc = 0x293274u;
    SET_GPR_U32(ctx, 31, 0x29327Cu);
    ctx->pc = 0x293278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293274u;
    // 0x293278: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB90u, 0x293274u, 0x29327Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29327Cu;
label_29327c:
    // 0x29327c: 0x100003ad  b           . + 4 + (0x3AD << 2)
    ctx->pc = 0x29327Cu;
    {
        const bool branch_taken_0x29327c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29327Cu;
        // 0x293280: 0x8e50000c  lw          $s0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29327c) {
            ctx->pc = 0x294134u;
            goto label_294134;
        }
    }
    ctx->pc = 0x293284u;
label_293284:
    // 0x293284: 0xc6540004  lwc1        $f20, 0x4($s2)
    ctx->pc = 0x293284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x293288: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x293288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29328c: 0xc7958be0  lwc1        $f21, -0x7420($gp)
    ctx->pc = 0x29328cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x293290: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x293290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293294: 0xc7818be4  lwc1        $f1, -0x741C($gp)
    ctx->pc = 0x293294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293298: 0x0  nop
    ctx->pc = 0x293298u;
    // NOP
    // 0x29329c: 0x0  nop
    ctx->pc = 0x29329cu;
    // NOP
    // 0x2932a0: 0x4615a503  div.s       $f20, $f20, $f21
    ctx->pc = 0x2932a0u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[21];
    // 0x2932a4: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x2932a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2932a8: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x2932a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x2932ac: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2932acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2932b0: 0xc0a4478  jal         func_2911E0
    ctx->pc = 0x2932B0u;
    SET_GPR_U32(ctx, 31, 0x2932B8u);
    ctx->pc = 0x2932B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2932B0u;
    // 0x2932b4: 0xe6000034  swc1        $f0, 0x34($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2911E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2911E0u, 0x2932B0u, 0x2932B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2932B8u;
label_2932b8:
    // 0x2932b8: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x2932b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x2932bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2932bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2932c0: 0x8e50000c  lw          $s0, 0xC($s2)
    ctx->pc = 0x2932c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2932c4: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x2932c4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2932c8: 0xc782b468  lwc1        $f2, -0x4B98($gp)
    ctx->pc = 0x2932c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2932cc: 0xc6010048  lwc1        $f1, 0x48($s0)
    ctx->pc = 0x2932ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2932d0: 0x0  nop
    ctx->pc = 0x2932d0u;
    // NOP
    // 0x2932d4: 0x0  nop
    ctx->pc = 0x2932d4u;
    // NOP
    // 0x2932d8: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x2932d8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[0];
    // 0x2932dc: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x2932dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x2932e0: 0xe6010048  swc1        $f1, 0x48($s0)
    ctx->pc = 0x2932e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x2932e4: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x2932e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2932e8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2932e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2932ec: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x2932ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2932f0: 0x0  nop
    ctx->pc = 0x2932f0u;
    // NOP
    // 0x2932f4: 0x4500038f  bc1f        . + 4 + (0x38F << 2)
    ctx->pc = 0x2932F4u;
    {
        const bool branch_taken_0x2932f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2932F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2932F4u;
        // 0x2932f8: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2932f4) {
            ctx->pc = 0x294134u;
            goto label_294134;
        }
    }
    ctx->pc = 0x2932FCu;
    // 0x2932fc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2932fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x293300: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x293300u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x293304: 0x1000038b  b           . + 4 + (0x38B << 2)
    ctx->pc = 0x293304u;
    {
        const bool branch_taken_0x293304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293304u;
        // 0x293308: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293304) {
            ctx->pc = 0x294134u;
            goto label_294134;
        }
    }
    ctx->pc = 0x29330Cu;
label_29330c:
    // 0x29330c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x29330cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x293310: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x293310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x293314: 0xc7958be8  lwc1        $f21, -0x7418($gp)
    ctx->pc = 0x293314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x293318: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x293318u;
    {
        const bool branch_taken_0x293318 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x29331Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293318u;
        // 0x29331c: 0xc6430004  lwc1        $f3, 0x4($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x293318) {
            ctx->pc = 0x293324u;
            goto label_293324;
        }
    }
    ctx->pc = 0x293320u;
    // 0x293320: 0xc7958bec  lwc1        $f21, -0x7414($gp)
    ctx->pc = 0x293320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_293324:
    // 0x293324: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x293324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293328: 0xc7808bf0  lwc1        $f0, -0x7410($gp)
    ctx->pc = 0x293328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29332c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x29332cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293330: 0x0  nop
    ctx->pc = 0x293330u;
    // NOP
    // 0x293334: 0x0  nop
    ctx->pc = 0x293334u;
    // NOP
    // 0x293338: 0x461518c3  div.s       $f3, $f3, $f21
    ctx->pc = 0x293338u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[21];
    // 0x29333c: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x29333cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x293340: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x293340u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x293344: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x293344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293348: 0xc6020048  lwc1        $f2, 0x48($s0)
    ctx->pc = 0x293348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29334c: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x29334cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x293350: 0x461418c2  mul.s       $f3, $f3, $f20
    ctx->pc = 0x293350u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x293354: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x293354u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x293358: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x293358u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x29335c: 0xe6010034  swc1        $f1, 0x34($s0)
    ctx->pc = 0x29335cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x293360: 0xc0a4478  jal         func_2911E0
    ctx->pc = 0x293360u;
    SET_GPR_U32(ctx, 31, 0x293368u);
    ctx->pc = 0x293364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293360u;
    // 0x293364: 0xe6020048  swc1        $f2, 0x48($s0) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2911E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2911E0u, 0x293360u, 0x293368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293368u;
label_293368:
    // 0x293368: 0xc780b468  lwc1        $f0, -0x4B98($gp)
    ctx->pc = 0x293368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29336c: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x29336cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293370: 0x0  nop
    ctx->pc = 0x293370u;
    // NOP
    // 0x293374: 0x0  nop
    ctx->pc = 0x293374u;
    // NOP
    // 0x293378: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x293378u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x29337c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x29337cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x293380: 0x4601a836  c.le.s      $f21, $f1
    ctx->pc = 0x293380u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x293384: 0x0  nop
    ctx->pc = 0x293384u;
    // NOP
    // 0x293388: 0x45000369  bc1f        . + 4 + (0x369 << 2)
    ctx->pc = 0x293388u;
    {
        const bool branch_taken_0x293388 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29338Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293388u;
        // 0x29338c: 0xe6410004  swc1        $f1, 0x4($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x293388) {
            ctx->pc = 0x294130u;
            goto label_294130;
        }
    }
    ctx->pc = 0x293390u;
    // 0x293390: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x293390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x293394: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x293394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x293398: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x293398u;
    {
        const bool branch_taken_0x293398 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x29339Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293398u;
        // 0x29339c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293398) {
            ctx->pc = 0x293404u;
            goto label_293404;
        }
    }
    ctx->pc = 0x2933A0u;
    // 0x2933a0: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x2933a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x2933a4: 0x8e450034  lw          $a1, 0x34($s2)
    ctx->pc = 0x2933a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x2933a8: 0x24426218  addiu       $v0, $v0, 0x6218
    ctx->pc = 0x2933a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25112));
    // 0x2933ac: 0x8e4400b8  lw          $a0, 0xB8($s2)
    ctx->pc = 0x2933acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
    // 0x2933b0: 0x24432424  addiu       $v1, $v0, 0x2424
    ctx->pc = 0x2933b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 9252));
    // 0x2933b4: 0x245124ac  addiu       $s1, $v0, 0x24AC
    ctx->pc = 0x2933b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 9388));
    // 0x2933b8: 0x245523f0  addiu       $s5, $v0, 0x23F0
    ctx->pc = 0x2933b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 9200));
    // 0x2933bc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2933bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2933c0: 0x1880000f  blez        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x2933C0u;
    {
        const bool branch_taken_0x2933c0 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2933C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2933C0u;
        // 0x2933c4: 0x65880a  movz        $s1, $v1, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2933c0) {
            ctx->pc = 0x293400u;
            goto label_293400;
        }
    }
    ctx->pc = 0x2933C8u;
    // 0x2933c8: 0x8e4400b4  lw          $a0, 0xB4($s2)
    ctx->pc = 0x2933c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x2933cc: 0x0  nop
    ctx->pc = 0x2933ccu;
    // NOP
label_2933d0:
    // 0x2933d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2933d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2933d4: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x2933d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2933d8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2933d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2933dc: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2933dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2933e0: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x2933e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2933e4: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x2933e4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2933e8: 0xc0a54c6  jal         func_295318
    ctx->pc = 0x2933E8u;
    SET_GPR_U32(ctx, 31, 0x2933F0u);
    ctx->pc = 0x2933ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2933E8u;
    // 0x2933ec: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295318u, 0x2933E8u, 0x2933F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2933F0u;
label_2933f0:
    // 0x2933f0: 0x8e4200b8  lw          $v0, 0xB8($s2)
    ctx->pc = 0x2933f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
    // 0x2933f4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2933f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2933f8: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x2933F8u;
    {
        const bool branch_taken_0x2933f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2933f8) {
            ctx->pc = 0x2933FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2933F8u;
            // 0x2933fc: 0x8e4400b4  lw          $a0, 0xB4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2933D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2933d0;
        }
    }
    ctx->pc = 0x293400u;
label_293400:
    // 0x293400: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x293400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_293404:
    // 0x293404: 0xc0a441c  jal         func_291070
    ctx->pc = 0x293404u;
    SET_GPR_U32(ctx, 31, 0x29340Cu);
    ctx->pc = 0x293408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293404u;
    // 0x293408: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291070u, 0x293404u, 0x29340Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29340Cu;
label_29340c:
    // 0x29340c: 0x100001f4  b           . + 4 + (0x1F4 << 2)
    ctx->pc = 0x29340Cu;
    {
        const bool branch_taken_0x29340c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29340Cu;
        // 0x293410: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29340c) {
            ctx->pc = 0x293BE0u;
            goto label_293be0;
        }
    }
    ctx->pc = 0x293414u;
label_293414:
    // 0x293414: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x293414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293418: 0x24060190  addiu       $a2, $zero, 0x190
    ctx->pc = 0x293418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x29341c: 0xc7948bf4  lwc1        $f20, -0x740C($gp)
    ctx->pc = 0x29341cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x293420: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x293420u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x293424: 0xc7838bf8  lwc1        $f3, -0x7408($gp)
    ctx->pc = 0x293424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x293428: 0x24636218  addiu       $v1, $v1, 0x6218
    ctx->pc = 0x293428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25112));
    // 0x29342c: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x29342cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x293430: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x293430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x293434: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x293434u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x293438: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x293438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x29343c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29343cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293440: 0xc6020034  lwc1        $f2, 0x34($s0)
    ctx->pc = 0x293440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x293444: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x293444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293448: 0x0  nop
    ctx->pc = 0x293448u;
    // NOP
    // 0x29344c: 0x0  nop
    ctx->pc = 0x29344cu;
    // NOP
    // 0x293450: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x293450u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x293454: 0xc6010048  lwc1        $f1, 0x48($s0)
    ctx->pc = 0x293454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293458: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x293458u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x29345c: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x29345cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x293460: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x293460u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x293464: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x293464u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x293468: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x293468u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x29346c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x29346cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x293470: 0xe6020034  swc1        $f2, 0x34($s0)
    ctx->pc = 0x293470u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x293474: 0xc0a4478  jal         func_2911E0
    ctx->pc = 0x293474u;
    SET_GPR_U32(ctx, 31, 0x29347Cu);
    ctx->pc = 0x293478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293474u;
    // 0x293478: 0xe6010048  swc1        $f1, 0x48($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2911E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2911E0u, 0x293474u, 0x29347Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29347Cu;
label_29347c:
    // 0x29347c: 0xc780b468  lwc1        $f0, -0x4B98($gp)
    ctx->pc = 0x29347cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293480: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x293480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293484: 0x0  nop
    ctx->pc = 0x293484u;
    // NOP
    // 0x293488: 0x0  nop
    ctx->pc = 0x293488u;
    // NOP
    // 0x29348c: 0x46150003  div.s       $f0, $f0, $f21
    ctx->pc = 0x29348cu;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[21];
    // 0x293490: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x293490u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x293494: 0x4601a036  c.le.s      $f20, $f1
    ctx->pc = 0x293494u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x293498: 0x0  nop
    ctx->pc = 0x293498u;
    // NOP
    // 0x29349c: 0x45000324  bc1f        . + 4 + (0x324 << 2)
    ctx->pc = 0x29349Cu;
    {
        const bool branch_taken_0x29349c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2934A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29349Cu;
        // 0x2934a0: 0xe6410004  swc1        $f1, 0x4($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29349c) {
            ctx->pc = 0x294130u;
            goto label_294130;
        }
    }
    ctx->pc = 0x2934A4u;
    // 0x2934a4: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2934a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x2934a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2934a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2934ac: 0x8f83b234  lw          $v1, -0x4DCC($gp)
    ctx->pc = 0x2934acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2934b0: 0xc621002c  lwc1        $f1, 0x2C($s1)
    ctx->pc = 0x2934b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2934b4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2934b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x2934b8: 0xe461010c  swc1        $f1, 0x10C($v1)
    ctx->pc = 0x2934b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 268), bits); }
    // 0x2934bc: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2934bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2934c0: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x2934c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2934c4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2934c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2934c8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2934C8u;
    {
        const bool branch_taken_0x2934c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2934CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2934C8u;
        // 0x2934cc: 0xe4600110  swc1        $f0, 0x110($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 272), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2934c8) {
            ctx->pc = 0x2934D4u;
            goto label_2934d4;
        }
    }
    ctx->pc = 0x2934D0u;
    // 0x2934d0: 0xe4610108  swc1        $f1, 0x108($v1)
    ctx->pc = 0x2934d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 264), bits); }
label_2934d4:
    // 0x2934d4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2934d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2934d8: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x2934d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2934dc: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2934DCu;
    {
        const bool branch_taken_0x2934dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2934E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2934DCu;
        // 0x2934e0: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2934dc) {
            ctx->pc = 0x2934F8u;
            goto label_2934f8;
        }
    }
    ctx->pc = 0x2934E4u;
    // 0x2934e4: 0x24040087  addiu       $a0, $zero, 0x87
    ctx->pc = 0x2934e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
label_2934e8:
    // 0x2934e8: 0xc081546  jal         func_205518
    ctx->pc = 0x2934E8u;
    SET_GPR_U32(ctx, 31, 0x2934F0u);
    ctx->pc = 0x2934ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2934E8u;
    // 0x2934ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x2934E8u, 0x2934F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2934F0u;
label_2934f0:
    // 0x2934f0: 0x10000310  b           . + 4 + (0x310 << 2)
    ctx->pc = 0x2934F0u;
    {
        const bool branch_taken_0x2934f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2934F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2934F0u;
        // 0x2934f4: 0x8e50000c  lw          $s0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2934f0) {
            ctx->pc = 0x294134u;
            goto label_294134;
        }
    }
    ctx->pc = 0x2934F8u;
label_2934f8:
    // 0x2934f8: 0x1062030d  beq         $v1, $v0, . + 4 + (0x30D << 2)
    ctx->pc = 0x2934F8u;
    {
        const bool branch_taken_0x2934f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2934FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2934F8u;
        // 0x2934fc: 0x24040089  addiu       $a0, $zero, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2934f8) {
            ctx->pc = 0x294130u;
            goto label_294130;
        }
    }
    ctx->pc = 0x293500u;
    // 0x293500: 0x1000fff9  b           . + 4 + (-0x7 << 2)
    ctx->pc = 0x293500u;
    {
        const bool branch_taken_0x293500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x293500) {
            ctx->pc = 0x2934E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2934e8;
        }
    }
    ctx->pc = 0x293508u;
label_293508:
    // 0x293508: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x293508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x29350c: 0x24030190  addiu       $v1, $zero, 0x190
    ctx->pc = 0x29350cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x293510: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x293510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x293514: 0xc7958bfc  lwc1        $f21, -0x7404($gp)
    ctx->pc = 0x293514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x293518: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x293518u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x29351c: 0x24426218  addiu       $v0, $v0, 0x6218
    ctx->pc = 0x29351cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25112));
    // 0x293520: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x293520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x293524: 0x14a40002  bne         $a1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x293524u;
    {
        const bool branch_taken_0x293524 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x293528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293524u;
        // 0x293528: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293524) {
            ctx->pc = 0x293530u;
            goto label_293530;
        }
    }
    ctx->pc = 0x29352Cu;
    // 0x29352c: 0xc7958c00  lwc1        $f21, -0x7400($gp)
    ctx->pc = 0x29352cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_293530:
    // 0x293530: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x293530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293534: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x293534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293538: 0xc7818c04  lwc1        $f1, -0x73FC($gp)
    ctx->pc = 0x293538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29353c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29353cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293540: 0x4600a801  sub.s       $f0, $f21, $f0
    ctx->pc = 0x293540u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x293544: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x293544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x293548: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x293548u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x29354c: 0xc6030048  lwc1        $f3, 0x48($s0)
    ctx->pc = 0x29354cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x293550: 0xc6020034  lwc1        $f2, 0x34($s0)
    ctx->pc = 0x293550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x293554: 0x0  nop
    ctx->pc = 0x293554u;
    // NOP
    // 0x293558: 0x0  nop
    ctx->pc = 0x293558u;
    // NOP
    // 0x29355c: 0x46150003  div.s       $f0, $f0, $f21
    ctx->pc = 0x29355cu;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[21];
    // 0x293560: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x293560u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x293564: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x293564u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x293568: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x293568u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x29356c: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x29356cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x293570: 0xe6020034  swc1        $f2, 0x34($s0)
    ctx->pc = 0x293570u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x293574: 0xc0a4478  jal         func_2911E0
    ctx->pc = 0x293574u;
    SET_GPR_U32(ctx, 31, 0x29357Cu);
    ctx->pc = 0x293578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293574u;
    // 0x293578: 0xe6030048  swc1        $f3, 0x48($s0) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2911E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2911E0u, 0x293574u, 0x29357Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29357Cu;
label_29357c:
    // 0x29357c: 0xc780b468  lwc1        $f0, -0x4B98($gp)
    ctx->pc = 0x29357cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293580: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x293580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293584: 0x0  nop
    ctx->pc = 0x293584u;
    // NOP
    // 0x293588: 0x0  nop
    ctx->pc = 0x293588u;
    // NOP
    // 0x29358c: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x29358cu;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x293590: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x293590u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x293594: 0x4601a836  c.le.s      $f21, $f1
    ctx->pc = 0x293594u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x293598: 0x100002da  b           . + 4 + (0x2DA << 2)
    ctx->pc = 0x293598u;
    {
        const bool branch_taken_0x293598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29359Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293598u;
        // 0x29359c: 0xe6410004  swc1        $f1, 0x4($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x293598) {
            ctx->pc = 0x294104u;
            goto label_294104;
        }
    }
    ctx->pc = 0x2935A0u;
label_2935a0:
    // 0x2935a0: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x2935a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2935a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2935a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2935a8: 0xc7948c08  lwc1        $f20, -0x73F8($gp)
    ctx->pc = 0x2935a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2935ac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2935acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2935b0: 0x3c014234  lui         $at, 0x4234
    ctx->pc = 0x2935b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16948 << 16));
    // 0x2935b4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2935b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2935b8: 0x0  nop
    ctx->pc = 0x2935b8u;
    // NOP
    // 0x2935bc: 0x0  nop
    ctx->pc = 0x2935bcu;
    // NOP
    // 0x2935c0: 0x46141083  div.s       $f2, $f2, $f20
    ctx->pc = 0x2935c0u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[20];
    // 0x2935c4: 0x3c01c1a0  lui         $at, 0xC1A0
    ctx->pc = 0x2935c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49568 << 16));
    // 0x2935c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2935c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2935cc: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2935ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2935d0: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2935d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2935d4: 0xe6410088  swc1        $f1, 0x88($s2)
    ctx->pc = 0x2935d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 136), bits); }
    // 0x2935d8: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x2935d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2935dc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2935dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2935e0: 0xc0a4478  jal         func_2911E0
    ctx->pc = 0x2935E0u;
    SET_GPR_U32(ctx, 31, 0x2935E8u);
    ctx->pc = 0x2935E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2935E0u;
    // 0x2935e4: 0xe6000048  swc1        $f0, 0x48($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2911E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2911E0u, 0x2935E0u, 0x2935E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2935E8u;
label_2935e8:
    // 0x2935e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2935e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2935ec: 0xc0a474e  jal         func_291D38
    ctx->pc = 0x2935ECu;
    SET_GPR_U32(ctx, 31, 0x2935F4u);
    ctx->pc = 0x2935F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2935ECu;
    // 0x2935f0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291D38u, 0x2935ECu, 0x2935F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2935F4u;
label_2935f4:
    // 0x2935f4: 0xc781b468  lwc1        $f1, -0x4B98($gp)
    ctx->pc = 0x2935f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2935f8: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x2935f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x2935fc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2935fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x293600: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x293600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293604: 0x0  nop
    ctx->pc = 0x293604u;
    // NOP
    // 0x293608: 0x0  nop
    ctx->pc = 0x293608u;
    // NOP
    // 0x29360c: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x29360cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x293610: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x293610u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x293614: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x293614u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x293618: 0x0  nop
    ctx->pc = 0x293618u;
    // NOP
    // 0x29361c: 0x450002c4  bc1f        . + 4 + (0x2C4 << 2)
    ctx->pc = 0x29361Cu;
    {
        const bool branch_taken_0x29361c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x293620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29361Cu;
        // 0x293620: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29361c) {
            ctx->pc = 0x294130u;
            goto label_294130;
        }
    }
    ctx->pc = 0x293624u;
    // 0x293624: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x293624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293628: 0xc0a441c  jal         func_291070
    ctx->pc = 0x293628u;
    SET_GPR_U32(ctx, 31, 0x293630u);
    ctx->pc = 0x29362Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293628u;
    // 0x29362c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291070u, 0x293628u, 0x293630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293630u;
label_293630:
    // 0x293630: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x293630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293634: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x293634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x293638: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x293638u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29363c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x29363cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x293640: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x293640u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x293644: 0x8e50000c  lw          $s0, 0xC($s2)
    ctx->pc = 0x293644u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x293648: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x293648u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29364c: 0x100002b9  b           . + 4 + (0x2B9 << 2)
    ctx->pc = 0x29364Cu;
    {
        const bool branch_taken_0x29364c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29364Cu;
        // 0x293650: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29364c) {
            ctx->pc = 0x294134u;
            goto label_294134;
        }
    }
    ctx->pc = 0x293654u;
label_293654:
    // 0x293654: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x293654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293658: 0xc7958c0c  lwc1        $f21, -0x73F4($gp)
    ctx->pc = 0x293658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x29365c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x29365cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x293660: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x293660u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x293664: 0x0  nop
    ctx->pc = 0x293664u;
    // NOP
    // 0x293668: 0x0  nop
    ctx->pc = 0x293668u;
    // NOP
    // 0x29366c: 0x46150943  div.s       $f5, $f1, $f21
    ctx->pc = 0x29366cu;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[5] = ctx->f[1] / ctx->f[21];
    // 0x293670: 0x46000186  mov.s       $f6, $f0
    ctx->pc = 0x293670u;
    ctx->f[6] = FPU_MOV_S(ctx->f[0]);
    // 0x293674: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x293674u;
    {
        const bool branch_taken_0x293674 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x293678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293674u;
        // 0x293678: 0x46050041  sub.s       $f1, $f0, $f5 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x293674) {
            ctx->pc = 0x293684u;
            goto label_293684;
        }
    }
    ctx->pc = 0x29367Cu;
    // 0x29367c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x29367cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x293680: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x293680u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_293684:
    // 0x293684: 0x3c01c28c  lui         $at, 0xC28C
    ctx->pc = 0x293684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49804 << 16));
    // 0x293688: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x293688u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29368c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29368cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293690: 0x3c01420c  lui         $at, 0x420C
    ctx->pc = 0x293690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16908 << 16));
    // 0x293694: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x293694u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x293698: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x293698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29369c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x29369cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2936a0: 0x3c01c2b4  lui         $at, 0xC2B4
    ctx->pc = 0x2936a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49844 << 16));
    // 0x2936a4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2936a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2936a8: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x2936a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2936ac: 0xc6040034  lwc1        $f4, 0x34($s0)
    ctx->pc = 0x2936acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2936b0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2936b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2936b4: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x2936b4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2936b8: 0xc6010048  lwc1        $f1, 0x48($s0)
    ctx->pc = 0x2936b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2936bc: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x2936bcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x2936c0: 0xc6000058  lwc1        $f0, 0x58($s0)
    ctx->pc = 0x2936c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2936c4: 0x46142942  mul.s       $f5, $f5, $f20
    ctx->pc = 0x2936c4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[20]);
    // 0x2936c8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2936c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2936cc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2936ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2936d0: 0x46052101  sub.s       $f4, $f4, $f5
    ctx->pc = 0x2936d0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
    // 0x2936d4: 0xe6010048  swc1        $f1, 0x48($s0)
    ctx->pc = 0x2936d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x2936d8: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2936d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2936dc: 0xc0a4478  jal         func_2911E0
    ctx->pc = 0x2936DCu;
    SET_GPR_U32(ctx, 31, 0x2936E4u);
    ctx->pc = 0x2936E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2936DCu;
    // 0x2936e0: 0xe6040034  swc1        $f4, 0x34($s0) (Delay Slot)
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2911E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2911E0u, 0x2936DCu, 0x2936E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2936E4u;
label_2936e4:
    // 0x2936e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2936e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2936e8: 0xc0a474e  jal         func_291D38
    ctx->pc = 0x2936E8u;
    SET_GPR_U32(ctx, 31, 0x2936F0u);
    ctx->pc = 0x2936ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2936E8u;
    // 0x2936ec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291D38u, 0x2936E8u, 0x2936F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2936F0u;
label_2936f0:
    // 0x2936f0: 0xc781b468  lwc1        $f1, -0x4B98($gp)
    ctx->pc = 0x2936f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2936f4: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x2936f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x2936f8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2936f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2936fc: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x2936fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293700: 0x0  nop
    ctx->pc = 0x293700u;
    // NOP
    // 0x293704: 0x0  nop
    ctx->pc = 0x293704u;
    // NOP
    // 0x293708: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x293708u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x29370c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x29370cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x293710: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x293710u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x293714: 0x0  nop
    ctx->pc = 0x293714u;
    // NOP
    // 0x293718: 0x45000285  bc1f        . + 4 + (0x285 << 2)
    ctx->pc = 0x293718u;
    {
        const bool branch_taken_0x293718 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29371Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293718u;
        // 0x29371c: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x293718) {
            ctx->pc = 0x294130u;
            goto label_294130;
        }
    }
    ctx->pc = 0x293720u;
    // 0x293720: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x293720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293724: 0xc0a441c  jal         func_291070
    ctx->pc = 0x293724u;
    SET_GPR_U32(ctx, 31, 0x29372Cu);
    ctx->pc = 0x293728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293724u;
    // 0x293728: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291070u, 0x293724u, 0x29372Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29372Cu;
label_29372c:
    // 0x29372c: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x29372cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293730: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x293730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x293734: 0x8e43008c  lw          $v1, 0x8C($s2)
    ctx->pc = 0x293734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x293738: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x293738u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x29373c: 0xc7828c10  lwc1        $f2, -0x73F0($gp)
    ctx->pc = 0x29373cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x293740: 0xc7818c14  lwc1        $f1, -0x73EC($gp)
    ctx->pc = 0x293740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293744: 0x8e420090  lw          $v0, 0x90($s2)
    ctx->pc = 0x293744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x293748: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x293748u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x29374c: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x29374cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x293750: 0x8e50000c  lw          $s0, 0xC($s2)
    ctx->pc = 0x293750u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x293754: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x293754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x293758: 0xe4610044  swc1        $f1, 0x44($v1)
    ctx->pc = 0x293758u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
    // 0x29375c: 0xe474003c  swc1        $f20, 0x3C($v1)
    ctx->pc = 0x29375cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    // 0x293760: 0xe4620040  swc1        $f2, 0x40($v1)
    ctx->pc = 0x293760u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x293764: 0xe4410044  swc1        $f1, 0x44($v0)
    ctx->pc = 0x293764u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x293768: 0xe454003c  swc1        $f20, 0x3C($v0)
    ctx->pc = 0x293768u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x29376c: 0x10000271  b           . + 4 + (0x271 << 2)
    ctx->pc = 0x29376Cu;
    {
        const bool branch_taken_0x29376c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29376Cu;
        // 0x293770: 0xe4420040  swc1        $f2, 0x40($v0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29376c) {
            ctx->pc = 0x294134u;
            goto label_294134;
        }
    }
    ctx->pc = 0x293774u;
label_293774:
    // 0x293774: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x293774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x293778: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x293778u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x29377c: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x29377Cu;
    {
        const bool branch_taken_0x29377c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x293780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29377Cu;
        // 0x293780: 0xc6420004  lwc1        $f2, 0x4($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29377c) {
            ctx->pc = 0x29378Cu;
            goto label_29378c;
        }
    }
    ctx->pc = 0x293784u;
    // 0x293784: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x293784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x293788: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x293788u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_29378c:
    // 0x29378c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29378cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293790: 0xc7948c18  lwc1        $f20, -0x73E8($gp)
    ctx->pc = 0x293790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x293794: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x293794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293798: 0xc7818c1c  lwc1        $f1, -0x73E4($gp)
    ctx->pc = 0x293798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29379c: 0x0  nop
    ctx->pc = 0x29379cu;
    // NOP
    // 0x2937a0: 0x0  nop
    ctx->pc = 0x2937a0u;
    // NOP
    // 0x2937a4: 0x46141083  div.s       $f2, $f2, $f20
    ctx->pc = 0x2937a4u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[20];
    // 0x2937a8: 0x3c01430c  lui         $at, 0x430C
    ctx->pc = 0x2937a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17164 << 16));
    // 0x2937ac: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2937acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2937b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2937b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2937b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2937b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2937b8: 0x3c01420c  lui         $at, 0x420C
    ctx->pc = 0x2937b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16908 << 16));
    // 0x2937bc: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x2937bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x2937c0: 0x3c01c2b4  lui         $at, 0xC2B4
    ctx->pc = 0x2937c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49844 << 16));
    // 0x2937c4: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x2937c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x2937c8: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x2937c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2937cc: 0xc6060034  lwc1        $f6, 0x34($s0)
    ctx->pc = 0x2937ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2937d0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2937d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2937d4: 0xc6050048  lwc1        $f5, 0x48($s0)
    ctx->pc = 0x2937d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2937d8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2937d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2937dc: 0xc6040058  lwc1        $f4, 0x58($s0)
    ctx->pc = 0x2937dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2937e0: 0x460310c2  mul.s       $f3, $f2, $f3
    ctx->pc = 0x2937e0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2937e4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2937e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2937e8: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x2937e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x2937ec: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x2937ecu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2937f0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2937f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2937f4: 0x46004802  mul.s       $f0, $f9, $f0
    ctx->pc = 0x2937f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x2937f8: 0x460818c0  add.s       $f3, $f3, $f8
    ctx->pc = 0x2937f8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[8]);
    // 0x2937fc: 0x46150840  add.s       $f1, $f1, $f21
    ctx->pc = 0x2937fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
    // 0x293800: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x293800u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x293804: 0x46032940  add.s       $f5, $f5, $f3
    ctx->pc = 0x293804u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x293808: 0x46013181  sub.s       $f6, $f6, $f1
    ctx->pc = 0x293808u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[1]);
    // 0x29380c: 0xe6040058  swc1        $f4, 0x58($s0)
    ctx->pc = 0x29380cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x293810: 0xe6050048  swc1        $f5, 0x48($s0)
    ctx->pc = 0x293810u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x293814: 0xc0a4478  jal         func_2911E0
    ctx->pc = 0x293814u;
    SET_GPR_U32(ctx, 31, 0x29381Cu);
    ctx->pc = 0x293818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293814u;
    // 0x293818: 0xe6060034  swc1        $f6, 0x34($s0) (Delay Slot)
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2911E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2911E0u, 0x293814u, 0x29381Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29381Cu;
label_29381c:
    // 0x29381c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x29381cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293820: 0xc0a474e  jal         func_291D38
    ctx->pc = 0x293820u;
    SET_GPR_U32(ctx, 31, 0x293828u);
    ctx->pc = 0x293824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293820u;
    // 0x293824: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291D38u, 0x293820u, 0x293828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293828u;
label_293828:
    // 0x293828: 0xc780b468  lwc1        $f0, -0x4B98($gp)
    ctx->pc = 0x293828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29382c: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x29382cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x293830: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x293830u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x293834: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x293834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x293838: 0x0  nop
    ctx->pc = 0x293838u;
    // NOP
    // 0x29383c: 0x0  nop
    ctx->pc = 0x29383cu;
    // NOP
    // 0x293840: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x293840u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x293844: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x293844u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x293848: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x293848u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29384c: 0x0  nop
    ctx->pc = 0x29384cu;
    // NOP
    // 0x293850: 0x45000237  bc1f        . + 4 + (0x237 << 2)
    ctx->pc = 0x293850u;
    {
        const bool branch_taken_0x293850 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x293854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293850u;
        // 0x293854: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x293850) {
            ctx->pc = 0x294130u;
            goto label_294130;
        }
    }
    ctx->pc = 0x293858u;
    // 0x293858: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x293858u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x29385c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x29385cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x293860: 0x8e44008c  lw          $a0, 0x8C($s2)
    ctx->pc = 0x293860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x293864: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x293864u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x293868: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x293868u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x29386c: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x29386Cu;
    {
        const bool branch_taken_0x29386c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29386Cu;
        // 0x293870: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29386c) {
            ctx->pc = 0x293AF8u;
            goto label_293af8;
        }
    }
    ctx->pc = 0x293874u;
label_293874:
    // 0x293874: 0xc6030034  lwc1        $f3, 0x34($s0)
    ctx->pc = 0x293874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x293878: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x293878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29387c: 0xc6020048  lwc1        $f2, 0x48($s0)
    ctx->pc = 0x29387cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x293880: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x293880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293884: 0xc7848c20  lwc1        $f4, -0x73E0($gp)
    ctx->pc = 0x293884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x293888: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x293888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x29388c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x29388cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x293890: 0xc781b468  lwc1        $f1, -0x4B98($gp)
    ctx->pc = 0x293890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293894: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x293894u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x293898: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x293898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x29389c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29389cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2938a0: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x2938a0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x2938a4: 0x0  nop
    ctx->pc = 0x2938a4u;
    // NOP
    // 0x2938a8: 0x0  nop
    ctx->pc = 0x2938a8u;
    // NOP
    // 0x2938ac: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2938acu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x2938b0: 0xe6030034  swc1        $f3, 0x34($s0)
    ctx->pc = 0x2938b0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x2938b4: 0xe6020048  swc1        $f2, 0x48($s0)
    ctx->pc = 0x2938b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x2938b8: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x2938b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2938bc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2938bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2938c0: 0xc0a4478  jal         func_2911E0
    ctx->pc = 0x2938C0u;
    SET_GPR_U32(ctx, 31, 0x2938C8u);
    ctx->pc = 0x2938C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2938C0u;
    // 0x2938c4: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2911E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2911E0u, 0x2938C0u, 0x2938C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2938C8u;
label_2938c8:
    // 0x2938c8: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x2938c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2938cc: 0xc7808c24  lwc1        $f0, -0x73DC($gp)
    ctx->pc = 0x2938ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2938d0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2938d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2938d4: 0x0  nop
    ctx->pc = 0x2938d4u;
    // NOP
    // 0x2938d8: 0x45000026  bc1f        . + 4 + (0x26 << 2)
    ctx->pc = 0x2938D8u;
    {
        const bool branch_taken_0x2938d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2938DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2938D8u;
        // 0x2938dc: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2938d8) {
            ctx->pc = 0x293974u;
            goto label_293974;
        }
    }
    ctx->pc = 0x2938E0u;
    // 0x2938e0: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2938e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x2938e4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2938e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x2938e8: 0x240400de  addiu       $a0, $zero, 0xDE
    ctx->pc = 0x2938e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 222));
    // 0x2938ec: 0xc6540004  lwc1        $f20, 0x4($s2)
    ctx->pc = 0x2938ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2938f0: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x2938f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2938f4: 0x3c114000  lui         $s1, 0x4000
    ctx->pc = 0x2938f4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)16384 << 16));
    // 0x2938f8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2938f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2938fc: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2938fcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x293900: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x293900u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x293904: 0xc09a1be  jal         func_2686F8
    ctx->pc = 0x293904u;
    SET_GPR_U32(ctx, 31, 0x29390Cu);
    ctx->pc = 0x293908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293904u;
    // 0x293908: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2686F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2686F8u, 0x293904u, 0x29390Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29390Cu;
label_29390c:
    // 0x29390c: 0x8f86b234  lw          $a2, -0x4DCC($gp)
    ctx->pc = 0x29390cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x293910: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x293910u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x293914: 0xac50008c  sw          $s0, 0x8C($v0)
    ctx->pc = 0x293914u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 140), GPR_U32(ctx, 16));
    // 0x293918: 0x240400de  addiu       $a0, $zero, 0xDE
    ctx->pc = 0x293918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 222));
    // 0x29391c: 0xac500088  sw          $s0, 0x88($v0)
    ctx->pc = 0x29391cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 136), GPR_U32(ctx, 16));
    // 0x293920: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x293920u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x293924: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x293924u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x293928: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x293928u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x29392c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x29392cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x293930: 0x460063c6  mov.s       $f15, $f12
    ctx->pc = 0x293930u;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    // 0x293934: 0xb12825  or          $a1, $a1, $s1
    ctx->pc = 0x293934u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 17));
    // 0x293938: 0xae42008c  sw          $v0, 0x8C($s2)
    ctx->pc = 0x293938u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 2));
    // 0x29393c: 0x246300c9  addiu       $v1, $v1, 0xC9
    ctx->pc = 0x29393cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 201));
    // 0x293940: 0xac450010  sw          $a1, 0x10($v0)
    ctx->pc = 0x293940u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 5));
    // 0x293944: 0xc09a1be  jal         func_2686F8
    ctx->pc = 0x293944u;
    SET_GPR_U32(ctx, 31, 0x29394Cu);
    ctx->pc = 0x293948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293944u;
    // 0x293948: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2686F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2686F8u, 0x293944u, 0x29394Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29394Cu;
label_29394c:
    // 0x29394c: 0x8f85b234  lw          $a1, -0x4DCC($gp)
    ctx->pc = 0x29394cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x293950: 0xac500088  sw          $s0, 0x88($v0)
    ctx->pc = 0x293950u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 136), GPR_U32(ctx, 16));
    // 0x293954: 0xac50008c  sw          $s0, 0x8C($v0)
    ctx->pc = 0x293954u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 140), GPR_U32(ctx, 16));
    // 0x293958: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x293958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x29395c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x29395cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x293960: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x293960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x293964: 0xae420090  sw          $v0, 0x90($s2)
    ctx->pc = 0x293964u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 2));
    // 0x293968: 0x248400c9  addiu       $a0, $a0, 0xC9
    ctx->pc = 0x293968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 201));
    // 0x29396c: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x29396cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x293970: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x293970u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
label_293974:
    // 0x293974: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x293974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293978: 0xc0a474e  jal         func_291D38
    ctx->pc = 0x293978u;
    SET_GPR_U32(ctx, 31, 0x293980u);
    ctx->pc = 0x29397Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293978u;
    // 0x29397c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291D38u, 0x293978u, 0x293980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293980u;
label_293980:
    // 0x293980: 0x100001ec  b           . + 4 + (0x1EC << 2)
    ctx->pc = 0x293980u;
    {
        const bool branch_taken_0x293980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293980u;
        // 0x293984: 0x8e50000c  lw          $s0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293980) {
            ctx->pc = 0x294134u;
            goto label_294134;
        }
    }
    ctx->pc = 0x293988u;
label_293988:
    // 0x293988: 0xc6450004  lwc1        $f5, 0x4($s2)
    ctx->pc = 0x293988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x29398c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29398cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293990: 0xc7948c28  lwc1        $f20, -0x73D8($gp)
    ctx->pc = 0x293990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x293994: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x293994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293998: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x293998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x29399c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x29399cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2939a0: 0x0  nop
    ctx->pc = 0x2939a0u;
    // NOP
    // 0x2939a4: 0x0  nop
    ctx->pc = 0x2939a4u;
    // NOP
    // 0x2939a8: 0x46142943  div.s       $f5, $f5, $f20
    ctx->pc = 0x2939a8u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[5] * 0.0f); } else ctx->f[5] = ctx->f[5] / ctx->f[20];
    // 0x2939ac: 0x3c01428c  lui         $at, 0x428C
    ctx->pc = 0x2939acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17036 << 16));
    // 0x2939b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2939b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2939b4: 0xc7868c2c  lwc1        $f6, -0x73D4($gp)
    ctx->pc = 0x2939b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2939b8: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x2939b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x2939bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2939bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2939c0: 0xc6040034  lwc1        $f4, 0x34($s0)
    ctx->pc = 0x2939c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2939c4: 0xc6020048  lwc1        $f2, 0x48($s0)
    ctx->pc = 0x2939c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2939c8: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x2939c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2939cc: 0x460518c1  sub.s       $f3, $f3, $f5
    ctx->pc = 0x2939ccu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[5]);
    // 0x2939d0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2939d0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2939d4: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x2939d4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x2939d8: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2939d8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2939dc: 0x46032101  sub.s       $f4, $f4, $f3
    ctx->pc = 0x2939dcu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x2939e0: 0xe6020048  swc1        $f2, 0x48($s0)
    ctx->pc = 0x2939e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x2939e4: 0xc0a4478  jal         func_2911E0
    ctx->pc = 0x2939E4u;
    SET_GPR_U32(ctx, 31, 0x2939ECu);
    ctx->pc = 0x2939E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2939E4u;
    // 0x2939e8: 0xe6040034  swc1        $f4, 0x34($s0) (Delay Slot)
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2911E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2911E0u, 0x2939E4u, 0x2939ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2939ECu;
label_2939ec:
    // 0x2939ec: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2939ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2939f0: 0xc0a474e  jal         func_291D38
    ctx->pc = 0x2939F0u;
    SET_GPR_U32(ctx, 31, 0x2939F8u);
    ctx->pc = 0x2939F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2939F0u;
    // 0x2939f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291D38u, 0x2939F0u, 0x2939F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2939F8u;
label_2939f8:
    // 0x2939f8: 0xc781b468  lwc1        $f1, -0x4B98($gp)
    ctx->pc = 0x2939f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2939fc: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x2939fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x293a00: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x293a00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x293a04: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x293a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293a08: 0x0  nop
    ctx->pc = 0x293a08u;
    // NOP
    // 0x293a0c: 0x0  nop
    ctx->pc = 0x293a0cu;
    // NOP
    // 0x293a10: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x293a10u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x293a14: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x293a14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x293a18: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x293a18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x293a1c: 0x0  nop
    ctx->pc = 0x293a1cu;
    // NOP
    // 0x293a20: 0x450001c3  bc1f        . + 4 + (0x1C3 << 2)
    ctx->pc = 0x293A20u;
    {
        const bool branch_taken_0x293a20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x293A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293A20u;
        // 0x293a24: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x293a20) {
            ctx->pc = 0x294130u;
            goto label_294130;
        }
    }
    ctx->pc = 0x293A28u;
    // 0x293a28: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x293a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x293a2c: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x293a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x293a30: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x293a30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x293a34: 0x240400c5  addiu       $a0, $zero, 0xC5
    ctx->pc = 0x293a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 197));
    // 0x293a38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x293a38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293a3c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x293a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x293a40: 0xc081602  jal         func_205808
    ctx->pc = 0x293A40u;
    SET_GPR_U32(ctx, 31, 0x293A48u);
    ctx->pc = 0x293A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293A40u;
    // 0x293a44: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205808u, 0x293A40u, 0x293A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293A48u;
label_293a48:
    // 0x293a48: 0x100001ba  b           . + 4 + (0x1BA << 2)
    ctx->pc = 0x293A48u;
    {
        const bool branch_taken_0x293a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293A48u;
        // 0x293a4c: 0x8e50000c  lw          $s0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293a48) {
            ctx->pc = 0x294134u;
            goto label_294134;
        }
    }
    ctx->pc = 0x293A50u;
label_293a50:
    // 0x293a50: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x293a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x293a54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x293a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293a58: 0xc7948c30  lwc1        $f20, -0x73D0($gp)
    ctx->pc = 0x293a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x293a5c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x293a5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293a60: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x293a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x293a64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x293a64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x293a68: 0x0  nop
    ctx->pc = 0x293a68u;
    // NOP
    // 0x293a6c: 0x0  nop
    ctx->pc = 0x293a6cu;
    // NOP
    // 0x293a70: 0x46141083  div.s       $f2, $f2, $f20
    ctx->pc = 0x293a70u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[20];
    // 0x293a74: 0x3c014234  lui         $at, 0x4234
    ctx->pc = 0x293a74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16948 << 16));
    // 0x293a78: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x293a78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x293a7c: 0x3c01c1a0  lui         $at, 0xC1A0
    ctx->pc = 0x293a7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49568 << 16));
    // 0x293a80: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x293a80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x293a84: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x293a84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x293a88: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x293a88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x293a8c: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x293a8cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x293a90: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x293a90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x293a94: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x293a94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x293a98: 0xe6410088  swc1        $f1, 0x88($s2)
    ctx->pc = 0x293a98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 136), bits); }
    // 0x293a9c: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x293a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293aa0: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x293aa0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x293aa4: 0xc0a4478  jal         func_2911E0
    ctx->pc = 0x293AA4u;
    SET_GPR_U32(ctx, 31, 0x293AACu);
    ctx->pc = 0x293AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293AA4u;
    // 0x293aa8: 0xe6000048  swc1        $f0, 0x48($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2911E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2911E0u, 0x293AA4u, 0x293AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293AACu;
label_293aac:
    // 0x293aac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x293aacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293ab0: 0xc0a474e  jal         func_291D38
    ctx->pc = 0x293AB0u;
    SET_GPR_U32(ctx, 31, 0x293AB8u);
    ctx->pc = 0x293AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293AB0u;
    // 0x293ab4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291D38u, 0x293AB0u, 0x293AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293AB8u;
label_293ab8:
    // 0x293ab8: 0xc781b468  lwc1        $f1, -0x4B98($gp)
    ctx->pc = 0x293ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293abc: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x293abcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x293ac0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x293ac0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x293ac4: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x293ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293ac8: 0x0  nop
    ctx->pc = 0x293ac8u;
    // NOP
    // 0x293acc: 0x0  nop
    ctx->pc = 0x293accu;
    // NOP
    // 0x293ad0: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x293ad0u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x293ad4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x293ad4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x293ad8: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x293ad8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x293adc: 0x0  nop
    ctx->pc = 0x293adcu;
    // NOP
    // 0x293ae0: 0x45000193  bc1f        . + 4 + (0x193 << 2)
    ctx->pc = 0x293AE0u;
    {
        const bool branch_taken_0x293ae0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x293AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293AE0u;
        // 0x293ae4: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x293ae0) {
            ctx->pc = 0x294130u;
            goto label_294130;
        }
    }
    ctx->pc = 0x293AE8u;
    // 0x293ae8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x293ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x293aec: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x293aecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x293af0: 0x8e44008c  lw          $a0, 0x8C($s2)
    ctx->pc = 0x293af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x293af4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x293af4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_293af8:
    // 0x293af8: 0xc09a4d0  jal         func_269340
    ctx->pc = 0x293AF8u;
    SET_GPR_U32(ctx, 31, 0x293B00u);
    ctx->pc = 0x269340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269340u, 0x293AF8u, 0x293B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293B00u;
label_293b00:
    // 0x293b00: 0xae40008c  sw          $zero, 0x8C($s2)
    ctx->pc = 0x293b00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 0));
    // 0x293b04: 0xc09a4d0  jal         func_269340
    ctx->pc = 0x293B04u;
    SET_GPR_U32(ctx, 31, 0x293B0Cu);
    ctx->pc = 0x293B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293B04u;
    // 0x293b08: 0x8e440090  lw          $a0, 0x90($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269340u, 0x293B04u, 0x293B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293B0Cu;
label_293b0c:
    // 0x293b0c: 0x8e50000c  lw          $s0, 0xC($s2)
    ctx->pc = 0x293b0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x293b10: 0x10000188  b           . + 4 + (0x188 << 2)
    ctx->pc = 0x293B10u;
    {
        const bool branch_taken_0x293b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293B10u;
        // 0x293b14: 0xae400090  sw          $zero, 0x90($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293b10) {
            ctx->pc = 0x294134u;
            goto label_294134;
        }
    }
    ctx->pc = 0x293B18u;
label_293b18:
    // 0x293b18: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x293b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x293b1c: 0x8e44008c  lw          $a0, 0x8C($s2)
    ctx->pc = 0x293b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x293b20: 0x244261a0  addiu       $v0, $v0, 0x61A0
    ctx->pc = 0x293b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24992));
    // 0x293b24: 0x26660008  addiu       $a2, $s3, 0x8
    ctx->pc = 0x293b24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x293b28: 0x24480008  addiu       $t0, $v0, 0x8
    ctx->pc = 0x293b28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x293b2c: 0x26850270  addiu       $a1, $s4, 0x270
    ctx->pc = 0x293b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 624));
    // 0x293b30: 0x2407000d  addiu       $a3, $zero, 0xD
    ctx->pc = 0x293b30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x293b34: 0x0  nop
    ctx->pc = 0x293b34u;
    // NOP
label_293b38:
    // 0x293b38: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x293b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x293b3c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x293b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x293b40: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x293b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x293b44: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x293b44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x293b48: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x293b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x293b4c: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x293b4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x293b50: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x293B50u;
    {
        const bool branch_taken_0x293b50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x293b50) {
            ctx->pc = 0x293B54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x293B50u;
            // 0x293b54: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x293B58u;
            goto label_293b58;
        }
    }
    ctx->pc = 0x293B58u;
label_293b58:
    // 0x293b58: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x293b58u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x293b5c: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x293b5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x293b60: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x293b60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x293b64: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x293b64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x293b68: 0x4e1fff3  bgez        $a3, . + 4 + (-0xD << 2)
    ctx->pc = 0x293B68u;
    {
        const bool branch_taken_0x293b68 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x293B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293B68u;
        // 0x293b6c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293b68) {
            ctx->pc = 0x293B38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_293b38;
        }
    }
    ctx->pc = 0x293B70u;
    // 0x293b70: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x293B70u;
    {
        const bool branch_taken_0x293b70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x293b70) {
            ctx->pc = 0x293B74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x293B70u;
            // 0x293b74: 0x8e440090  lw          $a0, 0x90($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x293B88u;
            goto label_293b88;
        }
    }
    ctx->pc = 0x293B78u;
    // 0x293b78: 0xc09a4d0  jal         func_269340
    ctx->pc = 0x293B78u;
    SET_GPR_U32(ctx, 31, 0x293B80u);
    ctx->pc = 0x269340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269340u, 0x293B78u, 0x293B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293B80u;
label_293b80:
    // 0x293b80: 0xae40008c  sw          $zero, 0x8C($s2)
    ctx->pc = 0x293b80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 0));
    // 0x293b84: 0x8e440090  lw          $a0, 0x90($s2)
    ctx->pc = 0x293b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
label_293b88:
    // 0x293b88: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x293B88u;
    {
        const bool branch_taken_0x293b88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x293b88) {
            ctx->pc = 0x293B9Cu;
            goto label_293b9c;
        }
    }
    ctx->pc = 0x293B90u;
    // 0x293b90: 0xc09a4d0  jal         func_269340
    ctx->pc = 0x293B90u;
    SET_GPR_U32(ctx, 31, 0x293B98u);
    ctx->pc = 0x269340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269340u, 0x293B90u, 0x293B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293B98u;
label_293b98:
    // 0x293b98: 0xae400090  sw          $zero, 0x90($s2)
    ctx->pc = 0x293b98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 0));
label_293b9c:
    // 0x293b9c: 0xc09a4d0  jal         func_269340
    ctx->pc = 0x293B9Cu;
    SET_GPR_U32(ctx, 31, 0x293BA4u);
    ctx->pc = 0x293BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293B9Cu;
    // 0x293ba0: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269340u, 0x293B9Cu, 0x293BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293BA4u;
label_293ba4:
    // 0x293ba4: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x293ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x293ba8: 0x8e640040  lw          $a0, 0x40($s3)
    ctx->pc = 0x293ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x293bac: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x293BACu;
    {
        const bool branch_taken_0x293bac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x293bac) {
            ctx->pc = 0x293BB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x293BACu;
            // 0x293bb0: 0xae770000  sw          $s7, 0x0($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 23));
            ctx->in_delay_slot = false;
            ctx->pc = 0x293BC4u;
            goto label_293bc4;
        }
    }
    ctx->pc = 0x293BB4u;
    // 0x293bb4: 0xc09a4d0  jal         func_269340
    ctx->pc = 0x293BB4u;
    SET_GPR_U32(ctx, 31, 0x293BBCu);
    ctx->pc = 0x269340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269340u, 0x293BB4u, 0x293BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293BBCu;
label_293bbc:
    // 0x293bbc: 0xae600040  sw          $zero, 0x40($s3)
    ctx->pc = 0x293bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 0));
    // 0x293bc0: 0xae770000  sw          $s7, 0x0($s3)
    ctx->pc = 0x293bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 23));
label_293bc4:
    // 0x293bc4: 0x8e820104  lw          $v0, 0x104($s4)
    ctx->pc = 0x293bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 260)));
    // 0x293bc8: 0x6e10004  bgez        $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x293BC8u;
    {
        const bool branch_taken_0x293bc8 = (GPR_S32(ctx, 23) >= 0);
        ctx->pc = 0x293BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293BC8u;
        // 0x293bcc: 0xae820108  sw          $v0, 0x108($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 264), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293bc8) {
            ctx->pc = 0x293BDCu;
            goto label_293bdc;
        }
    }
    ctx->pc = 0x293BD0u;
    // 0x293bd0: 0x8e50000c  lw          $s0, 0xC($s2)
    ctx->pc = 0x293bd0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x293bd4: 0x10000157  b           . + 4 + (0x157 << 2)
    ctx->pc = 0x293BD4u;
    {
        const bool branch_taken_0x293bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293BD4u;
        // 0x293bd8: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293bd4) {
            ctx->pc = 0x294134u;
            goto label_294134;
        }
    }
    ctx->pc = 0x293BDCu;
label_293bdc:
    // 0x293bdc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x293bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_293be0:
    // 0x293be0: 0x8e50000c  lw          $s0, 0xC($s2)
    ctx->pc = 0x293be0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x293be4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x293be4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x293be8: 0x10000152  b           . + 4 + (0x152 << 2)
    ctx->pc = 0x293BE8u;
    {
        const bool branch_taken_0x293be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293BE8u;
        // 0x293bec: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293be8) {
            ctx->pc = 0x294134u;
            goto label_294134;
        }
    }
    ctx->pc = 0x293BF0u;
label_293bf0:
    // 0x293bf0: 0xc781b468  lwc1        $f1, -0x4B98($gp)
    ctx->pc = 0x293bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293bf4: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x293bf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x293bf8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x293bf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x293bfc: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x293bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293c00: 0x0  nop
    ctx->pc = 0x293c00u;
    // NOP
    // 0x293c04: 0x0  nop
    ctx->pc = 0x293c04u;
    // NOP
    // 0x293c08: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x293c08u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x293c0c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x293c0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x293c10: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x293c10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x293c14: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x293c14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x293c18: 0x0  nop
    ctx->pc = 0x293c18u;
    // NOP
    // 0x293c1c: 0x45000036  bc1f        . + 4 + (0x36 << 2)
    ctx->pc = 0x293C1Cu;
    {
        const bool branch_taken_0x293c1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x293C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293C1Cu;
        // 0x293c20: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x293c1c) {
            ctx->pc = 0x293CF8u;
            goto label_293cf8;
        }
    }
    ctx->pc = 0x293C24u;
    // 0x293c24: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x293c24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x293c28: 0x24020190  addiu       $v0, $zero, 0x190
    ctx->pc = 0x293c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x293c2c: 0x8e830104  lw          $v1, 0x104($s4)
    ctx->pc = 0x293c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 260)));
    // 0x293c30: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x293c30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x293c34: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x293c34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x293c38: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x293c38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x293c3c: 0x24c290f8  addiu       $v0, $a2, -0x6F08
    ctx->pc = 0x293c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938872));
    // 0x293c40: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x293c40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x293c44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x293c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x293c48: 0x24846218  addiu       $a0, $a0, 0x6218
    ctx->pc = 0x293c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25112));
    // 0x293c4c: 0x84470002  lh          $a3, 0x2($v0)
    ctx->pc = 0x293c4cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x293c50: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x293c50u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293c54: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x293c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x293c58: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x293c58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x293c5c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x293c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x293c60: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x293c60u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x293c64: 0x2901821  addu        $v1, $s4, $s0
    ctx->pc = 0x293c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x293c68: 0x2702021  addu        $a0, $s3, $s0
    ctx->pc = 0x293c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x293c6c: 0x8c65026c  lw          $a1, 0x26C($v1)
    ctx->pc = 0x293c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 620)));
    // 0x293c70: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x293c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x293c74: 0x10e60004  beq         $a3, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x293C74u;
    {
        const bool branch_taken_0x293c74 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        ctx->pc = 0x293C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293C74u;
        // 0x293c78: 0xa2b821  addu        $s7, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293c74) {
            ctx->pc = 0x293C88u;
            goto label_293c88;
        }
    }
    ctx->pc = 0x293C7Cu;
    // 0x293c7c: 0xc0a542e  jal         func_2950B8
    ctx->pc = 0x293C7Cu;
    SET_GPR_U32(ctx, 31, 0x293C84u);
    ctx->pc = 0x293C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293C7Cu;
    // 0x293c80: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2950B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2950B8u, 0x293C7Cu, 0x293C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293C84u;
label_293c84:
    // 0x293c84: 0x2b02b  sltu        $s6, $zero, $v0
    ctx->pc = 0x293c84u;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_293c88:
    // 0x293c88: 0x12c00007  beqz        $s6, . + 4 + (0x7 << 2)
    ctx->pc = 0x293C88u;
    {
        const bool branch_taken_0x293c88 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x293C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293C88u;
        // 0x293c8c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293c88) {
            ctx->pc = 0x293CA8u;
            goto label_293ca8;
        }
    }
    ctx->pc = 0x293C90u;
    // 0x293c90: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x293C90u;
    {
        const bool branch_taken_0x293c90 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x293C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293C90u;
        // 0x293c94: 0x2901021  addu        $v0, $s4, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293c90) {
            ctx->pc = 0x293CA0u;
            goto label_293ca0;
        }
    }
    ctx->pc = 0x293C98u;
    // 0x293c98: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x293C98u;
    {
        const bool branch_taken_0x293c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293C98u;
        // 0x293c9c: 0x8c43017c  lw          $v1, 0x17C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293c98) {
            ctx->pc = 0x293CA4u;
            goto label_293ca4;
        }
    }
    ctx->pc = 0x293CA0u;
label_293ca0:
    // 0x293ca0: 0x8c430110  lw          $v1, 0x110($v0)
    ctx->pc = 0x293ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
label_293ca4:
    // 0x293ca4: 0x28710001  slti        $s1, $v1, 0x1
    ctx->pc = 0x293ca4u;
    SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1) ? 1 : 0);
label_293ca8:
    // 0x293ca8: 0x1ee00010  bgtz        $s7, . + 4 + (0x10 << 2)
    ctx->pc = 0x293CA8u;
    {
        const bool branch_taken_0x293ca8 = (GPR_S32(ctx, 23) > 0);
        ctx->pc = 0x293CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293CA8u;
        // 0x293cac: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293ca8) {
            ctx->pc = 0x293CECu;
            goto label_293cec;
        }
    }
    ctx->pc = 0x293CB0u;
    // 0x293cb0: 0x8e850104  lw          $a1, 0x104($s4)
    ctx->pc = 0x293cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 260)));
    // 0x293cb4: 0xc0a5414  jal         func_295050
    ctx->pc = 0x293CB4u;
    SET_GPR_U32(ctx, 31, 0x293CBCu);
    ctx->pc = 0x293CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293CB4u;
    // 0x293cb8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295050u, 0x293CB4u, 0x293CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293CBCu;
label_293cbc:
    // 0x293cbc: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x293CBCu;
    {
        const bool branch_taken_0x293cbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x293cbc) {
            ctx->pc = 0x293CC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x293CBCu;
            // 0x293cc0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x293CECu;
            goto label_293cec;
        }
    }
    ctx->pc = 0x293CC4u;
    // 0x293cc4: 0x12c00003  beqz        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x293CC4u;
    {
        const bool branch_taken_0x293cc4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x293CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293CC4u;
        // 0x293cc8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293cc4) {
            ctx->pc = 0x293CD4u;
            goto label_293cd4;
        }
    }
    ctx->pc = 0x293CCCu;
    // 0x293ccc: 0x52200007  beql        $s1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x293CCCu;
    {
        const bool branch_taken_0x293ccc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x293ccc) {
            ctx->pc = 0x293CD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x293CCCu;
            // 0x293cd0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x293CECu;
            goto label_293cec;
        }
    }
    ctx->pc = 0x293CD4u;
label_293cd4:
    // 0x293cd4: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x293cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x293cd8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x293cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x293cdc: 0xc0a36b2  jal         func_28DAC8
    ctx->pc = 0x293CDCu;
    SET_GPR_U32(ctx, 31, 0x293CE4u);
    ctx->pc = 0x293CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293CDCu;
    // 0x293ce0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DAC8u, 0x293CDCu, 0x293CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293CE4u;
label_293ce4:
    // 0x293ce4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x293CE4u;
    {
        const bool branch_taken_0x293ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293CE4u;
        // 0x293ce8: 0x8e50000c  lw          $s0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293ce4) {
            ctx->pc = 0x293CF8u;
            goto label_293cf8;
        }
    }
    ctx->pc = 0x293CECu;
label_293cec:
    // 0x293cec: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x293cecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x293cf0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x293cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x293cf4: 0x8e50000c  lw          $s0, 0xC($s2)
    ctx->pc = 0x293cf4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_293cf8:
    // 0x293cf8: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x293cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293cfc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x293cfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293d00: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x293d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293d04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x293d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293d08: 0xc7828c34  lwc1        $f2, -0x73CC($gp)
    ctx->pc = 0x293d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x293d0c: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x293d0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x293d10: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x293d10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_293d14:
    // 0x293d14: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x293d14u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x293d18: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x293d18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x293d1c: 0xe6010034  swc1        $f1, 0x34($s0)
    ctx->pc = 0x293d1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x293d20: 0xc0a4478  jal         func_2911E0
    ctx->pc = 0x293D20u;
    SET_GPR_U32(ctx, 31, 0x293D28u);
    ctx->pc = 0x293D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293D20u;
    // 0x293d24: 0xe6000048  swc1        $f0, 0x48($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2911E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2911E0u, 0x293D20u, 0x293D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293D28u;
label_293d28:
    // 0x293d28: 0x10000102  b           . + 4 + (0x102 << 2)
    ctx->pc = 0x293D28u;
    {
        const bool branch_taken_0x293d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293D28u;
        // 0x293d2c: 0x8e50000c  lw          $s0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293d28) {
            ctx->pc = 0x294134u;
            goto label_294134;
        }
    }
    ctx->pc = 0x293D30u;
label_293d30:
    // 0x293d30: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x293d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x293d34: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x293d34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293d38: 0xc7948c38  lwc1        $f20, -0x73C8($gp)
    ctx->pc = 0x293d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x293d3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x293d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293d40: 0xc7808c3c  lwc1        $f0, -0x73C4($gp)
    ctx->pc = 0x293d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293d44: 0x0  nop
    ctx->pc = 0x293d44u;
    // NOP
    // 0x293d48: 0x0  nop
    ctx->pc = 0x293d48u;
    // NOP
    // 0x293d4c: 0x46141083  div.s       $f2, $f2, $f20
    ctx->pc = 0x293d4cu;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[20];
    // 0x293d50: 0x3c01c248  lui         $at, 0xC248
    ctx->pc = 0x293d50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49736 << 16));
    // 0x293d54: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x293d54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x293d58: 0xc6030058  lwc1        $f3, 0x58($s0)
    ctx->pc = 0x293d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x293d5c: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x293d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293d60: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x293d60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x293d64: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x293d64u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x293d68: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x293d68u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x293d6c: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x293d6cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x293d70: 0xe6010034  swc1        $f1, 0x34($s0)
    ctx->pc = 0x293d70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x293d74: 0xc0a4478  jal         func_2911E0
    ctx->pc = 0x293D74u;
    SET_GPR_U32(ctx, 31, 0x293D7Cu);
    ctx->pc = 0x293D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293D74u;
    // 0x293d78: 0xe6030058  swc1        $f3, 0x58($s0) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2911E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2911E0u, 0x293D74u, 0x293D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293D7Cu;
label_293d7c:
    // 0x293d7c: 0xc781b468  lwc1        $f1, -0x4B98($gp)
    ctx->pc = 0x293d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293d80: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x293d80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x293d84: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x293d84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x293d88: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x293d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293d8c: 0x0  nop
    ctx->pc = 0x293d8cu;
    // NOP
    // 0x293d90: 0x0  nop
    ctx->pc = 0x293d90u;
    // NOP
    // 0x293d94: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x293d94u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x293d98: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x293d98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x293d9c: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x293d9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x293da0: 0x0  nop
    ctx->pc = 0x293da0u;
    // NOP
    // 0x293da4: 0x450000e2  bc1f        . + 4 + (0xE2 << 2)
    ctx->pc = 0x293DA4u;
    {
        const bool branch_taken_0x293da4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x293DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293DA4u;
        // 0x293da8: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x293da4) {
            ctx->pc = 0x294130u;
            goto label_294130;
        }
    }
    ctx->pc = 0x293DACu;
    // 0x293dac: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x293dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x293db0: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x293db0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x293db4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x293db4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x293db8: 0x1000fdcb  b           . + 4 + (-0x235 << 2)
    ctx->pc = 0x293DB8u;
    {
        const bool branch_taken_0x293db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293DB8u;
        // 0x293dbc: 0x240400ba  addiu       $a0, $zero, 0xBA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293db8) {
            ctx->pc = 0x2934E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2934e8;
        }
    }
    ctx->pc = 0x293DC0u;
label_293dc0:
    // 0x293dc0: 0xc6440004  lwc1        $f4, 0x4($s2)
    ctx->pc = 0x293dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x293dc4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x293dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293dc8: 0xc7948c40  lwc1        $f20, -0x73C0($gp)
    ctx->pc = 0x293dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x293dcc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x293dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293dd0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x293dd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x293dd4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x293dd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x293dd8: 0x0  nop
    ctx->pc = 0x293dd8u;
    // NOP
    // 0x293ddc: 0x0  nop
    ctx->pc = 0x293ddcu;
    // NOP
    // 0x293de0: 0x46142103  div.s       $f4, $f4, $f20
    ctx->pc = 0x293de0u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[4] = ctx->f[4] / ctx->f[20];
    // 0x293de4: 0xc7818c44  lwc1        $f1, -0x73BC($gp)
    ctx->pc = 0x293de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293de8: 0x3c01c248  lui         $at, 0xC248
    ctx->pc = 0x293de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49736 << 16));
    // 0x293dec: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x293decu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x293df0: 0xc6030058  lwc1        $f3, 0x58($s0)
    ctx->pc = 0x293df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x293df4: 0xc6020034  lwc1        $f2, 0x34($s0)
    ctx->pc = 0x293df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x293df8: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x293df8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x293dfc: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x293dfcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x293e00: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x293e00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x293e04: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x293e04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x293e08: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x293e08u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x293e0c: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x293e0cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x293e10: 0xe6020034  swc1        $f2, 0x34($s0)
    ctx->pc = 0x293e10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x293e14: 0xc0a4478  jal         func_2911E0
    ctx->pc = 0x293E14u;
    SET_GPR_U32(ctx, 31, 0x293E1Cu);
    ctx->pc = 0x293E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293E14u;
    // 0x293e18: 0xe6030058  swc1        $f3, 0x58($s0) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2911E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2911E0u, 0x293E14u, 0x293E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293E1Cu;
label_293e1c:
    // 0x293e1c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x293e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293e20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x293e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293e24: 0xc0a4846  jal         func_292118
    ctx->pc = 0x293E24u;
    SET_GPR_U32(ctx, 31, 0x293E2Cu);
    ctx->pc = 0x293E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293E24u;
    // 0x293e28: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x292118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292118u, 0x293E24u, 0x293E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293E2Cu;
label_293e2c:
    // 0x293e2c: 0xc781b468  lwc1        $f1, -0x4B98($gp)
    ctx->pc = 0x293e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293e30: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x293e30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x293e34: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x293e34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x293e38: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x293e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293e3c: 0x0  nop
    ctx->pc = 0x293e3cu;
    // NOP
    // 0x293e40: 0x0  nop
    ctx->pc = 0x293e40u;
    // NOP
    // 0x293e44: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x293e44u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x293e48: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x293e48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x293e4c: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x293e4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x293e50: 0x0  nop
    ctx->pc = 0x293e50u;
    // NOP
    // 0x293e54: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x293E54u;
    {
        const bool branch_taken_0x293e54 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x293E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293E54u;
        // 0x293e58: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x293e54) {
            ctx->pc = 0x293E74u;
            goto label_293e74;
        }
    }
    ctx->pc = 0x293E5Cu;
    // 0x293e5c: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x293e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x293e60: 0xe6550004  swc1        $f21, 0x4($s2)
    ctx->pc = 0x293e60u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x293e64: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x293e64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x293e68: 0x240400b2  addiu       $a0, $zero, 0xB2
    ctx->pc = 0x293e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 178));
    // 0x293e6c: 0xc081546  jal         func_205518
    ctx->pc = 0x293E6Cu;
    SET_GPR_U32(ctx, 31, 0x293E74u);
    ctx->pc = 0x293E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293E6Cu;
    // 0x293e70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x293E6Cu, 0x293E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293E74u;
label_293e74:
    // 0x293e74: 0x8f91b234  lw          $s1, -0x4DCC($gp)
    ctx->pc = 0x293e74u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x293e78: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x293e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x293e7c: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x293e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x293e80: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x293e80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x293e84: 0x30420050  andi        $v0, $v0, 0x50
    ctx->pc = 0x293e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)80);
    // 0x293e88: 0x544400aa  bnel        $v0, $a0, . + 4 + (0xAA << 2)
    ctx->pc = 0x293E88u;
    {
        const bool branch_taken_0x293e88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x293e88) {
            ctx->pc = 0x293E8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x293E88u;
            // 0x293e8c: 0x8e50000c  lw          $s0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x294134u;
            goto label_294134;
        }
    }
    ctx->pc = 0x293E90u;
label_293e90:
    // 0x293e90: 0xc080f5c  jal         func_203D70
    ctx->pc = 0x293E90u;
    SET_GPR_U32(ctx, 31, 0x293E98u);
    ctx->pc = 0x293E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293E90u;
    // 0x293e94: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D70u, 0x293E90u, 0x293E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293E98u;
label_293e98:
    // 0x293e98: 0x8f83b234  lw          $v1, -0x4DCC($gp)
    ctx->pc = 0x293e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x293e9c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x293e9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293ea0: 0xc080f7c  jal         func_203DF0
    ctx->pc = 0x293EA0u;
    SET_GPR_U32(ctx, 31, 0x293EA8u);
    ctx->pc = 0x293EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293EA0u;
    // 0x293ea4: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203DF0u, 0x293EA0u, 0x293EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293EA8u;
label_293ea8:
    // 0x293ea8: 0x8f839da8  lw          $v1, -0x6258($gp)
    ctx->pc = 0x293ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942120)));
    // 0x293eac: 0x24460080  addiu       $a2, $v0, 0x80
    ctx->pc = 0x293eacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x293eb0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x293eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x293eb4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x293eb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293eb8: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x293eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x293ebc: 0xc080f30  jal         func_203CC0
    ctx->pc = 0x293EBCu;
    SET_GPR_U32(ctx, 31, 0x293EC4u);
    ctx->pc = 0x293EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293EBCu;
    // 0x293ec0: 0x43300b  movn        $a2, $v0, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203CC0u, 0x293EBCu, 0x293EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293EC4u;
label_293ec4:
    // 0x293ec4: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x293EC4u;
    {
        const bool branch_taken_0x293ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293EC4u;
        // 0x293ec8: 0x8e50000c  lw          $s0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293ec4) {
            ctx->pc = 0x294134u;
            goto label_294134;
        }
    }
    ctx->pc = 0x293ECCu;
label_293ecc:
    // 0x293ecc: 0xc7958c48  lwc1        $f21, -0x73B8($gp)
    ctx->pc = 0x293eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x293ed0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x293ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293ed4: 0xc6540004  lwc1        $f20, 0x4($s2)
    ctx->pc = 0x293ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x293ed8: 0x0  nop
    ctx->pc = 0x293ed8u;
    // NOP
    // 0x293edc: 0x0  nop
    ctx->pc = 0x293edcu;
    // NOP
    // 0x293ee0: 0x4615a503  div.s       $f20, $f20, $f21
    ctx->pc = 0x293ee0u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[21];
    // 0x293ee4: 0xc0a4478  jal         func_2911E0
    ctx->pc = 0x293EE4u;
    SET_GPR_U32(ctx, 31, 0x293EECu);
    ctx->pc = 0x293EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293EE4u;
    // 0x293ee8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2911E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2911E0u, 0x293EE4u, 0x293EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293EECu;
label_293eec:
    // 0x293eec: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x293eecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293ef0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x293ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293ef4: 0xc0a4846  jal         func_292118
    ctx->pc = 0x293EF4u;
    SET_GPR_U32(ctx, 31, 0x293EFCu);
    ctx->pc = 0x293EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293EF4u;
    // 0x293ef8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x292118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292118u, 0x293EF4u, 0x293EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293EFCu;
label_293efc:
    // 0x293efc: 0xc781b468  lwc1        $f1, -0x4B98($gp)
    ctx->pc = 0x293efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293f00: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x293f00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x293f04: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x293f04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x293f08: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x293f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293f0c: 0x0  nop
    ctx->pc = 0x293f0cu;
    // NOP
    // 0x293f10: 0x0  nop
    ctx->pc = 0x293f10u;
    // NOP
    // 0x293f14: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x293f14u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x293f18: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x293f18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x293f1c: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x293f1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x293f20: 0x0  nop
    ctx->pc = 0x293f20u;
    // NOP
    // 0x293f24: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x293F24u;
    {
        const bool branch_taken_0x293f24 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x293F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293F24u;
        // 0x293f28: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x293f24) {
            ctx->pc = 0x293FA0u;
            goto label_293fa0;
        }
    }
    ctx->pc = 0x293F2Cu;
    // 0x293f2c: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x293f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x293f30: 0xc080e18  jal         func_203860
    ctx->pc = 0x293F30u;
    SET_GPR_U32(ctx, 31, 0x293F38u);
    ctx->pc = 0x293F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293F30u;
    // 0x293f34: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203860u, 0x293F30u, 0x293F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293F38u;
label_293f38:
    // 0x293f38: 0x8f91b234  lw          $s1, -0x4DCC($gp)
    ctx->pc = 0x293f38u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x293f3c: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x293f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x293f40: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x293f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x293f44: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x293F44u;
    {
        const bool branch_taken_0x293f44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x293f44) {
            ctx->pc = 0x293F68u;
            goto label_293f68;
        }
    }
    ctx->pc = 0x293F4Cu;
    // 0x293f4c: 0xc080e18  jal         func_203860
    ctx->pc = 0x293F4Cu;
    SET_GPR_U32(ctx, 31, 0x293F54u);
    ctx->pc = 0x293F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293F4Cu;
    // 0x293f50: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203860u, 0x293F4Cu, 0x293F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293F54u;
label_293f54:
    // 0x293f54: 0x8f91b234  lw          $s1, -0x4DCC($gp)
    ctx->pc = 0x293f54u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x293f58: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x293f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x293f5c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x293f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x293f60: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x293F60u;
    {
        const bool branch_taken_0x293f60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x293f60) {
            ctx->pc = 0x293FA0u;
            goto label_293fa0;
        }
    }
    ctx->pc = 0x293F68u;
label_293f68:
    // 0x293f68: 0xc080e5a  jal         func_203968
    ctx->pc = 0x293F68u;
    SET_GPR_U32(ctx, 31, 0x293F70u);
    ctx->pc = 0x293F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293F68u;
    // 0x293f6c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203968u, 0x293F68u, 0x293F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293F70u;
label_293f70:
    // 0x293f70: 0x8f84b234  lw          $a0, -0x4DCC($gp)
    ctx->pc = 0x293f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x293f74: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x293f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x293f78: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x293f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x293f7c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x293F7Cu;
    {
        const bool branch_taken_0x293f7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x293f7c) {
            ctx->pc = 0x293FA0u;
            goto label_293fa0;
        }
    }
    ctx->pc = 0x293F84u;
    // 0x293f84: 0xc080e5a  jal         func_203968
    ctx->pc = 0x293F84u;
    SET_GPR_U32(ctx, 31, 0x293F8Cu);
    ctx->pc = 0x293F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293F84u;
    // 0x293f88: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203968u, 0x293F84u, 0x293F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293F8Cu;
label_293f8c:
    // 0x293f8c: 0x8f91b234  lw          $s1, -0x4DCC($gp)
    ctx->pc = 0x293f8cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x293f90: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x293f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x293f94: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x293f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x293f98: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x293F98u;
    {
        const bool branch_taken_0x293f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x293f98) {
            ctx->pc = 0x293F9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x293F98u;
            // 0x293f9c: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x293FB0u;
            goto label_293fb0;
        }
    }
    ctx->pc = 0x293FA0u;
label_293fa0:
    // 0x293fa0: 0xc0a38d8  jal         func_28E360
    ctx->pc = 0x293FA0u;
    SET_GPR_U32(ctx, 31, 0x293FA8u);
    ctx->pc = 0x293FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293FA0u;
    // 0x293fa4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E360u, 0x293FA0u, 0x293FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293FA8u;
label_293fa8:
    // 0x293fa8: 0x8f91b234  lw          $s1, -0x4DCC($gp)
    ctx->pc = 0x293fa8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x293fac: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x293facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_293fb0:
    // 0x293fb0: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x293fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x293fb4: 0x94430002  lhu         $v1, 0x2($v0)
    ctx->pc = 0x293fb4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x293fb8: 0x30630050  andi        $v1, $v1, 0x50
    ctx->pc = 0x293fb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)80);
    // 0x293fbc: 0x5464005d  bnel        $v1, $a0, . + 4 + (0x5D << 2)
    ctx->pc = 0x293FBCu;
    {
        const bool branch_taken_0x293fbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x293fbc) {
            ctx->pc = 0x293FC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x293FBCu;
            // 0x293fc0: 0x8e50000c  lw          $s0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x294134u;
            goto label_294134;
        }
    }
    ctx->pc = 0x293FC4u;
    // 0x293fc4: 0x1000ffb2  b           . + 4 + (-0x4E << 2)
    ctx->pc = 0x293FC4u;
    {
        const bool branch_taken_0x293fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x293fc4) {
            ctx->pc = 0x293E90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_293e90;
        }
    }
    ctx->pc = 0x293FCCu;
label_293fcc:
    // 0x293fcc: 0xc780b468  lwc1        $f0, -0x4B98($gp)
    ctx->pc = 0x293fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293fd0: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x293fd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x293fd4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x293fd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x293fd8: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x293fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293fdc: 0x0  nop
    ctx->pc = 0x293fdcu;
    // NOP
    // 0x293fe0: 0x0  nop
    ctx->pc = 0x293fe0u;
    // NOP
    // 0x293fe4: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x293fe4u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x293fe8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x293fe8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x293fec: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x293fecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x293ff0: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x293ff0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x293ff4: 0x0  nop
    ctx->pc = 0x293ff4u;
    // NOP
    // 0x293ff8: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x293FF8u;
    {
        const bool branch_taken_0x293ff8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x293FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293FF8u;
        // 0x293ffc: 0xe6410004  swc1        $f1, 0x4($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x293ff8) {
            ctx->pc = 0x294054u;
            goto label_294054;
        }
    }
    ctx->pc = 0x294000u;
    // 0x294000: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x294000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x294004: 0x24020190  addiu       $v0, $zero, 0x190
    ctx->pc = 0x294004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x294008: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x294008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x29400c: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x29400cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x294010: 0x24636218  addiu       $v1, $v1, 0x6218
    ctx->pc = 0x294010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25112));
    // 0x294014: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x294014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x294018: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x294018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x29401c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29401cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x294020: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x294020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x294024: 0x8c43026c  lw          $v1, 0x26C($v0)
    ctx->pc = 0x294024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 620)));
    // 0x294028: 0x1c600008  bgtz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x294028u;
    {
        const bool branch_taken_0x294028 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x29402Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294028u;
        // 0x29402c: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294028) {
            ctx->pc = 0x29404Cu;
            goto label_29404c;
        }
    }
    ctx->pc = 0x294030u;
    // 0x294030: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x294030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x294034: 0xe6420004  swc1        $f2, 0x4($s2)
    ctx->pc = 0x294034u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x294038: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x294038u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x29403c: 0xc0a36b2  jal         func_28DAC8
    ctx->pc = 0x29403Cu;
    SET_GPR_U32(ctx, 31, 0x294044u);
    ctx->pc = 0x294040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29403Cu;
    // 0x294040: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DAC8u, 0x29403Cu, 0x294044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294044u;
label_294044:
    // 0x294044: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x294044u;
    {
        const bool branch_taken_0x294044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294044u;
        // 0x294048: 0x8e50000c  lw          $s0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294044) {
            ctx->pc = 0x294054u;
            goto label_294054;
        }
    }
    ctx->pc = 0x29404Cu;
label_29404c:
    // 0x29404c: 0xe6420004  swc1        $f2, 0x4($s2)
    ctx->pc = 0x29404cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x294050: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x294050u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_294054:
    // 0x294054: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x294054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x294058: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x294058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29405c: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x29405cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294060: 0xc7828c4c  lwc1        $f2, -0x73B4($gp)
    ctx->pc = 0x294060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x294064: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x294064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x294068: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x294068u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x29406c: 0x1000ff29  b           . + 4 + (-0xD7 << 2)
    ctx->pc = 0x29406Cu;
    {
        const bool branch_taken_0x29406c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29406Cu;
        // 0x294070: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29406c) {
            ctx->pc = 0x293D14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_293d14;
        }
    }
    ctx->pc = 0x294074u;
label_294074:
    // 0x294074: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x294074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294078: 0x24060190  addiu       $a2, $zero, 0x190
    ctx->pc = 0x294078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x29407c: 0xc7948c50  lwc1        $f20, -0x73B0($gp)
    ctx->pc = 0x29407cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x294080: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x294080u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x294084: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x294084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x294088: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x294088u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x29408c: 0x24636218  addiu       $v1, $v1, 0x6218
    ctx->pc = 0x29408cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25112));
    // 0x294090: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x294090u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x294094: 0xc7848c54  lwc1        $f4, -0x73AC($gp)
    ctx->pc = 0x294094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x294098: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x294098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x29409c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x29409cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2940a0: 0xc6030034  lwc1        $f3, 0x34($s0)
    ctx->pc = 0x2940a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2940a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2940a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2940a8: 0x0  nop
    ctx->pc = 0x2940a8u;
    // NOP
    // 0x2940ac: 0x0  nop
    ctx->pc = 0x2940acu;
    // NOP
    // 0x2940b0: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x2940b0u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x2940b4: 0xc6010048  lwc1        $f1, 0x48($s0)
    ctx->pc = 0x2940b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2940b8: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x2940b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2940bc: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x2940bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2940c0: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x2940c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2940c4: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2940c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2940c8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2940c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2940cc: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x2940ccu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2940d0: 0xe6010048  swc1        $f1, 0x48($s0)
    ctx->pc = 0x2940d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x2940d4: 0xc0a4478  jal         func_2911E0
    ctx->pc = 0x2940D4u;
    SET_GPR_U32(ctx, 31, 0x2940DCu);
    ctx->pc = 0x2940D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2940D4u;
    // 0x2940d8: 0xe6030034  swc1        $f3, 0x34($s0) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2911E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2911E0u, 0x2940D4u, 0x2940DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2940DCu;
label_2940dc:
    // 0x2940dc: 0xc781b468  lwc1        $f1, -0x4B98($gp)
    ctx->pc = 0x2940dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2940e0: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x2940e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x2940e4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2940e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2940e8: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x2940e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2940ec: 0x0  nop
    ctx->pc = 0x2940ecu;
    // NOP
    // 0x2940f0: 0x0  nop
    ctx->pc = 0x2940f0u;
    // NOP
    // 0x2940f4: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x2940f4u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x2940f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2940f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2940fc: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x2940fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x294100: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x294100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_294104:
    // 0x294104: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x294104u;
    {
        const bool branch_taken_0x294104 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x294108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294104u;
        // 0x294108: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294104) {
            ctx->pc = 0x294130u;
            goto label_294130;
        }
    }
    ctx->pc = 0x29410Cu;
    // 0x29410c: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x29410cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x294110: 0x8f83b234  lw          $v1, -0x4DCC($gp)
    ctx->pc = 0x294110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x294114: 0xc620002c  lwc1        $f0, 0x2C($s1)
    ctx->pc = 0x294114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294118: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x294118u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x29411c: 0xe460010c  swc1        $f0, 0x10C($v1)
    ctx->pc = 0x29411cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 268), bits); }
    // 0x294120: 0x8e50000c  lw          $s0, 0xC($s2)
    ctx->pc = 0x294120u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x294124: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x294124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294128: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x294128u;
    {
        const bool branch_taken_0x294128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29412Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294128u;
        // 0x29412c: 0xe4600110  swc1        $f0, 0x110($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 272), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x294128) {
            ctx->pc = 0x294134u;
            goto label_294134;
        }
    }
    ctx->pc = 0x294130u;
label_294130:
    // 0x294130: 0x8e50000c  lw          $s0, 0xC($s2)
    ctx->pc = 0x294130u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_294134:
    // 0x294134: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x294134u;
    {
        const bool branch_taken_0x294134 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x294138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294134u;
        // 0x294138: 0x8f829cb0  lw          $v0, -0x6350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294134) {
            ctx->pc = 0x294164u;
            goto label_294164;
        }
    }
    ctx->pc = 0x29413Cu;
    // 0x29413c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x29413Cu;
    {
        const bool branch_taken_0x29413c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29413c) {
            ctx->pc = 0x294140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29413Cu;
            // 0x294140: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x294154u;
            goto label_294154;
        }
    }
    ctx->pc = 0x294144u;
    // 0x294144: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x294144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x294148: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x294148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x29414c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x29414Cu;
    {
        const bool branch_taken_0x29414c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29414Cu;
        // 0x294150: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29414c) {
            ctx->pc = 0x294164u;
            goto label_294164;
        }
    }
    ctx->pc = 0x294154u;
label_294154:
    // 0x294154: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x294154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x294158: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x294158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x29415c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x29415cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x294160: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x294160u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_294164:
    // 0x294164: 0xdfbf01a0  ld          $ra, 0x1A0($sp)
    ctx->pc = 0x294164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x294168: 0xdfbe0190  ld          $fp, 0x190($sp)
    ctx->pc = 0x294168u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x29416c: 0xdfb70180  ld          $s7, 0x180($sp)
    ctx->pc = 0x29416cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x294170: 0xdfb60170  ld          $s6, 0x170($sp)
    ctx->pc = 0x294170u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x294174: 0xdfb50160  ld          $s5, 0x160($sp)
    ctx->pc = 0x294174u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x294178: 0xdfb40150  ld          $s4, 0x150($sp)
    ctx->pc = 0x294178u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x29417c: 0xdfb30140  ld          $s3, 0x140($sp)
    ctx->pc = 0x29417cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x294180: 0xdfb20130  ld          $s2, 0x130($sp)
    ctx->pc = 0x294180u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x294184: 0xdfb10120  ld          $s1, 0x120($sp)
    ctx->pc = 0x294184u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x294188: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x294188u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x29418c: 0xc7b701c8  lwc1        $f23, 0x1C8($sp)
    ctx->pc = 0x29418cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x294190: 0xc7b601c0  lwc1        $f22, 0x1C0($sp)
    ctx->pc = 0x294190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x294194: 0xc7b501b8  lwc1        $f21, 0x1B8($sp)
    ctx->pc = 0x294194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x294198: 0xc7b401b0  lwc1        $f20, 0x1B0($sp)
    ctx->pc = 0x294198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29419c: 0x3e00008  jr          $ra
    ctx->pc = 0x29419Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2941A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29419Cu;
        // 0x2941a0: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29419Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2941A4u;
}
