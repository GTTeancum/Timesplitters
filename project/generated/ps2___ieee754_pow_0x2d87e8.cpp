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

// Function: __ieee754_pow
// Address: 0x2d87e8 - 0x2d9510
void ps2___ieee754_pow_0x2d87e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ieee754_pow_0x2d87e8");
#endif

    switch (ctx->pc) {
        case 0x2d88a8u: goto label_2d88a8;
        case 0x2d8964u: goto label_2d8964;
        case 0x2d89a0u: goto label_2d89a0;
        case 0x2d89c8u: goto label_2d89c8;
        case 0x2d89fcu: goto label_2d89fc;
        case 0x2d8a0cu: goto label_2d8a0c;
        case 0x2d8a48u: goto label_2d8a48;
        case 0x2d8a78u: goto label_2d8a78;
        case 0x2d8a84u: goto label_2d8a84;
        case 0x2d8aa4u: goto label_2d8aa4;
        case 0x2d8ad4u: goto label_2d8ad4;
        case 0x2d8ae0u: goto label_2d8ae0;
        case 0x2d8b20u: goto label_2d8b20;
        case 0x2d8b84u: goto label_2d8b84;
        case 0x2d8b94u: goto label_2d8b94;
        case 0x2d8ba8u: goto label_2d8ba8;
        case 0x2d8bb8u: goto label_2d8bb8;
        case 0x2d8bc4u: goto label_2d8bc4;
        case 0x2d8bd4u: goto label_2d8bd4;
        case 0x2d8be0u: goto label_2d8be0;
        case 0x2d8bf4u: goto label_2d8bf4;
        case 0x2d8c08u: goto label_2d8c08;
        case 0x2d8c1cu: goto label_2d8c1c;
        case 0x2d8c28u: goto label_2d8c28;
        case 0x2d8c38u: goto label_2d8c38;
        case 0x2d8c50u: goto label_2d8c50;
        case 0x2d8c84u: goto label_2d8c84;
        case 0x2d8d2cu: goto label_2d8d2c;
        case 0x2d8d3cu: goto label_2d8d3c;
        case 0x2d8d4cu: goto label_2d8d4c;
        case 0x2d8d5cu: goto label_2d8d5c;
        case 0x2d8da4u: goto label_2d8da4;
        case 0x2d8db0u: goto label_2d8db0;
        case 0x2d8dc0u: goto label_2d8dc0;
        case 0x2d8dccu: goto label_2d8dcc;
        case 0x2d8ddcu: goto label_2d8ddc;
        case 0x2d8de8u: goto label_2d8de8;
        case 0x2d8df4u: goto label_2d8df4;
        case 0x2d8e04u: goto label_2d8e04;
        case 0x2d8e14u: goto label_2d8e14;
        case 0x2d8e28u: goto label_2d8e28;
        case 0x2d8e38u: goto label_2d8e38;
        case 0x2d8e44u: goto label_2d8e44;
        case 0x2d8e54u: goto label_2d8e54;
        case 0x2d8e60u: goto label_2d8e60;
        case 0x2d8e70u: goto label_2d8e70;
        case 0x2d8e7cu: goto label_2d8e7c;
        case 0x2d8e8cu: goto label_2d8e8c;
        case 0x2d8e98u: goto label_2d8e98;
        case 0x2d8ea8u: goto label_2d8ea8;
        case 0x2d8eb4u: goto label_2d8eb4;
        case 0x2d8ec4u: goto label_2d8ec4;
        case 0x2d8ed0u: goto label_2d8ed0;
        case 0x2d8edcu: goto label_2d8edc;
        case 0x2d8eecu: goto label_2d8eec;
        case 0x2d8efcu: goto label_2d8efc;
        case 0x2d8f08u: goto label_2d8f08;
        case 0x2d8f18u: goto label_2d8f18;
        case 0x2d8f24u: goto label_2d8f24;
        case 0x2d8f30u: goto label_2d8f30;
        case 0x2d8f40u: goto label_2d8f40;
        case 0x2d8f50u: goto label_2d8f50;
        case 0x2d8f60u: goto label_2d8f60;
        case 0x2d8f6cu: goto label_2d8f6c;
        case 0x2d8f7cu: goto label_2d8f7c;
        case 0x2d8f8cu: goto label_2d8f8c;
        case 0x2d8f98u: goto label_2d8f98;
        case 0x2d8facu: goto label_2d8fac;
        case 0x2d8fc0u: goto label_2d8fc0;
        case 0x2d8fd4u: goto label_2d8fd4;
        case 0x2d8fe0u: goto label_2d8fe0;
        case 0x2d8ff8u: goto label_2d8ff8;
        case 0x2d9004u: goto label_2d9004;
        case 0x2d9014u: goto label_2d9014;
        case 0x2d9030u: goto label_2d9030;
        case 0x2d903cu: goto label_2d903c;
        case 0x2d904cu: goto label_2d904c;
        case 0x2d9058u: goto label_2d9058;
        case 0x2d9064u: goto label_2d9064;
        case 0x2d9070u: goto label_2d9070;
        case 0x2d90c0u: goto label_2d90c0;
        case 0x2d90ccu: goto label_2d90cc;
        case 0x2d90dcu: goto label_2d90dc;
        case 0x2d90e8u: goto label_2d90e8;
        case 0x2d90f8u: goto label_2d90f8;
        case 0x2d9108u: goto label_2d9108;
        case 0x2d914cu: goto label_2d914c;
        case 0x2d9168u: goto label_2d9168;
        case 0x2d9178u: goto label_2d9178;
        case 0x2d9184u: goto label_2d9184;
        case 0x2d919cu: goto label_2d919c;
        case 0x2d91ecu: goto label_2d91ec;
        case 0x2d9204u: goto label_2d9204;
        case 0x2d9210u: goto label_2d9210;
        case 0x2d922cu: goto label_2d922c;
        case 0x2d92ccu: goto label_2d92cc;
        case 0x2d92dcu: goto label_2d92dc;
        case 0x2d92f8u: goto label_2d92f8;
        case 0x2d9308u: goto label_2d9308;
        case 0x2d9314u: goto label_2d9314;
        case 0x2d9324u: goto label_2d9324;
        case 0x2d9338u: goto label_2d9338;
        case 0x2d9344u: goto label_2d9344;
        case 0x2d9354u: goto label_2d9354;
        case 0x2d9364u: goto label_2d9364;
        case 0x2d9370u: goto label_2d9370;
        case 0x2d9380u: goto label_2d9380;
        case 0x2d9394u: goto label_2d9394;
        case 0x2d93a4u: goto label_2d93a4;
        case 0x2d93b0u: goto label_2d93b0;
        case 0x2d93c0u: goto label_2d93c0;
        case 0x2d93ccu: goto label_2d93cc;
        case 0x2d93dcu: goto label_2d93dc;
        case 0x2d93e8u: goto label_2d93e8;
        case 0x2d93f8u: goto label_2d93f8;
        case 0x2d9404u: goto label_2d9404;
        case 0x2d9410u: goto label_2d9410;
        case 0x2d9420u: goto label_2d9420;
        case 0x2d9434u: goto label_2d9434;
        case 0x2d9440u: goto label_2d9440;
        case 0x2d9450u: goto label_2d9450;
        case 0x2d945cu: goto label_2d945c;
        case 0x2d9468u: goto label_2d9468;
        case 0x2d9474u: goto label_2d9474;
        case 0x2d9484u: goto label_2d9484;
        case 0x2d94b0u: goto label_2d94b0;
        case 0x2d94e0u: goto label_2d94e0;
        default: break;
    }

    ctx->pc = 0x2d87e8u;

    // 0x2d87e8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2d87e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2d87ec: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2d87ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2d87f0: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x2d87f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
    // 0x2d87f4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2d87f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d87f8: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x2d87f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x2d87fc: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x2d87fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x2d8800: 0xffb700a0  sd          $s7, 0xA0($sp)
    ctx->pc = 0x2d8800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
    // 0x2d8804: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x2d8804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x2d8808: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x2d8808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x2d880c: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x2d880cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x2d8810: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x2d8810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x2d8814: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x2d8814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x2d8818: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2d8818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2d881c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2d881cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8820: 0x2b03f  dsra32      $s6, $v0, 0
    ctx->pc = 0x2d8820u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2d8824: 0x2b83c  dsll32      $s7, $v0, 0
    ctx->pc = 0x2d8824u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2d8828: 0x17b83f  dsra32      $s7, $s7, 0
    ctx->pc = 0x2d8828u;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 23) >> (32 + 0));
    // 0x2d882c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x2d882cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8830: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2d8830u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2d8834: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x2d8834u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x2d8838: 0x3a03f  dsra32      $s4, $v1, 0
    ctx->pc = 0x2d8838u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2d883c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x2d883cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x2d8840: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2d8840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2d8844: 0x2828024  and         $s0, $s4, $v0
    ctx->pc = 0x2d8844u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
    // 0x2d8848: 0x2041825  or          $v1, $s0, $a0
    ctx->pc = 0x2d8848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x2d884c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D884Cu;
    {
        const bool branch_taken_0x2d884c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D8850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D884Cu;
        // 0x2d8850: 0x2c2a824  and         $s5, $s6, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 22) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d884c) {
            ctx->pc = 0x2D8868u;
            goto label_2d8868;
        }
    }
    ctx->pc = 0x2D8854u;
    // 0x2d8854: 0x3402ffc0  ori         $v0, $zero, 0xFFC0
    ctx->pc = 0x2d8854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x2d8858: 0x213bc  dsll32      $v0, $v0, 14
    ctx->pc = 0x2d8858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 14));
    // 0x2d885c: 0x10000321  b           . + 4 + (0x321 << 2)
    ctx->pc = 0x2D885Cu;
    {
        const bool branch_taken_0x2d885c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D885Cu;
        // 0x2d8860: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d885c) {
            ctx->pc = 0x2D94E4u;
            goto label_2d94e4;
        }
    }
    ctx->pc = 0x2D8864u;
    // 0x2d8864: 0x0  nop
    ctx->pc = 0x2d8864u;
    // NOP
label_2d8868:
    // 0x2d8868: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x2d8868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x2d886c: 0x75102a  slt         $v0, $v1, $s5
    ctx->pc = 0x2d886cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x2d8870: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D8870u;
    {
        const bool branch_taken_0x2d8870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D8874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8870u;
        // 0x2d8874: 0xdfa50000  ld          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8870) {
            ctx->pc = 0x2D88A0u;
            goto label_2d88a0;
        }
    }
    ctx->pc = 0x2D8878u;
    // 0x2d8878: 0x16a30003  bne         $s5, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D8878u;
    {
        const bool branch_taken_0x2d8878 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 3));
        ctx->pc = 0x2D887Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8878u;
        // 0x2d887c: 0x70102a  slt         $v0, $v1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8878) {
            ctx->pc = 0x2D8888u;
            goto label_2d8888;
        }
    }
    ctx->pc = 0x2D8880u;
    // 0x2d8880: 0x16e00007  bnez        $s7, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D8880u;
    {
        const bool branch_taken_0x2d8880 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d8880) {
            ctx->pc = 0x2D88A0u;
            goto label_2d88a0;
        }
    }
    ctx->pc = 0x2D8888u;
label_2d8888:
    // 0x2d8888: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D8888u;
    {
        const bool branch_taken_0x2d8888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d8888) {
            ctx->pc = 0x2D888Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D8888u;
            // 0x2d888c: 0xdfa50000  ld          $a1, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D88A0u;
            goto label_2d88a0;
        }
    }
    ctx->pc = 0x2D8890u;
    // 0x2d8890: 0x16030007  bne         $s0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D8890u;
    {
        const bool branch_taken_0x2d8890 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d8890) {
            ctx->pc = 0x2D88B0u;
            goto label_2d88b0;
        }
    }
    ctx->pc = 0x2D8898u;
    // 0x2d8898: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D8898u;
    {
        const bool branch_taken_0x2d8898 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D889Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8898u;
        // 0x2d889c: 0xdfa50000  ld          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8898) {
            ctx->pc = 0x2D88B0u;
            goto label_2d88b0;
        }
    }
    ctx->pc = 0x2D88A0u;
label_2d88a0:
    // 0x2d88a0: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2D88A0u;
    SET_GPR_U32(ctx, 31, 0x2D88A8u);
    ctx->pc = 0x2D88A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D88A0u;
    // 0x2d88a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2D88A0u, 0x2D88A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D88A8u;
