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

// Function: enemyPillarAlien
// Address: 0x2ca478 - 0x2ca6a8
void enemyPillarAlien_0x2ca478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("enemyPillarAlien_0x2ca478");
#endif

    switch (ctx->pc) {
        case 0x2ca4a8u: goto label_2ca4a8;
        case 0x2ca4b0u: goto label_2ca4b0;
        case 0x2ca4d8u: goto label_2ca4d8;
        case 0x2ca558u: goto label_2ca558;
        case 0x2ca574u: goto label_2ca574;
        case 0x2ca5c0u: goto label_2ca5c0;
        case 0x2ca624u: goto label_2ca624;
        case 0x2ca648u: goto label_2ca648;
        case 0x2ca658u: goto label_2ca658;
        case 0x2ca678u: goto label_2ca678;
        default: break;
    }

    ctx->pc = 0x2ca478u;

    // 0x2ca478: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2ca478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2ca47c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ca47cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca480: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2ca480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2ca484: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2ca484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2ca488: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2ca488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2ca48c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2ca48cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2ca490: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ca490u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca494: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x2ca494u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2ca498: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2ca498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca49c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2ca49cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2ca4a0: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x2CA4A0u;
    SET_GPR_U32(ctx, 31, 0x2CA4A8u);
    ctx->pc = 0x2CA4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA4A0u;
    // 0x2ca4a4: 0x8e300160  lw          $s0, 0x160($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x2CA4A0u, 0x2CA4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA4A8u;
label_2ca4a8:
    // 0x2ca4a8: 0xc089de4  jal         func_227790
    ctx->pc = 0x2CA4A8u;
    SET_GPR_U32(ctx, 31, 0x2CA4B0u);
    ctx->pc = 0x227790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227790u, 0x2CA4A8u, 0x2CA4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA4B0u;
label_2ca4b0:
    // 0x2ca4b0: 0x8f889f74  lw          $t0, -0x608C($gp)
    ctx->pc = 0x2ca4b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x2ca4b4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2ca4b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca4b8: 0x1900001d  blez        $t0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2CA4B8u;
    {
        const bool branch_taken_0x2ca4b8 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x2CA4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA4B8u;
        // 0x2ca4bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca4b8) {
            ctx->pc = 0x2CA530u;
            goto label_2ca530;
        }
    }
    ctx->pc = 0x2CA4C0u;
    // 0x2ca4c0: 0x8f87b230  lw          $a3, -0x4DD0($gp)
    ctx->pc = 0x2ca4c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x2ca4c4: 0xc6250030  lwc1        $f5, 0x30($s1)
    ctx->pc = 0x2ca4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2ca4c8: 0xc6240034  lwc1        $f4, 0x34($s1)
    ctx->pc = 0x2ca4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2ca4cc: 0xc6230038  lwc1        $f3, 0x38($s1)
    ctx->pc = 0x2ca4ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ca4d0: 0x8e060aa8  lw          $a2, 0xAA8($s0)
    ctx->pc = 0x2ca4d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2728)));
    // 0x2ca4d4: 0x0  nop
    ctx->pc = 0x2ca4d4u;
    // NOP
