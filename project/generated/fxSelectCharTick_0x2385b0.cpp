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

// Function: fxSelectCharTick
// Address: 0x2385b0 - 0x238c60
void fxSelectCharTick_0x2385b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fxSelectCharTick_0x2385b0");
#endif

    switch (ctx->pc) {
        case 0x2385f0u: goto label_2385f0;
        case 0x2386ecu: goto label_2386ec;
        case 0x2387d4u: goto label_2387d4;
        case 0x2388a8u: goto label_2388a8;
        case 0x238958u: goto label_238958;
        case 0x238968u: goto label_238968;
        case 0x238978u: goto label_238978;
        case 0x23898cu: goto label_23898c;
        case 0x238994u: goto label_238994;
        case 0x2389d8u: goto label_2389d8;
        case 0x238aa4u: goto label_238aa4;
        case 0x238abcu: goto label_238abc;
        case 0x238accu: goto label_238acc;
        case 0x238adcu: goto label_238adc;
        case 0x238aecu: goto label_238aec;
        case 0x238afcu: goto label_238afc;
        case 0x238b1cu: goto label_238b1c;
        case 0x238b28u: goto label_238b28;
        case 0x238b30u: goto label_238b30;
        default: break;
    }

    ctx->pc = 0x2385b0u;

    // 0x2385b0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2385b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2385b4: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x2385b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x2385b8: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x2385b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x2385bc: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2385bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2385c0: 0x3c1701fc  lui         $s7, 0x1FC
    ctx->pc = 0x2385c0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)508 << 16));
    // 0x2385c4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2385c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2385c8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2385c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2385cc: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x2385ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x2385d0: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2385d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2385d4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2385d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2385d8: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2385d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2385dc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2385dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2385e0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2385e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2385e4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2385e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2385e8: 0xc08828c  jal         func_220A30
    ctx->pc = 0x2385E8u;
    SET_GPR_U32(ctx, 31, 0x2385F0u);
    ctx->pc = 0x2385ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2385E8u;
    // 0x2385ec: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220A30u, 0x2385E8u, 0x2385F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2385F0u;
label_2385f0:
    // 0x2385f0: 0x8f91a004  lw          $s1, -0x5FFC($gp)
    ctx->pc = 0x2385f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x2385f4: 0x24030b78  addiu       $v1, $zero, 0xB78
    ctx->pc = 0x2385f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2936));
    // 0x2385f8: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2385f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2385fc: 0x8f849dd8  lw          $a0, -0x6228($gp)
    ctx->pc = 0x2385fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942168)));
    // 0x238600: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x238600u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x238604: 0x26e31268  addiu       $v1, $s7, 0x1268
    ctx->pc = 0x238604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4712));
    // 0x238608: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x238608u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23860c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x23860cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x238610: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x238610u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x238614: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x238614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x238618: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x238618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23861c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x23861cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x238620: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x238620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x238624: 0x1466006d  bne         $v1, $a2, . + 4 + (0x6D << 2)
    ctx->pc = 0x238624u;
    {
        const bool branch_taken_0x238624 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x238628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238624u;
        // 0x238628: 0xafa40004  sw          $a0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238624) {
            ctx->pc = 0x2387DCu;
            goto label_2387dc;
        }
    }
    ctx->pc = 0x23862Cu;
    // 0x23862c: 0x3c1601fc  lui         $s6, 0x1FC
    ctx->pc = 0x23862cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)508 << 16));
    // 0x238630: 0x26c212d8  addiu       $v0, $s6, 0x12D8
    ctx->pc = 0x238630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4824));
    // 0x238634: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x238634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x238638: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x238638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23863c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x23863Cu;
    {
        const bool branch_taken_0x23863c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x238640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23863Cu;
        // 0x238640: 0x3c0301fc  lui         $v1, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23863c) {
            ctx->pc = 0x238654u;
            goto label_238654;
        }
    }
    ctx->pc = 0x238644u;
    // 0x238644: 0x3c014090  lui         $at, 0x4090
    ctx->pc = 0x238644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16528 << 16));
    // 0x238648: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x238648u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23864c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23864Cu;
    {
        const bool branch_taken_0x23864c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23864Cu;
        // 0x238650: 0x24621278  addiu       $v0, $v1, 0x1278 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23864c) {
            ctx->pc = 0x238660u;
            goto label_238660;
        }
    }
    ctx->pc = 0x238654u;
