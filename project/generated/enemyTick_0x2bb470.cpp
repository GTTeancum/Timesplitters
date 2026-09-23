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

// Function: enemyTick
// Address: 0x2bb470 - 0x2bbc94
void enemyTick_0x2bb470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("enemyTick_0x2bb470");
#endif

    switch (ctx->pc) {
        case 0x2bb584u: goto label_2bb584;
        case 0x2bb5c8u: goto label_2bb5c8;
        case 0x2bb5d0u: goto label_2bb5d0;
        case 0x2bb6a0u: goto label_2bb6a0;
        case 0x2bb83cu: goto label_2bb83c;
        case 0x2bb844u: goto label_2bb844;
        case 0x2bb84cu: goto label_2bb84c;
        case 0x2bb854u: goto label_2bb854;
        case 0x2bb870u: goto label_2bb870;
        case 0x2bb878u: goto label_2bb878;
        case 0x2bb880u: goto label_2bb880;
        case 0x2bb888u: goto label_2bb888;
        case 0x2bb8a4u: goto label_2bb8a4;
        case 0x2bb8acu: goto label_2bb8ac;
        case 0x2bb8b4u: goto label_2bb8b4;
        case 0x2bb8d0u: goto label_2bb8d0;
        case 0x2bb8d8u: goto label_2bb8d8;
        case 0x2bb8e0u: goto label_2bb8e0;
        case 0x2bb8fcu: goto label_2bb8fc;
        case 0x2bb904u: goto label_2bb904;
        case 0x2bb90cu: goto label_2bb90c;
        case 0x2bb928u: goto label_2bb928;
        case 0x2bb930u: goto label_2bb930;
        case 0x2bb938u: goto label_2bb938;
        case 0x2bb954u: goto label_2bb954;
        case 0x2bb95cu: goto label_2bb95c;
        case 0x2bb978u: goto label_2bb978;
        case 0x2bb980u: goto label_2bb980;
        case 0x2bb988u: goto label_2bb988;
        case 0x2bb9a4u: goto label_2bb9a4;
        case 0x2bb9acu: goto label_2bb9ac;
        case 0x2bb9b4u: goto label_2bb9b4;
        case 0x2bb9d0u: goto label_2bb9d0;
        case 0x2bb9d8u: goto label_2bb9d8;
        case 0x2bb9e0u: goto label_2bb9e0;
        case 0x2bb9fcu: goto label_2bb9fc;
        case 0x2bba04u: goto label_2bba04;
        case 0x2bba20u: goto label_2bba20;
        case 0x2bba28u: goto label_2bba28;
        case 0x2bba30u: goto label_2bba30;
        case 0x2bba4cu: goto label_2bba4c;
        case 0x2bba54u: goto label_2bba54;
        case 0x2bba70u: goto label_2bba70;
        case 0x2bba78u: goto label_2bba78;
        case 0x2bba80u: goto label_2bba80;
        case 0x2bba9cu: goto label_2bba9c;
        case 0x2bbaa4u: goto label_2bbaa4;
        case 0x2bbaacu: goto label_2bbaac;
        case 0x2bbac8u: goto label_2bbac8;
        case 0x2bbad0u: goto label_2bbad0;
        case 0x2bbad8u: goto label_2bbad8;
        case 0x2bbaf4u: goto label_2bbaf4;
        case 0x2bbafcu: goto label_2bbafc;
        case 0x2bbb04u: goto label_2bbb04;
        case 0x2bbb20u: goto label_2bbb20;
        case 0x2bbb34u: goto label_2bbb34;
        case 0x2bbb3cu: goto label_2bbb3c;
        case 0x2bbb58u: goto label_2bbb58;
        case 0x2bbb60u: goto label_2bbb60;
        case 0x2bbb68u: goto label_2bbb68;
        case 0x2bbb84u: goto label_2bbb84;
        case 0x2bbb8cu: goto label_2bbb8c;
        case 0x2bbb94u: goto label_2bbb94;
        case 0x2bbbb0u: goto label_2bbbb0;
        case 0x2bbbb8u: goto label_2bbbb8;
        case 0x2bbbc0u: goto label_2bbbc0;
        case 0x2bbbdcu: goto label_2bbbdc;
        case 0x2bbbe4u: goto label_2bbbe4;
        case 0x2bbbecu: goto label_2bbbec;
        case 0x2bbc08u: goto label_2bbc08;
        case 0x2bbc10u: goto label_2bbc10;
        case 0x2bbc18u: goto label_2bbc18;
        case 0x2bbc20u: goto label_2bbc20;
        case 0x2bbc34u: goto label_2bbc34;
        default: break;
    }

    ctx->pc = 0x2bb470u;

    // 0x2bb470: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bb470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2bb474: 0x8f82b59c  lw          $v0, -0x4A64($gp)
    ctx->pc = 0x2bb474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x2bb478: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2bb478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2bb47c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2bb47cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2bb480: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bb480u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb484: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bb484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bb488: 0x104001fd  beqz        $v0, . + 4 + (0x1FD << 2)
    ctx->pc = 0x2BB488u;
    {
        const bool branch_taken_0x2bb488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB488u;
        // 0x2bb48c: 0x8e300160  lw          $s0, 0x160($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb488) {
            ctx->pc = 0x2BBC80u;
            goto label_2bbc80;
        }
    }
    ctx->pc = 0x2BB490u;
    // 0x2bb490: 0x8e040a9c  lw          $a0, 0xA9C($s0)
    ctx->pc = 0x2bb490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2716)));
    // 0x2bb494: 0x14800013  bnez        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2BB494u;
    {
        const bool branch_taken_0x2bb494 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BB498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB494u;
        // 0x2bb498: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb494) {
            ctx->pc = 0x2BB4E4u;
            goto label_2bb4e4;
        }
    }
    ctx->pc = 0x2BB49Cu;
    // 0x2bb49c: 0x8e070bcc  lw          $a3, 0xBCC($s0)
    ctx->pc = 0x2bb49cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3020)));
    // 0x2bb4a0: 0x3c03f0ff  lui         $v1, 0xF0FF
    ctx->pc = 0x2bb4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61695 << 16));
    // 0x2bb4a4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2bb4a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2bb4a8: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x2bb4a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x2bb4ac: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x2bb4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2bb4b0: 0x34c6ffdf  ori         $a2, $a2, 0xFFDF
    ctx->pc = 0x2bb4b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65503);
    // 0x2bb4b4: 0x26040ab0  addiu       $a0, $s0, 0xAB0
    ctx->pc = 0x2bb4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2736));
    // 0x2bb4b8: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x2bb4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x2bb4bc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2bb4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2bb4c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2bb4c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bb4c4: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2bb4c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x2bb4c8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2bb4c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bb4cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bb4ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bb4d0: 0x24a5fd00  addiu       $a1, $a1, -0x300
    ctx->pc = 0x2bb4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966528));
    // 0x2bb4d4: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x2bb4d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2bb4d8: 0xace20010  sw          $v0, 0x10($a3)
    ctx->pc = 0x2bb4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 2));
    // 0x2bb4dc: 0x80b98d8  j           func_2E6360
    ctx->pc = 0x2BB4DCu;
    ctx->pc = 0x2BB4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB4DCu;
    // 0x2bb4e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6360u;
    strncpy_0x2e6360(rdram, ctx, runtime); return;
    ctx->pc = 0x2BB4E4u;
label_2bb4e4:
    // 0x2bb4e4: 0xc783b468  lwc1        $f3, -0x4B98($gp)
    ctx->pc = 0x2bb4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bb4e8: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x2bb4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x2bb4ec: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x2bb4ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x2bb4f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bb4f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bb4f4: 0xc6010b4c  lwc1        $f1, 0xB4C($s0)
    ctx->pc = 0x2bb4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bb4f8: 0x0  nop
    ctx->pc = 0x2bb4f8u;
    // NOP
    // 0x2bb4fc: 0x0  nop
    ctx->pc = 0x2bb4fcu;
    // NOP
    // 0x2bb500: 0x46001983  div.s       $f6, $f3, $f0
    ctx->pc = 0x2bb500u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[6] = ctx->f[3] / ctx->f[0];
    // 0x2bb504: 0xc6020b50  lwc1        $f2, 0xB50($s0)
    ctx->pc = 0x2bb504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bb508: 0xc6000b5c  lwc1        $f0, 0xB5C($s0)
    ctx->pc = 0x2bb508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bb50c: 0xc6030b60  lwc1        $f3, 0xB60($s0)
    ctx->pc = 0x2bb50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bb510: 0xc6040b88  lwc1        $f4, 0xB88($s0)
    ctx->pc = 0x2bb510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2bb514: 0xc6050b84  lwc1        $f5, 0xB84($s0)
    ctx->pc = 0x2bb514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2bb518: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x2bb518u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x2bb51c: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x2bb51cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x2bb520: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x2bb520u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x2bb524: 0x460618c0  add.s       $f3, $f3, $f6
    ctx->pc = 0x2bb524u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
    // 0x2bb528: 0xe6010b4c  swc1        $f1, 0xB4C($s0)
    ctx->pc = 0x2bb528u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2892), bits); }
    // 0x2bb52c: 0x46062100  add.s       $f4, $f4, $f6
    ctx->pc = 0x2bb52cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[6]);
    // 0x2bb530: 0xe6020b50  swc1        $f2, 0xB50($s0)
    ctx->pc = 0x2bb530u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2896), bits); }
    // 0x2bb534: 0x46062940  add.s       $f5, $f5, $f6
    ctx->pc = 0x2bb534u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
    // 0x2bb538: 0xe6000b5c  swc1        $f0, 0xB5C($s0)
    ctx->pc = 0x2bb538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2908), bits); }
    // 0x2bb53c: 0xe6030b60  swc1        $f3, 0xB60($s0)
    ctx->pc = 0x2bb53cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2912), bits); }
    // 0x2bb540: 0xe6040b88  swc1        $f4, 0xB88($s0)
    ctx->pc = 0x2bb540u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2952), bits); }
    // 0x2bb544: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BB544u;
    {
        const bool branch_taken_0x2bb544 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BB548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB544u;
        // 0x2bb548: 0xe6050b84  swc1        $f5, 0xB84($s0) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2948), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb544) {
            ctx->pc = 0x2BB564u;
            goto label_2bb564;
        }
    }
    ctx->pc = 0x2BB54Cu;
    // 0x2bb54c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2bb54cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2bb550: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BB550u;
    {
        const bool branch_taken_0x2bb550 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BB554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB550u;
        // 0x2bb554: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb550) {
            ctx->pc = 0x2BB568u;
            goto label_2bb568;
        }
    }
    ctx->pc = 0x2BB558u;
    // 0x2bb558: 0xc6000b58  lwc1        $f0, 0xB58($s0)
    ctx->pc = 0x2bb558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bb55c: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x2bb55cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x2bb560: 0xe6000b58  swc1        $f0, 0xB58($s0)
    ctx->pc = 0x2bb560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2904), bits); }