label_2d88a8:
    // 0x2d88a8: 0x1000030e  b           . + 4 + (0x30E << 2)
    ctx->pc = 0x2D88A8u;
    {
        const bool branch_taken_0x2d88a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D88ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D88A8u;
        // 0x2d88ac: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d88a8) {
            ctx->pc = 0x2D94E4u;
            goto label_2d94e4;
        }
    }
    ctx->pc = 0x2D88B0u;
label_2d88b0:
    // 0x2d88b0: 0x6c10020  bgez        $s6, . + 4 + (0x20 << 2)
    ctx->pc = 0x2D88B0u;
    {
        const bool branch_taken_0x2d88b0 = (GPR_S32(ctx, 22) >= 0);
        ctx->pc = 0x2D88B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D88B0u;
        // 0x2d88b4: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d88b0) {
            ctx->pc = 0x2D8934u;
            goto label_2d8934;
        }
    }
    ctx->pc = 0x2D88B8u;
    // 0x2d88b8: 0x3c02433f  lui         $v0, 0x433F
    ctx->pc = 0x2d88b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17215 << 16));
    // 0x2d88bc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2d88bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2d88c0: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x2d88c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2d88c4: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2D88C4u;
    {
        const bool branch_taken_0x2d88c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D88C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D88C4u;
        // 0x2d88c8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d88c4) {
            ctx->pc = 0x2D8930u;
            goto label_2d8930;
        }
    }
    ctx->pc = 0x2D88CCu;
    // 0x2d88cc: 0x3c023fef  lui         $v0, 0x3FEF
    ctx->pc = 0x2d88ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16367 << 16));
    // 0x2d88d0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2d88d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2d88d4: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x2d88d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2d88d8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2D88D8u;
    {
        const bool branch_taken_0x2d88d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D88DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D88D8u;
        // 0x2d88dc: 0x101503  sra         $v0, $s0, 20 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d88d8) {
            ctx->pc = 0x2D8934u;
            goto label_2d8934;
        }
    }
    ctx->pc = 0x2D88E0u;
    // 0x2d88e0: 0x2453fc01  addiu       $s3, $v0, -0x3FF
    ctx->pc = 0x2d88e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966273));
    // 0x2d88e4: 0x2a630015  slti        $v1, $s3, 0x15
    ctx->pc = 0x2d88e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x2d88e8: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D88E8u;
    {
        const bool branch_taken_0x2d88e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D88ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D88E8u;
        // 0x2d88ec: 0x24020034  addiu       $v0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d88e8) {
            ctx->pc = 0x2D890Cu;
            goto label_2d890c;
        }
    }
    ctx->pc = 0x2D88F0u;
    // 0x2d88f0: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x2d88f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2d88f4: 0x448806  srlv        $s1, $a0, $v0
    ctx->pc = 0x2d88f4u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x2d88f8: 0x511004  sllv        $v0, $s1, $v0
    ctx->pc = 0x2d88f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 2) & 0x1F));
    // 0x2d88fc: 0x1444000d  bne         $v0, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x2D88FCu;
    {
        const bool branch_taken_0x2d88fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2D8900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D88FCu;
        // 0x2d8900: 0x32230001  andi        $v1, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d88fc) {
            ctx->pc = 0x2D8934u;
            goto label_2d8934;
        }
    }
    ctx->pc = 0x2D8904u;
    // 0x2d8904: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2D8904u;
    {
        const bool branch_taken_0x2d8904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8904u;
        // 0x2d8908: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8904) {
            ctx->pc = 0x2D892Cu;
            goto label_2d892c;
        }
    }
    ctx->pc = 0x2D890Cu;
label_2d890c:
    // 0x2d890c: 0x1480003d  bnez        $a0, . + 4 + (0x3D << 2)
    ctx->pc = 0x2D890Cu;
    {
        const bool branch_taken_0x2d890c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D8910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D890Cu;
        // 0x2d8910: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d890c) {
            ctx->pc = 0x2D8A04u;
            goto label_2d8a04;
        }
    }
    ctx->pc = 0x2D8914u;
    // 0x2d8914: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x2d8914u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2d8918: 0x508807  srav        $s1, $s0, $v0
    ctx->pc = 0x2d8918u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x2d891c: 0x511004  sllv        $v0, $s1, $v0
    ctx->pc = 0x2d891cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 2) & 0x1F));
    // 0x2d8920: 0x14500004  bne         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D8920u;
    {
        const bool branch_taken_0x2d8920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2D8924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8920u;
        // 0x2d8924: 0x32230001  andi        $v1, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8920) {
            ctx->pc = 0x2D8934u;
            goto label_2d8934;
        }
    }
    ctx->pc = 0x2D8928u;
    // 0x2d8928: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2d8928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2d892c:
    // 0x2d892c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2d892cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d8930:
    // 0x2d8930: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x2d8930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_2d8934:
    // 0x2d8934: 0x14800033  bnez        $a0, . + 4 + (0x33 << 2)
    ctx->pc = 0x2D8934u;
    {
        const bool branch_taken_0x2d8934 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D8938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8934u;
        // 0x2d8938: 0x3c027ff0  lui         $v0, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32752 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8934) {
            ctx->pc = 0x2D8A04u;
            goto label_2d8a04;
        }
    }
    ctx->pc = 0x2D893Cu;
    // 0x2d893c: 0x1602001a  bne         $s0, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2D893Cu;
    {
        const bool branch_taken_0x2d893c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D8940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D893Cu;
        // 0x2d8940: 0x3c023ff0  lui         $v0, 0x3FF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16368 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d893c) {
            ctx->pc = 0x2D89A8u;
            goto label_2d89a8;
        }
    }
    ctx->pc = 0x2D8944u;
    // 0x2d8944: 0x3c02c010  lui         $v0, 0xC010
    ctx->pc = 0x2d8944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49168 << 16));
    // 0x2d8948: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x2d8948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2d894c: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x2d894cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x2d8950: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D8950u;
    {
        const bool branch_taken_0x2d8950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D8954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8950u;
        // 0x2d8954: 0x3c023fef  lui         $v0, 0x3FEF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16367 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8950) {
            ctx->pc = 0x2D896Cu;
            goto label_2d896c;
        }
    }
    ctx->pc = 0x2D8958u;
    // 0x2d8958: 0xdfa40000  ld          $a0, 0x0($sp)
    ctx->pc = 0x2d8958u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d895c: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2D895Cu;
    SET_GPR_U32(ctx, 31, 0x2D8964u);
    ctx->pc = 0x2D8960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D895Cu;
    // 0x2d8960: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2D895Cu, 0x2D8964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8964u;
label_2d8964:
    // 0x2d8964: 0x100002df  b           . + 4 + (0x2DF << 2)
    ctx->pc = 0x2D8964u;
    {
        const bool branch_taken_0x2d8964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8964u;
        // 0x2d8968: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8964) {
            ctx->pc = 0x2D94E4u;
            goto label_2d94e4;
        }
    }
    ctx->pc = 0x2D896Cu;
label_2d896c:
    // 0x2d896c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2d896cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2d8970: 0x55102a  slt         $v0, $v0, $s5
    ctx->pc = 0x2d8970u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x2d8974: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D8974u;
    {
        const bool branch_taken_0x2d8974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8974) {
            ctx->pc = 0x2D898Cu;
            goto label_2d898c;
        }
    }
    ctx->pc = 0x2D897Cu;
    // 0x2d897c: 0x68002d8  bltz        $s4, . + 4 + (0x2D8 << 2)
    ctx->pc = 0x2D897Cu;
    {
        const bool branch_taken_0x2d897c = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x2D8980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D897Cu;
        // 0x2d8980: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d897c) {
            ctx->pc = 0x2D94E0u;
            goto label_2d94e0;
        }
    }
    ctx->pc = 0x2D8984u;
    // 0x2d8984: 0x100002d6  b           . + 4 + (0x2D6 << 2)
    ctx->pc = 0x2D8984u;
    {
        const bool branch_taken_0x2d8984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8984u;
        // 0x2d8988: 0xdfa20000  ld          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8984) {
            ctx->pc = 0x2D94E0u;
            goto label_2d94e0;
        }
    }
    ctx->pc = 0x2D898Cu;
label_2d898c:
    // 0x2d898c: 0x68102d4  bgez        $s4, . + 4 + (0x2D4 << 2)
    ctx->pc = 0x2D898Cu;
    {
        const bool branch_taken_0x2d898c = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x2D8990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D898Cu;
        // 0x2d8990: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d898c) {
            ctx->pc = 0x2D94E0u;
            goto label_2d94e0;
        }
    }
    ctx->pc = 0x2D8994u;
    // 0x2d8994: 0xdfa50000  ld          $a1, 0x0($sp)
    ctx->pc = 0x2d8994u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d8998: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2D8998u;
    SET_GPR_U32(ctx, 31, 0x2D89A0u);
    ctx->pc = 0x2D899Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8998u;
    // 0x2d899c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2D8998u, 0x2D89A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D89A0u;
label_2d89a0:
    // 0x2d89a0: 0x100002d0  b           . + 4 + (0x2D0 << 2)
    ctx->pc = 0x2D89A0u;
    {
        const bool branch_taken_0x2d89a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D89A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D89A0u;
        // 0x2d89a4: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d89a0) {
            ctx->pc = 0x2D94E4u;
            goto label_2d94e4;
        }
    }
    ctx->pc = 0x2D89A8u;
label_2d89a8:
    // 0x2d89a8: 0x16020009  bne         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D89A8u;
    {
        const bool branch_taken_0x2d89a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D89ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D89A8u;
        // 0x2d89ac: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d89a8) {
            ctx->pc = 0x2D89D0u;
            goto label_2d89d0;
        }
    }
    ctx->pc = 0x2D89B0u;
    // 0x2d89b0: 0x68102cb  bgez        $s4, . + 4 + (0x2CB << 2)
    ctx->pc = 0x2D89B0u;
    {
        const bool branch_taken_0x2d89b0 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x2D89B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D89B0u;
        // 0x2d89b4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d89b0) {
            ctx->pc = 0x2D94E0u;
            goto label_2d94e0;
        }
    }
    ctx->pc = 0x2D89B8u;
    // 0x2d89b8: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x2d89b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x2d89bc: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x2d89bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x2d89c0: 0xc0b8d3a  jal         func_2E34E8
    ctx->pc = 0x2D89C0u;
    SET_GPR_U32(ctx, 31, 0x2D89C8u);
    ctx->pc = 0x2D89C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D89C0u;
    // 0x2d89c4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E34E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E34E8u, 0x2D89C0u, 0x2D89C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D89C8u;
label_2d89c8:
    // 0x2d89c8: 0x100002c6  b           . + 4 + (0x2C6 << 2)
    ctx->pc = 0x2D89C8u;
    {
        const bool branch_taken_0x2d89c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D89CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D89C8u;
        // 0x2d89cc: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d89c8) {
            ctx->pc = 0x2D94E4u;
            goto label_2d94e4;
        }
    }
    ctx->pc = 0x2D89D0u;
label_2d89d0:
    // 0x2d89d0: 0x16820004  bne         $s4, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D89D0u;
    {
        const bool branch_taken_0x2d89d0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D89D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D89D0u;
        // 0x2d89d4: 0x3c023fe0  lui         $v0, 0x3FE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16352 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d89d0) {
            ctx->pc = 0x2D89E4u;
            goto label_2d89e4;
        }
    }
    ctx->pc = 0x2D89D8u;
    // 0x2d89d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d89d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d89dc: 0x100002be  b           . + 4 + (0x2BE << 2)
    ctx->pc = 0x2D89DCu;
    {
        const bool branch_taken_0x2d89dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D89E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D89DCu;
        // 0x2d89e0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d89dc) {
            ctx->pc = 0x2D94D8u;
            goto label_2d94d8;
        }
    }
    ctx->pc = 0x2D89E4u;
label_2d89e4:
    // 0x2d89e4: 0x16820007  bne         $s4, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D89E4u;
    {
        const bool branch_taken_0x2d89e4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d89e4) {
            ctx->pc = 0x2D8A04u;
            goto label_2d8a04;
        }
    }
    ctx->pc = 0x2D89ECu;
    // 0x2d89ec: 0x6c00005  bltz        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D89ECu;
    {
        const bool branch_taken_0x2d89ec = (GPR_S32(ctx, 22) < 0);
        if (branch_taken_0x2d89ec) {
            ctx->pc = 0x2D8A04u;
            goto label_2d8a04;
        }
    }
    ctx->pc = 0x2D89F4u;
    // 0x2d89f4: 0xc0b6544  jal         func_2D9510
    ctx->pc = 0x2D89F4u;
    SET_GPR_U32(ctx, 31, 0x2D89FCu);
    ctx->pc = 0x2D89F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D89F4u;
    // 0x2d89f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9510u, 0x2D89F4u, 0x2D89FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D89FCu;