label_238654:
    // 0x238654: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x238654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x238658: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x238658u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23865c: 0x24621278  addiu       $v0, $v1, 0x1278
    ctx->pc = 0x23865cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4728));
label_238660:
    // 0x238660: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x238660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x238664: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x238664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x238668: 0x8ea70000  lw          $a3, 0x0($s5)
    ctx->pc = 0x238668u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x23866c: 0x24621278  addiu       $v0, $v1, 0x1278
    ctx->pc = 0x23866cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4728));
    // 0x238670: 0xc782b468  lwc1        $f2, -0x4B98($gp)
    ctx->pc = 0x238670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x238674: 0x3c0301fc  lui         $v1, 0x1FC
    ctx->pc = 0x238674u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
    // 0x238678: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x238678u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x23867c: 0xc78381e0  lwc1        $f3, -0x7E20($gp)
    ctx->pc = 0x23867cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x238680: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x238680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x238684: 0x24721248  addiu       $s2, $v1, 0x1248
    ctx->pc = 0x238684u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4680));
    // 0x238688: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x238688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23868c: 0xd22021  addu        $a0, $a2, $s2
    ctx->pc = 0x23868cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x238690: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x238690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x238694: 0x3c1001fc  lui         $s0, 0x1FC
    ctx->pc = 0x238694u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)508 << 16));
    // 0x238698: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x238698u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x23869c: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x23869cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x2386a0: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x2386a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2386a4: 0x26141298  addiu       $s4, $s0, 0x1298
    ctx->pc = 0x2386a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 4760));
    // 0x2386a8: 0xd41821  addu        $v1, $a2, $s4
    ctx->pc = 0x2386a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
    // 0x2386ac: 0x24531288  addiu       $s3, $v0, 0x1288
    ctx->pc = 0x2386acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4744));
    // 0x2386b0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2386b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2386b4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2386b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2386b8: 0xd31021  addu        $v0, $a2, $s3
    ctx->pc = 0x2386b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x2386bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2386bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2386c0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2386c0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2386c4: 0x10a3001b  beq         $a1, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x2386C4u;
    {
        const bool branch_taken_0x2386c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2386C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2386C4u;
        // 0x2386c8: 0xe4810000  swc1        $f1, 0x0($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2386c4) {
            ctx->pc = 0x238734u;
            goto label_238734;
        }
    }
    ctx->pc = 0x2386CCu;
    // 0x2386cc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2386ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2386d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2386d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2386d4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2386d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2386d8: 0x0  nop
    ctx->pc = 0x2386d8u;
    // NOP
    // 0x2386dc: 0x450200d7  bc1fl       . + 4 + (0xD7 << 2)
    ctx->pc = 0x2386DCu;
    {
        const bool branch_taken_0x2386dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2386dc) {
            ctx->pc = 0x2386E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2386DCu;
            // 0x2386e0: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238A3Cu;
            goto label_238a3c;
        }
    }
    ctx->pc = 0x2386E4u;
    // 0x2386e4: 0xc08d9ac  jal         func_2366B0
    ctx->pc = 0x2386E4u;
    SET_GPR_U32(ctx, 31, 0x2386ECu);
    ctx->pc = 0x2386E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2386E4u;
    // 0x2386e8: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2366B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2366B0u, 0x2386E4u, 0x2386ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2386ECu;
label_2386ec:
    // 0x2386ec: 0x8f91a004  lw          $s1, -0x5FFC($gp)
    ctx->pc = 0x2386ecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x2386f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2386f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2386f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2386f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2386f8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2386f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2386fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2386fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x238700: 0x542021  addu        $a0, $v0, $s4
    ctx->pc = 0x238700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x238704: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x238704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x238708: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x238708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x23870c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x23870cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x238710: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x238710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x238714: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x238714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x238718: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x238718u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x23871c: 0x921821  addu        $v1, $a0, $s2
    ctx->pc = 0x23871cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x238720: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x238720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x238724: 0x14400070  bnez        $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x238724u;
    {
        const bool branch_taken_0x238724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x238728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238724u;
        // 0x238728: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x238724) {
            ctx->pc = 0x2388E8u;
            goto label_2388e8;
        }
    }
    ctx->pc = 0x23872Cu;
    // 0x23872c: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x23872Cu;
    {
        const bool branch_taken_0x23872c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23872Cu;
        // 0x238730: 0x26c212d8  addiu       $v0, $s6, 0x12D8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4824));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23872c) {
            ctx->pc = 0x238900u;
            goto label_238900;
        }
    }
    ctx->pc = 0x238734u;