label_2bb564:
    // 0x2bb564: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2bb564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2bb568:
    // 0x2bb568: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BB568u;
    {
        const bool branch_taken_0x2bb568 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BB56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB568u;
        // 0x2bb56c: 0xc780b468  lwc1        $f0, -0x4B98($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb568) {
            ctx->pc = 0x2BB584u;
            goto label_2bb584;
        }
    }
    ctx->pc = 0x2BB570u;
    // 0x2bb570: 0x24040041  addiu       $a0, $zero, 0x41
    ctx->pc = 0x2bb570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x2bb574: 0xc78c8ff8  lwc1        $f12, -0x7008($gp)
    ctx->pc = 0x2bb574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2bb578: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2bb578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bb57c: 0xc088f98  jal         func_223E60
    ctx->pc = 0x2BB57Cu;
    SET_GPR_U32(ctx, 31, 0x2BB584u);
    ctx->pc = 0x2BB580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB57Cu;
    // 0x2bb580: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E60u, 0x2BB57Cu, 0x2BB584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB584u;
label_2bb584:
    // 0x2bb584: 0x8e0211a4  lw          $v0, 0x11A4($s0)
    ctx->pc = 0x2bb584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4516)));
    // 0x2bb588: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2BB588u;
    {
        const bool branch_taken_0x2bb588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb588) {
            ctx->pc = 0x2BB58Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB588u;
            // 0x2bb58c: 0x8e030a9c  lw          $v1, 0xA9C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2716)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB5B4u;
            goto label_2bb5b4;
        }
    }
    ctx->pc = 0x2BB590u;
    // 0x2bb590: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2bb590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2bb594: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BB594u;
    {
        const bool branch_taken_0x2bb594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb594) {
            ctx->pc = 0x2BB598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB594u;
            // 0x2bb598: 0x8e030a9c  lw          $v1, 0xA9C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2716)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB5B4u;
            goto label_2bb5b4;
        }
    }
    ctx->pc = 0x2BB59Cu;
    // 0x2bb59c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bb59cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb5a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2bb5a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bb5a4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2bb5a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bb5a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bb5a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bb5ac: 0x80aef3e  j           func_2BBCF8
    ctx->pc = 0x2BB5ACu;
    ctx->pc = 0x2BB5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB5ACu;
    // 0x2bb5b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BBCF8u;
    updatePos_0x2bbcf8(rdram, ctx, runtime); return;
    ctx->pc = 0x2BB5B4u;
label_2bb5b4:
    // 0x2bb5b4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2bb5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2bb5b8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BB5B8u;
    {
        const bool branch_taken_0x2bb5b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2bb5b8) {
            ctx->pc = 0x2BB5C8u;
            goto label_2bb5c8;
        }
    }
    ctx->pc = 0x2BB5C0u;
    // 0x2bb5c0: 0xc0aff26  jal         func_2BFC98
    ctx->pc = 0x2BB5C0u;
    SET_GPR_U32(ctx, 31, 0x2BB5C8u);
    ctx->pc = 0x2BB5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB5C0u;
    // 0x2bb5c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BFC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BFC98u, 0x2BB5C0u, 0x2BB5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB5C8u;
label_2bb5c8:
    // 0x2bb5c8: 0xc0aef28  jal         func_2BBCA0
    ctx->pc = 0x2BB5C8u;
    SET_GPR_U32(ctx, 31, 0x2BB5D0u);
    ctx->pc = 0x2BB5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB5C8u;
    // 0x2bb5cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BBCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBCA0u, 0x2BB5C8u, 0x2BB5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB5D0u;
label_2bb5d0:
    // 0x2bb5d0: 0x8e040a9c  lw          $a0, 0xA9C($s0)
    ctx->pc = 0x2bb5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2716)));
    // 0x2bb5d4: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2bb5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2bb5d8: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BB5D8u;
    {
        const bool branch_taken_0x2bb5d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BB5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB5D8u;
        // 0x2bb5dc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb5d8) {
            ctx->pc = 0x2BB5F0u;
            goto label_2bb5f0;
        }
    }
    ctx->pc = 0x2BB5E0u;
    // 0x2bb5e0: 0x8e020a94  lw          $v0, 0xA94($s0)
    ctx->pc = 0x2bb5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2708)));
    // 0x2bb5e4: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x2bb5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x2bb5e8: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x2BB5E8u;
    {
        const bool branch_taken_0x2bb5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB5E8u;
        // 0x2bb5ec: 0x431024  and         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb5e8) {
            ctx->pc = 0x2BB6D4u;
            goto label_2bb6d4;
        }
    }
    ctx->pc = 0x2BB5F0u;
label_2bb5f0:
    // 0x2bb5f0: 0x8e050a90  lw          $a1, 0xA90($s0)
    ctx->pc = 0x2bb5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2704)));
    // 0x2bb5f4: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x2bb5f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x2bb5f8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2BB5F8u;
    {
        const bool branch_taken_0x2bb5f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB5F8u;
        // 0x2bb5fc: 0x8e030a94  lw          $v1, 0xA94($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb5f8) {
            ctx->pc = 0x2BB648u;
            goto label_2bb648;
        }
    }
    ctx->pc = 0x2BB600u;
    // 0x2bb600: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x2bb600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x2bb604: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2BB604u;
    {
        const bool branch_taken_0x2bb604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BB608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB604u;
        // 0x2bb608: 0x30a20002  andi        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb604) {
            ctx->pc = 0x2BB63Cu;
            goto label_2bb63c;
        }
    }
    ctx->pc = 0x2BB60Cu;
    // 0x2bb60c: 0xc6000b10  lwc1        $f0, 0xB10($s0)
    ctx->pc = 0x2bb60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bb610: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bb610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bb614: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2bb614u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bb618: 0xc6020b88  lwc1        $f2, 0xB88($s0)
    ctx->pc = 0x2bb618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bb61c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2bb61cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2bb620: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x2bb620u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bb624: 0x0  nop
    ctx->pc = 0x2bb624u;
    // NOP
    // 0x2bb628: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2BB628u;
    {
        const bool branch_taken_0x2bb628 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BB62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB628u;
        // 0x2bb62c: 0x34620010  ori         $v0, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb628) {
            ctx->pc = 0x2BB638u;
            goto label_2bb638;
        }
    }
    ctx->pc = 0x2BB630u;
    // 0x2bb630: 0xae000b88  sw          $zero, 0xB88($s0)
    ctx->pc = 0x2bb630u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2952), GPR_U32(ctx, 0));
    // 0x2bb634: 0xae020a94  sw          $v0, 0xA94($s0)
    ctx->pc = 0x2bb634u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2708), GPR_U32(ctx, 2));
label_2bb638:
    // 0x2bb638: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x2bb638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
label_2bb63c:
    // 0x2bb63c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2BB63Cu;
    {
        const bool branch_taken_0x2bb63c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BB640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB63Cu;
        // 0x2bb640: 0x3c020018  lui         $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb63c) {
            ctx->pc = 0x2BB688u;
            goto label_2bb688;
        }
    }
    ctx->pc = 0x2BB644u;
    // 0x2bb644: 0x8e030a94  lw          $v1, 0xA94($s0)
    ctx->pc = 0x2bb644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2708)));
label_2bb648:
    // 0x2bb648: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x2bb648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x2bb64c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2BB64Cu;
    {
        const bool branch_taken_0x2bb64c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB64Cu;
        // 0x2bb650: 0x3c020018  lui         $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb64c) {
            ctx->pc = 0x2BB688u;
            goto label_2bb688;
        }
    }
    ctx->pc = 0x2BB654u;
    // 0x2bb654: 0xc6000b10  lwc1        $f0, 0xB10($s0)
    ctx->pc = 0x2bb654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bb658: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x2bb658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x2bb65c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2bb65cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bb660: 0xc6020b88  lwc1        $f2, 0xB88($s0)
    ctx->pc = 0x2bb660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bb664: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2bb664u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2bb668: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2bb668u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bb66c: 0x0  nop
    ctx->pc = 0x2bb66cu;
    // NOP
    // 0x2bb670: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2BB670u;
    {
        const bool branch_taken_0x2bb670 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BB674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB670u;
        // 0x2bb674: 0x2402ffef  addiu       $v0, $zero, -0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb670) {
            ctx->pc = 0x2BB684u;
            goto label_2bb684;
        }
    }
    ctx->pc = 0x2BB678u;
    // 0x2bb678: 0xae000b88  sw          $zero, 0xB88($s0)
    ctx->pc = 0x2bb678u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2952), GPR_U32(ctx, 0));
    // 0x2bb67c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2bb67cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2bb680: 0xae020a94  sw          $v0, 0xA94($s0)
    ctx->pc = 0x2bb680u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2708), GPR_U32(ctx, 2));
label_2bb684:
    // 0x2bb684: 0x3c020018  lui         $v0, 0x18
    ctx->pc = 0x2bb684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
label_2bb688:
    // 0x2bb688: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x2bb688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x2bb68c: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2BB68Cu;
    {
        const bool branch_taken_0x2bb68c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bb68c) {
            ctx->pc = 0x2BB690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB68Cu;
            // 0x2bb690: 0x8e030a94  lw          $v1, 0xA94($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2708)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB6D0u;
            goto label_2bb6d0;
        }
    }
    ctx->pc = 0x2BB694u;
    // 0x2bb694: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bb694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb698: 0xc085608  jal         func_215820
    ctx->pc = 0x2BB698u;
    SET_GPR_U32(ctx, 31, 0x2BB6A0u);
    ctx->pc = 0x2BB69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB698u;
    // 0x2bb69c: 0x240501c1  addiu       $a1, $zero, 0x1C1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 449));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BB698u, 0x2BB6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB6A0u;