label_2d89fc:
    // 0x2d89fc: 0x100002b9  b           . + 4 + (0x2B9 << 2)
    ctx->pc = 0x2D89FCu;
    {
        const bool branch_taken_0x2d89fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D89FCu;
        // 0x2d8a00: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d89fc) {
            ctx->pc = 0x2D94E4u;
            goto label_2d94e4;
        }
    }
    ctx->pc = 0x2D8A04u;
label_2d8a04:
    // 0x2d8a04: 0xc0b5bee  jal         func_2D6FB8
    ctx->pc = 0x2D8A04u;
    SET_GPR_U32(ctx, 31, 0x2D8A0Cu);
    ctx->pc = 0x2D8A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8A04u;
    // 0x2d8a08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6FB8u, 0x2D8A04u, 0x2D8A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8A0Cu;
label_2d8a0c:
    // 0x2d8a0c: 0x16e00028  bnez        $s7, . + 4 + (0x28 << 2)
    ctx->pc = 0x2D8A0Cu;
    {
        const bool branch_taken_0x2d8a0c = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D8A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8A0Cu;
        // 0x2d8a10: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8a0c) {
            ctx->pc = 0x2D8AB0u;
            goto label_2d8ab0;
        }
    }
    ctx->pc = 0x2D8A14u;
    // 0x2d8a14: 0x3c027ff0  lui         $v0, 0x7FF0
    ctx->pc = 0x2d8a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32752 << 16));
    // 0x2d8a18: 0x12a20005  beq         $s5, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D8A18u;
    {
        const bool branch_taken_0x2d8a18 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d8a18) {
            ctx->pc = 0x2D8A30u;
            goto label_2d8a30;
        }
    }
    ctx->pc = 0x2D8A20u;
    // 0x2d8a20: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D8A20u;
    {
        const bool branch_taken_0x2d8a20 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8A20u;
        // 0x2d8a24: 0x3c023ff0  lui         $v0, 0x3FF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16368 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8a20) {
            ctx->pc = 0x2D8A30u;
            goto label_2d8a30;
        }
    }
    ctx->pc = 0x2D8A28u;
    // 0x2d8a28: 0x56a20022  bnel        $s5, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2D8A28u;
    {
        const bool branch_taken_0x2d8a28 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d8a28) {
            ctx->pc = 0x2D8A2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D8A28u;
            // 0x2d8a2c: 0x16b7c2  srl         $s6, $s6, 31 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 22), 31));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D8AB4u;
            goto label_2d8ab4;
        }
    }
    ctx->pc = 0x2D8A30u;
label_2d8a30:
    // 0x2d8a30: 0x6810006  bgez        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D8A30u;
    {
        const bool branch_taken_0x2d8a30 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x2D8A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8A30u;
        // 0x2d8a34: 0x3c0902d  daddu       $s2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8a30) {
            ctx->pc = 0x2D8A4Cu;
            goto label_2d8a4c;
        }
    }
    ctx->pc = 0x2D8A38u;
    // 0x2d8a38: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x2d8a38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x2d8a3c: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x2d8a3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x2d8a40: 0xc0b8d3a  jal         func_2E34E8
    ctx->pc = 0x2D8A40u;
    SET_GPR_U32(ctx, 31, 0x2D8A48u);
    ctx->pc = 0x2D8A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8A40u;
    // 0x2d8a44: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E34E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E34E8u, 0x2D8A40u, 0x2D8A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8A48u;
label_2d8a48:
    // 0x2d8a48: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2d8a48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d8a4c:
    // 0x2d8a4c: 0x6c102a4  bgez        $s6, . + 4 + (0x2A4 << 2)
    ctx->pc = 0x2D8A4Cu;
    {
        const bool branch_taken_0x2d8a4c = (GPR_S32(ctx, 22) >= 0);
        ctx->pc = 0x2D8A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8A4Cu;
        // 0x2d8a50: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8a4c) {
            ctx->pc = 0x2D94E0u;
            goto label_2d94e0;
        }
    }
    ctx->pc = 0x2D8A54u;
    // 0x2d8a54: 0x3c02c010  lui         $v0, 0xC010
    ctx->pc = 0x2d8a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49168 << 16));
    // 0x2d8a58: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d8a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d8a5c: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x2d8a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2d8a60: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2d8a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2d8a64: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D8A64u;
    {
        const bool branch_taken_0x2d8a64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D8A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8A64u;
        // 0x2d8a68: 0x8fa40018  lw          $a0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8a64) {
            ctx->pc = 0x2D8A8Cu;
            goto label_2d8a8c;
        }
    }
    ctx->pc = 0x2D8A6Cu;
    // 0x2d8a6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d8a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8a70: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2D8A70u;
    SET_GPR_U32(ctx, 31, 0x2D8A78u);
    ctx->pc = 0x2D8A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8A70u;
    // 0x2d8a74: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2D8A70u, 0x2D8A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8A78u;
label_2d8a78:
    // 0x2d8a78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d8a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8a7c: 0xc0b8d3a  jal         func_2E34E8
    ctx->pc = 0x2D8A7Cu;
    SET_GPR_U32(ctx, 31, 0x2D8A84u);
    ctx->pc = 0x2D8A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8A7Cu;
    // 0x2d8a80: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E34E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E34E8u, 0x2D8A7Cu, 0x2D8A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8A84u;
label_2d8a84:
    // 0x2d8a84: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2D8A84u;
    {
        const bool branch_taken_0x2d8a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8A84u;
        // 0x2d8a88: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8a84) {
            ctx->pc = 0x2D8AA8u;
            goto label_2d8aa8;
        }
    }
    ctx->pc = 0x2D8A8Cu;
label_2d8a8c:
    // 0x2d8a8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d8a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8a90: 0x54820293  bnel        $a0, $v0, . + 4 + (0x293 << 2)
    ctx->pc = 0x2D8A90u;
    {
        const bool branch_taken_0x2d8a90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d8a90) {
            ctx->pc = 0x2D8A94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D8A90u;
            // 0x2d8a94: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D94E0u;
            goto label_2d94e0;
        }
    }
    ctx->pc = 0x2D8A98u;
    // 0x2d8a98: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d8a98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8a9c: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2D8A9Cu;
    SET_GPR_U32(ctx, 31, 0x2D8AA4u);
    ctx->pc = 0x2D8AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8A9Cu;
    // 0x2d8aa0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2D8A9Cu, 0x2D8AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8AA4u;
label_2d8aa4:
    // 0x2d8aa4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2d8aa4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d8aa8:
    // 0x2d8aa8: 0x1000028d  b           . + 4 + (0x28D << 2)
    ctx->pc = 0x2D8AA8u;
    {
        const bool branch_taken_0x2d8aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8AA8u;
        // 0x2d8aac: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8aa8) {
            ctx->pc = 0x2D94E0u;
            goto label_2d94e0;
        }
    }
    ctx->pc = 0x2D8AB0u;
label_2d8ab0:
    // 0x2d8ab0: 0x16b7c2  srl         $s6, $s6, 31
    ctx->pc = 0x2d8ab0u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 22), 31));
label_2d8ab4:
    // 0x2d8ab4: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x2d8ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d8ab8: 0x26c2ffff  addiu       $v0, $s6, -0x1
    ctx->pc = 0x2d8ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x2d8abc: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2d8abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2d8ac0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D8AC0u;
    {
        const bool branch_taken_0x2d8ac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D8AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8AC0u;
        // 0x2d8ac4: 0xafb60020  sw          $s6, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8ac0) {
            ctx->pc = 0x2D8AE8u;
            goto label_2d8ae8;
        }
    }
    ctx->pc = 0x2D8AC8u;
    // 0x2d8ac8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d8ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8acc: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2D8ACCu;
    SET_GPR_U32(ctx, 31, 0x2D8AD4u);
    ctx->pc = 0x2D8AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8ACCu;
    // 0x2d8ad0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2D8ACCu, 0x2D8AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8AD4u;
label_2d8ad4:
    // 0x2d8ad4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d8ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8ad8: 0xc0b8d3a  jal         func_2E34E8
    ctx->pc = 0x2D8AD8u;
    SET_GPR_U32(ctx, 31, 0x2D8AE0u);
    ctx->pc = 0x2D8ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8AD8u;
    // 0x2d8adc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E34E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E34E8u, 0x2D8AD8u, 0x2D8AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8AE0u;
label_2d8ae0:
    // 0x2d8ae0: 0x10000280  b           . + 4 + (0x280 << 2)
    ctx->pc = 0x2D8AE0u;
    {
        const bool branch_taken_0x2d8ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8AE0u;
        // 0x2d8ae4: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8ae0) {
            ctx->pc = 0x2D94E4u;
            goto label_2d94e4;
        }
    }
    ctx->pc = 0x2D8AE8u;
label_2d8ae8:
    // 0x2d8ae8: 0x3c0241e0  lui         $v0, 0x41E0
    ctx->pc = 0x2d8ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16864 << 16));
    // 0x2d8aec: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x2d8aecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2d8af0: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x2D8AF0u;
    {
        const bool branch_taken_0x2d8af0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8AF0u;
        // 0x2d8af4: 0x3c0243f0  lui         $v0, 0x43F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17392 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8af0) {
            ctx->pc = 0x2D8C58u;
            goto label_2d8c58;
        }
    }
    ctx->pc = 0x2D8AF8u;
    // 0x2d8af8: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x2d8af8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2d8afc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2D8AFCu;
    {
        const bool branch_taken_0x2d8afc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8AFCu;
        // 0x2d8b00: 0x3c023fef  lui         $v0, 0x3FEF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16367 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8afc) {
            ctx->pc = 0x2D8B38u;
            goto label_2d8b38;
        }
    }
    ctx->pc = 0x2D8B04u;
    // 0x2d8b04: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2d8b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2d8b08: 0x55102a  slt         $v0, $v0, $s5
    ctx->pc = 0x2d8b08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x2d8b0c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D8B0Cu;
    {
        const bool branch_taken_0x2d8b0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d8b0c) {
            ctx->pc = 0x2D8B28u;
            goto label_2d8b28;
        }
    }
    ctx->pc = 0x2D8B14u;
    // 0x2d8b14: 0x6830272  bgezl       $s4, . + 4 + (0x272 << 2)
    ctx->pc = 0x2D8B14u;
    {
        const bool branch_taken_0x2d8b14 = (GPR_S32(ctx, 20) >= 0);
        if (branch_taken_0x2d8b14) {
            ctx->pc = 0x2D8B18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D8B14u;
            // 0x2d8b18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D94E0u;
            goto label_2d94e0;
        }
    }
    ctx->pc = 0x2D8B1Cu;
    // 0x2d8b1c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2d8b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_2d8b20:
    // 0x2d8b20: 0x1000026f  b           . + 4 + (0x26F << 2)
    ctx->pc = 0x2D8B20u;
    {
        const bool branch_taken_0x2d8b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8B20u;
        // 0x2d8b24: 0xdc42aa88  ld          $v0, -0x5578($v0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 4294945416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8b20) {
            ctx->pc = 0x2D94E0u;
            goto label_2d94e0;
        }
    }
    ctx->pc = 0x2D8B28u;
label_2d8b28:
    // 0x2d8b28: 0x1e80fffd  bgtz        $s4, . + 4 + (-0x3 << 2)
    ctx->pc = 0x2D8B28u;
    {
        const bool branch_taken_0x2d8b28 = (GPR_S32(ctx, 20) > 0);
        ctx->pc = 0x2D8B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8B28u;
        // 0x2d8b2c: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8b28) {
            ctx->pc = 0x2D8B20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d8b20;
        }
    }
    ctx->pc = 0x2D8B30u;
    // 0x2d8b30: 0x1000026b  b           . + 4 + (0x26B << 2)
    ctx->pc = 0x2D8B30u;
    {
        const bool branch_taken_0x2d8b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8B30u;
        // 0x2d8b34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8b30) {
            ctx->pc = 0x2D94E0u;
            goto label_2d94e0;
        }
    }
    ctx->pc = 0x2D8B38u;