label_238734:
    // 0x238734: 0x26c212d8  addiu       $v0, $s6, 0x12D8
    ctx->pc = 0x238734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4824));
    // 0x238738: 0xc22021  addu        $a0, $a2, $v0
    ctx->pc = 0x238738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x23873c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x23873cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x238740: 0x50600014  beql        $v1, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x238740u;
    {
        const bool branch_taken_0x238740 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x238740) {
            ctx->pc = 0x238744u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238740u;
            // 0x238744: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238794u;
            goto label_238794;
        }
    }
    ctx->pc = 0x238748u;
    // 0x238748: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x238748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x23874c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x23874cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x238750: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x238750u;
    {
        const bool branch_taken_0x238750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x238750) {
            ctx->pc = 0x238754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238750u;
            // 0x238754: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238794u;
            goto label_238794;
        }
    }
    ctx->pc = 0x238758u;
    // 0x238758: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x238758u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x23875c: 0x3c0301fc  lui         $v1, 0x1FC
    ctx->pc = 0x23875cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
    // 0x238760: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x238760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x238764: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x238764u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x238768: 0x246312e8  addiu       $v1, $v1, 0x12E8
    ctx->pc = 0x238768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4840));
    // 0x23876c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x23876cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x238770: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x238770u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x238774: 0x522021  addu        $a0, $v0, $s2
    ctx->pc = 0x238774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x238778: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x238778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23877c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23877cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x238780: 0x0  nop
    ctx->pc = 0x238780u;
    // NOP
    // 0x238784: 0x0  nop
    ctx->pc = 0x238784u;
    // NOP
    // 0x238788: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x238788u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x23878c: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x23878cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x238790: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x238790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_238794:
    // 0x238794: 0x25061248  addiu       $a2, $t0, 0x1248
    ctx->pc = 0x238794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 4680));
    // 0x238798: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x238798u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23879c: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x23879cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2387a0: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x2387a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2387a4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2387a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2387a8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2387a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2387ac: 0x0  nop
    ctx->pc = 0x2387acu;
    // NOP
    // 0x2387b0: 0x450000a1  bc1f        . + 4 + (0xA1 << 2)
    ctx->pc = 0x2387B0u;
    {
        const bool branch_taken_0x2387b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2387B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2387B0u;
        // 0x2387b4: 0x26c212d8  addiu       $v0, $s6, 0x12D8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4824));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2387b0) {
            ctx->pc = 0x238A38u;
            goto label_238a38;
        }
    }
    ctx->pc = 0x2387B8u;
    // 0x2387b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2387b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2387bc: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2387bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2387c0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2387c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2387c4: 0x1464008e  bne         $v1, $a0, . + 4 + (0x8E << 2)
    ctx->pc = 0x2387C4u;
    {
        const bool branch_taken_0x2387c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2387c4) {
            ctx->pc = 0x238A00u;
            goto label_238a00;
        }
    }
    ctx->pc = 0x2387CCu;
    // 0x2387cc: 0xc08e09a  jal         func_238268
    ctx->pc = 0x2387CCu;
    SET_GPR_U32(ctx, 31, 0x2387D4u);
    ctx->pc = 0x2387D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2387CCu;
    // 0x2387d0: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238268u, 0x2387CCu, 0x2387D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2387D4u;
label_2387d4:
    // 0x2387d4: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x2387D4u;
    {
        const bool branch_taken_0x2387d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2387D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2387D4u;
        // 0x2387d8: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2387d4) {
            ctx->pc = 0x2389DCu;
            goto label_2389dc;
        }
    }
    ctx->pc = 0x2387DCu;