label_2bb6a0:
    // 0x2bb6a0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2BB6A0u;
    {
        const bool branch_taken_0x2bb6a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BB6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB6A0u;
        // 0x2bb6a4: 0x8e040a9c  lw          $a0, 0xA9C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2716)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb6a0) {
            ctx->pc = 0x2BB6CCu;
            goto label_2bb6cc;
        }
    }
    ctx->pc = 0x2BB6A8u;
    // 0x2bb6a8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2bb6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2bb6ac: 0x1482000b  bne         $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2BB6ACu;
    {
        const bool branch_taken_0x2bb6ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BB6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB6ACu;
        // 0x2bb6b0: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb6ac) {
            ctx->pc = 0x2BB6DCu;
            goto label_2bb6dc;
        }
    }
    ctx->pc = 0x2BB6B4u;
    // 0x2bb6b4: 0x8e030a94  lw          $v1, 0xA94($s0)
    ctx->pc = 0x2bb6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2708)));
    // 0x2bb6b8: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x2bb6b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x2bb6bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BB6BCu;
    {
        const bool branch_taken_0x2bb6bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB6BCu;
        // 0x2bb6c0: 0x34620010  ori         $v0, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb6bc) {
            ctx->pc = 0x2BB6D8u;
            goto label_2bb6d8;
        }
    }
    ctx->pc = 0x2BB6C4u;
    // 0x2bb6c4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2BB6C4u;
    {
        const bool branch_taken_0x2bb6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB6C4u;
        // 0x2bb6c8: 0xae020a94  sw          $v0, 0xA94($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2708), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb6c4) {
            ctx->pc = 0x2BB6D8u;
            goto label_2bb6d8;
        }
    }
    ctx->pc = 0x2BB6CCu;
label_2bb6cc:
    // 0x2bb6cc: 0x8e030a94  lw          $v1, 0xA94($s0)
    ctx->pc = 0x2bb6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2708)));
label_2bb6d0:
    // 0x2bb6d0: 0x34620010  ori         $v0, $v1, 0x10
    ctx->pc = 0x2bb6d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
label_2bb6d4:
    // 0x2bb6d4: 0xae020a94  sw          $v0, 0xA94($s0)
    ctx->pc = 0x2bb6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2708), GPR_U32(ctx, 2));
label_2bb6d8:
    // 0x2bb6d8: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x2bb6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_2bb6dc:
    // 0x2bb6dc: 0x108200d6  beq         $a0, $v0, . + 4 + (0xD6 << 2)
    ctx->pc = 0x2BB6DCu;
    {
        const bool branch_taken_0x2bb6dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BB6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB6DCu;
        // 0x2bb6e0: 0x2c822001  sltiu       $v0, $a0, 0x2001 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8193) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb6dc) {
            ctx->pc = 0x2BBA38u;
            goto label_2bba38;
        }
    }
    ctx->pc = 0x2BB6E4u;
    // 0x2bb6e4: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2BB6E4u;
    {
        const bool branch_taken_0x2bb6e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB6E4u;
        // 0x2bb6e8: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb6e4) {
            ctx->pc = 0x2BB788u;
            goto label_2bb788;
        }
    }
    ctx->pc = 0x2BB6ECu;
    // 0x2bb6ec: 0x1082009d  beq         $a0, $v0, . + 4 + (0x9D << 2)
    ctx->pc = 0x2BB6ECu;
    {
        const bool branch_taken_0x2bb6ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BB6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB6ECu;
        // 0x2bb6f0: 0x2c820041  sltiu       $v0, $a0, 0x41 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)65) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb6ec) {
            ctx->pc = 0x2BB964u;
            goto label_2bb964;
        }
    }
    ctx->pc = 0x2BB6F4u;
    // 0x2bb6f4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2BB6F4u;
    {
        const bool branch_taken_0x2bb6f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB6F4u;
        // 0x2bb6f8: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb6f4) {
            ctx->pc = 0x2BB740u;
            goto label_2bb740;
        }
    }
    ctx->pc = 0x2BB6FCu;
    // 0x2bb6fc: 0x10820064  beq         $a0, $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x2BB6FCu;
    {
        const bool branch_taken_0x2bb6fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BB700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB6FCu;
        // 0x2bb700: 0x2c820009  sltiu       $v0, $a0, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb6fc) {
            ctx->pc = 0x2BB890u;
            goto label_2bb890;
        }
    }
    ctx->pc = 0x2BB704u;
    // 0x2bb704: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BB704u;
    {
        const bool branch_taken_0x2bb704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB704u;
        // 0x2bb708: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb704) {
            ctx->pc = 0x2BB724u;
            goto label_2bb724;
        }
    }
    ctx->pc = 0x2BB70Cu;
    // 0x2bb70c: 0x10820046  beq         $a0, $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x2BB70Cu;
    {
        const bool branch_taken_0x2bb70c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BB710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB70Cu;
        // 0x2bb710: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb70c) {
            ctx->pc = 0x2BB828u;
            goto label_2bb828;
        }
    }
    ctx->pc = 0x2BB714u;
    // 0x2bb714: 0x10820051  beq         $a0, $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x2BB714u;
    {
        const bool branch_taken_0x2bb714 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BB718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB714u;
        // 0x2bb718: 0x3c05003b  lui         $a1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb714) {
            ctx->pc = 0x2BB85Cu;
            goto label_2bb85c;
        }
    }
    ctx->pc = 0x2BB71Cu;
    // 0x2bb71c: 0x10000142  b           . + 4 + (0x142 << 2)
    ctx->pc = 0x2BB71Cu;
    {
        const bool branch_taken_0x2bb71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB71Cu;
        // 0x2bb720: 0x26040ab0  addiu       $a0, $s0, 0xAB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb71c) {
            ctx->pc = 0x2BBC28u;
            goto label_2bbc28;
        }
    }
    ctx->pc = 0x2BB724u;
label_2bb724:
    // 0x2bb724: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2bb724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2bb728: 0x1082007a  beq         $a0, $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x2BB728u;
    {
        const bool branch_taken_0x2bb728 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BB72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB728u;
        // 0x2bb72c: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb728) {
            ctx->pc = 0x2BB914u;
            goto label_2bb914;
        }
    }
    ctx->pc = 0x2BB730u;
    // 0x2bb730: 0x10820083  beq         $a0, $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x2BB730u;
    {
        const bool branch_taken_0x2bb730 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BB734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB730u;
        // 0x2bb734: 0x3c05003b  lui         $a1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb730) {
            ctx->pc = 0x2BB940u;
            goto label_2bb940;
        }
    }
    ctx->pc = 0x2BB738u;
    // 0x2bb738: 0x1000013b  b           . + 4 + (0x13B << 2)
    ctx->pc = 0x2BB738u;
    {
        const bool branch_taken_0x2bb738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB738u;
        // 0x2bb73c: 0x26040ab0  addiu       $a0, $s0, 0xAB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb738) {
            ctx->pc = 0x2BBC28u;
            goto label_2bbc28;
        }
    }
    ctx->pc = 0x2BB740u;
label_2bb740:
    // 0x2bb740: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x2bb740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2bb744: 0x1082009d  beq         $a0, $v0, . + 4 + (0x9D << 2)
    ctx->pc = 0x2BB744u;
    {
        const bool branch_taken_0x2bb744 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BB748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB744u;
        // 0x2bb748: 0x2c820201  sltiu       $v0, $a0, 0x201 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)513) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb744) {
            ctx->pc = 0x2BB9BCu;
            goto label_2bb9bc;
        }
    }
    ctx->pc = 0x2BB74Cu;
    // 0x2bb74c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BB74Cu;
    {
        const bool branch_taken_0x2bb74c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB74Cu;
        // 0x2bb750: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb74c) {
            ctx->pc = 0x2BB76Cu;
            goto label_2bb76c;
        }
    }
    ctx->pc = 0x2BB754u;
    // 0x2bb754: 0x10820064  beq         $a0, $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x2BB754u;
    {
        const bool branch_taken_0x2bb754 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BB758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB754u;
        // 0x2bb758: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb754) {
            ctx->pc = 0x2BB8E8u;
            goto label_2bb8e8;
        }
    }
    ctx->pc = 0x2BB75Cu;
    // 0x2bb75c: 0x1082008c  beq         $a0, $v0, . + 4 + (0x8C << 2)
    ctx->pc = 0x2BB75Cu;
    {
        const bool branch_taken_0x2bb75c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BB760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB75Cu;
        // 0x2bb760: 0x3c05003b  lui         $a1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb75c) {
            ctx->pc = 0x2BB990u;
            goto label_2bb990;
        }
    }
    ctx->pc = 0x2BB764u;
    // 0x2bb764: 0x10000130  b           . + 4 + (0x130 << 2)
    ctx->pc = 0x2BB764u;
    {
        const bool branch_taken_0x2bb764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB764u;
        // 0x2bb768: 0x26040ab0  addiu       $a0, $s0, 0xAB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb764) {
            ctx->pc = 0x2BBC28u;
            goto label_2bbc28;
        }
    }
    ctx->pc = 0x2BB76Cu;
label_2bb76c:
    // 0x2bb76c: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x2bb76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2bb770: 0x1082009d  beq         $a0, $v0, . + 4 + (0x9D << 2)
    ctx->pc = 0x2BB770u;
    {
        const bool branch_taken_0x2bb770 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BB774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB770u;
        // 0x2bb774: 0x24020800  addiu       $v0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb770) {
            ctx->pc = 0x2BB9E8u;
            goto label_2bb9e8;
        }
    }
    ctx->pc = 0x2BB778u;
    // 0x2bb778: 0x10820050  beq         $a0, $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x2BB778u;
    {
        const bool branch_taken_0x2bb778 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BB77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB778u;
        // 0x2bb77c: 0x3c05003b  lui         $a1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb778) {
            ctx->pc = 0x2BB8BCu;
            goto label_2bb8bc;
        }
    }
    ctx->pc = 0x2BB780u;
    // 0x2bb780: 0x10000129  b           . + 4 + (0x129 << 2)
    ctx->pc = 0x2BB780u;
    {
        const bool branch_taken_0x2bb780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB780u;
        // 0x2bb784: 0x26040ab0  addiu       $a0, $s0, 0xAB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb780) {
            ctx->pc = 0x2BBC28u;
            goto label_2bbc28;
        }
    }
    ctx->pc = 0x2BB788u;