label_2d8b38:
    // 0x2d8b38: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x2d8b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x2d8b3c: 0x55102a  slt         $v0, $v0, $s5
    ctx->pc = 0x2d8b3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x2d8b40: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D8B40u;
    {
        const bool branch_taken_0x2d8b40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d8b40) {
            ctx->pc = 0x2D8B44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D8B40u;
            // 0x2d8b44: 0x3c023ff0  lui         $v0, 0x3FF0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16368 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D8B58u;
            goto label_2d8b58;
        }
    }
    ctx->pc = 0x2D8B48u;
    // 0x2d8b48: 0x680fff5  bltz        $s4, . + 4 + (-0xB << 2)
    ctx->pc = 0x2D8B48u;
    {
        const bool branch_taken_0x2d8b48 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x2D8B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8B48u;
        // 0x2d8b4c: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8b48) {
            ctx->pc = 0x2D8B20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d8b20;
        }
    }
    ctx->pc = 0x2D8B50u;
    // 0x2d8b50: 0x10000263  b           . + 4 + (0x263 << 2)
    ctx->pc = 0x2D8B50u;
    {
        const bool branch_taken_0x2d8b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8B50u;
        // 0x2d8b54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8b50) {
            ctx->pc = 0x2D94E0u;
            goto label_2d94e0;
        }
    }
    ctx->pc = 0x2D8B58u;
label_2d8b58:
    // 0x2d8b58: 0x55102a  slt         $v0, $v0, $s5
    ctx->pc = 0x2d8b58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x2d8b5c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D8B5Cu;
    {
        const bool branch_taken_0x2d8b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8b5c) {
            ctx->pc = 0x2D8B74u;
            goto label_2d8b74;
        }
    }
    ctx->pc = 0x2D8B64u;
    // 0x2d8b64: 0x1e80ffee  bgtz        $s4, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2D8B64u;
    {
        const bool branch_taken_0x2d8b64 = (GPR_S32(ctx, 20) > 0);
        ctx->pc = 0x2D8B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8B64u;
        // 0x2d8b68: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8b64) {
            ctx->pc = 0x2D8B20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d8b20;
        }
    }
    ctx->pc = 0x2D8B6Cu;
    // 0x2d8b6c: 0x1000025c  b           . + 4 + (0x25C << 2)
    ctx->pc = 0x2D8B6Cu;
    {
        const bool branch_taken_0x2d8b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8B6Cu;
        // 0x2d8b70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8b6c) {
            ctx->pc = 0x2D94E0u;
            goto label_2d94e0;
        }
    }
    ctx->pc = 0x2D8B74u;
label_2d8b74:
    // 0x2d8b74: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x2d8b74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x2d8b78: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x2d8b78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x2d8b7c: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2D8B7Cu;
    SET_GPR_U32(ctx, 31, 0x2D8B84u);
    ctx->pc = 0x2D8B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8B7Cu;
    // 0x2d8b80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2D8B7Cu, 0x2D8B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8B84u;
label_2d8b84:
    // 0x2d8b84: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2d8b84u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8b88: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d8b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8b8c: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2D8B8Cu;
    SET_GPR_U32(ctx, 31, 0x2D8B94u);
    ctx->pc = 0x2D8B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8B8Cu;
    // 0x2d8b90: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2D8B8Cu, 0x2D8B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8B94u;
label_2d8b94:
    // 0x2d8b94: 0x3405ff40  ori         $a1, $zero, 0xFF40
    ctx->pc = 0x2d8b94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65344);
    // 0x2d8b98: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x2d8b98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x2d8b9c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d8b9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8ba0: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2D8BA0u;
    SET_GPR_U32(ctx, 31, 0x2D8BA8u);
    ctx->pc = 0x2D8BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8BA0u;
    // 0x2d8ba4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2D8BA0u, 0x2D8BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8BA8u;
label_2d8ba8:
    // 0x2d8ba8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2d8ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2d8bac: 0xdc24aaa0  ld          $a0, -0x5560($at)
    ctx->pc = 0x2d8bacu;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x3AAAA0u));
    // 0x2d8bb0: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2D8BB0u;
    SET_GPR_U32(ctx, 31, 0x2D8BB8u);
    ctx->pc = 0x2D8BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8BB0u;
    // 0x2d8bb4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2D8BB0u, 0x2D8BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8BB8u;
label_2d8bb8:
    // 0x2d8bb8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d8bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8bbc: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2D8BBCu;
    SET_GPR_U32(ctx, 31, 0x2D8BC4u);
    ctx->pc = 0x2D8BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8BBCu;
    // 0x2d8bc0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2D8BBCu, 0x2D8BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8BC4u;
label_2d8bc4:
    // 0x2d8bc4: 0x3404ff80  ori         $a0, $zero, 0xFF80
    ctx->pc = 0x2d8bc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x2d8bc8: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x2d8bc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x2d8bcc: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2D8BCCu;
    SET_GPR_U32(ctx, 31, 0x2D8BD4u);
    ctx->pc = 0x2D8BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8BCCu;
    // 0x2d8bd0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2D8BCCu, 0x2D8BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8BD4u;
label_2d8bd4:
    // 0x2d8bd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d8bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8bd8: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2D8BD8u;
    SET_GPR_U32(ctx, 31, 0x2D8BE0u);
    ctx->pc = 0x2D8BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8BD8u;
    // 0x2d8bdc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2D8BD8u, 0x2D8BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8BE0u;
label_2d8be0:
    // 0x2d8be0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2d8be0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2d8be4: 0xdc25aaa8  ld          $a1, -0x5558($at)
    ctx->pc = 0x2d8be4u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3AAAA8u));
    // 0x2d8be8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d8be8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8bec: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2D8BECu;
    SET_GPR_U32(ctx, 31, 0x2D8BF4u);
    ctx->pc = 0x2D8BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8BECu;
    // 0x2d8bf0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2D8BECu, 0x2D8BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8BF4u;
label_2d8bf4:
    // 0x2d8bf4: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2d8bf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2d8bf8: 0xdc25aab0  ld          $a1, -0x5550($at)
    ctx->pc = 0x2d8bf8u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3AAAB0u));
    // 0x2d8bfc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d8bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8c00: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2D8C00u;
    SET_GPR_U32(ctx, 31, 0x2D8C08u);
    ctx->pc = 0x2D8C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8C00u;
    // 0x2d8c04: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2D8C00u, 0x2D8C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8C08u;
label_2d8c08:
    // 0x2d8c08: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2d8c08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2d8c0c: 0xdc25aab8  ld          $a1, -0x5548($at)
    ctx->pc = 0x2d8c0cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3AAAB8u));
    // 0x2d8c10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d8c10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8c14: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2D8C14u;
    SET_GPR_U32(ctx, 31, 0x2D8C1Cu);
    ctx->pc = 0x2D8C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8C14u;
    // 0x2d8c18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2D8C14u, 0x2D8C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8C1Cu;
label_2d8c1c:
    // 0x2d8c1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d8c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8c20: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2D8C20u;
    SET_GPR_U32(ctx, 31, 0x2D8C28u);
    ctx->pc = 0x2D8C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8C20u;
    // 0x2d8c24: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2D8C20u, 0x2D8C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8C28u;
label_2d8c28:
    // 0x2d8c28: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2d8c28u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8c2c: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x2d8c2cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d8c30: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2D8C30u;
    SET_GPR_U32(ctx, 31, 0x2D8C38u);
    ctx->pc = 0x2D8C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8C30u;
    // 0x2d8c34: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2D8C30u, 0x2D8C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8C38u;
label_2d8c38:
    // 0x2d8c38: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2d8c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d8c3c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2d8c3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2d8c40: 0x43a024  and         $s4, $v0, $v1
    ctx->pc = 0x2d8c40u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2d8c44: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2d8c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8c48: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2D8C48u;
    SET_GPR_U32(ctx, 31, 0x2D8C50u);
    ctx->pc = 0x2D8C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8C48u;
    // 0x2d8c4c: 0xdfa50010  ld          $a1, 0x10($sp) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2D8C48u, 0x2D8C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8C50u;
label_2d8c50:
    // 0x2d8c50: 0x10000105  b           . + 4 + (0x105 << 2)
    ctx->pc = 0x2D8C50u;
    {
        const bool branch_taken_0x2d8c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8C50u;
        // 0x2d8c54: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8c50) {
            ctx->pc = 0x2D9068u;
            goto label_2d9068;
        }
    }
    ctx->pc = 0x2D8C58u;
label_2d8c58:
    // 0x2d8c58: 0x3c10000f  lui         $s0, 0xF
    ctx->pc = 0x2d8c58u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)15 << 16));
    // 0x2d8c5c: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x2d8c5cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x2d8c60: 0x215102a  slt         $v0, $s0, $s5
    ctx->pc = 0x2d8c60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x2d8c64: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2D8C64u;
    {
        const bool branch_taken_0x2d8c64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D8C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8C64u;
        // 0x2d8c68: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8c64) {
            ctx->pc = 0x2D8C90u;
            goto label_2d8c90;
        }
    }
    ctx->pc = 0x2D8C6Cu;
    // 0x2d8c6c: 0x2402ffcb  addiu       $v0, $zero, -0x35
    ctx->pc = 0x2d8c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967243));
    // 0x2d8c70: 0x34058680  ori         $a1, $zero, 0x8680
    ctx->pc = 0x2d8c70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34432);
    // 0x2d8c74: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x2d8c74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x2d8c78: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2d8c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8c7c: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2D8C7Cu;
    SET_GPR_U32(ctx, 31, 0x2D8C84u);
    ctx->pc = 0x2D8C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8C7Cu;
    // 0x2d8c80: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2D8C7Cu, 0x2D8C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8C84u;
label_2d8c84:
    // 0x2d8c84: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2d8c84u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8c88: 0x2a83f  dsra32      $s5, $v0, 0
    ctx->pc = 0x2d8c88u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2d8c8c: 0x0  nop
    ctx->pc = 0x2d8c8cu;
    // NOP
label_2d8c90:
    // 0x2d8c90: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x2d8c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x2d8c94: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x2d8c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x2d8c98: 0x2b08824  and         $s1, $s5, $s0
    ctx->pc = 0x2d8c98u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 21) & GPR_U64(ctx, 16));
    // 0x2d8c9c: 0x3c043ff0  lui         $a0, 0x3FF0
    ctx->pc = 0x2d8c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16368 << 16));
    // 0x2d8ca0: 0x2465fc01  addiu       $a1, $v1, -0x3FF
    ctx->pc = 0x2d8ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966273));
    // 0x2d8ca4: 0x3442988e  ori         $v0, $v0, 0x988E
    ctx->pc = 0x2d8ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39054);
    // 0x2d8ca8: 0x151d03  sra         $v1, $s5, 20
    ctx->pc = 0x2d8ca8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 21), 20));
    // 0x2d8cac: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x2d8cacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2d8cb0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2d8cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2d8cb4: 0x224a825  or          $s5, $s1, $a0
    ctx->pc = 0x2d8cb4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 17) | GPR_U64(ctx, 4));
    // 0x2d8cb8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D8CB8u;
    {
        const bool branch_taken_0x2d8cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D8CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8CB8u;
        // 0x2d8cbc: 0xafa5001c  sw          $a1, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8cb8) {
            ctx->pc = 0x2D8CC8u;
            goto label_2d8cc8;
        }
    }
    ctx->pc = 0x2D8CC0u;
    // 0x2d8cc0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2D8CC0u;
    {
        const bool branch_taken_0x2d8cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8CC0u;
        // 0x2d8cc4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8cc0) {
            ctx->pc = 0x2D8CF4u;
            goto label_2d8cf4;
        }
    }
    ctx->pc = 0x2D8CC8u;
label_2d8cc8:
    // 0x2d8cc8: 0x3c02000b  lui         $v0, 0xB
    ctx->pc = 0x2d8cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)11 << 16));
    // 0x2d8ccc: 0x3442b679  ori         $v0, $v0, 0xB679
    ctx->pc = 0x2d8cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46713);
    // 0x2d8cd0: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x2d8cd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2d8cd4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D8CD4u;
    {
        const bool branch_taken_0x2d8cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8CD4u;
        // 0x2d8cd8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8cd4) {
            ctx->pc = 0x2D8CF4u;
            goto label_2d8cf4;
        }
    }
    ctx->pc = 0x2D8CDCu;
    // 0x2d8cdc: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x2d8cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x2d8ce0: 0x3c02fff0  lui         $v0, 0xFFF0
    ctx->pc = 0x2d8ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65520 << 16));
    // 0x2d8ce4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2d8ce4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8ce8: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x2d8ce8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2d8cec: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2d8cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2d8cf0: 0xafa4001c  sw          $a0, 0x1C($sp)
    ctx->pc = 0x2d8cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