label_2387dc:
    // 0x2387dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2387dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2387e0: 0x54620096  bnel        $v1, $v0, . + 4 + (0x96 << 2)
    ctx->pc = 0x2387E0u;
    {
        const bool branch_taken_0x2387e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2387e0) {
            ctx->pc = 0x2387E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2387E0u;
            // 0x2387e4: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238A3Cu;
            goto label_238a3c;
        }
    }
    ctx->pc = 0x2387E8u;
    // 0x2387e8: 0x3c1601fc  lui         $s6, 0x1FC
    ctx->pc = 0x2387e8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)508 << 16));
    // 0x2387ec: 0x26c212d8  addiu       $v0, $s6, 0x12D8
    ctx->pc = 0x2387ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4824));
    // 0x2387f0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2387f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2387f4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2387f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2387f8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2387F8u;
    {
        const bool branch_taken_0x2387f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2387FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2387F8u;
        // 0x2387fc: 0x3c0301fc  lui         $v1, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2387f8) {
            ctx->pc = 0x238810u;
            goto label_238810;
        }
    }
    ctx->pc = 0x238800u;
    // 0x238800: 0x3c014090  lui         $at, 0x4090
    ctx->pc = 0x238800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16528 << 16));
    // 0x238804: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x238804u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238808: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x238808u;
    {
        const bool branch_taken_0x238808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23880Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238808u;
        // 0x23880c: 0x24621278  addiu       $v0, $v1, 0x1278 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238808) {
            ctx->pc = 0x23881Cu;
            goto label_23881c;
        }
    }
    ctx->pc = 0x238810u;
label_238810:
    // 0x238810: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x238810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x238814: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x238814u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238818: 0x24621278  addiu       $v0, $v1, 0x1278
    ctx->pc = 0x238818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4728));
label_23881c:
    // 0x23881c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x23881cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x238820: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x238820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x238824: 0x8ea70000  lw          $a3, 0x0($s5)
    ctx->pc = 0x238824u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x238828: 0x24621278  addiu       $v0, $v1, 0x1278
    ctx->pc = 0x238828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4728));
    // 0x23882c: 0xc782b468  lwc1        $f2, -0x4B98($gp)
    ctx->pc = 0x23882cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x238830: 0x3c0401fc  lui         $a0, 0x1FC
    ctx->pc = 0x238830u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)508 << 16));
    // 0x238834: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x238834u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x238838: 0xc78381e4  lwc1        $f3, -0x7E1C($gp)
    ctx->pc = 0x238838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23883c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x23883cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x238840: 0x24901248  addiu       $s0, $a0, 0x1248
    ctx->pc = 0x238840u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4680));
    // 0x238844: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x238844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x238848: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x238848u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23884c: 0xd02021  addu        $a0, $a2, $s0
    ctx->pc = 0x23884cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x238850: 0x3c1401fc  lui         $s4, 0x1FC
    ctx->pc = 0x238850u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)508 << 16));
    // 0x238854: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x238854u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x238858: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x238858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23885c: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x23885cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x238860: 0x26931298  addiu       $s3, $s4, 0x1298
    ctx->pc = 0x238860u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 4760));
    // 0x238864: 0xd31821  addu        $v1, $a2, $s3
    ctx->pc = 0x238864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x238868: 0x24521288  addiu       $s2, $v0, 0x1288
    ctx->pc = 0x238868u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4744));
    // 0x23886c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x23886cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x238870: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x238870u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x238874: 0xd21021  addu        $v0, $a2, $s2
    ctx->pc = 0x238874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x238878: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x238878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23887c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x23887cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x238880: 0x10a30022  beq         $a1, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x238880u;
    {
        const bool branch_taken_0x238880 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x238884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238880u;
        // 0x238884: 0xe4810000  swc1        $f1, 0x0($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x238880) {
            ctx->pc = 0x23890Cu;
            goto label_23890c;
        }
    }
    ctx->pc = 0x238888u;
    // 0x238888: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x238888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23888c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23888cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238890: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x238890u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x238894: 0x0  nop
    ctx->pc = 0x238894u;
    // NOP
    // 0x238898: 0x45020068  bc1fl       . + 4 + (0x68 << 2)
    ctx->pc = 0x238898u;
    {
        const bool branch_taken_0x238898 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x238898) {
            ctx->pc = 0x23889Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238898u;
            // 0x23889c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238A3Cu;
            goto label_238a3c;
        }
    }
    ctx->pc = 0x2388A0u;
    // 0x2388a0: 0xc08d9ac  jal         func_2366B0
    ctx->pc = 0x2388A0u;
    SET_GPR_U32(ctx, 31, 0x2388A8u);
    ctx->pc = 0x2388A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2388A0u;
    // 0x2388a4: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2366B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2366B0u, 0x2388A0u, 0x2388A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2388A8u;