label_2bb788:
    // 0x2bb788: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x2bb788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x2bb78c: 0x108200ed  beq         $a0, $v0, . + 4 + (0xED << 2)
    ctx->pc = 0x2BB78Cu;
    {
        const bool branch_taken_0x2bb78c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BB790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB78Cu;
        // 0x2bb790: 0x44102b  sltu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb78c) {
            ctx->pc = 0x2BBB44u;
            goto label_2bbb44;
        }
    }
    ctx->pc = 0x2BB794u;
    // 0x2bb794: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2BB794u;
    {
        const bool branch_taken_0x2bb794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BB798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB794u;
        // 0x2bb798: 0x3c020100  lui         $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb794) {
            ctx->pc = 0x2BB7E4u;
            goto label_2bb7e4;
        }
    }
    ctx->pc = 0x2BB79Cu;
    // 0x2bb79c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2bb79cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2bb7a0: 0x1082009a  beq         $a0, $v0, . + 4 + (0x9A << 2)
    ctx->pc = 0x2BB7A0u;
    {
        const bool branch_taken_0x2bb7a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BB7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB7A0u;
        // 0x2bb7a4: 0x44102b  sltu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb7a0) {
            ctx->pc = 0x2BBA0Cu;
            goto label_2bba0c;
        }
    }
    ctx->pc = 0x2BB7A8u;
    // 0x2bb7a8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BB7A8u;
    {
        const bool branch_taken_0x2bb7a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BB7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB7A8u;
        // 0x2bb7ac: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb7a8) {
            ctx->pc = 0x2BB7CCu;
            goto label_2bb7cc;
        }
    }
    ctx->pc = 0x2BB7B0u;
    // 0x2bb7b0: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2bb7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2bb7b4: 0x108200bf  beq         $a0, $v0, . + 4 + (0xBF << 2)
    ctx->pc = 0x2BB7B4u;
    {
        const bool branch_taken_0x2bb7b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BB7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB7B4u;
        // 0x2bb7b8: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb7b4) {
            ctx->pc = 0x2BBAB4u;
            goto label_2bbab4;
        }
    }
    ctx->pc = 0x2BB7BCu;
    // 0x2bb7bc: 0x108200b2  beq         $a0, $v0, . + 4 + (0xB2 << 2)
    ctx->pc = 0x2BB7BCu;
    {
        const bool branch_taken_0x2bb7bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BB7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB7BCu;
        // 0x2bb7c0: 0x3c05003b  lui         $a1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb7bc) {
            ctx->pc = 0x2BBA88u;
            goto label_2bba88;
        }
    }
    ctx->pc = 0x2BB7C4u;
    // 0x2bb7c4: 0x10000118  b           . + 4 + (0x118 << 2)
    ctx->pc = 0x2BB7C4u;
    {
        const bool branch_taken_0x2bb7c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB7C4u;
        // 0x2bb7c8: 0x26040ab0  addiu       $a0, $s0, 0xAB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb7c4) {
            ctx->pc = 0x2BBC28u;
            goto label_2bbc28;
        }
    }
    ctx->pc = 0x2BB7CCu;
label_2bb7cc:
    // 0x2bb7cc: 0x108200a3  beq         $a0, $v0, . + 4 + (0xA3 << 2)
    ctx->pc = 0x2BB7CCu;
    {
        const bool branch_taken_0x2bb7cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BB7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB7CCu;
        // 0x2bb7d0: 0x3c020008  lui         $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb7cc) {
            ctx->pc = 0x2BBA5Cu;
            goto label_2bba5c;
        }
    }
    ctx->pc = 0x2BB7D4u;
    // 0x2bb7d4: 0x108200c2  beq         $a0, $v0, . + 4 + (0xC2 << 2)
    ctx->pc = 0x2BB7D4u;
    {
        const bool branch_taken_0x2bb7d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BB7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB7D4u;
        // 0x2bb7d8: 0x3c05003b  lui         $a1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb7d4) {
            ctx->pc = 0x2BBAE0u;
            goto label_2bbae0;
        }
    }
    ctx->pc = 0x2BB7DCu;
    // 0x2bb7dc: 0x10000112  b           . + 4 + (0x112 << 2)
    ctx->pc = 0x2BB7DCu;
    {
        const bool branch_taken_0x2bb7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB7DCu;
        // 0x2bb7e0: 0x26040ab0  addiu       $a0, $s0, 0xAB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb7dc) {
            ctx->pc = 0x2BBC28u;
            goto label_2bbc28;
        }
    }
    ctx->pc = 0x2BB7E4u;
label_2bb7e4:
    // 0x2bb7e4: 0x108200f8  beq         $a0, $v0, . + 4 + (0xF8 << 2)
    ctx->pc = 0x2BB7E4u;
    {
        const bool branch_taken_0x2bb7e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BB7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB7E4u;
        // 0x2bb7e8: 0x44102b  sltu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb7e4) {
            ctx->pc = 0x2BBBC8u;
            goto label_2bbbc8;
        }
    }
    ctx->pc = 0x2BB7ECu;
    // 0x2bb7ec: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BB7ECu;
    {
        const bool branch_taken_0x2bb7ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BB7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB7ECu;
        // 0x2bb7f0: 0x3c020200  lui         $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb7ec) {
            ctx->pc = 0x2BB810u;
            goto label_2bb810;
        }
    }
    ctx->pc = 0x2BB7F4u;
    // 0x2bb7f4: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x2bb7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x2bb7f8: 0x108200e8  beq         $a0, $v0, . + 4 + (0xE8 << 2)
    ctx->pc = 0x2BB7F8u;
    {
        const bool branch_taken_0x2bb7f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BB7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB7F8u;
        // 0x2bb7fc: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb7f8) {
            ctx->pc = 0x2BBB9Cu;
            goto label_2bbb9c;
        }
    }
    ctx->pc = 0x2BB800u;
    // 0x2bb800: 0x108200db  beq         $a0, $v0, . + 4 + (0xDB << 2)
    ctx->pc = 0x2BB800u;
    {
        const bool branch_taken_0x2bb800 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BB804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB800u;
        // 0x2bb804: 0x3c05003b  lui         $a1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb800) {
            ctx->pc = 0x2BBB70u;
            goto label_2bbb70;
        }
    }
    ctx->pc = 0x2BB808u;
    // 0x2bb808: 0x10000107  b           . + 4 + (0x107 << 2)
    ctx->pc = 0x2BB808u;
    {
        const bool branch_taken_0x2bb808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB808u;
        // 0x2bb80c: 0x26040ab0  addiu       $a0, $s0, 0xAB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb808) {
            ctx->pc = 0x2BBC28u;
            goto label_2bbc28;
        }
    }
    ctx->pc = 0x2BB810u;
label_2bb810:
    // 0x2bb810: 0x108200be  beq         $a0, $v0, . + 4 + (0xBE << 2)
    ctx->pc = 0x2BB810u;
    {
        const bool branch_taken_0x2bb810 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BB814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB810u;
        // 0x2bb814: 0x3c020400  lui         $v0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb810) {
            ctx->pc = 0x2BBB0Cu;
            goto label_2bbb0c;
        }
    }
    ctx->pc = 0x2BB818u;
    // 0x2bb818: 0x108200f6  beq         $a0, $v0, . + 4 + (0xF6 << 2)
    ctx->pc = 0x2BB818u;
    {
        const bool branch_taken_0x2bb818 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BB81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB818u;
        // 0x2bb81c: 0x3c05003b  lui         $a1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb818) {
            ctx->pc = 0x2BBBF4u;
            goto label_2bbbf4;
        }
    }
    ctx->pc = 0x2BB820u;
    // 0x2bb820: 0x10000101  b           . + 4 + (0x101 << 2)
    ctx->pc = 0x2BB820u;
    {
        const bool branch_taken_0x2bb820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB820u;
        // 0x2bb824: 0x26040ab0  addiu       $a0, $s0, 0xAB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb820) {
            ctx->pc = 0x2BBC28u;
            goto label_2bbc28;
        }
    }
    ctx->pc = 0x2BB828u;
label_2bb828:
    // 0x2bb828: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x2bb828u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x2bb82c: 0x26040ab0  addiu       $a0, $s0, 0xAB0
    ctx->pc = 0x2bb82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2736));
    // 0x2bb830: 0x24a5fd08  addiu       $a1, $a1, -0x2F8
    ctx->pc = 0x2bb830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966536));
    // 0x2bb834: 0xc0b98d8  jal         func_2E6360
    ctx->pc = 0x2BB834u;
    SET_GPR_U32(ctx, 31, 0x2BB83Cu);
    ctx->pc = 0x2BB838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB834u;
    // 0x2bb838: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6360u, 0x2BB834u, 0x2BB83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB83Cu;
label_2bb83c:
    // 0x2bb83c: 0xc0aef3e  jal         func_2BBCF8
    ctx->pc = 0x2BB83Cu;
    SET_GPR_U32(ctx, 31, 0x2BB844u);
    ctx->pc = 0x2BB840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB83Cu;
    // 0x2bb840: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BBCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBCF8u, 0x2BB83Cu, 0x2BB844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB844u;
label_2bb844:
    // 0x2bb844: 0xc0af402  jal         func_2BD008
    ctx->pc = 0x2BB844u;
    SET_GPR_U32(ctx, 31, 0x2BB84Cu);
    ctx->pc = 0x2BB848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB844u;
    // 0x2bb848: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BD008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BD008u, 0x2BB844u, 0x2BB84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB84Cu;
label_2bb84c:
    // 0x2bb84c: 0xc0b0634  jal         func_2C18D0
    ctx->pc = 0x2BB84Cu;
    SET_GPR_U32(ctx, 31, 0x2BB854u);
    ctx->pc = 0x2BB850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB84Cu;
    // 0x2bb850: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C18D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C18D0u, 0x2BB84Cu, 0x2BB854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB854u;
label_2bb854:
    // 0x2bb854: 0x100000f8  b           . + 4 + (0xF8 << 2)
    ctx->pc = 0x2BB854u;
    {
        const bool branch_taken_0x2bb854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB854u;
        // 0x2bb858: 0x8e030a9c  lw          $v1, 0xA9C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2716)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb854) {
            ctx->pc = 0x2BBC38u;
            goto label_2bbc38;
        }
    }
    ctx->pc = 0x2BB85Cu;
label_2bb85c:
    // 0x2bb85c: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x2bb85cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x2bb860: 0x26040ab0  addiu       $a0, $s0, 0xAB0
    ctx->pc = 0x2bb860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2736));
    // 0x2bb864: 0x24a5fd10  addiu       $a1, $a1, -0x2F0
    ctx->pc = 0x2bb864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966544));
    // 0x2bb868: 0xc0b98d8  jal         func_2E6360
    ctx->pc = 0x2BB868u;
    SET_GPR_U32(ctx, 31, 0x2BB870u);
    ctx->pc = 0x2BB86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB868u;
    // 0x2bb86c: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6360u, 0x2BB868u, 0x2BB870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB870u;
label_2bb870:
    // 0x2bb870: 0xc0aef3e  jal         func_2BBCF8
    ctx->pc = 0x2BB870u;
    SET_GPR_U32(ctx, 31, 0x2BB878u);
    ctx->pc = 0x2BB874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB870u;
    // 0x2bb874: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BBCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBCF8u, 0x2BB870u, 0x2BB878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB878u;
label_2bb878:
    // 0x2bb878: 0xc0af402  jal         func_2BD008
    ctx->pc = 0x2BB878u;
    SET_GPR_U32(ctx, 31, 0x2BB880u);
    ctx->pc = 0x2BB87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB878u;
    // 0x2bb87c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BD008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BD008u, 0x2BB878u, 0x2BB880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB880u;
