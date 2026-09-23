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

// Function: followTarget
// Address: 0x2c1480 - 0x2c15f8
void followTarget_0x2c1480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("followTarget_0x2c1480");
#endif

    switch (ctx->pc) {
        case 0x2c14a0u: goto label_2c14a0;
        case 0x2c14d0u: goto label_2c14d0;
        case 0x2c1520u: goto label_2c1520;
        default: break;
    }

    ctx->pc = 0x2c1480u;

    // 0x2c1480: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2c1480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c1484: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2c1484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c1488: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2c1488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2c148c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c148cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1490: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2c1490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c1494: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c1494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c1498: 0xc0b04ca  jal         func_2C1328
    ctx->pc = 0x2C1498u;
    SET_GPR_U32(ctx, 31, 0x2C14A0u);
    ctx->pc = 0x2C149Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1498u;
    // 0x2c149c: 0x8e300160  lw          $s0, 0x160($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C1328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1328u, 0x2C1498u, 0x2C14A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C14A0u;
label_2c14a0:
    // 0x2c14a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c14a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c14a4: 0x8e0202ac  lw          $v0, 0x2AC($s0)
    ctx->pc = 0x2c14a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 684)));
    // 0x2c14a8: 0x10440006  beq         $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C14A8u;
    {
        const bool branch_taken_0x2c14a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x2C14ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C14A8u;
        // 0x2c14ac: 0x8f83b4dc  lw          $v1, -0x4B24($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948060)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c14a8) {
            ctx->pc = 0x2C14C4u;
            goto label_2c14c4;
        }
    }
    ctx->pc = 0x2C14B0u;
    // 0x2c14b0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2c14b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c14b4: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C14B4u;
    {
        const bool branch_taken_0x2c14b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c14b4) {
            ctx->pc = 0x2C14B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C14B4u;
            // 0x2c14b8: 0xae0402ac  sw          $a0, 0x2AC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 684), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C14C8u;
            goto label_2c14c8;
        }
    }
    ctx->pc = 0x2C14BCu;
    // 0x2c14bc: 0xae000698  sw          $zero, 0x698($s0)
    ctx->pc = 0x2c14bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1688), GPR_U32(ctx, 0));
    // 0x2c14c0: 0xae000a84  sw          $zero, 0xA84($s0)
    ctx->pc = 0x2c14c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2692), GPR_U32(ctx, 0));
label_2c14c4:
    // 0x2c14c4: 0xae0402ac  sw          $a0, 0x2AC($s0)
    ctx->pc = 0x2c14c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 684), GPR_U32(ctx, 4));
label_2c14c8:
    // 0x2c14c8: 0xc0afda0  jal         func_2BF680
    ctx->pc = 0x2C14C8u;
    SET_GPR_U32(ctx, 31, 0x2C14D0u);
    ctx->pc = 0x2C14CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C14C8u;
    // 0x2c14cc: 0x260402a8  addiu       $a0, $s0, 0x2A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF680u, 0x2C14C8u, 0x2C14D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C14D0u;
label_2c14d0:
    // 0x2c14d0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c14d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c14d4: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x2c14d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2c14d8: 0x16420006  bne         $s2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C14D8u;
    {
        const bool branch_taken_0x2c14d8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C14DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C14D8u;
        // 0x2c14dc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c14d8) {
            ctx->pc = 0x2C14F4u;
            goto label_2c14f4;
        }
    }
    ctx->pc = 0x2C14E0u;
    // 0x2c14e0: 0x8e030a9c  lw          $v1, 0xA9C($s0)
    ctx->pc = 0x2c14e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2716)));
    // 0x2c14e4: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x2c14e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2c14e8: 0xae020a9c  sw          $v0, 0xA9C($s0)
    ctx->pc = 0x2c14e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2716), GPR_U32(ctx, 2));
    // 0x2c14ec: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x2C14ECu;
    {
        const bool branch_taken_0x2c14ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C14F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C14ECu;
        // 0x2c14f0: 0xae030aa0  sw          $v1, 0xAA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2720), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c14ec) {
            ctx->pc = 0x2C15DCu;
            goto label_2c15dc;
        }
    }
    ctx->pc = 0x2C14F4u;
label_2c14f4:
    // 0x2c14f4: 0x16420008  bne         $s2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C14F4u;
    {
        const bool branch_taken_0x2c14f4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C14F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C14F4u;
        // 0x2c14f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c14f4) {
            ctx->pc = 0x2C1518u;
            goto label_2c1518;
        }
    }
    ctx->pc = 0x2C14FCu;
    // 0x2c14fc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2c14fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c1500: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c1500u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c1504: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2c1504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c1508: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2c1508u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c150c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c150cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c1510: 0x80b20be  j           func_2C82F8
    ctx->pc = 0x2C1510u;
    ctx->pc = 0x2C1514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1510u;
    // 0x2c1514: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    enemySetMoveMode_0x2c82f8(rdram, ctx, runtime); return;
    ctx->pc = 0x2C1518u;
label_2c1518:
    // 0x2c1518: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C1518u;
    SET_GPR_U32(ctx, 31, 0x2C1520u);
    ctx->pc = 0x2C151Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1518u;
    // 0x2c151c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C1518u, 0x2C1520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1520u;