label_2ca4d8:
    // 0x2ca4d8: 0x2402071c  addiu       $v0, $zero, 0x71C
    ctx->pc = 0x2ca4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1820));
    // 0x2ca4dc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2ca4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2ca4e0: 0xa22018  mult        $a0, $a1, $v0
    ctx->pc = 0x2ca4e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2ca4e4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2ca4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2ca4e8: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x2ca4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2ca4ec: 0xc440008c  lwc1        $f0, 0x8C($v0)
    ctx->pc = 0x2ca4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca4f0: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x2ca4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x2ca4f4: 0xc4420090  lwc1        $f2, 0x90($v0)
    ctx->pc = 0x2ca4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ca4f8: 0xa8182a  slt         $v1, $a1, $t0
    ctx->pc = 0x2ca4f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2ca4fc: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x2ca4fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x2ca500: 0xc4410094  lwc1        $f1, 0x94($v0)
    ctx->pc = 0x2ca500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ca504: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x2ca504u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x2ca508: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2ca508u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2ca50c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2ca50cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2ca510: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2ca510u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2ca514: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2ca514u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2ca518: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2ca518u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2ca51c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ca51cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ca520: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2CA520u;
    {
        const bool branch_taken_0x2ca520 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CA524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA520u;
        // 0x2ca524: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca520) {
            ctx->pc = 0x2CA4D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ca4d8;
        }
    }
    ctx->pc = 0x2CA528u;
    // 0x2ca528: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2CA528u;
    {
        const bool branch_taken_0x2ca528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca528) {
            ctx->pc = 0x2CA534u;
            goto label_2ca534;
        }
    }
    ctx->pc = 0x2CA530u;
label_2ca530:
    // 0x2ca530: 0x8e060aa8  lw          $a2, 0xAA8($s0)
    ctx->pc = 0x2ca530u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2728)));
label_2ca534:
    // 0x2ca534: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CA534u;
    {
        const bool branch_taken_0x2ca534 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA534u;
        // 0x2ca538: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca534) {
            ctx->pc = 0x2CA54Cu;
            goto label_2ca54c;
        }
    }
    ctx->pc = 0x2CA53Cu;
    // 0x2ca53c: 0x10c20036  beq         $a2, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x2CA53Cu;
    {
        const bool branch_taken_0x2ca53c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CA540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA53Cu;
        // 0x2ca540: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca53c) {
            ctx->pc = 0x2CA618u;
            goto label_2ca618;
        }
    }
    ctx->pc = 0x2CA544u;
    // 0x2ca544: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x2CA544u;
    {
        const bool branch_taken_0x2ca544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA544u;
        // 0x2ca548: 0xdfb20030  ld          $s2, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca544) {
            ctx->pc = 0x2CA694u;
            goto label_2ca694;
        }
    }
    ctx->pc = 0x2CA54Cu;
label_2ca54c:
    // 0x2ca54c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ca54cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca550: 0xc085608  jal         func_215820
    ctx->pc = 0x2CA550u;
    SET_GPR_U32(ctx, 31, 0x2CA558u);
    ctx->pc = 0x2CA554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA550u;
    // 0x2ca554: 0x240501dc  addiu       $a1, $zero, 0x1DC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 476));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2CA550u, 0x2CA558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA558u;
label_2ca558:
    // 0x2ca558: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CA558u;
    {
        const bool branch_taken_0x2ca558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CA55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA558u;
        // 0x2ca55c: 0x8f849f74  lw          $a0, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca558) {
            ctx->pc = 0x2CA578u;
            goto label_2ca578;
        }
    }
    ctx->pc = 0x2CA560u;
    // 0x2ca560: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2ca560u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ca564: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ca564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca568: 0x240501dc  addiu       $a1, $zero, 0x1DC
    ctx->pc = 0x2ca568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 476));
    // 0x2ca56c: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2CA56Cu;
    SET_GPR_U32(ctx, 31, 0x2CA574u);
    ctx->pc = 0x2CA570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA56Cu;
    // 0x2ca570: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2CA56Cu, 0x2CA574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA574u;
label_2ca574:
    // 0x2ca574: 0x8f849f74  lw          $a0, -0x608C($gp)
    ctx->pc = 0x2ca574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