label_2bb880:
    // 0x2bb880: 0xc0b0242  jal         func_2C0908
    ctx->pc = 0x2BB880u;
    SET_GPR_U32(ctx, 31, 0x2BB888u);
    ctx->pc = 0x2BB884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB880u;
    // 0x2bb884: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0908u, 0x2BB880u, 0x2BB888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB888u;
label_2bb888:
    // 0x2bb888: 0x100000eb  b           . + 4 + (0xEB << 2)
    ctx->pc = 0x2BB888u;
    {
        const bool branch_taken_0x2bb888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB888u;
        // 0x2bb88c: 0x8e030a9c  lw          $v1, 0xA9C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2716)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb888) {
            ctx->pc = 0x2BBC38u;
            goto label_2bbc38;
        }
    }
    ctx->pc = 0x2BB890u;
label_2bb890:
    // 0x2bb890: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x2bb890u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x2bb894: 0x26040ab0  addiu       $a0, $s0, 0xAB0
    ctx->pc = 0x2bb894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2736));
    // 0x2bb898: 0x24a59c00  addiu       $a1, $a1, -0x6400
    ctx->pc = 0x2bb898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941696));
    // 0x2bb89c: 0xc0b98d8  jal         func_2E6360
    ctx->pc = 0x2BB89Cu;
    SET_GPR_U32(ctx, 31, 0x2BB8A4u);
    ctx->pc = 0x2BB8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB89Cu;
    // 0x2bb8a0: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6360u, 0x2BB89Cu, 0x2BB8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB8A4u;
label_2bb8a4:
    // 0x2bb8a4: 0xc0aef3e  jal         func_2BBCF8
    ctx->pc = 0x2BB8A4u;
    SET_GPR_U32(ctx, 31, 0x2BB8ACu);
    ctx->pc = 0x2BB8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB8A4u;
    // 0x2bb8a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BBCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBCF8u, 0x2BB8A4u, 0x2BB8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB8ACu;
label_2bb8ac:
    // 0x2bb8ac: 0xc0b0144  jal         func_2C0510
    ctx->pc = 0x2BB8ACu;
    SET_GPR_U32(ctx, 31, 0x2BB8B4u);
    ctx->pc = 0x2BB8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB8ACu;
    // 0x2bb8b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0510u, 0x2BB8ACu, 0x2BB8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB8B4u;
label_2bb8b4:
    // 0x2bb8b4: 0x100000d8  b           . + 4 + (0xD8 << 2)
    ctx->pc = 0x2BB8B4u;
    {
        const bool branch_taken_0x2bb8b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb8b4) {
            ctx->pc = 0x2BBC18u;
            goto label_2bbc18;
        }
    }
    ctx->pc = 0x2BB8BCu;
label_2bb8bc:
    // 0x2bb8bc: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x2bb8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x2bb8c0: 0x26040ab0  addiu       $a0, $s0, 0xAB0
    ctx->pc = 0x2bb8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2736));
    // 0x2bb8c4: 0x24a5fd18  addiu       $a1, $a1, -0x2E8
    ctx->pc = 0x2bb8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966552));
    // 0x2bb8c8: 0xc0b98d8  jal         func_2E6360
    ctx->pc = 0x2BB8C8u;
    SET_GPR_U32(ctx, 31, 0x2BB8D0u);
    ctx->pc = 0x2BB8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB8C8u;
    // 0x2bb8cc: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6360u, 0x2BB8C8u, 0x2BB8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB8D0u;
label_2bb8d0:
    // 0x2bb8d0: 0xc0aef3e  jal         func_2BBCF8
    ctx->pc = 0x2BB8D0u;
    SET_GPR_U32(ctx, 31, 0x2BB8D8u);
    ctx->pc = 0x2BB8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB8D0u;
    // 0x2bb8d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BBCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBCF8u, 0x2BB8D0u, 0x2BB8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB8D8u;
label_2bb8d8:
    // 0x2bb8d8: 0xc0b0520  jal         func_2C1480
    ctx->pc = 0x2BB8D8u;
    SET_GPR_U32(ctx, 31, 0x2BB8E0u);
    ctx->pc = 0x2BB8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB8D8u;
    // 0x2bb8dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C1480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1480u, 0x2BB8D8u, 0x2BB8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB8E0u;
label_2bb8e0:
    // 0x2bb8e0: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x2BB8E0u;
    {
        const bool branch_taken_0x2bb8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb8e0) {
            ctx->pc = 0x2BBC18u;
            goto label_2bbc18;
        }
    }
    ctx->pc = 0x2BB8E8u;
label_2bb8e8:
    // 0x2bb8e8: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x2bb8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x2bb8ec: 0x26040ab0  addiu       $a0, $s0, 0xAB0
    ctx->pc = 0x2bb8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2736));
    // 0x2bb8f0: 0x24a59c10  addiu       $a1, $a1, -0x63F0
    ctx->pc = 0x2bb8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941712));
    // 0x2bb8f4: 0xc0b98d8  jal         func_2E6360
    ctx->pc = 0x2BB8F4u;
    SET_GPR_U32(ctx, 31, 0x2BB8FCu);
    ctx->pc = 0x2BB8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB8F4u;
    // 0x2bb8f8: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6360u, 0x2BB8F4u, 0x2BB8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB8FCu;
label_2bb8fc:
    // 0x2bb8fc: 0xc0aef3e  jal         func_2BBCF8
    ctx->pc = 0x2BB8FCu;
    SET_GPR_U32(ctx, 31, 0x2BB904u);
    ctx->pc = 0x2BB900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB8FCu;
    // 0x2bb900: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BBCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBCF8u, 0x2BB8FCu, 0x2BB904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB904u;
label_2bb904:
    // 0x2bb904: 0xc0b14e0  jal         func_2C5380
    ctx->pc = 0x2BB904u;
    SET_GPR_U32(ctx, 31, 0x2BB90Cu);
    ctx->pc = 0x2BB908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB904u;
    // 0x2bb908: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5380u, 0x2BB904u, 0x2BB90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB90Cu;
label_2bb90c:
    // 0x2bb90c: 0x100000c2  b           . + 4 + (0xC2 << 2)
    ctx->pc = 0x2BB90Cu;
    {
        const bool branch_taken_0x2bb90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb90c) {
            ctx->pc = 0x2BBC18u;
            goto label_2bbc18;
        }
    }
    ctx->pc = 0x2BB914u;
label_2bb914:
    // 0x2bb914: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x2bb914u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x2bb918: 0x26040ab0  addiu       $a0, $s0, 0xAB0
    ctx->pc = 0x2bb918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2736));
    // 0x2bb91c: 0x24a5fd20  addiu       $a1, $a1, -0x2E0
    ctx->pc = 0x2bb91cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966560));
    // 0x2bb920: 0xc0b98d8  jal         func_2E6360
    ctx->pc = 0x2BB920u;
    SET_GPR_U32(ctx, 31, 0x2BB928u);
    ctx->pc = 0x2BB924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB920u;
    // 0x2bb924: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6360u, 0x2BB920u, 0x2BB928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB928u;
label_2bb928:
    // 0x2bb928: 0xc0aef3e  jal         func_2BBCF8
    ctx->pc = 0x2BB928u;
    SET_GPR_U32(ctx, 31, 0x2BB930u);
    ctx->pc = 0x2BB92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB928u;
    // 0x2bb92c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BBCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBCF8u, 0x2BB928u, 0x2BB930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB930u;
label_2bb930:
    // 0x2bb930: 0xc0b0f50  jal         func_2C3D40
    ctx->pc = 0x2BB930u;
    SET_GPR_U32(ctx, 31, 0x2BB938u);
    ctx->pc = 0x2BB934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB930u;
    // 0x2bb934: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3D40u, 0x2BB930u, 0x2BB938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB938u;
label_2bb938:
    // 0x2bb938: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x2BB938u;
    {
        const bool branch_taken_0x2bb938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb938) {
            ctx->pc = 0x2BBC18u;
            goto label_2bbc18;
        }
    }
    ctx->pc = 0x2BB940u;
label_2bb940:
    // 0x2bb940: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x2bb940u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x2bb944: 0x26040ab0  addiu       $a0, $s0, 0xAB0
    ctx->pc = 0x2bb944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2736));
    // 0x2bb948: 0x24a5fd28  addiu       $a1, $a1, -0x2D8
    ctx->pc = 0x2bb948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966568));
    // 0x2bb94c: 0xc0b98d8  jal         func_2E6360
    ctx->pc = 0x2BB94Cu;
    SET_GPR_U32(ctx, 31, 0x2BB954u);
    ctx->pc = 0x2BB950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB94Cu;
    // 0x2bb950: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6360u, 0x2BB94Cu, 0x2BB954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB954u;
label_2bb954:
    // 0x2bb954: 0xc0b10a2  jal         func_2C4288
    ctx->pc = 0x2BB954u;
    SET_GPR_U32(ctx, 31, 0x2BB95Cu);
    ctx->pc = 0x2BB958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB954u;
    // 0x2bb958: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4288u, 0x2BB954u, 0x2BB95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB95Cu;
label_2bb95c:
    // 0x2bb95c: 0x100000b6  b           . + 4 + (0xB6 << 2)
    ctx->pc = 0x2BB95Cu;
    {
        const bool branch_taken_0x2bb95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB95Cu;
        // 0x2bb960: 0x8e030a9c  lw          $v1, 0xA9C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2716)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb95c) {
            ctx->pc = 0x2BBC38u;
            goto label_2bbc38;
        }
    }
    ctx->pc = 0x2BB964u;
label_2bb964:
    // 0x2bb964: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x2bb964u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x2bb968: 0x26040ab0  addiu       $a0, $s0, 0xAB0
    ctx->pc = 0x2bb968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2736));
    // 0x2bb96c: 0x24a5fd30  addiu       $a1, $a1, -0x2D0
    ctx->pc = 0x2bb96cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966576));
    // 0x2bb970: 0xc0b98d8  jal         func_2E6360
    ctx->pc = 0x2BB970u;
    SET_GPR_U32(ctx, 31, 0x2BB978u);
    ctx->pc = 0x2BB974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB970u;
    // 0x2bb974: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6360u, 0x2BB970u, 0x2BB978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB978u;
label_2bb978:
    // 0x2bb978: 0xc0aef3e  jal         func_2BBCF8
    ctx->pc = 0x2BB978u;
    SET_GPR_U32(ctx, 31, 0x2BB980u);
    ctx->pc = 0x2BB97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB978u;
    // 0x2bb97c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BBCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBCF8u, 0x2BB978u, 0x2BB980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB980u;
label_2bb980:
    // 0x2bb980: 0xc0b135c  jal         func_2C4D70
    ctx->pc = 0x2BB980u;
    SET_GPR_U32(ctx, 31, 0x2BB988u);
    ctx->pc = 0x2BB984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB980u;
    // 0x2bb984: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4D70u, 0x2BB980u, 0x2BB988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB988u;