label_2d8cf4:
    // 0x2d8cf4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2d8cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8cf8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2d8cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2d8cfc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2d8cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2d8d00: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x2d8d00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2d8d04: 0x15183c  dsll32      $v1, $s5, 0
    ctx->pc = 0x2d8d04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) << (32 + 0));
    // 0x2d8d08: 0x83f025  or          $fp, $a0, $v1
    ctx->pc = 0x2d8d08u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2d8d0c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2d8d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2d8d10: 0x2442a980  addiu       $v0, $v0, -0x5680
    ctx->pc = 0x2d8d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945152));
    // 0x2d8d14: 0x13a0c0  sll         $s4, $s3, 3
    ctx->pc = 0x2d8d14u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x2d8d18: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x2d8d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2d8d1c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2d8d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8d20: 0xdc500000  ld          $s0, 0x0($v0)
    ctx->pc = 0x2d8d20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d8d24: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2D8D24u;
    SET_GPR_U32(ctx, 31, 0x2D8D2Cu);
    ctx->pc = 0x2D8D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8D24u;
    // 0x2d8d28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2D8D24u, 0x2D8D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8D2Cu;
label_2d8d2c:
    // 0x2d8d2c: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x2d8d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x2d8d30: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2d8d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8d34: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2D8D34u;
    SET_GPR_U32(ctx, 31, 0x2D8D3Cu);
    ctx->pc = 0x2D8D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8D34u;
    // 0x2d8d38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2D8D34u, 0x2D8D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8D3Cu;
label_2d8d3c:
    // 0x2d8d3c: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x2d8d3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x2d8d40: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x2d8d40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x2d8d44: 0xc0b8d3a  jal         func_2E34E8
    ctx->pc = 0x2D8D44u;
    SET_GPR_U32(ctx, 31, 0x2D8D4Cu);
    ctx->pc = 0x2D8D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8D44u;
    // 0x2d8d48: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E34E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E34E8u, 0x2D8D44u, 0x2D8D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8D4Cu;
label_2d8d4c:
    // 0x2d8d4c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2d8d4cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8d50: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x2d8d50u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d8d54: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2D8D54u;
    SET_GPR_U32(ctx, 31, 0x2D8D5Cu);
    ctx->pc = 0x2D8D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8D54u;
    // 0x2d8d58: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2D8D54u, 0x2D8D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8D5Cu;
label_2d8d5c:
    // 0x2d8d5c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x2d8d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x2d8d60: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2d8d60u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8d64: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x2d8d64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d8d68: 0x12903c  dsll32      $s2, $s2, 0
    ctx->pc = 0x2d8d68u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 0));
    // 0x2d8d6c: 0x728824  and         $s1, $v1, $s2
    ctx->pc = 0x2d8d6cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x2d8d70: 0x151043  sra         $v0, $s5, 1
    ctx->pc = 0x2d8d70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 21), 1));
    // 0x2d8d74: 0x131c80  sll         $v1, $s3, 18
    ctx->pc = 0x2d8d74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 18));
    // 0x2d8d78: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x2d8d78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x2d8d7c: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x2d8d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    // 0x2d8d80: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2d8d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2d8d84: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2d8d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2d8d88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d8d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d8d8c: 0x2b03c  dsll32      $s6, $v0, 0
    ctx->pc = 0x2d8d8cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2d8d90: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2d8d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8d94: 0x34158010  ori         $s5, $zero, 0x8010
    ctx->pc = 0x2d8d94u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
    // 0x2d8d98: 0x15abfc  dsll32      $s5, $s5, 15
    ctx->pc = 0x2d8d98u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 15));
    // 0x2d8d9c: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2D8D9Cu;
    SET_GPR_U32(ctx, 31, 0x2D8DA4u);
    ctx->pc = 0x2D8DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8D9Cu;
    // 0x2d8da0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2D8D9Cu, 0x2D8DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8DA4u;
label_2d8da4:
    // 0x2d8da4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2d8da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8da8: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2D8DA8u;
    SET_GPR_U32(ctx, 31, 0x2D8DB0u);
    ctx->pc = 0x2D8DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8DA8u;
    // 0x2d8dac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2D8DA8u, 0x2D8DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8DB0u;
label_2d8db0:
    // 0x2d8db0: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2d8db0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8db4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2d8db4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8db8: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2D8DB8u;
    SET_GPR_U32(ctx, 31, 0x2D8DC0u);
    ctx->pc = 0x2D8DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8DB8u;
    // 0x2d8dbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2D8DB8u, 0x2D8DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8DC0u;
label_2d8dc0:
    // 0x2d8dc0: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x2d8dc0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d8dc4: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2D8DC4u;
    SET_GPR_U32(ctx, 31, 0x2D8DCCu);
    ctx->pc = 0x2D8DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8DC4u;
    // 0x2d8dc8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2D8DC4u, 0x2D8DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8DCCu;
label_2d8dcc:
    // 0x2d8dcc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d8dccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8dd0: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2d8dd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8dd4: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2D8DD4u;
    SET_GPR_U32(ctx, 31, 0x2D8DDCu);
    ctx->pc = 0x2D8DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8DD4u;
    // 0x2d8dd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2D8DD4u, 0x2D8DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8DDCu;
label_2d8ddc:
    // 0x2d8ddc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d8ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8de0: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2D8DE0u;
    SET_GPR_U32(ctx, 31, 0x2D8DE8u);
    ctx->pc = 0x2D8DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8DE0u;
    // 0x2d8de4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2D8DE0u, 0x2D8DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8DE8u;
label_2d8de8:
    // 0x2d8de8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2d8de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8dec: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2D8DECu;
    SET_GPR_U32(ctx, 31, 0x2D8DF4u);
    ctx->pc = 0x2D8DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8DECu;
    // 0x2d8df0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2D8DECu, 0x2D8DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8DF4u;
label_2d8df4:
    // 0x2d8df4: 0xdfa40008  ld          $a0, 0x8($sp)
    ctx->pc = 0x2d8df4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d8df8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2d8df8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8dfc: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2D8DFCu;
    SET_GPR_U32(ctx, 31, 0x2D8E04u);
    ctx->pc = 0x2D8E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8DFCu;
    // 0x2d8e00: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2D8DFCu, 0x2D8E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8E04u;
label_2d8e04:
    // 0x2d8e04: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2d8e04u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8e08: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2d8e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8e0c: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2D8E0Cu;
    SET_GPR_U32(ctx, 31, 0x2D8E14u);
    ctx->pc = 0x2D8E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8E0Cu;
    // 0x2d8e10: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2D8E0Cu, 0x2D8E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8E14u;
label_2d8e14:
    // 0x2d8e14: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2d8e14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2d8e18: 0xdc25aac0  ld          $a1, -0x5540($at)
    ctx->pc = 0x2d8e18u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3AAAC0u));
    // 0x2d8e1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d8e1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8e20: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2D8E20u;
    SET_GPR_U32(ctx, 31, 0x2D8E28u);
    ctx->pc = 0x2D8E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8E20u;
    // 0x2d8e24: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2D8E20u, 0x2D8E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8E28u;
label_2d8e28:
    // 0x2d8e28: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2d8e28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2d8e2c: 0xdc25aac8  ld          $a1, -0x5538($at)
    ctx->pc = 0x2d8e2cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3AAAC8u));
    // 0x2d8e30: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2D8E30u;
    SET_GPR_U32(ctx, 31, 0x2D8E38u);
    ctx->pc = 0x2D8E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8E30u;
    // 0x2d8e34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2D8E30u, 0x2D8E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8E38u;
label_2d8e38:
    // 0x2d8e38: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2d8e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8e3c: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2D8E3Cu;
    SET_GPR_U32(ctx, 31, 0x2D8E44u);
    ctx->pc = 0x2D8E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8E3Cu;
    // 0x2d8e40: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2D8E3Cu, 0x2D8E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8E44u;
label_2d8e44:
    // 0x2d8e44: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2d8e44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2d8e48: 0xdc25aad0  ld          $a1, -0x5530($at)
    ctx->pc = 0x2d8e48u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3AAAD0u));
    // 0x2d8e4c: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2D8E4Cu;
    SET_GPR_U32(ctx, 31, 0x2D8E54u);
    ctx->pc = 0x2D8E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8E4Cu;
    // 0x2d8e50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2D8E4Cu, 0x2D8E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8E54u;
label_2d8e54:
    // 0x2d8e54: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2d8e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8e58: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2D8E58u;
    SET_GPR_U32(ctx, 31, 0x2D8E60u);
    ctx->pc = 0x2D8E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8E58u;
    // 0x2d8e5c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2D8E58u, 0x2D8E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8E60u;
label_2d8e60:
    // 0x2d8e60: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2d8e60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2d8e64: 0xdc25aad8  ld          $a1, -0x5528($at)
    ctx->pc = 0x2d8e64u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3AAAD8u));
    // 0x2d8e68: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2D8E68u;
    SET_GPR_U32(ctx, 31, 0x2D8E70u);
    ctx->pc = 0x2D8E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8E68u;
    // 0x2d8e6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2D8E68u, 0x2D8E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8E70u;
label_2d8e70:
    // 0x2d8e70: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2d8e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8e74: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2D8E74u;
    SET_GPR_U32(ctx, 31, 0x2D8E7Cu);
    ctx->pc = 0x2D8E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8E74u;
    // 0x2d8e78: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2D8E74u, 0x2D8E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8E7Cu;
label_2d8e7c:
    // 0x2d8e7c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2d8e7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2d8e80: 0xdc25aae0  ld          $a1, -0x5520($at)
    ctx->pc = 0x2d8e80u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3AAAE0u));
    // 0x2d8e84: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2D8E84u;
    SET_GPR_U32(ctx, 31, 0x2D8E8Cu);
    ctx->pc = 0x2D8E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8E84u;
    // 0x2d8e88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2D8E84u, 0x2D8E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8E8Cu;
label_2d8e8c:
    // 0x2d8e8c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2d8e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8e90: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2D8E90u;
    SET_GPR_U32(ctx, 31, 0x2D8E98u);
    ctx->pc = 0x2D8E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8E90u;
    // 0x2d8e94: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2D8E90u, 0x2D8E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8E98u;
label_2d8e98:
    // 0x2d8e98: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2d8e98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2d8e9c: 0xdc25aae8  ld          $a1, -0x5518($at)
    ctx->pc = 0x2d8e9cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3AAAE8u));
    // 0x2d8ea0: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2D8EA0u;
    SET_GPR_U32(ctx, 31, 0x2D8EA8u);
    ctx->pc = 0x2D8EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8EA0u;
    // 0x2d8ea4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2D8EA0u, 0x2D8EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8EA8u;
label_2d8ea8:
    // 0x2d8ea8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d8ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8eac: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2D8EACu;
    SET_GPR_U32(ctx, 31, 0x2D8EB4u);
    ctx->pc = 0x2D8EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8EACu;
    // 0x2d8eb0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2D8EACu, 0x2D8EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8EB4u;
label_2d8eb4:
    // 0x2d8eb4: 0xdfa50008  ld          $a1, 0x8($sp)
    ctx->pc = 0x2d8eb4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d8eb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d8eb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8ebc: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2D8EBCu;
    SET_GPR_U32(ctx, 31, 0x2D8EC4u);
    ctx->pc = 0x2D8EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8EBCu;
    // 0x2d8ec0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2D8EBCu, 0x2D8EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8EC4u;
label_2d8ec4:
    // 0x2d8ec4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d8ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8ec8: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2D8EC8u;
    SET_GPR_U32(ctx, 31, 0x2D8ED0u);
    ctx->pc = 0x2D8ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8EC8u;
    // 0x2d8ecc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2D8EC8u, 0x2D8ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8ED0u;
label_2d8ed0:
    // 0x2d8ed0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d8ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8ed4: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2D8ED4u;
    SET_GPR_U32(ctx, 31, 0x2D8EDCu);
    ctx->pc = 0x2D8ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8ED4u;
    // 0x2d8ed8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2D8ED4u, 0x2D8EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8EDCu;
label_2d8edc:
    // 0x2d8edc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d8edcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8ee0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d8ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8ee4: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2D8EE4u;
    SET_GPR_U32(ctx, 31, 0x2D8EECu);
    ctx->pc = 0x2D8EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8EE4u;
    // 0x2d8ee8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2D8EE4u, 0x2D8EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8EECu;