label_2388a8:
    // 0x2388a8: 0x8f91a004  lw          $s1, -0x5FFC($gp)
    ctx->pc = 0x2388a8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x2388ac: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2388acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2388b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2388b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2388b4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2388b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2388b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2388b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2388bc: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x2388bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2388c0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2388c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2388c4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2388c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2388c8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2388c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2388cc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2388ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2388d0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2388d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2388d4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2388d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2388d8: 0x901821  addu        $v1, $a0, $s0
    ctx->pc = 0x2388d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2388dc: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x2388dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x2388e0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2388E0u;
    {
        const bool branch_taken_0x2388e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2388E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2388E0u;
        // 0x2388e4: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2388e0) {
            ctx->pc = 0x2388FCu;
            goto label_2388fc;
        }
    }
    ctx->pc = 0x2388E8u;
label_2388e8:
    // 0x2388e8: 0x26c212d8  addiu       $v0, $s6, 0x12D8
    ctx->pc = 0x2388e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4824));
    // 0x2388ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2388ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2388f0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2388f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2388f4: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x2388F4u;
    {
        const bool branch_taken_0x2388f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2388F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2388F4u;
        // 0x2388f8: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2388f4) {
            ctx->pc = 0x238A38u;
            goto label_238a38;
        }
    }
    ctx->pc = 0x2388FCu;
label_2388fc:
    // 0x2388fc: 0x26c212d8  addiu       $v0, $s6, 0x12D8
    ctx->pc = 0x2388fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4824));
label_238900:
    // 0x238900: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x238900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x238904: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x238904u;
    {
        const bool branch_taken_0x238904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238904u;
        // 0x238908: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238904) {
            ctx->pc = 0x238A38u;
            goto label_238a38;
        }
    }
    ctx->pc = 0x23890Cu;
label_23890c:
    // 0x23890c: 0x26c212d8  addiu       $v0, $s6, 0x12D8
    ctx->pc = 0x23890cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4824));
    // 0x238910: 0xc22021  addu        $a0, $a2, $v0
    ctx->pc = 0x238910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x238914: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x238914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x238918: 0x50600020  beql        $v1, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x238918u;
    {
        const bool branch_taken_0x238918 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x238918) {
            ctx->pc = 0x23891Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238918u;
            // 0x23891c: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23899Cu;
            goto label_23899c;
        }
    }
    ctx->pc = 0x238920u;
    // 0x238920: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x238920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x238924: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x238924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x238928: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x238928u;
    {
        const bool branch_taken_0x238928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x238928) {
            ctx->pc = 0x23892Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238928u;
            // 0x23892c: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23899Cu;
            goto label_23899c;
        }
    }
    ctx->pc = 0x238930u;
    // 0x238930: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x238930u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x238934: 0x3c0301fc  lui         $v1, 0x1FC
    ctx->pc = 0x238934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
    // 0x238938: 0x246312e8  addiu       $v1, $v1, 0x12E8
    ctx->pc = 0x238938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4840));
    // 0x23893c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x23893cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238940: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x238940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x238944: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x238944u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x238948: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x238948u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23894c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x23894cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x238950: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x238950u;
    SET_GPR_U32(ctx, 31, 0x238958u);
    ctx->pc = 0x238954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238950u;
    // 0x238954: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x238950u, 0x238958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238958u;
label_238958:
    // 0x238958: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x238958u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23895c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23895cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238960: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x238960u;
    SET_GPR_U32(ctx, 31, 0x238968u);
    ctx->pc = 0x238964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238960u;
    // 0x238964: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x238960u, 0x238968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238968u;
label_238968:
    // 0x238968: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x238968u;
    {
        const bool branch_taken_0x238968 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x23896Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238968u;
        // 0x23896c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238968) {
            ctx->pc = 0x23897Cu;
            goto label_23897c;
        }
    }
    ctx->pc = 0x238970u;
    // 0x238970: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x238970u;
    SET_GPR_U32(ctx, 31, 0x238978u);
    ctx->pc = 0x238974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238970u;
    // 0x238974: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x238970u, 0x238978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238978u;
label_238978:
    // 0x238978: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x238978u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23897c:
    // 0x23897c: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x23897cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x238980: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x238980u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x238984: 0xc0b8d3a  jal         func_2E34E8
    ctx->pc = 0x238984u;
    SET_GPR_U32(ctx, 31, 0x23898Cu);
    ctx->pc = 0x238988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238984u;
    // 0x238988: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E34E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E34E8u, 0x238984u, 0x23898Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23898Cu;
label_23898c:
    // 0x23898c: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x23898Cu;
    SET_GPR_U32(ctx, 31, 0x238994u);
    ctx->pc = 0x238990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23898Cu;
    // 0x238990: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x23898Cu, 0x238994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238994u;