label_2bb988:
    // 0x2bb988: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x2BB988u;
    {
        const bool branch_taken_0x2bb988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb988) {
            ctx->pc = 0x2BBC18u;
            goto label_2bbc18;
        }
    }
    ctx->pc = 0x2BB990u;
label_2bb990:
    // 0x2bb990: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x2bb990u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x2bb994: 0x26040ab0  addiu       $a0, $s0, 0xAB0
    ctx->pc = 0x2bb994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2736));
    // 0x2bb998: 0x24a59c20  addiu       $a1, $a1, -0x63E0
    ctx->pc = 0x2bb998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941728));
    // 0x2bb99c: 0xc0b98d8  jal         func_2E6360
    ctx->pc = 0x2BB99Cu;
    SET_GPR_U32(ctx, 31, 0x2BB9A4u);
    ctx->pc = 0x2BB9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB99Cu;
    // 0x2bb9a0: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6360u, 0x2BB99Cu, 0x2BB9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB9A4u;
label_2bb9a4:
    // 0x2bb9a4: 0xc0aef3e  jal         func_2BBCF8
    ctx->pc = 0x2BB9A4u;
    SET_GPR_U32(ctx, 31, 0x2BB9ACu);
    ctx->pc = 0x2BB9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB9A4u;
    // 0x2bb9a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BBCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBCF8u, 0x2BB9A4u, 0x2BB9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB9ACu;
label_2bb9ac:
    // 0x2bb9ac: 0xc0b1806  jal         func_2C6018
    ctx->pc = 0x2BB9ACu;
    SET_GPR_U32(ctx, 31, 0x2BB9B4u);
    ctx->pc = 0x2BB9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB9ACu;
    // 0x2bb9b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6018u, 0x2BB9ACu, 0x2BB9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB9B4u;
label_2bb9b4:
    // 0x2bb9b4: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x2BB9B4u;
    {
        const bool branch_taken_0x2bb9b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb9b4) {
            ctx->pc = 0x2BBC18u;
            goto label_2bbc18;
        }
    }
    ctx->pc = 0x2BB9BCu;
label_2bb9bc:
    // 0x2bb9bc: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x2bb9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x2bb9c0: 0x26040ab0  addiu       $a0, $s0, 0xAB0
    ctx->pc = 0x2bb9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2736));
    // 0x2bb9c4: 0x24a59c30  addiu       $a1, $a1, -0x63D0
    ctx->pc = 0x2bb9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941744));
    // 0x2bb9c8: 0xc0b98d8  jal         func_2E6360
    ctx->pc = 0x2BB9C8u;
    SET_GPR_U32(ctx, 31, 0x2BB9D0u);
    ctx->pc = 0x2BB9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB9C8u;
    // 0x2bb9cc: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6360u, 0x2BB9C8u, 0x2BB9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB9D0u;
label_2bb9d0:
    // 0x2bb9d0: 0xc0aef3e  jal         func_2BBCF8
    ctx->pc = 0x2BB9D0u;
    SET_GPR_U32(ctx, 31, 0x2BB9D8u);
    ctx->pc = 0x2BB9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB9D0u;
    // 0x2bb9d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BBCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBCF8u, 0x2BB9D0u, 0x2BB9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB9D8u;
label_2bb9d8:
    // 0x2bb9d8: 0xc0b1932  jal         func_2C64C8
    ctx->pc = 0x2BB9D8u;
    SET_GPR_U32(ctx, 31, 0x2BB9E0u);
    ctx->pc = 0x2BB9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB9D8u;
    // 0x2bb9dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C64C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C64C8u, 0x2BB9D8u, 0x2BB9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB9E0u;
label_2bb9e0:
    // 0x2bb9e0: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x2BB9E0u;
    {
        const bool branch_taken_0x2bb9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb9e0) {
            ctx->pc = 0x2BBC18u;
            goto label_2bbc18;
        }
    }
    ctx->pc = 0x2BB9E8u;
label_2bb9e8:
    // 0x2bb9e8: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x2bb9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x2bb9ec: 0x26040ab0  addiu       $a0, $s0, 0xAB0
    ctx->pc = 0x2bb9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2736));
    // 0x2bb9f0: 0x24a59c40  addiu       $a1, $a1, -0x63C0
    ctx->pc = 0x2bb9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941760));
    // 0x2bb9f4: 0xc0b98d8  jal         func_2E6360
    ctx->pc = 0x2BB9F4u;
    SET_GPR_U32(ctx, 31, 0x2BB9FCu);
    ctx->pc = 0x2BB9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB9F4u;
    // 0x2bb9f8: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6360u, 0x2BB9F4u, 0x2BB9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB9FCu;
label_2bb9fc:
    // 0x2bb9fc: 0xc0b1c3a  jal         func_2C70E8
    ctx->pc = 0x2BB9FCu;
    SET_GPR_U32(ctx, 31, 0x2BBA04u);
    ctx->pc = 0x2BBA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB9FCu;
    // 0x2bba00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C70E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C70E8u, 0x2BB9FCu, 0x2BBA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBA04u;
label_2bba04:
    // 0x2bba04: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x2BBA04u;
    {
        const bool branch_taken_0x2bba04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBA04u;
        // 0x2bba08: 0x8e030a9c  lw          $v1, 0xA9C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2716)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bba04) {
            ctx->pc = 0x2BBC38u;
            goto label_2bbc38;
        }
    }
    ctx->pc = 0x2BBA0Cu;
label_2bba0c:
    // 0x2bba0c: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x2bba0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x2bba10: 0x26040ab0  addiu       $a0, $s0, 0xAB0
    ctx->pc = 0x2bba10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2736));
    // 0x2bba14: 0x24a5fd38  addiu       $a1, $a1, -0x2C8
    ctx->pc = 0x2bba14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966584));
    // 0x2bba18: 0xc0b98d8  jal         func_2E6360
    ctx->pc = 0x2BBA18u;
    SET_GPR_U32(ctx, 31, 0x2BBA20u);
    ctx->pc = 0x2BBA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBA18u;
    // 0x2bba1c: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6360u, 0x2BBA18u, 0x2BBA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBA20u;
label_2bba20:
    // 0x2bba20: 0xc0aef3e  jal         func_2BBCF8
    ctx->pc = 0x2BBA20u;
    SET_GPR_U32(ctx, 31, 0x2BBA28u);
    ctx->pc = 0x2BBA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBA20u;
    // 0x2bba24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BBCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBCF8u, 0x2BBA20u, 0x2BBA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBA28u;
label_2bba28:
    // 0x2bba28: 0xc0b2102  jal         func_2C8408
    ctx->pc = 0x2BBA28u;
    SET_GPR_U32(ctx, 31, 0x2BBA30u);
    ctx->pc = 0x2BBA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBA28u;
    // 0x2bba2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8408u, 0x2BBA28u, 0x2BBA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBA30u;
label_2bba30:
    // 0x2bba30: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x2BBA30u;
    {
        const bool branch_taken_0x2bba30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bba30) {
            ctx->pc = 0x2BBC18u;
            goto label_2bbc18;
        }
    }
    ctx->pc = 0x2BBA38u;
label_2bba38:
    // 0x2bba38: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x2bba38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x2bba3c: 0x26040ab0  addiu       $a0, $s0, 0xAB0
    ctx->pc = 0x2bba3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2736));
    // 0x2bba40: 0x24a5fd40  addiu       $a1, $a1, -0x2C0
    ctx->pc = 0x2bba40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966592));
    // 0x2bba44: 0xc0b98d8  jal         func_2E6360
    ctx->pc = 0x2BBA44u;
    SET_GPR_U32(ctx, 31, 0x2BBA4Cu);
    ctx->pc = 0x2BBA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBA44u;
    // 0x2bba48: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6360u, 0x2BBA44u, 0x2BBA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBA4Cu;
label_2bba4c:
    // 0x2bba4c: 0xc0b2ca4  jal         func_2CB290
    ctx->pc = 0x2BBA4Cu;
    SET_GPR_U32(ctx, 31, 0x2BBA54u);
    ctx->pc = 0x2BBA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBA4Cu;
    // 0x2bba50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB290u, 0x2BBA4Cu, 0x2BBA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBA54u;
label_2bba54:
    // 0x2bba54: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x2BBA54u;
    {
        const bool branch_taken_0x2bba54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBA54u;
        // 0x2bba58: 0x8e030a9c  lw          $v1, 0xA9C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2716)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bba54) {
            ctx->pc = 0x2BBC38u;
            goto label_2bbc38;
        }
    }
    ctx->pc = 0x2BBA5Cu;
label_2bba5c:
    // 0x2bba5c: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x2bba5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x2bba60: 0x26040ab0  addiu       $a0, $s0, 0xAB0
    ctx->pc = 0x2bba60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2736));
    // 0x2bba64: 0x24a5fd48  addiu       $a1, $a1, -0x2B8
    ctx->pc = 0x2bba64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966600));
    // 0x2bba68: 0xc0b98d8  jal         func_2E6360
    ctx->pc = 0x2BBA68u;
    SET_GPR_U32(ctx, 31, 0x2BBA70u);
    ctx->pc = 0x2BBA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBA68u;
    // 0x2bba6c: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6360u, 0x2BBA68u, 0x2BBA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBA70u;
label_2bba70:
    // 0x2bba70: 0xc0aef3e  jal         func_2BBCF8
    ctx->pc = 0x2BBA70u;
    SET_GPR_U32(ctx, 31, 0x2BBA78u);
    ctx->pc = 0x2BBA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBA70u;
    // 0x2bba74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BBCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBCF8u, 0x2BBA70u, 0x2BBA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBA78u;
label_2bba78:
    // 0x2bba78: 0xc0b2cf8  jal         func_2CB3E0
    ctx->pc = 0x2BBA78u;
    SET_GPR_U32(ctx, 31, 0x2BBA80u);
    ctx->pc = 0x2BBA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBA78u;
    // 0x2bba7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB3E0u, 0x2BBA78u, 0x2BBA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBA80u;
label_2bba80:
    // 0x2bba80: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x2BBA80u;
    {
        const bool branch_taken_0x2bba80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBA80u;
        // 0x2bba84: 0x8e030a9c  lw          $v1, 0xA9C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2716)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bba80) {
            ctx->pc = 0x2BBC38u;
            goto label_2bbc38;
        }
    }
    ctx->pc = 0x2BBA88u;