label_2d8eec:
    // 0x2d8eec: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2d8eecu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8ef0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d8ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8ef4: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2D8EF4u;
    SET_GPR_U32(ctx, 31, 0x2D8EFCu);
    ctx->pc = 0x2D8EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8EF4u;
    // 0x2d8ef8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2D8EF4u, 0x2D8EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8EFCu;
label_2d8efc:
    // 0x2d8efc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d8efcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8f00: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2D8F00u;
    SET_GPR_U32(ctx, 31, 0x2D8F08u);
    ctx->pc = 0x2D8F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8F00u;
    // 0x2d8f04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2D8F00u, 0x2D8F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8F08u;
label_2d8f08:
    // 0x2d8f08: 0x52b024  and         $s6, $v0, $s2
    ctx->pc = 0x2d8f08u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x2d8f0c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2d8f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8f10: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2D8F10u;
    SET_GPR_U32(ctx, 31, 0x2D8F18u);
    ctx->pc = 0x2D8F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8F10u;
    // 0x2d8f14: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2D8F10u, 0x2D8F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8F18u;
label_2d8f18:
    // 0x2d8f18: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2d8f18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8f1c: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2D8F1Cu;
    SET_GPR_U32(ctx, 31, 0x2D8F24u);
    ctx->pc = 0x2D8F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8F1Cu;
    // 0x2d8f20: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2D8F1Cu, 0x2D8F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8F24u;
label_2d8f24:
    // 0x2d8f24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d8f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8f28: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2D8F28u;
    SET_GPR_U32(ctx, 31, 0x2D8F30u);
    ctx->pc = 0x2D8F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8F28u;
    // 0x2d8f2c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2D8F28u, 0x2D8F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8F30u;
label_2d8f30:
    // 0x2d8f30: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2d8f30u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8f34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d8f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8f38: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2D8F38u;
    SET_GPR_U32(ctx, 31, 0x2D8F40u);
    ctx->pc = 0x2D8F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8F38u;
    // 0x2d8f3c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2D8F38u, 0x2D8F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8F40u;
label_2d8f40:
    // 0x2d8f40: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x2d8f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x2d8f44: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d8f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8f48: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2D8F48u;
    SET_GPR_U32(ctx, 31, 0x2D8F50u);
    ctx->pc = 0x2D8F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8F48u;
    // 0x2d8f4c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2D8F48u, 0x2D8F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8F50u;
label_2d8f50:
    // 0x2d8f50: 0xdfa50008  ld          $a1, 0x8($sp)
    ctx->pc = 0x2d8f50u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d8f54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d8f54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8f58: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2D8F58u;
    SET_GPR_U32(ctx, 31, 0x2D8F60u);
    ctx->pc = 0x2D8F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8F58u;
    // 0x2d8f5c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2D8F58u, 0x2D8F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8F60u;
label_2d8f60:
    // 0x2d8f60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d8f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8f64: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2D8F64u;
    SET_GPR_U32(ctx, 31, 0x2D8F6Cu);
    ctx->pc = 0x2D8F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8F64u;
    // 0x2d8f68: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2D8F64u, 0x2D8F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8F6Cu;
label_2d8f6c:
    // 0x2d8f6c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2d8f6cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8f70: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x2d8f70u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d8f74: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2D8F74u;
    SET_GPR_U32(ctx, 31, 0x2D8F7Cu);
    ctx->pc = 0x2D8F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8F74u;
    // 0x2d8f78: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2D8F74u, 0x2D8F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8F7Cu;
label_2d8f7c:
    // 0x2d8f7c: 0x52b024  and         $s6, $v0, $s2
    ctx->pc = 0x2d8f7cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x2d8f80: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2d8f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8f84: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2D8F84u;
    SET_GPR_U32(ctx, 31, 0x2D8F8Cu);
    ctx->pc = 0x2D8F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8F84u;
    // 0x2d8f88: 0xdfa50010  ld          $a1, 0x10($sp) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2D8F84u, 0x2D8F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8F8Cu;
label_2d8f8c:
    // 0x2d8f8c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2d8f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8f90: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2D8F90u;
    SET_GPR_U32(ctx, 31, 0x2D8F98u);
    ctx->pc = 0x2D8F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8F90u;
    // 0x2d8f94: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2D8F90u, 0x2D8F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8F98u;
label_2d8f98:
    // 0x2d8f98: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2d8f98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2d8f9c: 0xdc25aaf0  ld          $a1, -0x5510($at)
    ctx->pc = 0x2d8f9cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3AAAF0u));
    // 0x2d8fa0: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2d8fa0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8fa4: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2D8FA4u;
    SET_GPR_U32(ctx, 31, 0x2D8FACu);
    ctx->pc = 0x2D8FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8FA4u;
    // 0x2d8fa8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2D8FA4u, 0x2D8FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8FACu;
label_2d8fac:
    // 0x2d8fac: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2d8facu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2d8fb0: 0xdc25aaf8  ld          $a1, -0x5508($at)
    ctx->pc = 0x2d8fb0u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3AAAF8u));
    // 0x2d8fb4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2d8fb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8fb8: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2D8FB8u;
    SET_GPR_U32(ctx, 31, 0x2D8FC0u);
    ctx->pc = 0x2D8FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8FB8u;
    // 0x2d8fbc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2D8FB8u, 0x2D8FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8FC0u;
label_2d8fc0:
    // 0x2d8fc0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2d8fc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2d8fc4: 0xdc25ab00  ld          $a1, -0x5500($at)
    ctx->pc = 0x2d8fc4u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3AAB00u));
    // 0x2d8fc8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d8fc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8fcc: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2D8FCCu;
    SET_GPR_U32(ctx, 31, 0x2D8FD4u);
    ctx->pc = 0x2D8FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8FCCu;
    // 0x2d8fd0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2D8FCCu, 0x2D8FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8FD4u;
label_2d8fd4:
    // 0x2d8fd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d8fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8fd8: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2D8FD8u;
    SET_GPR_U32(ctx, 31, 0x2D8FE0u);
    ctx->pc = 0x2D8FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8FD8u;
    // 0x2d8fdc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2D8FD8u, 0x2D8FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8FE0u;
label_2d8fe0:
    // 0x2d8fe0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2d8fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2d8fe4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d8fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8fe8: 0x2463a9a0  addiu       $v1, $v1, -0x5660
    ctx->pc = 0x2d8fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945184));
    // 0x2d8fec: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x2d8fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2d8ff0: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2D8FF0u;
    SET_GPR_U32(ctx, 31, 0x2D8FF8u);
    ctx->pc = 0x2D8FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8FF0u;
    // 0x2d8ff4: 0xdc650000  ld          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2D8FF0u, 0x2D8FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8FF8u;
label_2d8ff8:
    // 0x2d8ff8: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x2d8ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x2d8ffc: 0xc0b8dee  jal         func_2E37B8
    ctx->pc = 0x2D8FFCu;
    SET_GPR_U32(ctx, 31, 0x2D9004u);
    ctx->pc = 0x2D9000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8FFCu;
    // 0x2d9000: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E37B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E37B8u, 0x2D8FFCu, 0x2D9004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9004u;
label_2d9004:
    // 0x2d9004: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2d9004u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9008: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d9008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d900c: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2D900Cu;
    SET_GPR_U32(ctx, 31, 0x2D9014u);
    ctx->pc = 0x2D9010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D900Cu;
    // 0x2d9010: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2D900Cu, 0x2D9014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9014u;
label_2d9014:
    // 0x2d9014: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2d9014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2d9018: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d9018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d901c: 0x2463a990  addiu       $v1, $v1, -0x5670
    ctx->pc = 0x2d901cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945168));
    // 0x2d9020: 0x283a021  addu        $s4, $s4, $v1
    ctx->pc = 0x2d9020u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2d9024: 0xde900000  ld          $s0, 0x0($s4)
    ctx->pc = 0x2d9024u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2d9028: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2D9028u;
    SET_GPR_U32(ctx, 31, 0x2D9030u);
    ctx->pc = 0x2D902Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9028u;
    // 0x2d902c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2D9028u, 0x2D9030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9030u;
label_2d9030:
    // 0x2d9030: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d9030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9034: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2D9034u;
    SET_GPR_U32(ctx, 31, 0x2D903Cu);
    ctx->pc = 0x2D9038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9034u;
    // 0x2d9038: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2D9034u, 0x2D903Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D903Cu;
label_2d903c:
    // 0x2d903c: 0x52a024  and         $s4, $v0, $s2
    ctx->pc = 0x2d903cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x2d9040: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2d9040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9044: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2D9044u;
    SET_GPR_U32(ctx, 31, 0x2D904Cu);
    ctx->pc = 0x2D9048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9044u;
    // 0x2d9048: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2D9044u, 0x2D904Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D904Cu;
label_2d904c:
    // 0x2d904c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d904cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9050: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2D9050u;
    SET_GPR_U32(ctx, 31, 0x2D9058u);
    ctx->pc = 0x2D9054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9050u;
    // 0x2d9054: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2D9050u, 0x2D9058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9058u;
label_2d9058:
    // 0x2d9058: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d9058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d905c: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2D905Cu;
    SET_GPR_U32(ctx, 31, 0x2D9064u);
    ctx->pc = 0x2D9060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D905Cu;
    // 0x2d9060: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2D905Cu, 0x2D9064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9064u;
label_2d9064:
    // 0x2d9064: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d9064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d9068:
    // 0x2d9068: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2D9068u;
    SET_GPR_U32(ctx, 31, 0x2D9070u);
    ctx->pc = 0x2D906Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9068u;
    // 0x2d906c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2D9068u, 0x2D9070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9070u;
label_2d9070:
    // 0x2d9070: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2d9070u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9074: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2d9074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d9078: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d9078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d907c: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x2d907cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2d9080: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x2d9080u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x2d9084: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x2d9084u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x2d9088: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x2d9088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2d908c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2d908cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2d9090: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D9090u;
    {
        const bool branch_taken_0x2d9090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D9094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9090u;
        // 0x2d9094: 0xffa50008  sd          $a1, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9090) {
            ctx->pc = 0x2D90A4u;
            goto label_2d90a4;
        }
    }
    ctx->pc = 0x2D9098u;
    // 0x2d9098: 0x3402bff0  ori         $v0, $zero, 0xBFF0
    ctx->pc = 0x2d9098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49136);
    // 0x2d909c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2d909cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d90a0: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x2d90a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_2d90a4:
    // 0x2d90a4: 0xdfa30000  ld          $v1, 0x0($sp)
    ctx->pc = 0x2d90a4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d90a8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2d90a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d90ac: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2d90acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2d90b0: 0x628024  and         $s0, $v1, $v0
    ctx->pc = 0x2d90b0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2d90b4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2d90b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d90b8: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2D90B8u;
    SET_GPR_U32(ctx, 31, 0x2D90C0u);
    ctx->pc = 0x2D90BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D90B8u;
    // 0x2d90bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2D90B8u, 0x2D90C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D90C0u;
label_2d90c0:
    // 0x2d90c0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2d90c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d90c4: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2D90C4u;
    SET_GPR_U32(ctx, 31, 0x2D90CCu);
    ctx->pc = 0x2D90C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D90C4u;
    // 0x2d90c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2D90C4u, 0x2D90CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D90CCu;
label_2d90cc:
    // 0x2d90cc: 0xdfa40000  ld          $a0, 0x0($sp)
    ctx->pc = 0x2d90ccu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d90d0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d90d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d90d4: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2D90D4u;
    SET_GPR_U32(ctx, 31, 0x2D90DCu);
    ctx->pc = 0x2D90D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D90D4u;
    // 0x2d90d8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2D90D4u, 0x2D90DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D90DCu;
label_2d90dc:
    // 0x2d90dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d90dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d90e0: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2D90E0u;
    SET_GPR_U32(ctx, 31, 0x2D90E8u);
    ctx->pc = 0x2D90E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D90E0u;
    // 0x2d90e4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2D90E0u, 0x2D90E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D90E8u;
label_2d90e8:
    // 0x2d90e8: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2d90e8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d90ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d90ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d90f0: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2D90F0u;
    SET_GPR_U32(ctx, 31, 0x2D90F8u);
    ctx->pc = 0x2D90F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D90F0u;
    // 0x2d90f4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2D90F0u, 0x2D90F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D90F8u;
