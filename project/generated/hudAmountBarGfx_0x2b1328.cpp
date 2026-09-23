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

// Function: hudAmountBarGfx
// Address: 0x2b1328 - 0x2b1420
void hudAmountBarGfx_0x2b1328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("hudAmountBarGfx_0x2b1328");
#endif

    switch (ctx->pc) {
        case 0x2b13e8u: goto label_2b13e8;
        default: break;
    }

    ctx->pc = 0x2b1328u;

    // 0x2b1328: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2b1328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2b132c: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x2b132cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x2b1330: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b1330u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1334: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2b1334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2b1338: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2b1338u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b133c: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2b133cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2b1340: 0x44940800  mtc1        $s4, $f1
    ctx->pc = 0x2b1340u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b1344: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b1344u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b1348: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2b1348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2b134c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b134cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1350: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b1350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b1354: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2b1354u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b1358: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b1358u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x2b135c: 0x44041800  mfc1        $a0, $f3
    ctx->pc = 0x2b135cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b1360: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2b1360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2b1364: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x2b1364u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x2b1368: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2b1368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2b136c: 0x460c1034  c.lt.s      $f2, $f12
    ctx->pc = 0x2b136cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b1370: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2b1370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2b1374: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b1374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b1378: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b1378u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2b137c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2b137cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2b1380: 0x2229821  addu        $s3, $s1, $v0
    ctx->pc = 0x2b1380u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2b1384: 0x28820029  slti        $v0, $a0, 0x29
    ctx->pc = 0x2b1384u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x2b1388: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B1388u;
    {
        const bool branch_taken_0x2b1388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B138Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1388u;
        // 0x2b138c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1388) {
            ctx->pc = 0x2B13A0u;
            goto label_2b13a0;
        }
    }
    ctx->pc = 0x2B1390u;
    // 0x2b1390: 0x8f82b45c  lw          $v0, -0x4BA4($gp)
    ctx->pc = 0x2b1390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947932)));
    // 0x2b1394: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2b1394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x2b1398: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2B1398u;
    {
        const bool branch_taken_0x2b1398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B139Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1398u;
        // 0x2b139c: 0x3c086464  lui         $t0, 0x6464 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)25700 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1398) {
            ctx->pc = 0x2B13C8u;
            goto label_2b13c8;
        }
    }
    ctx->pc = 0x2B13A0u;
label_2b13a0:
    // 0x2b13a0: 0x41043  sra         $v0, $a0, 1
    ctx->pc = 0x2b13a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 1));
    // 0x2b13a4: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x2b13a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2b13a8: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x2b13a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2b13ac: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2b13acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b13b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b13b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b13b4: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x2b13b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x2b13b8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2b13b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2b13bc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2b13bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2b13c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B13C0u;
    {
        const bool branch_taken_0x2b13c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B13C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B13C0u;
        // 0x2b13c4: 0x34680060  ori         $t0, $v1, 0x60 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)96);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b13c0) {
            ctx->pc = 0x2B13CCu;
            goto label_2b13cc;
        }
    }
    ctx->pc = 0x2B13C8u;
label_2b13c8:
    // 0x2b13c8: 0x35086460  ori         $t0, $t0, 0x6460
    ctx->pc = 0x2b13c8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)25696);
label_2b13cc:
    // 0x2b13cc: 0x2478021  addu        $s0, $s2, $a3
    ctx->pc = 0x2b13ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x2b13d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b13d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b13d4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2b13d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2b13d8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2b13d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b13dc: 0x2666ffff  addiu       $a2, $s3, -0x1
    ctx->pc = 0x2b13dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x2b13e0: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x2B13E0u;
    SET_GPR_U32(ctx, 31, 0x2B13E8u);
    ctx->pc = 0x2B13E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B13E0u;
    // 0x2b13e4: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x2B13E0u, 0x2B13E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B13E8u;
label_2b13e8:
    // 0x2b13e8: 0x2343021  addu        $a2, $s1, $s4
    ctx->pc = 0x2b13e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x2b13ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b13ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b13f0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2b13f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b13f4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2b13f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b13f8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2b13f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b13fc: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2b13fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2b1400: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2b1400u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b1404: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x2b1404u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2b1408: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2b1408u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b140c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2b140cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b1410: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2b1410u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b1414: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b1414u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b1418: 0x80ae108  j           func_2B8420
    ctx->pc = 0x2B1418u;
    ctx->pc = 0x2B141Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1418u;
    // 0x2b141c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    dlFillRectangle_0x2b8420(rdram, ctx, runtime); return;
    ctx->pc = 0x2B1420u;
}