label_2ca578:
    // 0x2ca578: 0x18800044  blez        $a0, . + 4 + (0x44 << 2)
    ctx->pc = 0x2CA578u;
    {
        const bool branch_taken_0x2ca578 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2CA57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA578u;
        // 0x2ca57c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca578) {
            ctx->pc = 0x2CA68Cu;
            goto label_2ca68c;
        }
    }
    ctx->pc = 0x2CA580u;
    // 0x2ca580: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x2ca580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ca584: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2ca584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x2ca588: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ca588u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca58c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2ca58cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ca590: 0x0  nop
    ctx->pc = 0x2ca590u;
    // NOP
    // 0x2ca594: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2CA594u;
    {
        const bool branch_taken_0x2ca594 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CA598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA594u;
        // 0x2ca598: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca594) {
            ctx->pc = 0x2CA5C0u;
            goto label_2ca5c0;
        }
    }
    ctx->pc = 0x2CA59Cu;
    // 0x2ca59c: 0x8f82b230  lw          $v0, -0x4DD0($gp)
    ctx->pc = 0x2ca59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x2ca5a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ca5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ca5a4: 0xae030aa8  sw          $v1, 0xAA8($s0)
    ctx->pc = 0x2ca5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2728), GPR_U32(ctx, 3));
    // 0x2ca5a8: 0x8c440180  lw          $a0, 0x180($v0)
    ctx->pc = 0x2ca5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 384)));
    // 0x2ca5ac: 0xae000aac  sw          $zero, 0xAAC($s0)
    ctx->pc = 0x2ca5acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2732), GPR_U32(ctx, 0));
    // 0x2ca5b0: 0xae040ae4  sw          $a0, 0xAE4($s0)
    ctx->pc = 0x2ca5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2788), GPR_U32(ctx, 4));
    // 0x2ca5b4: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x2CA5B4u;
    {
        const bool branch_taken_0x2ca5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA5B4u;
        // 0x2ca5b8: 0xae000b4c  sw          $zero, 0xB4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2892), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca5b4) {
            ctx->pc = 0x2CA68Cu;
            goto label_2ca68c;
        }
    }
    ctx->pc = 0x2CA5BCu;
    // 0x2ca5bc: 0x0  nop
    ctx->pc = 0x2ca5bcu;
    // NOP
label_2ca5c0:
    // 0x2ca5c0: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x2ca5c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2ca5c4: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x2CA5C4u;
    {
        const bool branch_taken_0x2ca5c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA5C4u;
        // 0x2ca5c8: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca5c4) {
            ctx->pc = 0x2CA68Cu;
            goto label_2ca68c;
        }
    }
    ctx->pc = 0x2CA5CCu;
    // 0x2ca5cc: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2ca5ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x2ca5d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ca5d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ca5d4: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x2ca5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x2ca5d8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2ca5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca5dc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2ca5dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ca5e0: 0x0  nop
    ctx->pc = 0x2ca5e0u;
    // NOP
    // 0x2ca5e4: 0x4502fff6  bc1fl       . + 4 + (-0xA << 2)
    ctx->pc = 0x2CA5E4u;
    {
        const bool branch_taken_0x2ca5e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ca5e4) {
            ctx->pc = 0x2CA5E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA5E4u;
            // 0x2ca5e8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA5C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ca5c0;
        }
    }
    ctx->pc = 0x2CA5ECu;
    // 0x2ca5ec: 0x2403071c  addiu       $v1, $zero, 0x71C
    ctx->pc = 0x2ca5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1820));
    // 0x2ca5f0: 0x8f84b230  lw          $a0, -0x4DD0($gp)
    ctx->pc = 0x2ca5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x2ca5f4: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x2ca5f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2ca5f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ca5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ca5fc: 0xae020aa8  sw          $v0, 0xAA8($s0)
    ctx->pc = 0x2ca5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2728), GPR_U32(ctx, 2));
    // 0x2ca600: 0xae000aac  sw          $zero, 0xAAC($s0)
    ctx->pc = 0x2ca600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2732), GPR_U32(ctx, 0));
    // 0x2ca604: 0xae000b4c  sw          $zero, 0xB4C($s0)
    ctx->pc = 0x2ca604u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2892), GPR_U32(ctx, 0));
    // 0x2ca608: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ca608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ca60c: 0x8c620180  lw          $v0, 0x180($v1)
    ctx->pc = 0x2ca60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 384)));
    // 0x2ca610: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2CA610u;
    {
        const bool branch_taken_0x2ca610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA610u;
        // 0x2ca614: 0xae020ae4  sw          $v0, 0xAE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2788), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca610) {
            ctx->pc = 0x2CA68Cu;
            goto label_2ca68c;
        }
    }
    ctx->pc = 0x2CA618u;