label_2c1520:
    // 0x2c1520: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x2c1520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2c1524: 0xc6000b28  lwc1        $f0, 0xB28($s0)
    ctx->pc = 0x2c1524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c1528: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x2c1528u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c152c: 0x8f83a2ec  lw          $v1, -0x5D14($gp)
    ctx->pc = 0x2c152cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x2c1530: 0xe6000b38  swc1        $f0, 0xB38($s0)
    ctx->pc = 0x2c1530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2872), bits); }
    // 0x2c1534: 0xc78690c8  lwc1        $f6, -0x6F38($gp)
    ctx->pc = 0x2c1534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2c1538: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c1538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c153c: 0xc444000c  lwc1        $f4, 0xC($v0)
    ctx->pc = 0x2c153cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c1540: 0xe6040aec  swc1        $f4, 0xAEC($s0)
    ctx->pc = 0x2c1540u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2796), bits); }
    // 0x2c1544: 0xc4450010  lwc1        $f5, 0x10($v0)
    ctx->pc = 0x2c1544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2c1548: 0xe6050af0  swc1        $f5, 0xAF0($s0)
    ctx->pc = 0x2c1548u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2800), bits); }
    // 0x2c154c: 0xc4430014  lwc1        $f3, 0x14($v0)
    ctx->pc = 0x2c154cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c1550: 0xe6030af4  swc1        $f3, 0xAF4($s0)
    ctx->pc = 0x2c1550u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2804), bits); }
    // 0x2c1554: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x2c1554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c1558: 0xc6220034  lwc1        $f2, 0x34($s1)
    ctx->pc = 0x2c1558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c155c: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x2c155cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x2c1560: 0xc6210038  lwc1        $f1, 0x38($s1)
    ctx->pc = 0x2c1560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c1564: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x2c1564u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x2c1568: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2c1568u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2c156c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2c156cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2c1570: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2c1570u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2c1574: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2c1574u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2c1578: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c1578u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c157c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c157cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c1580: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x2c1580u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c1584: 0x0  nop
    ctx->pc = 0x2c1584u;
    // NOP
    // 0x2c1588: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x2C1588u;
    {
        const bool branch_taken_0x2c1588 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c1588) {
            ctx->pc = 0x2C158Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1588u;
            // 0x2c158c: 0xc6010b4c  lwc1        $f1, 0xB4C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C15A4u;
            goto label_2c15a4;
        }
    }
    ctx->pc = 0x2C1590u;
    // 0x2c1590: 0x8e020698  lw          $v0, 0x698($s0)
    ctx->pc = 0x2c1590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1688)));
    // 0x2c1594: 0xae1202a8  sw          $s2, 0x2A8($s0)
    ctx->pc = 0x2c1594u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 680), GPR_U32(ctx, 18));
    // 0x2c1598: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2c1598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2c159c: 0xae020698  sw          $v0, 0x698($s0)
    ctx->pc = 0x2c159cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1688), GPR_U32(ctx, 2));
    // 0x2c15a0: 0xc6010b4c  lwc1        $f1, 0xB4C($s0)
    ctx->pc = 0x2c15a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c15a4:
    // 0x2c15a4: 0xc78090cc  lwc1        $f0, -0x6F34($gp)
    ctx->pc = 0x2c15a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c15a8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c15a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c15ac: 0x0  nop
    ctx->pc = 0x2c15acu;
    // NOP
    // 0x2c15b0: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x2C15B0u;
    {
        const bool branch_taken_0x2c15b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C15B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C15B0u;
        // 0x2c15b4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c15b0) {
            ctx->pc = 0x2C15E4u;
            goto label_2c15e4;
        }
    }
    ctx->pc = 0x2C15B8u;
    // 0x2c15b8: 0x8e020a90  lw          $v0, 0xA90($s0)
    ctx->pc = 0x2c15b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2704)));
    // 0x2c15bc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c15bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c15c0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C15C0u;
    {
        const bool branch_taken_0x2c15c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C15C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C15C0u;
        // 0x2c15c4: 0x24030800  addiu       $v1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c15c0) {
            ctx->pc = 0x2C15E4u;
            goto label_2c15e4;
        }
    }
    ctx->pc = 0x2C15C8u;
    // 0x2c15c8: 0x8e020a9c  lw          $v0, 0xA9C($s0)
    ctx->pc = 0x2c15c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2716)));
    // 0x2c15cc: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x2c15ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2c15d0: 0xae030aa4  sw          $v1, 0xAA4($s0)
    ctx->pc = 0x2c15d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2724), GPR_U32(ctx, 3));
    // 0x2c15d4: 0xae040a9c  sw          $a0, 0xA9C($s0)
    ctx->pc = 0x2c15d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2716), GPR_U32(ctx, 4));
    // 0x2c15d8: 0xae020aa0  sw          $v0, 0xAA0($s0)
    ctx->pc = 0x2c15d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2720), GPR_U32(ctx, 2));
label_2c15dc:
    // 0x2c15dc: 0xae000b4c  sw          $zero, 0xB4C($s0)
    ctx->pc = 0x2c15dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2892), GPR_U32(ctx, 0));
    // 0x2c15e0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2c15e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2c15e4:
    // 0x2c15e4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c15e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c15e8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2c15e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c15ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c15ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c15f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C15F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C15F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C15F0u;
        // 0x2c15f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C15F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C15F8u;
}
