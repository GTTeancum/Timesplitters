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

// Function: specialfxOccasionalRocketSmokeTick
// Address: 0x2ac510 - 0x2ac7b0
void specialfxOccasionalRocketSmokeTick_0x2ac510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("specialfxOccasionalRocketSmokeTick_0x2ac510");
#endif

    switch (ctx->pc) {
        case 0x2ac570u: goto label_2ac570;
        case 0x2ac5d4u: goto label_2ac5d4;
        case 0x2ac5dcu: goto label_2ac5dc;
        case 0x2ac658u: goto label_2ac658;
        case 0x2ac66cu: goto label_2ac66c;
        case 0x2ac6c0u: goto label_2ac6c0;
        case 0x2ac6d0u: goto label_2ac6d0;
        case 0x2ac6e0u: goto label_2ac6e0;
        case 0x2ac6f0u: goto label_2ac6f0;
        case 0x2ac6f8u: goto label_2ac6f8;
        default: break;
    }

    ctx->pc = 0x2ac510u;

    // 0x2ac510: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2ac510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2ac514: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x2ac514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x2ac518: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2ac518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2ac51c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ac51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ac520: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2ac520u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac524: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2ac524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2ac528: 0x2628018  mult        $s0, $s3, $v0
    ctx->pc = 0x2ac528u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2ac52c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2ac52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2ac530: 0x3c150037  lui         $s5, 0x37
    ctx->pc = 0x2ac530u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
    // 0x2ac534: 0x26b2c268  addiu       $s2, $s5, -0x3D98
    ctx->pc = 0x2ac534u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 4294951528));
    // 0x2ac538: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2ac538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2ac53c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2ac53cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2ac540: 0x26420048  addiu       $v0, $s2, 0x48
    ctx->pc = 0x2ac540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
    // 0x2ac544: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2ac544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2ac548: 0x2028821  addu        $s1, $s0, $v0
    ctx->pc = 0x2ac548u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2ac54c: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x2ac54cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2ac550: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2ac550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ac554: 0x14600046  bnez        $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x2AC554u;
    {
        const bool branch_taken_0x2ac554 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AC558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC554u;
        // 0x2ac558: 0x2403005c  addiu       $v1, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac554) {
            ctx->pc = 0x2AC670u;
            goto label_2ac670;
        }
    }
    ctx->pc = 0x2AC55Cu;
    // 0x2ac55c: 0x8f82b460  lw          $v0, -0x4BA0($gp)
    ctx->pc = 0x2ac55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
    // 0x2ac560: 0x18400044  blez        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x2AC560u;
    {
        const bool branch_taken_0x2ac560 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2AC564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC560u;
        // 0x2ac564: 0x26a5c268  addiu       $a1, $s5, -0x3D98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294951528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac560) {
            ctx->pc = 0x2AC674u;
            goto label_2ac674;
        }
    }
    ctx->pc = 0x2AC568u;
    // 0x2ac568: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2AC568u;
    SET_GPR_U32(ctx, 31, 0x2AC570u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2AC568u, 0x2AC570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC570u;
label_2ac570:
    // 0x2ac570: 0x8f84b460  lw          $a0, -0x4BA0($gp)
    ctx->pc = 0x2ac570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
    // 0x2ac574: 0x240307f8  addiu       $v1, $zero, 0x7F8
    ctx->pc = 0x2ac574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2040));
    // 0x2ac578: 0x26450034  addiu       $a1, $s2, 0x34
    ctx->pc = 0x2ac578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 52));
    // 0x2ac57c: 0xc7818ee8  lwc1        $f1, -0x7118($gp)
    ctx->pc = 0x2ac57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ac580: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x2ac580u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2ac584: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2AC584u;
    {
        const bool branch_taken_0x2ac584 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac584) {
            ctx->pc = 0x2AC588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AC584u;
            // 0x2ac588: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AC58Cu;
            goto label_2ac58c;
        }
    }
    ctx->pc = 0x2AC58Cu;
label_2ac58c:
    // 0x2ac58c: 0x205a021  addu        $s4, $s0, $a1
    ctx->pc = 0x2ac58cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x2ac590: 0x1812  mflo        $v1
    ctx->pc = 0x2ac590u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x2ac594: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2ac594u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2ac598: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x2ac598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac59c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ac59cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ac5a0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ac5a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2ac5a4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2ac5a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2ac5a8: 0x2010  mfhi        $a0
    ctx->pc = 0x2ac5a8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2ac5ac: 0x14820030  bne         $a0, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x2AC5ACu;
    {
        const bool branch_taken_0x2ac5ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AC5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC5ACu;
        // 0x2ac5b0: 0x2403005c  addiu       $v1, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac5ac) {
            ctx->pc = 0x2AC670u;
            goto label_2ac670;
        }
    }
    ctx->pc = 0x2AC5B4u;
    // 0x2ac5b4: 0x2646000c  addiu       $a2, $s2, 0xC
    ctx->pc = 0x2ac5b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x2ac5b8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2ac5b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ac5bc: 0x2063021  addu        $a2, $s0, $a2
    ctx->pc = 0x2ac5bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x2ac5c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ac5c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac5c4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2ac5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2ac5c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ac5c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac5cc: 0xc0a61de  jal         func_298778
    ctx->pc = 0x2AC5CCu;
    SET_GPR_U32(ctx, 31, 0x2AC5D4u);
    ctx->pc = 0x2AC5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC5CCu;
    // 0x2ac5d0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298778u, 0x2AC5CCu, 0x2AC5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC5D4u;