label_2d90f8:
    // 0x2d90f8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2d90f8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d90fc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2d90fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9100: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2D9100u;
    SET_GPR_U32(ctx, 31, 0x2D9108u);
    ctx->pc = 0x2D9104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9100u;
    // 0x2d9104: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2D9100u, 0x2D9108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9108u;
label_2d9108:
    // 0x2d9108: 0x2883f  dsra32      $s1, $v0, 0
    ctx->pc = 0x2d9108u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2d910c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x2d910cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2d9110: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x2d9110u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x2d9114: 0x3c03408f  lui         $v1, 0x408F
    ctx->pc = 0x2d9114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16527 << 16));
    // 0x2d9118: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2d9118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2d911c: 0x71182a  slt         $v1, $v1, $s1
    ctx->pc = 0x2d911cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2d9120: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x2D9120u;
    {
        const bool branch_taken_0x2d9120 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9120u;
        // 0x2d9124: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9120) {
            ctx->pc = 0x2D91A8u;
            goto label_2d91a8;
        }
    }
    ctx->pc = 0x2D9128u;
    // 0x2d9128: 0x3c02bf70  lui         $v0, 0xBF70
    ctx->pc = 0x2d9128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49008 << 16));
    // 0x2d912c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2d912cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2d9130: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2d9130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2d9134: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D9134u;
    {
        const bool branch_taken_0x2d9134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9134u;
        // 0x2d9138: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9134) {
            ctx->pc = 0x2D9158u;
            goto label_2d9158;
        }
    }
    ctx->pc = 0x2D913Cu;
    // 0x2d913c: 0xdfa40008  ld          $a0, 0x8($sp)
    ctx->pc = 0x2d913cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d9140: 0xdc50aa90  ld          $s0, -0x5570($v0)
    ctx->pc = 0x2d9140u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 4294945424)));
    // 0x2d9144: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2D9144u;
    SET_GPR_U32(ctx, 31, 0x2D914Cu);
    ctx->pc = 0x2D9148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9144u;
    // 0x2d9148: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2D9144u, 0x2D914Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D914Cu;
label_2d914c:
    // 0x2d914c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d914cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9150: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x2D9150u;
    {
        const bool branch_taken_0x2d9150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9150u;
        // 0x2d9154: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9150) {
            ctx->pc = 0x2D94D8u;
            goto label_2d94d8;
        }
    }
    ctx->pc = 0x2D9158u;
label_2d9158:
    // 0x2d9158: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2d9158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2d915c: 0xdc25ab08  ld          $a1, -0x54F8($at)
    ctx->pc = 0x2d915cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3AAB08u));
    // 0x2d9160: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2D9160u;
    SET_GPR_U32(ctx, 31, 0x2D9168u);
    ctx->pc = 0x2D9164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9160u;
    // 0x2d9164: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2D9160u, 0x2D9168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9168u;
label_2d9168:
    // 0x2d9168: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d9168u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d916c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d916cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9170: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2D9170u;
    SET_GPR_U32(ctx, 31, 0x2D9178u);
    ctx->pc = 0x2D9174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9170u;
    // 0x2d9174: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2D9170u, 0x2D9178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9178u;
label_2d9178:
    // 0x2d9178: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d9178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d917c: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2D917Cu;
    SET_GPR_U32(ctx, 31, 0x2D9184u);
    ctx->pc = 0x2D9180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D917Cu;
    // 0x2d9180: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2D917Cu, 0x2D9184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9184u;
label_2d9184:
    // 0x2d9184: 0x1840002c  blez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2D9184u;
    {
        const bool branch_taken_0x2d9184 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2D9188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9184u;
        // 0x2d9188: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9184) {
            ctx->pc = 0x2D9238u;
            goto label_2d9238;
        }
    }
    ctx->pc = 0x2D918Cu;
    // 0x2d918c: 0xdfa40008  ld          $a0, 0x8($sp)
    ctx->pc = 0x2d918cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d9190: 0xdc50aa90  ld          $s0, -0x5570($v0)
    ctx->pc = 0x2d9190u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 4294945424)));
    // 0x2d9194: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2D9194u;
    SET_GPR_U32(ctx, 31, 0x2D919Cu);
    ctx->pc = 0x2D9198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9194u;
    // 0x2d9198: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2D9194u, 0x2D919Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D919Cu;
label_2d919c:
    // 0x2d919c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d919cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d91a0: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x2D91A0u;
    {
        const bool branch_taken_0x2d91a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D91A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D91A0u;
        // 0x2d91a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d91a0) {
            ctx->pc = 0x2D94D8u;
            goto label_2d94d8;
        }
    }
    ctx->pc = 0x2D91A8u;
label_2d91a8:
    // 0x2d91a8: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x2d91a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x2d91ac: 0x3c034090  lui         $v1, 0x4090
    ctx->pc = 0x2d91acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16528 << 16));
    // 0x2d91b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2d91b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2d91b4: 0x3463cbff  ori         $v1, $v1, 0xCBFF
    ctx->pc = 0x2d91b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52223);
    // 0x2d91b8: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x2d91b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x2d91bc: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x2d91bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d91c0: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2D91C0u;
    {
        const bool branch_taken_0x2d91c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D91C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D91C0u;
        // 0x2d91c4: 0x3c023f6f  lui         $v0, 0x3F6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16239 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d91c0) {
            ctx->pc = 0x2D9238u;
            goto label_2d9238;
        }
    }
    ctx->pc = 0x2D91C8u;
    // 0x2d91c8: 0x34423400  ori         $v0, $v0, 0x3400
    ctx->pc = 0x2d91c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13312);
    // 0x2d91cc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2d91ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2d91d0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2d91d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2d91d4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D91D4u;
    {
        const bool branch_taken_0x2d91d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D91D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D91D4u;
        // 0x2d91d8: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d91d4) {
            ctx->pc = 0x2D91F8u;
            goto label_2d91f8;
        }
    }
    ctx->pc = 0x2D91DCu;
    // 0x2d91dc: 0xdfa40008  ld          $a0, 0x8($sp)
    ctx->pc = 0x2d91dcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d91e0: 0xdc50aa98  ld          $s0, -0x5568($v0)
    ctx->pc = 0x2d91e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 4294945432)));
    // 0x2d91e4: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2D91E4u;
    SET_GPR_U32(ctx, 31, 0x2D91ECu);
    ctx->pc = 0x2D91E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D91E4u;
    // 0x2d91e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2D91E4u, 0x2D91ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D91ECu;
label_2d91ec:
    // 0x2d91ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d91ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d91f0: 0x100000b9  b           . + 4 + (0xB9 << 2)
    ctx->pc = 0x2D91F0u;
    {
        const bool branch_taken_0x2d91f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D91F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D91F0u;
        // 0x2d91f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d91f0) {
            ctx->pc = 0x2D94D8u;
            goto label_2d94d8;
        }
    }
    ctx->pc = 0x2D91F8u;
label_2d91f8:
    // 0x2d91f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d91f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d91fc: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2D91FCu;
    SET_GPR_U32(ctx, 31, 0x2D9204u);
    ctx->pc = 0x2D9200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D91FCu;
    // 0x2d9200: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2D91FCu, 0x2D9204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9204u;
label_2d9204:
    // 0x2d9204: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d9204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9208: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2D9208u;
    SET_GPR_U32(ctx, 31, 0x2D9210u);
    ctx->pc = 0x2D920Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9208u;
    // 0x2d920c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2D9208u, 0x2D9210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9210u;
label_2d9210:
    // 0x2d9210: 0x1c40000a  bgtz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2D9210u;
    {
        const bool branch_taken_0x2d9210 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2D9214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9210u;
        // 0x2d9214: 0x3c067fff  lui         $a2, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9210) {
            ctx->pc = 0x2D923Cu;
            goto label_2d923c;
        }
    }
    ctx->pc = 0x2D9218u;
    // 0x2d9218: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2d9218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2d921c: 0xdfa40008  ld          $a0, 0x8($sp)
    ctx->pc = 0x2d921cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d9220: 0xdc50aa98  ld          $s0, -0x5568($v0)
    ctx->pc = 0x2d9220u;
    SET_GPR_U64(ctx, 16, FAST_READ64(0x3AAA98u));
    // 0x2d9224: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2D9224u;
    SET_GPR_U32(ctx, 31, 0x2D922Cu);
    ctx->pc = 0x2D9228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9224u;
    // 0x2d9228: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2D9224u, 0x2D922Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D922Cu;
label_2d922c:
    // 0x2d922c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d922cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9230: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x2D9230u;
    {
        const bool branch_taken_0x2d9230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9230u;
        // 0x2d9234: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9230) {
            ctx->pc = 0x2D94D8u;
            goto label_2d94d8;
        }
    }
    ctx->pc = 0x2D9238u;
label_2d9238:
    // 0x2d9238: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x2d9238u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_2d923c:
    // 0x2d923c: 0x3c023fe0  lui         $v0, 0x3FE0
    ctx->pc = 0x2d923cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16352 << 16));
    // 0x2d9240: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x2d9240u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x2d9244: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x2d9244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x2d9248: 0x2262024  and         $a0, $s1, $a2
    ctx->pc = 0x2d9248u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & GPR_U64(ctx, 6));
    // 0x2d924c: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x2d924cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2d9250: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2D9250u;
    {
        const bool branch_taken_0x2d9250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9250u;
        // 0x2d9254: 0x41d03  sra         $v1, $a0, 20 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9250) {
            ctx->pc = 0x2D92D0u;
            goto label_2d92d0;
        }
    }
    ctx->pc = 0x2D9258u;
    // 0x2d9258: 0x2463fc02  addiu       $v1, $v1, -0x3FE
    ctx->pc = 0x2d9258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966274));
    // 0x2d925c: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x2d925cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    // 0x2d9260: 0x641807  srav        $v1, $a0, $v1
    ctx->pc = 0x2d9260u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x2d9264: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2d9264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2d9268: 0x661024  and         $v0, $v1, $a2
    ctx->pc = 0x2d9268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x2d926c: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x2d926cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
    // 0x2d9270: 0x21503  sra         $v0, $v0, 20
    ctx->pc = 0x2d9270u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 20));
    // 0x2d9274: 0x2453fc01  addiu       $s3, $v0, -0x3FF
    ctx->pc = 0x2d9274u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966273));
    // 0x2d9278: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x2d9278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x2d927c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2d927cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2d9280: 0x8fa5001c  lw          $a1, 0x1C($sp)
    ctx->pc = 0x2d9280u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x2d9284: 0x2631007  srav        $v0, $v1, $s3
    ctx->pc = 0x2d9284u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 19) & 0x1F));
    // 0x2d9288: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2d9288u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2d928c: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x2d928cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x2d9290: 0x2a83c  dsll32      $s5, $v0, 0
    ctx->pc = 0x2d9290u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2d9294: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2d9294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2d9298: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2d9298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2d929c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2d929cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2d92a0: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x2d92a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2d92a4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2d92a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d92a8: 0x431807  srav        $v1, $v1, $v0
    ctx->pc = 0x2d92a8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x2d92ac: 0xb1282a  slt         $a1, $a1, $s1
    ctx->pc = 0x2d92acu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2d92b0: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x2d92b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
    // 0x2d92b4: 0x31023  negu        $v0, $v1
    ctx->pc = 0x2d92b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x2d92b8: 0x45180a  movz        $v1, $v0, $a1
    ctx->pc = 0x2d92b8u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x2d92bc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2d92bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d92c0: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x2d92c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
    // 0x2d92c4: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2D92C4u;
    SET_GPR_U32(ctx, 31, 0x2D92CCu);
    ctx->pc = 0x2D92C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D92C4u;
    // 0x2d92c8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2D92C4u, 0x2D92CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D92CCu;
label_2d92cc:
    // 0x2d92cc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2d92ccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d92d0:
    // 0x2d92d0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2d92d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d92d4: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2D92D4u;
    SET_GPR_U32(ctx, 31, 0x2D92DCu);
    ctx->pc = 0x2D92D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D92D4u;
    // 0x2d92d8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2D92D4u, 0x2D92DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D92DCu;
label_2d92dc:
    // 0x2d92dc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2d92dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d92e0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2d92e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2d92e4: 0x43a824  and         $s5, $v0, $v1
    ctx->pc = 0x2d92e4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2d92e8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2d92e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2d92ec: 0xdc25ab10  ld          $a1, -0x54F0($at)
    ctx->pc = 0x2d92ecu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3AAB10u));
    // 0x2d92f0: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2D92F0u;
    SET_GPR_U32(ctx, 31, 0x2D92F8u);
    ctx->pc = 0x2D92F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D92F0u;
    // 0x2d92f4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2D92F0u, 0x2D92F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D92F8u;