label_238994:
    // 0x238994: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x238994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x238998: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x238998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_23899c:
    // 0x23899c: 0x27c61248  addiu       $a2, $fp, 0x1248
    ctx->pc = 0x23899cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 4680));
    // 0x2389a0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2389a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2389a4: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x2389a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2389a8: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x2389a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2389ac: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2389acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2389b0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2389b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2389b4: 0x0  nop
    ctx->pc = 0x2389b4u;
    // NOP
    // 0x2389b8: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x2389B8u;
    {
        const bool branch_taken_0x2389b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2389BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2389B8u;
        // 0x2389bc: 0x26c212d8  addiu       $v0, $s6, 0x12D8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4824));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2389b8) {
            ctx->pc = 0x238A38u;
            goto label_238a38;
        }
    }
    ctx->pc = 0x2389C0u;
    // 0x2389c0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2389c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2389c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2389c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2389c8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2389C8u;
    {
        const bool branch_taken_0x2389c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2389c8) {
            ctx->pc = 0x238A00u;
            goto label_238a00;
        }
    }
    ctx->pc = 0x2389D0u;
    // 0x2389d0: 0xc08e0e2  jal         func_238388
    ctx->pc = 0x2389D0u;
    SET_GPR_U32(ctx, 31, 0x2389D8u);
    ctx->pc = 0x2389D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2389D0u;
    // 0x2389d4: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238388u, 0x2389D0u, 0x2389D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2389D8u;
label_2389d8:
    // 0x2389d8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2389d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2389dc:
    // 0x2389dc: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x2389dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x2389e0: 0x24421298  addiu       $v0, $v0, 0x1298
    ctx->pc = 0x2389e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4760));
    // 0x2389e4: 0x8f91a004  lw          $s1, -0x5FFC($gp)
    ctx->pc = 0x2389e4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x2389e8: 0x8c640054  lw          $a0, 0x54($v1)
    ctx->pc = 0x2389e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x2389ec: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2389ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2389f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2389f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2389f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2389f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2389f8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2389F8u;
    {
        const bool branch_taken_0x2389f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2389FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2389F8u;
        // 0x2389fc: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2389f8) {
            ctx->pc = 0x238A38u;
            goto label_238a38;
        }
    }
    ctx->pc = 0x238A00u;
label_238a00:
    // 0x238a00: 0x3c0301fc  lui         $v1, 0x1FC
    ctx->pc = 0x238a00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
    // 0x238a04: 0x24631298  addiu       $v1, $v1, 0x1298
    ctx->pc = 0x238a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4760));
    // 0x238a08: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x238a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x238a0c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x238a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x238a10: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x238a10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x238a14: 0x26e51268  addiu       $a1, $s7, 0x1268
    ctx->pc = 0x238a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4712));
    // 0x238a18: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x238a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x238a1c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x238a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x238a20: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x238a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x238a24: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x238a24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x238a28: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x238a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x238a2c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x238a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x238a30: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x238a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x238a34: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x238a34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_238a38:
    // 0x238a38: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x238a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_238a3c:
    // 0x238a3c: 0x3c0401fc  lui         $a0, 0x1FC
    ctx->pc = 0x238a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)508 << 16));
    // 0x238a40: 0x248312d8  addiu       $v1, $a0, 0x12D8
    ctx->pc = 0x238a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4824));
    // 0x238a44: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x238a44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x238a48: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x238a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x238a4c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x238a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x238a50: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x238A50u;
    {
        const bool branch_taken_0x238a50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238A50u;
        // 0x238a54: 0x3c0201fc  lui         $v0, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238a50) {
            ctx->pc = 0x238A80u;
            goto label_238a80;
        }
    }
    ctx->pc = 0x238A58u;
    // 0x238a58: 0xc78181e8  lwc1        $f1, -0x7E18($gp)
    ctx->pc = 0x238a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x238a5c: 0x24431248  addiu       $v1, $v0, 0x1248
    ctx->pc = 0x238a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4680));
    // 0x238a60: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x238a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x238a64: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x238a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x238a68: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x238a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x238a6c: 0x24421258  addiu       $v0, $v0, 0x1258
    ctx->pc = 0x238a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4696));
    // 0x238a70: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x238a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x238a74: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x238a74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x238a78: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x238A78u;
    {
        const bool branch_taken_0x238a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238A78u;
        // 0x238a7c: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x238a78) {
            ctx->pc = 0x238B34u;
            goto label_238b34;
        }
    }
    ctx->pc = 0x238A80u;