label_2ac5d4:
    // 0x2ac5d4: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2AC5D4u;
    SET_GPR_U32(ctx, 31, 0x2AC5DCu);
    ctx->pc = 0x2AC5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC5D4u;
    // 0x2ac5d8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2AC5D4u, 0x2AC5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC5DCu;
label_2ac5dc:
    // 0x2ac5dc: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AC5DCu;
    {
        const bool branch_taken_0x2ac5dc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2AC5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC5DCu;
        // 0x2ac5e0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac5dc) {
            ctx->pc = 0x2AC5F4u;
            goto label_2ac5f4;
        }
    }
    ctx->pc = 0x2AC5E4u;
    // 0x2ac5e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ac5e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ac5e8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2ac5e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2ac5ec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2AC5ECu;
    {
        const bool branch_taken_0x2ac5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC5ECu;
        // 0x2ac5f0: 0x2402005c  addiu       $v0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac5ec) {
            ctx->pc = 0x2AC60Cu;
            goto label_2ac60c;
        }
    }
    ctx->pc = 0x2AC5F4u;
label_2ac5f4:
    // 0x2ac5f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ac5f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ac5f8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ac5f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2ac5fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ac5fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ac600: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2ac600u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2ac604: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2ac604u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x2ac608: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x2ac608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_2ac60c:
    // 0x2ac60c: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2ac60cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2ac610: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ac610u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac614: 0x2622018  mult        $a0, $s3, $v0
    ctx->pc = 0x2ac614u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2ac618: 0x26b0c268  addiu       $s0, $s5, -0x3D98
    ctx->pc = 0x2ac618u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294951528));
    // 0x2ac61c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ac61cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ac620: 0x8f83b460  lw          $v1, -0x4BA0($gp)
    ctx->pc = 0x2ac620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
    // 0x2ac624: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x2ac624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x2ac628: 0x2041021  addu        $v0, $s0, $a0
    ctx->pc = 0x2ac628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2ac62c: 0x1860000f  blez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2AC62Cu;
    {
        const bool branch_taken_0x2ac62c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2AC630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC62Cu;
        // 0x2ac630: 0xac400030  sw          $zero, 0x30($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac62c) {
            ctx->pc = 0x2AC66Cu;
            goto label_2ac66c;
        }
    }
    ctx->pc = 0x2AC634u;
    // 0x2ac634: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x2ac634u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2ac638: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x2ac638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
    // 0x2ac63c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2ac63cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2ac640: 0x908021  addu        $s0, $a0, $s0
    ctx->pc = 0x2ac640u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2ac644: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ac644u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac648: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x2ac648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2ac64c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ac64cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac650: 0xc081566  jal         func_205598
    ctx->pc = 0x2AC650u;
    SET_GPR_U32(ctx, 31, 0x2AC658u);
    ctx->pc = 0x2AC654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC650u;
    // 0x2ac654: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x205598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205598u, 0x2AC650u, 0x2AC658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC658u;
label_2ac658:
    // 0x2ac658: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ac658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac65c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2ac65cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2ac660: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2ac660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2ac664: 0xc081566  jal         func_205598
    ctx->pc = 0x2AC664u;
    SET_GPR_U32(ctx, 31, 0x2AC66Cu);
    ctx->pc = 0x2AC668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC664u;
    // 0x2ac668: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205598u, 0x2AC664u, 0x2AC66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC66Cu;
label_2ac66c:
    // 0x2ac66c: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x2ac66cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_2ac670:
    // 0x2ac670: 0x26a5c268  addiu       $a1, $s5, -0x3D98
    ctx->pc = 0x2ac670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294951528));