label_2bba88:
    // 0x2bba88: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x2bba88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x2bba8c: 0x26040ab0  addiu       $a0, $s0, 0xAB0
    ctx->pc = 0x2bba8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2736));
    // 0x2bba90: 0x24a59c50  addiu       $a1, $a1, -0x63B0
    ctx->pc = 0x2bba90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941776));
    // 0x2bba94: 0xc0b98d8  jal         func_2E6360
    ctx->pc = 0x2BBA94u;
    SET_GPR_U32(ctx, 31, 0x2BBA9Cu);
    ctx->pc = 0x2BBA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBA94u;
    // 0x2bba98: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6360u, 0x2BBA94u, 0x2BBA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBA9Cu;
label_2bba9c:
    // 0x2bba9c: 0xc0aef3e  jal         func_2BBCF8
    ctx->pc = 0x2BBA9Cu;
    SET_GPR_U32(ctx, 31, 0x2BBAA4u);
    ctx->pc = 0x2BBAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBA9Cu;
    // 0x2bbaa0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BBCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBCF8u, 0x2BBA9Cu, 0x2BBAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBAA4u;
label_2bbaa4:
    // 0x2bbaa4: 0xc0b220a  jal         func_2C8828
    ctx->pc = 0x2BBAA4u;
    SET_GPR_U32(ctx, 31, 0x2BBAACu);
    ctx->pc = 0x2BBAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBAA4u;
    // 0x2bbaa8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8828u, 0x2BBAA4u, 0x2BBAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBAACu;
label_2bbaac:
    // 0x2bbaac: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x2BBAACu;
    {
        const bool branch_taken_0x2bbaac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBAACu;
        // 0x2bbab0: 0x8e030a9c  lw          $v1, 0xA9C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2716)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbaac) {
            ctx->pc = 0x2BBC38u;
            goto label_2bbc38;
        }
    }
    ctx->pc = 0x2BBAB4u;
label_2bbab4:
    // 0x2bbab4: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x2bbab4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x2bbab8: 0x26040ab0  addiu       $a0, $s0, 0xAB0
    ctx->pc = 0x2bbab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2736));
    // 0x2bbabc: 0x24a59c60  addiu       $a1, $a1, -0x63A0
    ctx->pc = 0x2bbabcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941792));
    // 0x2bbac0: 0xc0b98d8  jal         func_2E6360
    ctx->pc = 0x2BBAC0u;
    SET_GPR_U32(ctx, 31, 0x2BBAC8u);
    ctx->pc = 0x2BBAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBAC0u;
    // 0x2bbac4: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6360u, 0x2BBAC0u, 0x2BBAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBAC8u;
label_2bbac8:
    // 0x2bbac8: 0xc0aef3e  jal         func_2BBCF8
    ctx->pc = 0x2BBAC8u;
    SET_GPR_U32(ctx, 31, 0x2BBAD0u);
    ctx->pc = 0x2BBACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBAC8u;
    // 0x2bbacc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BBCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBCF8u, 0x2BBAC8u, 0x2BBAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBAD0u;
label_2bbad0:
    // 0x2bbad0: 0xc0b21b2  jal         func_2C86C8
    ctx->pc = 0x2BBAD0u;
    SET_GPR_U32(ctx, 31, 0x2BBAD8u);
    ctx->pc = 0x2BBAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBAD0u;
    // 0x2bbad4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C86C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C86C8u, 0x2BBAD0u, 0x2BBAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBAD8u;
label_2bbad8:
    // 0x2bbad8: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x2BBAD8u;
    {
        const bool branch_taken_0x2bbad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBAD8u;
        // 0x2bbadc: 0x8e030a9c  lw          $v1, 0xA9C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2716)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbad8) {
            ctx->pc = 0x2BBC38u;
            goto label_2bbc38;
        }
    }
    ctx->pc = 0x2BBAE0u;
label_2bbae0:
    // 0x2bbae0: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x2bbae0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x2bbae4: 0x26040ab0  addiu       $a0, $s0, 0xAB0
    ctx->pc = 0x2bbae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2736));
    // 0x2bbae8: 0x24a59c70  addiu       $a1, $a1, -0x6390
    ctx->pc = 0x2bbae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941808));
    // 0x2bbaec: 0xc0b98d8  jal         func_2E6360
    ctx->pc = 0x2BBAECu;
    SET_GPR_U32(ctx, 31, 0x2BBAF4u);
    ctx->pc = 0x2BBAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBAECu;
    // 0x2bbaf0: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6360u, 0x2BBAECu, 0x2BBAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBAF4u;
label_2bbaf4:
    // 0x2bbaf4: 0xc0aef3e  jal         func_2BBCF8
    ctx->pc = 0x2BBAF4u;
    SET_GPR_U32(ctx, 31, 0x2BBAFCu);
    ctx->pc = 0x2BBAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBAF4u;
    // 0x2bbaf8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BBCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBCF8u, 0x2BBAF4u, 0x2BBAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBAFCu;
label_2bbafc:
    // 0x2bbafc: 0xc0b26da  jal         func_2C9B68
    ctx->pc = 0x2BBAFCu;
    SET_GPR_U32(ctx, 31, 0x2BBB04u);
    ctx->pc = 0x2BBB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBAFCu;
    // 0x2bbb00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9B68u, 0x2BBAFCu, 0x2BBB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBB04u;
label_2bbb04:
    // 0x2bbb04: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x2BBB04u;
    {
        const bool branch_taken_0x2bbb04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bbb04) {
            ctx->pc = 0x2BBC18u;
            goto label_2bbc18;
        }
    }
    ctx->pc = 0x2BBB0Cu;
label_2bbb0c:
    // 0x2bbb0c: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x2bbb0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x2bbb10: 0x26040ab0  addiu       $a0, $s0, 0xAB0
    ctx->pc = 0x2bbb10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2736));
    // 0x2bbb14: 0x24a59c80  addiu       $a1, $a1, -0x6380
    ctx->pc = 0x2bbb14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941824));
    // 0x2bbb18: 0xc0b98d8  jal         func_2E6360
    ctx->pc = 0x2BBB18u;
    SET_GPR_U32(ctx, 31, 0x2BBB20u);
    ctx->pc = 0x2BBB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBB18u;
    // 0x2bbb1c: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6360u, 0x2BBB18u, 0x2BBB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBB20u;
label_2bbb20:
    // 0x2bbb20: 0x8e030aa8  lw          $v1, 0xAA8($s0)
    ctx->pc = 0x2bbb20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2728)));
    // 0x2bbb24: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BBB24u;
    {
        const bool branch_taken_0x2bbb24 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x2bbb24) {
            ctx->pc = 0x2BBB34u;
            goto label_2bbb34;
        }
    }
    ctx->pc = 0x2BBB2Cu;
    // 0x2bbb2c: 0xc0aef3e  jal         func_2BBCF8
    ctx->pc = 0x2BBB2Cu;
    SET_GPR_U32(ctx, 31, 0x2BBB34u);
    ctx->pc = 0x2BBB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBB2Cu;
    // 0x2bbb30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BBCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBCF8u, 0x2BBB2Cu, 0x2BBB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBB34u;
label_2bbb34:
    // 0x2bbb34: 0xc0b291e  jal         func_2CA478
    ctx->pc = 0x2BBB34u;
    SET_GPR_U32(ctx, 31, 0x2BBB3Cu);
    ctx->pc = 0x2BBB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBB34u;
    // 0x2bbb38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA478u, 0x2BBB34u, 0x2BBB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBB3Cu;
label_2bbb3c:
    // 0x2bbb3c: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x2BBB3Cu;
    {
        const bool branch_taken_0x2bbb3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBB3Cu;
        // 0x2bbb40: 0x8e030a9c  lw          $v1, 0xA9C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2716)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbb3c) {
            ctx->pc = 0x2BBC38u;
            goto label_2bbc38;
        }
    }
    ctx->pc = 0x2BBB44u;
label_2bbb44:
    // 0x2bbb44: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x2bbb44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x2bbb48: 0x26040ab0  addiu       $a0, $s0, 0xAB0
    ctx->pc = 0x2bbb48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2736));
    // 0x2bbb4c: 0x24a5fd50  addiu       $a1, $a1, -0x2B0
    ctx->pc = 0x2bbb4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966608));
    // 0x2bbb50: 0xc0b98d8  jal         func_2E6360
    ctx->pc = 0x2BBB50u;
    SET_GPR_U32(ctx, 31, 0x2BBB58u);
    ctx->pc = 0x2BBB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBB50u;
    // 0x2bbb54: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6360u, 0x2BBB50u, 0x2BBB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBB58u;
label_2bbb58:
    // 0x2bbb58: 0xc0aef3e  jal         func_2BBCF8
    ctx->pc = 0x2BBB58u;
    SET_GPR_U32(ctx, 31, 0x2BBB60u);
    ctx->pc = 0x2BBB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBB58u;
    // 0x2bbb5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BBCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBCF8u, 0x2BBB58u, 0x2BBB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBB60u;
label_2bbb60:
    // 0x2bbb60: 0xc0b29aa  jal         func_2CA6A8
    ctx->pc = 0x2BBB60u;
    SET_GPR_U32(ctx, 31, 0x2BBB68u);
    ctx->pc = 0x2BBB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBB60u;
    // 0x2bbb64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA6A8u, 0x2BBB60u, 0x2BBB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBB68u;
label_2bbb68:
    // 0x2bbb68: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2BBB68u;
    {
        const bool branch_taken_0x2bbb68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bbb68) {
            ctx->pc = 0x2BBC18u;
            goto label_2bbc18;
        }
    }
    ctx->pc = 0x2BBB70u;
label_2bbb70:
    // 0x2bbb70: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x2bbb70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x2bbb74: 0x26040ab0  addiu       $a0, $s0, 0xAB0
    ctx->pc = 0x2bbb74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2736));
    // 0x2bbb78: 0x24a59c90  addiu       $a1, $a1, -0x6370
    ctx->pc = 0x2bbb78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941840));
    // 0x2bbb7c: 0xc0b98d8  jal         func_2E6360
    ctx->pc = 0x2BBB7Cu;
    SET_GPR_U32(ctx, 31, 0x2BBB84u);
    ctx->pc = 0x2BBB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBB7Cu;
    // 0x2bbb80: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6360u, 0x2BBB7Cu, 0x2BBB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBB84u;
label_2bbb84:
    // 0x2bbb84: 0xc0aef3e  jal         func_2BBCF8
    ctx->pc = 0x2BBB84u;
    SET_GPR_U32(ctx, 31, 0x2BBB8Cu);
    ctx->pc = 0x2BBB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBB84u;
    // 0x2bbb88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BBCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBCF8u, 0x2BBB84u, 0x2BBB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBB8Cu;