label_2ca618:
    // 0x2ca618: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ca618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca61c: 0xc085608  jal         func_215820
    ctx->pc = 0x2CA61Cu;
    SET_GPR_U32(ctx, 31, 0x2CA624u);
    ctx->pc = 0x2CA620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA61Cu;
    // 0x2ca620: 0x240501db  addiu       $a1, $zero, 0x1DB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 475));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2CA61Cu, 0x2CA624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA624u;
label_2ca624:
    // 0x2ca624: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2CA624u;
    {
        const bool branch_taken_0x2ca624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CA628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA624u;
        // 0x2ca628: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca624) {
            ctx->pc = 0x2CA650u;
            goto label_2ca650;
        }
    }
    ctx->pc = 0x2CA62Cu;
    // 0x2ca62c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2ca62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ca630: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2ca630u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ca634: 0x240501db  addiu       $a1, $zero, 0x1DB
    ctx->pc = 0x2ca634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 475));
    // 0x2ca638: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ca638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ca63c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2ca63cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2ca640: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2CA640u;
    SET_GPR_U32(ctx, 31, 0x2CA648u);
    ctx->pc = 0x2CA644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA640u;
    // 0x2ca644: 0xae020104  sw          $v0, 0x104($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2CA640u, 0x2CA648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA648u;
label_2ca648:
    // 0x2ca648: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2CA648u;
    {
        const bool branch_taken_0x2ca648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA648u;
        // 0x2ca64c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca648) {
            ctx->pc = 0x2CA690u;
            goto label_2ca690;
        }
    }
    ctx->pc = 0x2CA650u;
label_2ca650:
    // 0x2ca650: 0xc0856c0  jal         func_215B00
    ctx->pc = 0x2CA650u;
    SET_GPR_U32(ctx, 31, 0x2CA658u);
    ctx->pc = 0x2CA654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA650u;
    // 0x2ca654: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215B00u, 0x2CA650u, 0x2CA658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA658u;
label_2ca658:
    // 0x2ca658: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2CA658u;
    {
        const bool branch_taken_0x2ca658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA658u;
        // 0x2ca65c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca658) {
            ctx->pc = 0x2CA68Cu;
            goto label_2ca68c;
        }
    }
    ctx->pc = 0x2CA660u;
    // 0x2ca660: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2ca660u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2ca664: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ca664u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ca668: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2ca668u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2ca66c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2ca66cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ca670: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2CA670u;
    SET_GPR_U32(ctx, 31, 0x2CA678u);
    ctx->pc = 0x2CA674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA670u;
    // 0x2ca674: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2CA670u, 0x2CA678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA678u;
label_2ca678:
    // 0x2ca678: 0x8e030a9c  lw          $v1, 0xA9C($s0)
    ctx->pc = 0x2ca678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2716)));
    // 0x2ca67c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2ca67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2ca680: 0xae020a9c  sw          $v0, 0xA9C($s0)
    ctx->pc = 0x2ca680u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2716), GPR_U32(ctx, 2));
    // 0x2ca684: 0xe6140b4c  swc1        $f20, 0xB4C($s0)
    ctx->pc = 0x2ca684u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2892), bits); }
    // 0x2ca688: 0xae030aa0  sw          $v1, 0xAA0($s0)
    ctx->pc = 0x2ca688u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2720), GPR_U32(ctx, 3));
label_2ca68c:
    // 0x2ca68c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2ca68cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2ca690:
    // 0x2ca690: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2ca690u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2ca694:
    // 0x2ca694: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2ca694u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ca698: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2ca698u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ca69c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2ca69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ca6a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA6A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA6A0u;
        // 0x2ca6a4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA6A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CA6A8u;
}