label_2d92f8:
    // 0x2d92f8: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x2d92f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x2d92fc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2d92fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9300: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2D9300u;
    SET_GPR_U32(ctx, 31, 0x2D9308u);
    ctx->pc = 0x2D9304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9300u;
    // 0x2d9304: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2D9300u, 0x2D9308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9308u;
label_2d9308:
    // 0x2d9308: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2d9308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d930c: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2D930Cu;
    SET_GPR_U32(ctx, 31, 0x2D9314u);
    ctx->pc = 0x2D9310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D930Cu;
    // 0x2d9310: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2D930Cu, 0x2D9314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9314u;
label_2d9314:
    // 0x2d9314: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2d9314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2d9318: 0xdc25ab18  ld          $a1, -0x54E8($at)
    ctx->pc = 0x2d9318u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3AAB18u));
    // 0x2d931c: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2D931Cu;
    SET_GPR_U32(ctx, 31, 0x2D9324u);
    ctx->pc = 0x2D9320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D931Cu;
    // 0x2d9320: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2D931Cu, 0x2D9324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9324u;
label_2d9324:
    // 0x2d9324: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2d9324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2d9328: 0xdc25ab20  ld          $a1, -0x54E0($at)
    ctx->pc = 0x2d9328u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3AAB20u));
    // 0x2d932c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d932cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9330: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2D9330u;
    SET_GPR_U32(ctx, 31, 0x2D9338u);
    ctx->pc = 0x2D9334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9330u;
    // 0x2d9334: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2D9330u, 0x2D9338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9338u;
label_2d9338:
    // 0x2d9338: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d9338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d933c: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2D933Cu;
    SET_GPR_U32(ctx, 31, 0x2D9344u);
    ctx->pc = 0x2D9340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D933Cu;
    // 0x2d9340: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2D933Cu, 0x2D9344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9344u;
label_2d9344:
    // 0x2d9344: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2d9344u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9348: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x2d9348u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d934c: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2D934Cu;
    SET_GPR_U32(ctx, 31, 0x2D9354u);
    ctx->pc = 0x2D9350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D934Cu;
    // 0x2d9350: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2D934Cu, 0x2D9354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9354u;
label_2d9354:
    // 0x2d9354: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2d9354u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9358: 0xdfa50010  ld          $a1, 0x10($sp)
    ctx->pc = 0x2d9358u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d935c: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2D935Cu;
    SET_GPR_U32(ctx, 31, 0x2D9364u);
    ctx->pc = 0x2D9360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D935Cu;
    // 0x2d9360: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2D935Cu, 0x2D9364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9364u;
label_2d9364:
    // 0x2d9364: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2d9364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9368: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2D9368u;
    SET_GPR_U32(ctx, 31, 0x2D9370u);
    ctx->pc = 0x2D936Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9368u;
    // 0x2d936c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2D9368u, 0x2D9370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9370u;
label_2d9370:
    // 0x2d9370: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d9370u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9374: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d9374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9378: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2D9378u;
    SET_GPR_U32(ctx, 31, 0x2D9380u);
    ctx->pc = 0x2D937Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9378u;
    // 0x2d937c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2D9378u, 0x2D9380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9380u;
label_2d9380:
    // 0x2d9380: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2d9380u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9384: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2d9384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2d9388: 0xdc25ab28  ld          $a1, -0x54D8($at)
    ctx->pc = 0x2d9388u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3AAB28u));
    // 0x2d938c: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2D938Cu;
    SET_GPR_U32(ctx, 31, 0x2D9394u);
    ctx->pc = 0x2D9390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D938Cu;
    // 0x2d9390: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2D938Cu, 0x2D9394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9394u;
label_2d9394:
    // 0x2d9394: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2d9394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2d9398: 0xdc25ab30  ld          $a1, -0x54D0($at)
    ctx->pc = 0x2d9398u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3AAB30u));
    // 0x2d939c: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2D939Cu;
    SET_GPR_U32(ctx, 31, 0x2D93A4u);
    ctx->pc = 0x2D93A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D939Cu;
    // 0x2d93a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2D939Cu, 0x2D93A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D93A4u;
label_2d93a4:
    // 0x2d93a4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d93a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d93a8: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2D93A8u;
    SET_GPR_U32(ctx, 31, 0x2D93B0u);
    ctx->pc = 0x2D93ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D93A8u;
    // 0x2d93ac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2D93A8u, 0x2D93B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D93B0u;
label_2d93b0:
    // 0x2d93b0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2d93b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2d93b4: 0xdc25ab38  ld          $a1, -0x54C8($at)
    ctx->pc = 0x2d93b4u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3AAB38u));
    // 0x2d93b8: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2D93B8u;
    SET_GPR_U32(ctx, 31, 0x2D93C0u);
    ctx->pc = 0x2D93BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D93B8u;
    // 0x2d93bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2D93B8u, 0x2D93C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D93C0u;
label_2d93c0:
    // 0x2d93c0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d93c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d93c4: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2D93C4u;
    SET_GPR_U32(ctx, 31, 0x2D93CCu);
    ctx->pc = 0x2D93C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D93C4u;
    // 0x2d93c8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2D93C4u, 0x2D93CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D93CCu;
label_2d93cc:
    // 0x2d93cc: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2d93ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2d93d0: 0xdc25ab40  ld          $a1, -0x54C0($at)
    ctx->pc = 0x2d93d0u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3AAB40u));
    // 0x2d93d4: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2D93D4u;
    SET_GPR_U32(ctx, 31, 0x2D93DCu);
    ctx->pc = 0x2D93D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D93D4u;
    // 0x2d93d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2D93D4u, 0x2D93DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D93DCu;
label_2d93dc:
    // 0x2d93dc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d93dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d93e0: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2D93E0u;
    SET_GPR_U32(ctx, 31, 0x2D93E8u);
    ctx->pc = 0x2D93E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D93E0u;
    // 0x2d93e4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2D93E0u, 0x2D93E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D93E8u;
label_2d93e8:
    // 0x2d93e8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2d93e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2d93ec: 0xdc25ab48  ld          $a1, -0x54B8($at)
    ctx->pc = 0x2d93ecu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3AAB48u));
    // 0x2d93f0: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2D93F0u;
    SET_GPR_U32(ctx, 31, 0x2D93F8u);
    ctx->pc = 0x2D93F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D93F0u;
    // 0x2d93f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2D93F0u, 0x2D93F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D93F8u;
label_2d93f8:
    // 0x2d93f8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d93f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d93fc: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2D93FCu;
    SET_GPR_U32(ctx, 31, 0x2D9404u);
    ctx->pc = 0x2D9400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D93FCu;
    // 0x2d9400: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2D93FCu, 0x2D9404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9404u;
label_2d9404:
    // 0x2d9404: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d9404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9408: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2D9408u;
    SET_GPR_U32(ctx, 31, 0x2D9410u);
    ctx->pc = 0x2D940Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9408u;
    // 0x2d940c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2D9408u, 0x2D9410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9410u;
label_2d9410:
    // 0x2d9410: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2d9410u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9414: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d9414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9418: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2D9418u;
    SET_GPR_U32(ctx, 31, 0x2D9420u);
    ctx->pc = 0x2D941Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9418u;
    // 0x2d941c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2D9418u, 0x2D9420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9420u;
label_2d9420:
    // 0x2d9420: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x2d9420u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2d9424: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x2d9424u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x2d9428: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d9428u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d942c: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2D942Cu;
    SET_GPR_U32(ctx, 31, 0x2D9434u);
    ctx->pc = 0x2D9430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D942Cu;
    // 0x2d9430: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2D942Cu, 0x2D9434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9434u;
label_2d9434:
    // 0x2d9434: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d9434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9438: 0xc0b8d3a  jal         func_2E34E8
    ctx->pc = 0x2D9438u;
    SET_GPR_U32(ctx, 31, 0x2D9440u);
    ctx->pc = 0x2D943Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9438u;
    // 0x2d943c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E34E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E34E8u, 0x2D9438u, 0x2D9440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9440u;
label_2d9440:
    // 0x2d9440: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d9440u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9444: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d9444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9448: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2D9448u;
    SET_GPR_U32(ctx, 31, 0x2D9450u);
    ctx->pc = 0x2D944Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9448u;
    // 0x2d944c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2D9448u, 0x2D9450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9450u;
label_2d9450:
    // 0x2d9450: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d9450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9454: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2D9454u;
    SET_GPR_U32(ctx, 31, 0x2D945Cu);
    ctx->pc = 0x2D9458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9454u;
    // 0x2d9458: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2D9454u, 0x2D945Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D945Cu;
label_2d945c:
    // 0x2d945c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d945cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9460: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2D9460u;
    SET_GPR_U32(ctx, 31, 0x2D9468u);
    ctx->pc = 0x2D9464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9460u;
    // 0x2d9464: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2D9460u, 0x2D9468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9468u;
label_2d9468:
    // 0x2d9468: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d9468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d946c: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2D946Cu;
    SET_GPR_U32(ctx, 31, 0x2D9474u);
    ctx->pc = 0x2D9470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D946Cu;
    // 0x2d9470: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2D946Cu, 0x2D9474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9474u;
label_2d9474:
    // 0x2d9474: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x2d9474u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x2d9478: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x2d9478u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x2d947c: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2D947Cu;
    SET_GPR_U32(ctx, 31, 0x2D9484u);
    ctx->pc = 0x2D9480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D947Cu;
    // 0x2d9480: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2D947Cu, 0x2D9484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9484u;
label_2d9484:
    // 0x2d9484: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2d9484u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9488: 0x2883f  dsra32      $s1, $v0, 0
    ctx->pc = 0x2d9488u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2d948c: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x2d948cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x2d9490: 0x21d00  sll         $v1, $v0, 20
    ctx->pc = 0x2d9490u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x2d9494: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x2d9494u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2d9498: 0x111503  sra         $v0, $s1, 20
    ctx->pc = 0x2d9498u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 20));
    // 0x2d949c: 0x1c400006  bgtz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D949Cu;
    {
        const bool branch_taken_0x2d949c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2D94A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D949Cu;
        // 0x2d94a0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d949c) {
            ctx->pc = 0x2D94B8u;
            goto label_2d94b8;
        }
    }
    ctx->pc = 0x2D94A4u;
    // 0x2d94a4: 0x8fa5001c  lw          $a1, 0x1C($sp)
    ctx->pc = 0x2d94a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x2d94a8: 0xc0b7050  jal         func_2DC140
    ctx->pc = 0x2D94A8u;
    SET_GPR_U32(ctx, 31, 0x2D94B0u);
    ctx->pc = 0x2D94ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D94A8u;
    // 0x2d94ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC140u, 0x2D94A8u, 0x2D94B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D94B0u;
label_2d94b0:
    // 0x2d94b0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D94B0u;
    {
        const bool branch_taken_0x2d94b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D94B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D94B0u;
        // 0x2d94b4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d94b0) {
            ctx->pc = 0x2D94D0u;
            goto label_2d94d0;
        }
    }
    ctx->pc = 0x2D94B8u;
label_2d94b8:
    // 0x2d94b8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2d94b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2d94bc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2d94bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2d94c0: 0x11203c  dsll32      $a0, $s1, 0
    ctx->pc = 0x2d94c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 0));
    // 0x2d94c4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2d94c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2d94c8: 0x449025  or          $s2, $v0, $a0
    ctx->pc = 0x2d94c8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2d94cc: 0x0  nop
    ctx->pc = 0x2d94ccu;
    // NOP
label_2d94d0:
    // 0x2d94d0: 0xdfa40008  ld          $a0, 0x8($sp)
    ctx->pc = 0x2d94d0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d94d4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d94d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2d94d8:
    // 0x2d94d8: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2D94D8u;
    SET_GPR_U32(ctx, 31, 0x2D94E0u);
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2D94D8u, 0x2D94E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D94E0u;
label_2d94e0:
    // 0x2d94e0: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x2d94e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_2d94e4:
    // 0x2d94e4: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x2d94e4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d94e8: 0xdfb700a0  ld          $s7, 0xA0($sp)
    ctx->pc = 0x2d94e8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d94ec: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x2d94ecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d94f0: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x2d94f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d94f4: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x2d94f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d94f8: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x2d94f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d94fc: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2d94fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d9500: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x2d9500u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d9504: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2d9504u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d9508: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D950Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9508u;
        // 0x2d950c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9510u;
}