label_2bbb8c:
    // 0x2bbb8c: 0xc0b2492  jal         func_2C9248
    ctx->pc = 0x2BBB8Cu;
    SET_GPR_U32(ctx, 31, 0x2BBB94u);
    ctx->pc = 0x2BBB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBB8Cu;
    // 0x2bbb90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9248u, 0x2BBB8Cu, 0x2BBB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBB94u;
label_2bbb94:
    // 0x2bbb94: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2BBB94u;
    {
        const bool branch_taken_0x2bbb94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBB94u;
        // 0x2bbb98: 0x8e030a9c  lw          $v1, 0xA9C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2716)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbb94) {
            ctx->pc = 0x2BBC38u;
            goto label_2bbc38;
        }
    }
    ctx->pc = 0x2BBB9Cu;
label_2bbb9c:
    // 0x2bbb9c: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x2bbb9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x2bbba0: 0x26040ab0  addiu       $a0, $s0, 0xAB0
    ctx->pc = 0x2bbba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2736));
    // 0x2bbba4: 0x24a59ca0  addiu       $a1, $a1, -0x6360
    ctx->pc = 0x2bbba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941856));
    // 0x2bbba8: 0xc0b98d8  jal         func_2E6360
    ctx->pc = 0x2BBBA8u;
    SET_GPR_U32(ctx, 31, 0x2BBBB0u);
    ctx->pc = 0x2BBBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBBA8u;
    // 0x2bbbac: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6360u, 0x2BBBA8u, 0x2BBBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBBB0u;
label_2bbbb0:
    // 0x2bbbb0: 0xc0aef3e  jal         func_2BBCF8
    ctx->pc = 0x2BBBB0u;
    SET_GPR_U32(ctx, 31, 0x2BBBB8u);
    ctx->pc = 0x2BBBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBBB0u;
    // 0x2bbbb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BBCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBCF8u, 0x2BBBB0u, 0x2BBBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBBB8u;
label_2bbbb8:
    // 0x2bbbb8: 0xc0b228a  jal         func_2C8A28
    ctx->pc = 0x2BBBB8u;
    SET_GPR_U32(ctx, 31, 0x2BBBC0u);
    ctx->pc = 0x2BBBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBBB8u;
    // 0x2bbbbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8A28u, 0x2BBBB8u, 0x2BBBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBBC0u;
label_2bbbc0:
    // 0x2bbbc0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2BBBC0u;
    {
        const bool branch_taken_0x2bbbc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBBC0u;
        // 0x2bbbc4: 0x8e030a9c  lw          $v1, 0xA9C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2716)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbbc0) {
            ctx->pc = 0x2BBC38u;
            goto label_2bbc38;
        }
    }
    ctx->pc = 0x2BBBC8u;
label_2bbbc8:
    // 0x2bbbc8: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x2bbbc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x2bbbcc: 0x26040ab0  addiu       $a0, $s0, 0xAB0
    ctx->pc = 0x2bbbccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2736));
    // 0x2bbbd0: 0x24a5fd58  addiu       $a1, $a1, -0x2A8
    ctx->pc = 0x2bbbd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966616));
    // 0x2bbbd4: 0xc0b98d8  jal         func_2E6360
    ctx->pc = 0x2BBBD4u;
    SET_GPR_U32(ctx, 31, 0x2BBBDCu);
    ctx->pc = 0x2BBBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBBD4u;
    // 0x2bbbd8: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6360u, 0x2BBBD4u, 0x2BBBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBBDCu;
label_2bbbdc:
    // 0x2bbbdc: 0xc0aef3e  jal         func_2BBCF8
    ctx->pc = 0x2BBBDCu;
    SET_GPR_U32(ctx, 31, 0x2BBBE4u);
    ctx->pc = 0x2BBBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBBDCu;
    // 0x2bbbe0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BBCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBCF8u, 0x2BBBDCu, 0x2BBBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBBE4u;
label_2bbbe4:
    // 0x2bbbe4: 0xc0b2ae6  jal         func_2CAB98
    ctx->pc = 0x2BBBE4u;
    SET_GPR_U32(ctx, 31, 0x2BBBECu);
    ctx->pc = 0x2BBBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBBE4u;
    // 0x2bbbe8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAB98u, 0x2BBBE4u, 0x2BBBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBBECu;
label_2bbbec:
    // 0x2bbbec: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2BBBECu;
    {
        const bool branch_taken_0x2bbbec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bbbec) {
            ctx->pc = 0x2BBC18u;
            goto label_2bbc18;
        }
    }
    ctx->pc = 0x2BBBF4u;
label_2bbbf4:
    // 0x2bbbf4: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x2bbbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x2bbbf8: 0x26040ab0  addiu       $a0, $s0, 0xAB0
    ctx->pc = 0x2bbbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2736));
    // 0x2bbbfc: 0x24a5fd60  addiu       $a1, $a1, -0x2A0
    ctx->pc = 0x2bbbfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966624));
    // 0x2bbc00: 0xc0b98d8  jal         func_2E6360
    ctx->pc = 0x2BBC00u;
    SET_GPR_U32(ctx, 31, 0x2BBC08u);
    ctx->pc = 0x2BBC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBC00u;
    // 0x2bbc04: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6360u, 0x2BBC00u, 0x2BBC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBC08u;
label_2bbc08:
    // 0x2bbc08: 0xc0aef3e  jal         func_2BBCF8
    ctx->pc = 0x2BBC08u;
    SET_GPR_U32(ctx, 31, 0x2BBC10u);
    ctx->pc = 0x2BBC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBC08u;
    // 0x2bbc0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BBCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBCF8u, 0x2BBC08u, 0x2BBC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBC10u;
label_2bbc10:
    // 0x2bbc10: 0xc0b2bde  jal         func_2CAF78
    ctx->pc = 0x2BBC10u;
    SET_GPR_U32(ctx, 31, 0x2BBC18u);
    ctx->pc = 0x2BBC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBC10u;
    // 0x2bbc14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAF78u, 0x2BBC10u, 0x2BBC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBC18u;
label_2bbc18:
    // 0x2bbc18: 0xc0af402  jal         func_2BD008
    ctx->pc = 0x2BBC18u;
    SET_GPR_U32(ctx, 31, 0x2BBC20u);
    ctx->pc = 0x2BBC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBC18u;
    // 0x2bbc1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BD008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BD008u, 0x2BBC18u, 0x2BBC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBC20u;
label_2bbc20:
    // 0x2bbc20: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2BBC20u;
    {
        const bool branch_taken_0x2bbc20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBC20u;
        // 0x2bbc24: 0x8e030a9c  lw          $v1, 0xA9C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2716)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbc20) {
            ctx->pc = 0x2BBC38u;
            goto label_2bbc38;
        }
    }
    ctx->pc = 0x2BBC28u;
label_2bbc28:
    // 0x2bbc28: 0x24a5fd68  addiu       $a1, $a1, -0x298
    ctx->pc = 0x2bbc28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966632));
    // 0x2bbc2c: 0xc0b98d8  jal         func_2E6360
    ctx->pc = 0x2BBC2Cu;
    SET_GPR_U32(ctx, 31, 0x2BBC34u);
    ctx->pc = 0x2BBC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBC2Cu;
    // 0x2bbc30: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6360u, 0x2BBC2Cu, 0x2BBC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBC34u;
label_2bbc34:
    // 0x2bbc34: 0x8e030a9c  lw          $v1, 0xA9C($s0)
    ctx->pc = 0x2bbc34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2716)));
label_2bbc38:
    // 0x2bbc38: 0x8e020aa0  lw          $v0, 0xAA0($s0)
    ctx->pc = 0x2bbc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2720)));
    // 0x2bbc3c: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2BBC3Cu;
    {
        const bool branch_taken_0x2bbc3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BBC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBC3Cu;
        // 0x2bbc40: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbc3c) {
            ctx->pc = 0x2BBC80u;
            goto label_2bbc80;
        }
    }
    ctx->pc = 0x2BBC44u;
    // 0x2bbc44: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2BBC44u;
    {
        const bool branch_taken_0x2bbc44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BBC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBC44u;
        // 0x2bbc48: 0x2c620009  sltiu       $v0, $v1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbc44) {
            ctx->pc = 0x2BBC7Cu;
            goto label_2bbc7c;
        }
    }
    ctx->pc = 0x2BBC4Cu;
    // 0x2bbc4c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BBC4Cu;
    {
        const bool branch_taken_0x2bbc4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBC4Cu;
        // 0x2bbc50: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbc4c) {
            ctx->pc = 0x2BBC64u;
            goto label_2bbc64;
        }
    }
    ctx->pc = 0x2BBC54u;
    // 0x2bbc54: 0x50620009  beql        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BBC54u;
    {
        const bool branch_taken_0x2bbc54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2bbc54) {
            ctx->pc = 0x2BBC58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BBC54u;
            // 0x2bbc58: 0xae000aa8  sw          $zero, 0xAA8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 2728), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BBC7Cu;
            goto label_2bbc7c;
        }
    }
    ctx->pc = 0x2BBC5Cu;
    // 0x2bbc5c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2BBC5Cu;
    {
        const bool branch_taken_0x2bbc5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBC5Cu;
        // 0x2bbc60: 0xae030aa0  sw          $v1, 0xAA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2720), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbc5c) {
            ctx->pc = 0x2BBC80u;
            goto label_2bbc80;
        }
    }
    ctx->pc = 0x2BBC64u;
label_2bbc64:
    // 0x2bbc64: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2bbc64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2bbc68: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BBC68u;
    {
        const bool branch_taken_0x2bbc68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BBC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBC68u;
        // 0x2bbc6c: 0x3c020400  lui         $v0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbc68) {
            ctx->pc = 0x2BBC7Cu;
            goto label_2bbc7c;
        }
    }
    ctx->pc = 0x2BBC70u;
    // 0x2bbc70: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BBC70u;
    {
        const bool branch_taken_0x2bbc70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bbc70) {
            ctx->pc = 0x2BBC74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BBC70u;
            // 0x2bbc74: 0xae030aa0  sw          $v1, 0xAA0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 2720), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BBC80u;
            goto label_2bbc80;
        }
    }
    ctx->pc = 0x2BBC78u;
    // 0x2bbc78: 0xae000aa8  sw          $zero, 0xAA8($s0)
    ctx->pc = 0x2bbc78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2728), GPR_U32(ctx, 0));
label_2bbc7c:
    // 0x2bbc7c: 0xae030aa0  sw          $v1, 0xAA0($s0)
    ctx->pc = 0x2bbc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2720), GPR_U32(ctx, 3));
label_2bbc80:
    // 0x2bbc80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2bbc80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bbc84: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2bbc84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bbc88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bbc88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bbc8c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BBC8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BBC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBC8Cu;
        // 0x2bbc90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BBC8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BBC94u;
}