label_238a80:
    // 0x238a80: 0x3c0301fc  lui         $v1, 0x1FC
    ctx->pc = 0x238a80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
    // 0x238a84: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x238a84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x238a88: 0x24701248  addiu       $s0, $v1, 0x1248
    ctx->pc = 0x238a88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4680));
    // 0x238a8c: 0x24421258  addiu       $v0, $v0, 0x1258
    ctx->pc = 0x238a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4696));
    // 0x238a90: 0x901821  addu        $v1, $a0, $s0
    ctx->pc = 0x238a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x238a94: 0x82a021  addu        $s4, $a0, $v0
    ctx->pc = 0x238a94u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x238a98: 0xc46c0000  lwc1        $f12, 0x0($v1)
    ctx->pc = 0x238a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x238a9c: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x238A9Cu;
    SET_GPR_U32(ctx, 31, 0x238AA4u);
    ctx->pc = 0x238AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238A9Cu;
    // 0x238aa0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x238A9Cu, 0x238AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238AA4u;
label_238aa4:
    // 0x238aa4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x238aa4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238aa8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x238aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x238aac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x238aacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x238ab0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x238ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x238ab4: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x238AB4u;
    SET_GPR_U32(ctx, 31, 0x238ABCu);
    ctx->pc = 0x238AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238AB4u;
    // 0x238ab8: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x238AB4u, 0x238ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238ABCu;
label_238abc:
    // 0x238abc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x238abcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238ac0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x238ac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238ac4: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x238AC4u;
    SET_GPR_U32(ctx, 31, 0x238ACCu);
    ctx->pc = 0x238AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238AC4u;
    // 0x238ac8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x238AC4u, 0x238ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238ACCu;
label_238acc:
    // 0x238acc: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x238ACCu;
    {
        const bool branch_taken_0x238acc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x238AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238ACCu;
        // 0x238ad0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238acc) {
            ctx->pc = 0x238AE4u;
            goto label_238ae4;
        }
    }
    ctx->pc = 0x238AD4u;
    // 0x238ad4: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x238AD4u;
    SET_GPR_U32(ctx, 31, 0x238ADCu);
    ctx->pc = 0x238AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238AD4u;
    // 0x238ad8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x238AD4u, 0x238ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238ADCu;
label_238adc:
    // 0x238adc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x238adcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238ae0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x238ae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_238ae4:
    // 0x238ae4: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x238AE4u;
    SET_GPR_U32(ctx, 31, 0x238AECu);
    ctx->pc = 0x238AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238AE4u;
    // 0x238ae8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x238AE4u, 0x238AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238AECu;
label_238aec:
    // 0x238aec: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x238aecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x238af0: 0xdc251ce8  ld          $a1, 0x1CE8($at)
    ctx->pc = 0x238af0u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A1CE8u));
    // 0x238af4: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x238AF4u;
    SET_GPR_U32(ctx, 31, 0x238AFCu);
    ctx->pc = 0x238AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238AF4u;
    // 0x238af8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x238AF4u, 0x238AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238AFCu;
label_238afc:
    // 0x238afc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x238afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x238b00: 0x3c0401fc  lui         $a0, 0x1FC
    ctx->pc = 0x238b00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)508 << 16));
    // 0x238b04: 0x248412e8  addiu       $a0, $a0, 0x12E8
    ctx->pc = 0x238b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4840));
    // 0x238b08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x238b08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238b0c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x238b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x238b10: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x238b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x238b14: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x238B14u;
    SET_GPR_U32(ctx, 31, 0x238B1Cu);
    ctx->pc = 0x238B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238B14u;
    // 0x238b18: 0xc46c0000  lwc1        $f12, 0x0($v1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x238B14u, 0x238B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238B1Cu;
label_238b1c:
    // 0x238b1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x238b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238b20: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x238B20u;
    SET_GPR_U32(ctx, 31, 0x238B28u);
    ctx->pc = 0x238B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238B20u;
    // 0x238b24: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x238B20u, 0x238B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238B28u;
label_238b28:
    // 0x238b28: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x238B28u;
    SET_GPR_U32(ctx, 31, 0x238B30u);
    ctx->pc = 0x238B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238B28u;
    // 0x238b2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x238B28u, 0x238B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238B30u;
label_238b30:
    // 0x238b30: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x238b30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