label_2ac674:
    // 0x2ac674: 0x2632018  mult        $a0, $s3, $v1
    ctx->pc = 0x2ac674u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2ac678: 0x24a20048  addiu       $v0, $a1, 0x48
    ctx->pc = 0x2ac678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 72));
    // 0x2ac67c: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x2ac67cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ac680: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2ac680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ac684: 0x10600040  beqz        $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x2AC684u;
    {
        const bool branch_taken_0x2ac684 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC684u;
        // 0x2ac688: 0xa41021  addu        $v0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac684) {
            ctx->pc = 0x2AC788u;
            goto label_2ac788;
        }
    }
    ctx->pc = 0x2AC68Cu;
    // 0x2ac68c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2ac68cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2ac690: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ac690u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac694: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x2ac694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ac698: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ac698u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ac69c: 0x0  nop
    ctx->pc = 0x2ac69cu;
    // NOP
    // 0x2ac6a0: 0x4500002e  bc1f        . + 4 + (0x2E << 2)
    ctx->pc = 0x2AC6A0u;
    {
        const bool branch_taken_0x2ac6a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AC6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC6A0u;
        // 0x2ac6a4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac6a0) {
            ctx->pc = 0x2AC75Cu;
            goto label_2ac75c;
        }
    }
    ctx->pc = 0x2AC6A8u;
    // 0x2ac6a8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2ac6a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2ac6ac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ac6acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ac6b0: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x2ac6b0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
    // 0x2ac6b4: 0x26105c60  addiu       $s0, $s0, 0x5C60
    ctx->pc = 0x2ac6b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 23648));
    // 0x2ac6b8: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2AC6B8u;
    SET_GPR_U32(ctx, 31, 0x2AC6C0u);
    ctx->pc = 0x2AC6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC6B8u;
    // 0x2ac6bc: 0x460c0b02  mul.s       $f12, $f1, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2AC6B8u, 0x2AC6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC6C0u;
label_2ac6c0:
    // 0x2ac6c0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2ac6c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2ac6c4: 0xdc259738  ld          $a1, -0x68C8($at)
    ctx->pc = 0x2ac6c4u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A9738u));
    // 0x2ac6c8: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2AC6C8u;
    SET_GPR_U32(ctx, 31, 0x2AC6D0u);
    ctx->pc = 0x2AC6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC6C8u;
    // 0x2ac6cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2AC6C8u, 0x2AC6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC6D0u;
label_2ac6d0:
    // 0x2ac6d0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2ac6d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2ac6d4: 0xdc259740  ld          $a1, -0x68C0($at)
    ctx->pc = 0x2ac6d4u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A9740u));
    // 0x2ac6d8: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2AC6D8u;
    SET_GPR_U32(ctx, 31, 0x2AC6E0u);
    ctx->pc = 0x2AC6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC6D8u;
    // 0x2ac6dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2AC6D8u, 0x2AC6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC6E0u;
label_2ac6e0:
    // 0x2ac6e0: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x2ac6e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x2ac6e4: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x2ac6e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x2ac6e8: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2AC6E8u;
    SET_GPR_U32(ctx, 31, 0x2AC6F0u);
    ctx->pc = 0x2AC6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC6E8u;
    // 0x2ac6ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2AC6E8u, 0x2AC6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC6F0u;
label_2ac6f0:
    // 0x2ac6f0: 0xc0b8e1c  jal         func_2E3870
    ctx->pc = 0x2AC6F0u;
    SET_GPR_U32(ctx, 31, 0x2AC6F8u);
    ctx->pc = 0x2AC6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC6F0u;
    // 0x2ac6f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3870u, 0x2AC6F0u, 0x2AC6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC6F8u;
label_2ac6f8:
    // 0x2ac6f8: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x2ac6f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x2ac6fc: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x2ac6fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x2ac700: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2ac700u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ac704: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ac704u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ac708: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ac708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ac70c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ac70cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ac710: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2ac710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2ac714: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ac714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ac718: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2ac718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac71c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2ac71cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ac720: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2ac720u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2ac724: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2ac724u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ac728: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2ac728u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ac72c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2ac72cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ac730: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ac730u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ac734: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2ac734u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ac738: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2ac738u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac73c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ac73cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ac740: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ac740u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2ac744: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2ac744u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2ac748: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x2ac748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ac74c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2ac74cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ac750: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2ac750u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2ac754: 0x80a5b94  j           func_296E50
    ctx->pc = 0x2AC754u;
    ctx->pc = 0x2AC758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC754u;
    // 0x2ac758: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296E50u;
    particleUpdateRate_0x296e50(rdram, ctx, runtime); return;
    ctx->pc = 0x2AC75Cu;
label_2ac75c:
    // 0x2ac75c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2ac75cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ac760: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2ac760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ac764: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2ac764u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ac768: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2ac768u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ac76c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2ac76cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ac770: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2ac770u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ac774: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2ac774u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac778: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ac778u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ac77c: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x2ac77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ac780: 0x80a5b94  j           func_296E50
    ctx->pc = 0x2AC780u;
    ctx->pc = 0x2AC784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC780u;
    // 0x2ac784: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296E50u;
    particleUpdateRate_0x296e50(rdram, ctx, runtime); return;
    ctx->pc = 0x2AC788u;
label_2ac788:
    // 0x2ac788: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2ac788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ac78c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2ac78cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ac790: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2ac790u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ac794: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2ac794u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ac798: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2ac798u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ac79c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2ac79cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac7a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ac7a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ac7a4: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x2ac7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ac7a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC7A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC7A8u;
        // 0x2ac7ac: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC7A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC7B0u;
}