label_238b34:
    // 0x238b34: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x238b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x238b38: 0x3c0301fc  lui         $v1, 0x1FC
    ctx->pc = 0x238b38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
    // 0x238b3c: 0x246312b8  addiu       $v1, $v1, 0x12B8
    ctx->pc = 0x238b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4792));
    // 0x238b40: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x238b40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x238b44: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x238b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x238b48: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x238b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x238b4c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x238B4Cu;
    {
        const bool branch_taken_0x238b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238B4Cu;
        // 0x238b50: 0xc781b468  lwc1        $f1, -0x4B98($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x238b4c) {
            ctx->pc = 0x238BA4u;
            goto label_238ba4;
        }
    }
    ctx->pc = 0x238B54u;
    // 0x238b54: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x238b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x238b58: 0xc78281ec  lwc1        $f2, -0x7E14($gp)
    ctx->pc = 0x238b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935020)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x238b5c: 0x244512c8  addiu       $a1, $v0, 0x12C8
    ctx->pc = 0x238b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4808));
    // 0x238b60: 0xc78381f0  lwc1        $f3, -0x7E10($gp)
    ctx->pc = 0x238b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x238b64: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x238b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x238b68: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x238b68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x238b6c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x238b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x238b70: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x238b70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x238b74: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x238b74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x238b78: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x238b78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x238b7c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x238b7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x238b80: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x238b80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x238b84: 0x0  nop
    ctx->pc = 0x238b84u;
    // NOP
    // 0x238b88: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x238B88u;
    {
        const bool branch_taken_0x238b88 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x238B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238B88u;
        // 0x238b8c: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x238b88) {
            ctx->pc = 0x238BA4u;
            goto label_238ba4;
        }
    }
    ctx->pc = 0x238B90u;
    // 0x238b90: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x238b90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x238b94: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x238b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x238b98: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x238b98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x238b9c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x238b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x238ba0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x238ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_238ba4:
    // 0x238ba4: 0x8f82b730  lw          $v0, -0x48D0($gp)
    ctx->pc = 0x238ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948656)));
    // 0x238ba8: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x238ba8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x238bac: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x238BACu;
    {
        const bool branch_taken_0x238bac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x238BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238BACu;
        // 0x238bb0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238bac) {
            ctx->pc = 0x238BECu;
            goto label_238bec;
        }
    }
    ctx->pc = 0x238BB4u;
    // 0x238bb4: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x238bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x238bb8: 0x24451248  addiu       $a1, $v0, 0x1248
    ctx->pc = 0x238bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4680));
    // 0x238bbc: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x238bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x238bc0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x238bc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x238bc4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x238bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x238bc8: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x238bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x238bcc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x238bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x238bd0: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x238bd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x238bd4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x238bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x238bd8: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x238bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x238bdc: 0x24639060  addiu       $v1, $v1, -0x6FA0
    ctx->pc = 0x238bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938720));
    // 0x238be0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x238be0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x238be4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x238BE4u;
    {
        const bool branch_taken_0x238be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238BE4u;
        // 0x238be8: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238be4) {
            ctx->pc = 0x238C28u;
            goto label_238c28;
        }
    }
    ctx->pc = 0x238BECu;
label_238bec:
    // 0x238bec: 0x3c0301fc  lui         $v1, 0x1FC
    ctx->pc = 0x238becu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
    // 0x238bf0: 0x24651248  addiu       $a1, $v1, 0x1248
    ctx->pc = 0x238bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4680));
    // 0x238bf4: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x238bf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x238bf8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x238bf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x238bfc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x238bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x238c00: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x238c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x238c04: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x238c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x238c08: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x238c08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x238c0c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x238c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x238c10: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x238c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x238c14: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x238c14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x238c18: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x238c18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x238c1c: 0x24429060  addiu       $v0, $v0, -0x6FA0
    ctx->pc = 0x238c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938720));
    // 0x238c20: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x238c20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x238c24: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x238c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_238c28:
    // 0x238c28: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x238c28u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x238c2c: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x238c2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x238c30: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x238c30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x238c34: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x238c34u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x238c38: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x238c38u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x238c3c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x238c3cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x238c40: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x238c40u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x238c44: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x238c44u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x238c48: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x238c48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x238c4c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x238c4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x238c50: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x238c50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x238c54: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x238c54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238c58: 0x3e00008  jr          $ra
    ctx->pc = 0x238C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238C58u;
        // 0x238c5c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238C58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238C60u;
}
