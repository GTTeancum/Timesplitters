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

// Function: obinstCalcAmbientLight
// Address: 0x25aae0 - 0x25bc88
void obinstCalcAmbientLight_0x25aae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("obinstCalcAmbientLight_0x25aae0");
#endif

    switch (ctx->pc) {
        case 0x25aed0u: goto label_25aed0;
        case 0x25af28u: goto label_25af28;
        case 0x25af78u: goto label_25af78;
        case 0x25b048u: goto label_25b048;
        case 0x25b0a0u: goto label_25b0a0;
        case 0x25b0e0u: goto label_25b0e0;
        case 0x25b0f0u: goto label_25b0f0;
        case 0x25b13cu: goto label_25b13c;
        case 0x25b324u: goto label_25b324;
        case 0x25b5e0u: goto label_25b5e0;
        case 0x25b714u: goto label_25b714;
        case 0x25b8a0u: goto label_25b8a0;
        case 0x25ba70u: goto label_25ba70;
        case 0x25ba88u: goto label_25ba88;
        case 0x25ba9cu: goto label_25ba9c;
        default: break;
    }

    ctx->pc = 0x25aae0u;

    // 0x25aae0: 0x27bdfd70  addiu       $sp, $sp, -0x290
    ctx->pc = 0x25aae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966640));
    // 0x25aae4: 0x8f83a294  lw          $v1, -0x5D6C($gp)
    ctx->pc = 0x25aae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943380)));
    // 0x25aae8: 0xafa40120  sw          $a0, 0x120($sp)
    ctx->pc = 0x25aae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 4));
    // 0x25aaec: 0xffbf0250  sd          $ra, 0x250($sp)
    ctx->pc = 0x25aaecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 592), GPR_U64(ctx, 31));
    // 0x25aaf0: 0xffbe0240  sd          $fp, 0x240($sp)
    ctx->pc = 0x25aaf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 30));
    // 0x25aaf4: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x25aaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x25aaf8: 0xffb70230  sd          $s7, 0x230($sp)
    ctx->pc = 0x25aaf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 23));
    // 0x25aafc: 0xffb60220  sd          $s6, 0x220($sp)
    ctx->pc = 0x25aafcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 544), GPR_U64(ctx, 22));
    // 0x25ab00: 0xffb50210  sd          $s5, 0x210($sp)
    ctx->pc = 0x25ab00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 21));
    // 0x25ab04: 0xffb40200  sd          $s4, 0x200($sp)
    ctx->pc = 0x25ab04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 20));
    // 0x25ab08: 0xffb301f0  sd          $s3, 0x1F0($sp)
    ctx->pc = 0x25ab08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 496), GPR_U64(ctx, 19));
    // 0x25ab0c: 0xffb201e0  sd          $s2, 0x1E0($sp)
    ctx->pc = 0x25ab0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 18));
    // 0x25ab10: 0xffb101d0  sd          $s1, 0x1D0($sp)
    ctx->pc = 0x25ab10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 17));
    // 0x25ab14: 0xffb001c0  sd          $s0, 0x1C0($sp)
    ctx->pc = 0x25ab14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 16));
    // 0x25ab18: 0xe7b80280  swc1        $f24, 0x280($sp)
    ctx->pc = 0x25ab18u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 640), bits); }
    // 0x25ab1c: 0xe7b70278  swc1        $f23, 0x278($sp)
    ctx->pc = 0x25ab1cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 632), bits); }
    // 0x25ab20: 0xe7b60270  swc1        $f22, 0x270($sp)
    ctx->pc = 0x25ab20u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 624), bits); }
    // 0x25ab24: 0xe7b50268  swc1        $f21, 0x268($sp)
    ctx->pc = 0x25ab24u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 616), bits); }
    // 0x25ab28: 0xe7b40260  swc1        $f20, 0x260($sp)
    ctx->pc = 0x25ab28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 608), bits); }
    // 0x25ab2c: 0x8c8200f4  lw          $v0, 0xF4($a0)
    ctx->pc = 0x25ab2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x25ab30: 0xafa50124  sw          $a1, 0x124($sp)
    ctx->pc = 0x25ab30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 5));
    // 0x25ab34: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x25ab34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
    // 0x25ab38: 0x3c02c18f  lui         $v0, 0xC18F
    ctx->pc = 0x25ab38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49551 << 16));
    // 0x25ab3c: 0x8f84b460  lw          $a0, -0x4BA0($gp)
    ctx->pc = 0x25ab3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
    // 0x25ab40: 0x34429c19  ori         $v0, $v0, 0x9C19
    ctx->pc = 0x25ab40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39961);
    // 0x25ab44: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x25ab44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x25ab48: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x25ab48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x25ab4c: 0x8fa90128  lw          $t1, 0x128($sp)
    ctx->pc = 0x25ab4cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x25ab50: 0x8ca5000c  lw          $a1, 0xC($a1)
    ctx->pc = 0x25ab50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x25ab54: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x25ab54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x25ab58: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x25ab58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x25ab5c: 0x25280070  addiu       $t0, $t1, 0x70
    ctx->pc = 0x25ab5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 112));
    // 0x25ab60: 0xafa5012c  sw          $a1, 0x12C($sp)
    ctx->pc = 0x25ab60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 5));
    // 0x25ab64: 0x24c60030  addiu       $a2, $a2, 0x30
    ctx->pc = 0x25ab64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x25ab68: 0x8f859da8  lw          $a1, -0x6258($gp)
    ctx->pc = 0x25ab68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942120)));
    // 0x25ab6c: 0xafa60130  sw          $a2, 0x130($sp)
    ctx->pc = 0x25ab6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 6));
    // 0x25ab70: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25AB70u;
    {
        const bool branch_taken_0x25ab70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25AB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AB70u;
        // 0x25ab74: 0x348c3  sra         $t1, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ab70) {
            ctx->pc = 0x25AB8Cu;
            goto label_25ab8c;
        }
    }
    ctx->pc = 0x25AB78u;
    // 0x25ab78: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x25ab78u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x25ab7c: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x25AB7Cu;
    {
        const bool branch_taken_0x25ab7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ab7c) {
            ctx->pc = 0x25AB80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25AB7Cu;
            // 0x25ab80: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x25AB84u;
            goto label_25ab84;
        }
    }
    ctx->pc = 0x25AB84u;
label_25ab84:
    // 0x25ab84: 0x1012  mflo        $v0
    ctx->pc = 0x25ab84u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x25ab88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x25ab88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25ab8c:
    // 0x25ab8c: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x25ab8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x25ab90: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25ab90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ab94: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x25ab94u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ab98: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x25ab98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x25ab9c: 0xafa00134  sw          $zero, 0x134($sp)
    ctx->pc = 0x25ab9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 0));
    // 0x25aba0: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x25aba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x25aba4: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x25ABA4u;
    {
        const bool branch_taken_0x25aba4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x25ABA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ABA4u;
        // 0x25aba8: 0xafa00138  sw          $zero, 0x138($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25aba4) {
            ctx->pc = 0x25ABF0u;
            goto label_25abf0;
        }
    }
    ctx->pc = 0x25ABACu;
    // 0x25abac: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x25abacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x25abb0: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x25abb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x25abb4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x25abb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x25abb8: 0xafbd0130  sw          $sp, 0x130($sp)
    ctx->pc = 0x25abb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 29));
    // 0x25abbc: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x25abbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25abc0: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x25abc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25abc4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25abc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x25abc8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x25abc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x25abcc: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x25abccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25abd0: 0xc4810034  lwc1        $f1, 0x34($a0)
    ctx->pc = 0x25abd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25abd4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x25abd4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x25abd8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x25abd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x25abdc: 0xc4420038  lwc1        $f2, 0x38($v0)
    ctx->pc = 0x25abdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25abe0: 0xc4800038  lwc1        $f0, 0x38($a0)
    ctx->pc = 0x25abe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25abe4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x25abe4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x25abe8: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x25ABE8u;
    {
        const bool branch_taken_0x25abe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25ABECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ABE8u;
        // 0x25abec: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25abe8) {
            ctx->pc = 0x25AC74u;
            goto label_25ac74;
        }
    }
    ctx->pc = 0x25ABF0u;
label_25abf0:
    // 0x25abf0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x25abf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x25abf4: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x25ABF4u;
    {
        const bool branch_taken_0x25abf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x25ABF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ABF4u;
        // 0x25abf8: 0x8fa3012c  lw          $v1, 0x12C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25abf4) {
            ctx->pc = 0x25AC28u;
            goto label_25ac28;
        }
    }
    ctx->pc = 0x25ABFCu;
    // 0x25abfc: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x25abfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x25ac00: 0x8cc20164  lw          $v0, 0x164($a2)
    ctx->pc = 0x25ac00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 356)));
    // 0x25ac04: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25AC04u;
    {
        const bool branch_taken_0x25ac04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AC04u;
        // 0x25ac08: 0x24420098  addiu       $v0, $v0, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ac04) {
            ctx->pc = 0x25AC14u;
            goto label_25ac14;
        }
    }
    ctx->pc = 0x25AC0Cu;
    // 0x25ac0c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x25AC0Cu;
    {
        const bool branch_taken_0x25ac0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AC0Cu;
        // 0x25ac10: 0xafa20130  sw          $v0, 0x130($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ac0c) {
            ctx->pc = 0x25AC74u;
            goto label_25ac74;
        }
    }
    ctx->pc = 0x25AC14u;
label_25ac14:
    // 0x25ac14: 0x8fab0128  lw          $t3, 0x128($sp)
    ctx->pc = 0x25ac14u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x25ac18: 0x8d620160  lw          $v0, 0x160($t3)
    ctx->pc = 0x25ac18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 352)));
    // 0x25ac1c: 0x24420af8  addiu       $v0, $v0, 0xAF8
    ctx->pc = 0x25ac1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2808));
    // 0x25ac20: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x25AC20u;
    {
        const bool branch_taken_0x25ac20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AC20u;
        // 0x25ac24: 0xafa20130  sw          $v0, 0x130($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ac20) {
            ctx->pc = 0x25AC74u;
            goto label_25ac74;
        }
    }
    ctx->pc = 0x25AC28u;
label_25ac28:
    // 0x25ac28: 0x2462ff37  addiu       $v0, $v1, -0xC9
    ctx->pc = 0x25ac28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967095));
    // 0x25ac2c: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x25ac2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x25ac30: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x25AC30u;
    {
        const bool branch_taken_0x25ac30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AC30u;
        // 0x25ac34: 0x8fa4012c  lw          $a0, 0x12C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ac30) {
            ctx->pc = 0x25AC74u;
            goto label_25ac74;
        }
    }
    ctx->pc = 0x25AC38u;
    // 0x25ac38: 0x2402071c  addiu       $v0, $zero, 0x71C
    ctx->pc = 0x25ac38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1820));
    // 0x25ac3c: 0x3c03fffa  lui         $v1, 0xFFFA
    ctx->pc = 0x25ac3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65530 << 16));
    // 0x25ac40: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x25ac40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25ac44: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x25ac44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x25ac48: 0x34636b04  ori         $v1, $v1, 0x6B04
    ctx->pc = 0x25ac48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)27396);
    // 0x25ac4c: 0x8f84b230  lw          $a0, -0x4DD0($gp)
    ctx->pc = 0x25ac4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x25ac50: 0xafa60134  sw          $a2, 0x134($sp)
    ctx->pc = 0x25ac50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 6));
    // 0x25ac54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25ac54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25ac58: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x25ac58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x25ac5c: 0xafa40138  sw          $a0, 0x138($sp)
    ctx->pc = 0x25ac5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 4));
    // 0x25ac60: 0x24820098  addiu       $v0, $a0, 0x98
    ctx->pc = 0x25ac60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 152));
    // 0x25ac64: 0x24880158  addiu       $t0, $a0, 0x158
    ctx->pc = 0x25ac64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 344));
    // 0x25ac68: 0x8c8b031c  lw          $t3, 0x31C($a0)
    ctx->pc = 0x25ac68u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 796)));
    // 0x25ac6c: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x25ac6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
    // 0x25ac70: 0xafab012c  sw          $t3, 0x12C($sp)
    ctx->pc = 0x25ac70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 11));
label_25ac74:
    // 0x25ac74: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x25ac74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x25ac78: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x25ac78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x25ac7c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x25ac7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x25ac80: 0x8c64021c  lw          $a0, 0x21C($v1)
    ctx->pc = 0x25ac80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
    // 0x25ac84: 0x10820035  beq         $a0, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x25AC84u;
    {
        const bool branch_taken_0x25ac84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x25AC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AC84u;
        // 0x25ac88: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ac84) {
            ctx->pc = 0x25AD5Cu;
            goto label_25ad5c;
        }
    }
    ctx->pc = 0x25AC8Cu;
    // 0x25ac8c: 0x31230003  andi        $v1, $t1, 0x3
    ctx->pc = 0x25ac8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
    // 0x25ac90: 0x30a20003  andi        $v0, $a1, 0x3
    ctx->pc = 0x25ac90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
    // 0x25ac94: 0x10620031  beq         $v1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x25AC94u;
    {
        const bool branch_taken_0x25ac94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25AC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AC94u;
        // 0x25ac98: 0x308200ff  andi        $v0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ac94) {
            ctx->pc = 0x25AD5Cu;
            goto label_25ad5c;
        }
    }
    ctx->pc = 0x25AC9Cu;
    // 0x25ac9c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25AC9Cu;
    {
        const bool branch_taken_0x25ac9c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x25ACA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AC9Cu;
        // 0x25aca0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ac9c) {
            ctx->pc = 0x25ACB0u;
            goto label_25acb0;
        }
    }
    ctx->pc = 0x25ACA4u;
    // 0x25aca4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25aca4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25aca8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25ACA8u;
    {
        const bool branch_taken_0x25aca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25ACACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ACA8u;
        // 0x25acac: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25aca8) {
            ctx->pc = 0x25ACC4u;
            goto label_25acc4;
        }
    }
    ctx->pc = 0x25ACB0u;
label_25acb0:
    // 0x25acb0: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x25acb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x25acb4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x25acb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x25acb8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25acb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25acbc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x25acbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x25acc0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x25acc0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_25acc4:
    // 0x25acc4: 0xc78082e0  lwc1        $f0, -0x7D20($gp)
    ctx->pc = 0x25acc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25acc8: 0x61202  srl         $v0, $a2, 8
    ctx->pc = 0x25acc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x25accc: 0x8fa50124  lw          $a1, 0x124($sp)
    ctx->pc = 0x25acccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x25acd0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x25acd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25acd4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x25acd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25acd8: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25ACD8u;
    {
        const bool branch_taken_0x25acd8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x25ACDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ACD8u;
        // 0x25acdc: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25acd8) {
            ctx->pc = 0x25ACECu;
            goto label_25acec;
        }
    }
    ctx->pc = 0x25ACE0u;
    // 0x25ace0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x25ace0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25ace4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x25ACE4u;
    {
        const bool branch_taken_0x25ace4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25ACE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ACE4u;
        // 0x25ace8: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ace4) {
            ctx->pc = 0x25AD04u;
            goto label_25ad04;
        }
    }
    ctx->pc = 0x25ACECu;
label_25acec:
    // 0x25acec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25acecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x25acf0: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x25acf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x25acf4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x25acf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x25acf8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25acf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25acfc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x25acfcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x25ad00: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x25ad00u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_25ad04:
    // 0x25ad04: 0xc78082e4  lwc1        $f0, -0x7D1C($gp)
    ctx->pc = 0x25ad04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ad08: 0x61402  srl         $v0, $a2, 16
    ctx->pc = 0x25ad08u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
    // 0x25ad0c: 0x8fa60124  lw          $a2, 0x124($sp)
    ctx->pc = 0x25ad0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x25ad10: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x25ad10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25ad14: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x25ad14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25ad18: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25AD18u;
    {
        const bool branch_taken_0x25ad18 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x25AD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AD18u;
        // 0x25ad1c: 0xe4c00004  swc1        $f0, 0x4($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ad18) {
            ctx->pc = 0x25AD2Cu;
            goto label_25ad2c;
        }
    }
    ctx->pc = 0x25AD20u;
    // 0x25ad20: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x25ad20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25ad24: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x25AD24u;
    {
        const bool branch_taken_0x25ad24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AD24u;
        // 0x25ad28: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ad24) {
            ctx->pc = 0x25AD44u;
            goto label_25ad44;
        }
    }
    ctx->pc = 0x25AD2Cu;
label_25ad2c:
    // 0x25ad2c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25ad2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x25ad30: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x25ad30u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x25ad34: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x25ad34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x25ad38: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25ad38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25ad3c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x25ad3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x25ad40: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x25ad40u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_25ad44:
    // 0x25ad44: 0xc78082e8  lwc1        $f0, -0x7D18($gp)
    ctx->pc = 0x25ad44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ad48: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x25ad48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25ad4c: 0x8fa90124  lw          $t1, 0x124($sp)
    ctx->pc = 0x25ad4cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x25ad50: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x25ad50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25ad54: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x25AD54u;
    {
        const bool branch_taken_0x25ad54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AD54u;
        // 0x25ad58: 0xe5200008  swc1        $f0, 0x8($t1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ad54) {
            ctx->pc = 0x25AE48u;
            goto label_25ae48;
        }
    }
    ctx->pc = 0x25AD5Cu;
label_25ad5c:
    // 0x25ad5c: 0x8fab0128  lw          $t3, 0x128($sp)
    ctx->pc = 0x25ad5cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x25ad60: 0x8d6200bc  lw          $v0, 0xBC($t3)
    ctx->pc = 0x25ad60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 188)));
    // 0x25ad64: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x25AD64u;
    {
        const bool branch_taken_0x25ad64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AD64u;
        // 0x25ad68: 0x8f83b334  lw          $v1, -0x4CCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947636)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ad64) {
            ctx->pc = 0x25AE4Cu;
            goto label_25ae4c;
        }
    }
    ctx->pc = 0x25AD6Cu;
    // 0x25ad6c: 0x8c4200f4  lw          $v0, 0xF4($v0)
    ctx->pc = 0x25ad6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x25ad70: 0x8c42021c  lw          $v0, 0x21C($v0)
    ctx->pc = 0x25ad70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 540)));
    // 0x25ad74: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x25ad74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25ad78: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x25AD78u;
    {
        const bool branch_taken_0x25ad78 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x25AD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AD78u;
        // 0x25ad7c: 0xad62021c  sw          $v0, 0x21C($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 540), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ad78) {
            ctx->pc = 0x25AD90u;
            goto label_25ad90;
        }
    }
    ctx->pc = 0x25AD80u;
    // 0x25ad80: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x25ad80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25ad84: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x25ad84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x25ad88: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25AD88u;
    {
        const bool branch_taken_0x25ad88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AD88u;
        // 0x25ad8c: 0x8fa20128  lw          $v0, 0x128($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ad88) {
            ctx->pc = 0x25ADACu;
            goto label_25adac;
        }
    }
    ctx->pc = 0x25AD90u;
label_25ad90:
    // 0x25ad90: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25ad90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x25ad94: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x25ad94u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x25ad98: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x25ad98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x25ad9c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25ad9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25ada0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x25ada0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x25ada4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x25ada4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x25ada8: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x25ada8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_25adac:
    // 0x25adac: 0xc78082ec  lwc1        $f0, -0x7D14($gp)
    ctx->pc = 0x25adacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25adb0: 0x8c44021c  lw          $a0, 0x21C($v0)
    ctx->pc = 0x25adb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 540)));
    // 0x25adb4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x25adb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25adb8: 0x8fa60124  lw          $a2, 0x124($sp)
    ctx->pc = 0x25adb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x25adbc: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x25adbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x25adc0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x25adc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25adc4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x25adc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25adc8: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25ADC8u;
    {
        const bool branch_taken_0x25adc8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x25ADCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ADC8u;
        // 0x25adcc: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25adc8) {
            ctx->pc = 0x25ADDCu;
            goto label_25addc;
        }
    }
    ctx->pc = 0x25ADD0u;
    // 0x25add0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x25add0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25add4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x25ADD4u;
    {
        const bool branch_taken_0x25add4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25ADD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ADD4u;
        // 0x25add8: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25add4) {
            ctx->pc = 0x25ADF4u;
            goto label_25adf4;
        }
    }
    ctx->pc = 0x25ADDCu;
label_25addc:
    // 0x25addc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25addcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x25ade0: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x25ade0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x25ade4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x25ade4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x25ade8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25ade8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25adec: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x25adecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x25adf0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x25adf0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_25adf4:
    // 0x25adf4: 0xc78082f0  lwc1        $f0, -0x7D10($gp)
    ctx->pc = 0x25adf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25adf8: 0x51402  srl         $v0, $a1, 16
    ctx->pc = 0x25adf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x25adfc: 0x8fa90124  lw          $t1, 0x124($sp)
    ctx->pc = 0x25adfcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x25ae00: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x25ae00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25ae04: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x25ae04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25ae08: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25AE08u;
    {
        const bool branch_taken_0x25ae08 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x25AE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AE08u;
        // 0x25ae0c: 0xe5200004  swc1        $f0, 0x4($t1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ae08) {
            ctx->pc = 0x25AE1Cu;
            goto label_25ae1c;
        }
    }
    ctx->pc = 0x25AE10u;
    // 0x25ae10: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x25ae10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25ae14: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x25AE14u;
    {
        const bool branch_taken_0x25ae14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AE14u;
        // 0x25ae18: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ae14) {
            ctx->pc = 0x25AE34u;
            goto label_25ae34;
        }
    }
    ctx->pc = 0x25AE1Cu;
label_25ae1c:
    // 0x25ae1c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25ae1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x25ae20: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x25ae20u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x25ae24: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x25ae24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x25ae28: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25ae28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25ae2c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x25ae2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x25ae30: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x25ae30u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_25ae34:
    // 0x25ae34: 0xc78082f4  lwc1        $f0, -0x7D0C($gp)
    ctx->pc = 0x25ae34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ae38: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x25ae38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25ae3c: 0x8fab0124  lw          $t3, 0x124($sp)
    ctx->pc = 0x25ae3cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x25ae40: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x25ae40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25ae44: 0xe5600008  swc1        $f0, 0x8($t3)
    ctx->pc = 0x25ae44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 8), bits); }
label_25ae48:
    // 0x25ae48: 0x8f83b334  lw          $v1, -0x4CCC($gp)
    ctx->pc = 0x25ae48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947636)));
label_25ae4c:
    // 0x25ae4c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x25AE4Cu;
    {
        const bool branch_taken_0x25ae4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AE4Cu;
        // 0x25ae50: 0x8fa5012c  lw          $a1, 0x12C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ae4c) {
            ctx->pc = 0x25AE6Cu;
            goto label_25ae6c;
        }
    }
    ctx->pc = 0x25AE54u;
    // 0x25ae54: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x25ae54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x25ae58: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x25ae58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x25ae5c: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x25ae5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x25ae60: 0x8c43ffe8  lw          $v1, -0x18($v0)
    ctx->pc = 0x25ae60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967272)));
    // 0x25ae64: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x25ae64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x25ae68: 0x2c6a0003  sltiu       $t2, $v1, 0x3
    ctx->pc = 0x25ae68u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_25ae6c:
    // 0x25ae6c: 0x14e002bc  bnez        $a3, . + 4 + (0x2BC << 2)
    ctx->pc = 0x25AE6Cu;
    {
        const bool branch_taken_0x25ae6c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x25AE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AE6Cu;
        // 0x25ae70: 0x308200ff  andi        $v0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ae6c) {
            ctx->pc = 0x25B960u;
            goto label_25b960;
        }
    }
    ctx->pc = 0x25AE74u;
    // 0x25ae74: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x25ae74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x25ae78: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x25ae78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x25ae7c: 0x50820011  beql        $a0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x25AE7Cu;
    {
        const bool branch_taken_0x25ae7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x25ae7c) {
            ctx->pc = 0x25AE80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25AE7Cu;
            // 0x25ae80: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25AEC4u;
            goto label_25aec4;
        }
    }
    ctx->pc = 0x25AE84u;
    // 0x25ae84: 0x5540000f  bnel        $t2, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x25AE84u;
    {
        const bool branch_taken_0x25ae84 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x25ae84) {
            ctx->pc = 0x25AE88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25AE84u;
            // 0x25ae88: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25AEC4u;
            goto label_25aec4;
        }
    }
    ctx->pc = 0x25AE8Cu;
    // 0x25ae8c: 0x8fa60130  lw          $a2, 0x130($sp)
    ctx->pc = 0x25ae8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x25ae90: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x25ae90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ae94: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x25ae94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25ae98: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x25ae98u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25ae9c: 0x0  nop
    ctx->pc = 0x25ae9cu;
    // NOP
    // 0x25aea0: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x25AEA0u;
    {
        const bool branch_taken_0x25aea0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25aea0) {
            ctx->pc = 0x25AEA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25AEA0u;
            // 0x25aea4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25AEC4u;
            goto label_25aec4;
        }
    }
    ctx->pc = 0x25AEA8u;
    // 0x25aea8: 0xc5010008  lwc1        $f1, 0x8($t0)
    ctx->pc = 0x25aea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25aeac: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x25aeacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25aeb0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x25aeb0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25aeb4: 0x0  nop
    ctx->pc = 0x25aeb4u;
    // NOP
    // 0x25aeb8: 0x450102a9  bc1t        . + 4 + (0x2A9 << 2)
    ctx->pc = 0x25AEB8u;
    {
        const bool branch_taken_0x25aeb8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25AEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AEB8u;
        // 0x25aebc: 0x308200ff  andi        $v0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25aeb8) {
            ctx->pc = 0x25B960u;
            goto label_25b960;
        }
    }
    ctx->pc = 0x25AEC0u;
    // 0x25aec0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x25aec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_25aec4:
    // 0x25aec4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25aec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25aec8: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x25AEC8u;
    SET_GPR_U32(ctx, 31, 0x25AED0u);
    ctx->pc = 0x25AECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AEC8u;
    // 0x25aecc: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x25AEC8u, 0x25AED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AED0u;
label_25aed0:
    // 0x25aed0: 0x27a90080  addiu       $t1, $sp, 0x80
    ctx->pc = 0x25aed0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x25aed4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x25aed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x25aed8: 0xafa9014c  sw          $t1, 0x14C($sp)
    ctx->pc = 0x25aed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 9));
    // 0x25aedc: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x25aedcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x25aee0: 0x24442680  addiu       $a0, $v0, 0x2680
    ctx->pc = 0x25aee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 9856));
    // 0x25aee4: 0x688a0007  ldl         $t2, 0x7($a0)
    ctx->pc = 0x25aee4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x25aee8: 0x6c8a0000  ldr         $t2, 0x0($a0)
    ctx->pc = 0x25aee8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x25aeec: 0x8c8b0008  lw          $t3, 0x8($a0)
    ctx->pc = 0x25aeecu;
    SET_GPR_S32(ctx, 11, (int32_t)FAST_READ32(0x3A2688u));
    // 0x25aef0: 0xb3aa0037  sdl         $t2, 0x37($sp)
    ctx->pc = 0x25aef0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x25aef4: 0xb7aa0030  sdr         $t2, 0x30($sp)
    ctx->pc = 0x25aef4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x25aef8: 0xafab0038  sw          $t3, 0x38($sp)
    ctx->pc = 0x25aef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 11));
    // 0x25aefc: 0xc78282f8  lwc1        $f2, -0x7D08($gp)
    ctx->pc = 0x25aefcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25af00: 0x8fa50130  lw          $a1, 0x130($sp)
    ctx->pc = 0x25af00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x25af04: 0xc4d5ea90  lwc1        $f21, -0x1570($a2)
    ctx->pc = 0x25af04u;
    { uint32_t bits = FAST_READ32(0x3AEA90u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x25af08: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x25af08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25af0c: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x25af0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x25af10: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x25af10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25af14: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x25af14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x25af18: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x25af18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x25af1c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x25af1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25af20: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x25af20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x25af24: 0x8fa9012c  lw          $t1, 0x12C($sp)
    ctx->pc = 0x25af24u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_25af28:
    // 0x25af28: 0x19200106  blez        $t1, . + 4 + (0x106 << 2)
    ctx->pc = 0x25AF28u;
    {
        const bool branch_taken_0x25af28 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x25AF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AF28u;
        // 0x25af2c: 0x8f82a264  lw          $v0, -0x5D9C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25af28) {
            ctx->pc = 0x25B344u;
            goto label_25b344;
        }
    }
    ctx->pc = 0x25AF30u;
    // 0x25af30: 0x49102a  slt         $v0, $v0, $t1
    ctx->pc = 0x25af30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x25af34: 0x14400103  bnez        $v0, . + 4 + (0x103 << 2)
    ctx->pc = 0x25AF34u;
    {
        const bool branch_taken_0x25af34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25AF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AF34u;
        // 0x25af38: 0x95080  sll         $t2, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25af34) {
            ctx->pc = 0x25B344u;
            goto label_25b344;
        }
    }
    ctx->pc = 0x25AF3Cu;
    // 0x25af3c: 0x8f84a270  lw          $a0, -0x5D90($gp)
    ctx->pc = 0x25af3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943344)));
    // 0x25af40: 0xafaa0140  sw          $t2, 0x140($sp)
    ctx->pc = 0x25af40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 10));
    // 0x25af44: 0x240b0050  addiu       $t3, $zero, 0x50
    ctx->pc = 0x25af44u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x25af48: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x25af48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x25af4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25af4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25af50: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x25af50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25af54: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x25af54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x25af58: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x25af58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25af5c: 0xafa3013c  sw          $v1, 0x13C($sp)
    ctx->pc = 0x25af5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 3));
    // 0x25af60: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x25af60u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25af64: 0x10b1018  mult        $v0, $t0, $t3
    ctx->pc = 0x25af64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x25af68: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x25af68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25af6c: 0x190000da  blez        $t0, . + 4 + (0xDA << 2)
    ctx->pc = 0x25AF6Cu;
    {
        const bool branch_taken_0x25af6c = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x25AF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AF6Cu;
        // 0x25af70: 0xafa20144  sw          $v0, 0x144($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25af6c) {
            ctx->pc = 0x25B2D8u;
            goto label_25b2d8;
        }
    }
    ctx->pc = 0x25AF74u;
    // 0x25af74: 0x8fa20144  lw          $v0, 0x144($sp)
    ctx->pc = 0x25af74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
label_25af78:
    // 0x25af78: 0x400013  mtlo        $v0
    ctx->pc = 0x25af78u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x25af7c: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x25af7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x25af80: 0x70c23800  madd        $a3, $a2, $v0
    ctx->pc = 0x25af80u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x25af84: 0x8cf3004c  lw          $s3, 0x4C($a3)
    ctx->pc = 0x25af84u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 76)));
    // 0x25af88: 0x126000cf  beqz        $s3, . + 4 + (0xCF << 2)
    ctx->pc = 0x25AF88u;
    {
        const bool branch_taken_0x25af88 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AF88u;
        // 0x25af8c: 0x24cb0001  addiu       $t3, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25af88) {
            ctx->pc = 0x25B2C8u;
            goto label_25b2c8;
        }
    }
    ctx->pc = 0x25AF90u;
    // 0x25af90: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x25af90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x25af94: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x25AF94u;
    {
        const bool branch_taken_0x25af94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AF94u;
        // 0x25af98: 0x8f84a270  lw          $a0, -0x5D90($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943344)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25af94) {
            ctx->pc = 0x25AFCCu;
            goto label_25afcc;
        }
    }
    ctx->pc = 0x25AF9Cu;
    // 0x25af9c: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x25af9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x25afa0: 0x8fa90140  lw          $t1, 0x140($sp)
    ctx->pc = 0x25afa0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x25afa4: 0xc32818  mult        $a1, $a2, $v1
    ctx->pc = 0x25afa4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x25afa8: 0x8cf0000c  lw          $s0, 0xC($a3)
    ctx->pc = 0x25afa8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x25afac: 0x24ed002c  addiu       $t5, $a3, 0x2C
    ctx->pc = 0x25afacu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 7), 44));
    // 0x25afb0: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x25afb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x25afb4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x25afb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25afb8: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x25afb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x25afbc: 0x8c6400f8  lw          $a0, 0xF8($v1)
    ctx->pc = 0x25afbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 248)));
    // 0x25afc0: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x25afc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x25afc4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x25AFC4u;
    {
        const bool branch_taken_0x25afc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AFC4u;
        // 0x25afc8: 0x8cac0024  lw          $t4, 0x24($a1) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25afc4) {
            ctx->pc = 0x25AFF8u;
            goto label_25aff8;
        }
    }
    ctx->pc = 0x25AFCCu;
label_25afcc:
    // 0x25afcc: 0x240a0030  addiu       $t2, $zero, 0x30
    ctx->pc = 0x25afccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x25afd0: 0x8fab0140  lw          $t3, 0x140($sp)
    ctx->pc = 0x25afd0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x25afd4: 0xca2818  mult        $a1, $a2, $t2
    ctx->pc = 0x25afd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x25afd8: 0x8cf00008  lw          $s0, 0x8($a3)
    ctx->pc = 0x25afd8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x25afdc: 0x24ed0014  addiu       $t5, $a3, 0x14
    ctx->pc = 0x25afdcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
    // 0x25afe0: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x25afe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x25afe4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x25afe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25afe8: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x25afe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x25afec: 0x8c6400f8  lw          $a0, 0xF8($v1)
    ctx->pc = 0x25afecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 248)));
    // 0x25aff0: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x25aff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x25aff4: 0x8cac000c  lw          $t4, 0xC($a1)
    ctx->pc = 0x25aff4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_25aff8:
    // 0x25aff8: 0x51800001  beql        $t4, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x25AFF8u;
    {
        const bool branch_taken_0x25aff8 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x25aff8) {
            ctx->pc = 0x25AFFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25AFF8u;
            // 0x25affc: 0x8dac000c  lw          $t4, 0xC($t5) (Delay Slot)
            SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25B000u;
            goto label_25b000;
        }
    }
    ctx->pc = 0x25B000u;
label_25b000:
    // 0x25b000: 0x94e30044  lhu         $v1, 0x44($a3)
    ctx->pc = 0x25b000u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 68)));
    // 0x25b004: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x25B004u;
    {
        const bool branch_taken_0x25b004 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B004u;
        // 0x25b008: 0x8fa40120  lw          $a0, 0x120($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b004) {
            ctx->pc = 0x25B01Cu;
            goto label_25b01c;
        }
    }
    ctx->pc = 0x25B00Cu;
    // 0x25b00c: 0x94820124  lhu         $v0, 0x124($a0)
    ctx->pc = 0x25b00cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 292)));
    // 0x25b010: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x25b010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x25b014: 0x104000ac  beqz        $v0, . + 4 + (0xAC << 2)
    ctx->pc = 0x25B014u;
    {
        const bool branch_taken_0x25b014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B014u;
        // 0x25b018: 0x24cb0001  addiu       $t3, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b014) {
            ctx->pc = 0x25B2C8u;
            goto label_25b2c8;
        }
    }
    ctx->pc = 0x25B01Cu;
label_25b01c:
    // 0x25b01c: 0x120000aa  beqz        $s0, . + 4 + (0xAA << 2)
    ctx->pc = 0x25B01Cu;
    {
        const bool branch_taken_0x25b01c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B01Cu;
        // 0x25b020: 0x24cb0001  addiu       $t3, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b01c) {
            ctx->pc = 0x25B2C8u;
            goto label_25b2c8;
        }
    }
    ctx->pc = 0x25B024u;
    // 0x25b024: 0x526000a9  beql        $s3, $zero, . + 4 + (0xA9 << 2)
    ctx->pc = 0x25B024u;
    {
        const bool branch_taken_0x25b024 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b024) {
            ctx->pc = 0x25B028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25B024u;
            // 0x25b028: 0x160302d  daddu       $a2, $t3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25B2CCu;
            goto label_25b2cc;
        }
    }
    ctx->pc = 0x25B02Cu;
    // 0x25b02c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x25b02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x25b030: 0x44000a5  bltz        $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x25B030u;
    {
        const bool branch_taken_0x25b030 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x25B034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B030u;
        // 0x25b034: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b030) {
            ctx->pc = 0x25B2C8u;
            goto label_25b2c8;
        }
    }
    ctx->pc = 0x25B038u;
    // 0x25b038: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x25b038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25b03c: 0xafa50154  sw          $a1, 0x154($sp)
    ctx->pc = 0x25b03cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 5));
    // 0x25b040: 0xafa60158  sw          $a2, 0x158($sp)
    ctx->pc = 0x25b040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 6));
    // 0x25b044: 0x0  nop
    ctx->pc = 0x25b044u;
    // NOP
label_25b048:
    // 0x25b048: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x25b048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x25b04c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x25b04cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x25b050: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x25b050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x25b054: 0x2667000c  addiu       $a3, $s3, 0xC
    ctx->pc = 0x25b054u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x25b058: 0x652818  mult        $a1, $v1, $a1
    ctx->pc = 0x25b058u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x25b05c: 0xafa00148  sw          $zero, 0x148($sp)
    ctx->pc = 0x25b05cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 0));
    // 0x25b060: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x25b060u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x25b064: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x25b064u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25b068: 0x8da40000  lw          $a0, 0x0($t5)
    ctx->pc = 0x25b068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x25b06c: 0x1839021  addu        $s2, $t4, $v1
    ctx->pc = 0x25b06cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x25b070: 0x8da60004  lw          $a2, 0x4($t5)
    ctx->pc = 0x25b070u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x25b074: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25b074u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b078: 0x82b821  addu        $s7, $a0, $v0
    ctx->pc = 0x25b078u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x25b07c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25b07cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b080: 0xc58821  addu        $s1, $a2, $a1
    ctx->pc = 0x25b080u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x25b084: 0x8fa40154  lw          $a0, 0x154($sp)
    ctx->pc = 0x25b084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x25b088: 0x8fa50158  lw          $a1, 0x158($sp)
    ctx->pc = 0x25b088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x25b08c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x25b08cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b090: 0x7fab0160  sq          $t3, 0x160($sp)
    ctx->pc = 0x25b090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 11));
    // 0x25b094: 0x7fac0170  sq          $t4, 0x170($sp)
    ctx->pc = 0x25b094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 12));
    // 0x25b098: 0xc082aa0  jal         func_20AA80
    ctx->pc = 0x25B098u;
    SET_GPR_U32(ctx, 31, 0x25B0A0u);
    ctx->pc = 0x25B09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B098u;
    // 0x25b09c: 0x7fad0180  sq          $t5, 0x180($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20AA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AA80u, 0x25B098u, 0x25B0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B0A0u;
label_25b0a0:
    // 0x25b0a0: 0x7bab0160  lq          $t3, 0x160($sp)
    ctx->pc = 0x25b0a0u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x25b0a4: 0x7bac0170  lq          $t4, 0x170($sp)
    ctx->pc = 0x25b0a4u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x25b0a8: 0x1040007d  beqz        $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x25B0A8u;
    {
        const bool branch_taken_0x25b0a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B0A8u;
        // 0x25b0ac: 0x7bad0180  lq          $t5, 0x180($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b0a8) {
            ctx->pc = 0x25B2A0u;
            goto label_25b2a0;
        }
    }
    ctx->pc = 0x25B0B0u;
    // 0x25b0b0: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x25b0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x25b0b4: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x25b0b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x25b0b8: 0xafb0015c  sw          $s0, 0x15C($sp)
    ctx->pc = 0x25b0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 16));
    // 0x25b0bc: 0x26730024  addiu       $s3, $s3, 0x24
    ctx->pc = 0x25b0bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
    // 0x25b0c0: 0x28403  sra         $s0, $v0, 16
    ctx->pc = 0x25b0c0u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
    // 0x25b0c4: 0xafb30150  sw          $s3, 0x150($sp)
    ctx->pc = 0x25b0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 19));
    // 0x25b0c8: 0x3a100001  xori        $s0, $s0, 0x1
    ctx->pc = 0x25b0c8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
    // 0x25b0cc: 0x30597fff  andi        $t9, $v0, 0x7FFF
    ctx->pc = 0x25b0ccu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x25b0d0: 0x304e8000  andi        $t6, $v0, 0x8000
    ctx->pc = 0x25b0d0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x25b0d4: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x25b0d4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x25b0d8: 0x273efffe  addiu       $fp, $t9, -0x2
    ctx->pc = 0x25b0d8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967294));
    // 0x25b0dc: 0x0  nop
    ctx->pc = 0x25b0dcu;
    // NOP
label_25b0e0:
    // 0x25b0e0: 0x1bc0005d  blez        $fp, . + 4 + (0x5D << 2)
    ctx->pc = 0x25B0E0u;
    {
        const bool branch_taken_0x25b0e0 = (GPR_S32(ctx, 30) <= 0);
        ctx->pc = 0x25B0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B0E0u;
        // 0x25b0e4: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b0e0) {
            ctx->pc = 0x25B258u;
            goto label_25b258;
        }
    }
    ctx->pc = 0x25B0E8u;
    // 0x25b0e8: 0x27af0080  addiu       $t7, $sp, 0x80
    ctx->pc = 0x25b0e8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x25b0ec: 0x0  nop
    ctx->pc = 0x25b0ecu;
    // NOP
label_25b0f0:
    // 0x25b0f0: 0x26340018  addiu       $s4, $s1, 0x18
    ctx->pc = 0x25b0f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x25b0f4: 0x2635000c  addiu       $s5, $s1, 0xC
    ctx->pc = 0x25b0f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x25b0f8: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x25b0f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b0fc: 0x8fa40154  lw          $a0, 0x154($sp)
    ctx->pc = 0x25b0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x25b100: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x25b100u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b104: 0x8fa50158  lw          $a1, 0x158($sp)
    ctx->pc = 0x25b104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x25b108: 0x2b0980a  movz        $s3, $s5, $s0
    ctx->pc = 0x25b108u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 21));
    // 0x25b10c: 0x2b0380b  movn        $a3, $s5, $s0
    ctx->pc = 0x25b10cu;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 21));
    // 0x25b110: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x25b110u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b114: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x25b114u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b118: 0x1e0482d  daddu       $t1, $t7, $zero
    ctx->pc = 0x25b118u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b11c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x25b11cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b120: 0x7fab0160  sq          $t3, 0x160($sp)
    ctx->pc = 0x25b120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 11));
    // 0x25b124: 0x7fac0170  sq          $t4, 0x170($sp)
    ctx->pc = 0x25b124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 12));
    // 0x25b128: 0x7fad0180  sq          $t5, 0x180($sp)
    ctx->pc = 0x25b128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 13));
    // 0x25b12c: 0x7fae0190  sq          $t6, 0x190($sp)
    ctx->pc = 0x25b12cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 14));
    // 0x25b130: 0x7faf01a0  sq          $t7, 0x1A0($sp)
    ctx->pc = 0x25b130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 15));
    // 0x25b134: 0xc082606  jal         func_209818
    ctx->pc = 0x25B134u;
    SET_GPR_U32(ctx, 31, 0x25B13Cu);
    ctx->pc = 0x25B138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B134u;
    // 0x25b138: 0x7fb901b0  sq          $t9, 0x1B0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209818u, 0x25B134u, 0x25B13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B13Cu;
label_25b13c:
    // 0x25b13c: 0x7bab0160  lq          $t3, 0x160($sp)
    ctx->pc = 0x25b13cu;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x25b140: 0x7bac0170  lq          $t4, 0x170($sp)
    ctx->pc = 0x25b140u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x25b144: 0x7bad0180  lq          $t5, 0x180($sp)
    ctx->pc = 0x25b144u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x25b148: 0x7bae0190  lq          $t6, 0x190($sp)
    ctx->pc = 0x25b148u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x25b14c: 0x7baf01a0  lq          $t7, 0x1A0($sp)
    ctx->pc = 0x25b14cu;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x25b150: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x25B150u;
    {
        const bool branch_taken_0x25b150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B150u;
        // 0x25b154: 0x7bb901b0  lq          $t9, 0x1B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b150) {
            ctx->pc = 0x25B238u;
            goto label_25b238;
        }
    }
    ctx->pc = 0x25B158u;
    // 0x25b158: 0xc7a60080  lwc1        $f6, 0x80($sp)
    ctx->pc = 0x25b158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x25b15c: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x25b15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25b160: 0xc7a70084  lwc1        $f7, 0x84($sp)
    ctx->pc = 0x25b160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x25b164: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x25b164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25b168: 0x46013041  sub.s       $f1, $f6, $f1
    ctx->pc = 0x25b168u;
    ctx->f[1] = FPU_SUB_S(ctx->f[6], ctx->f[1]);
    // 0x25b16c: 0xc7a50088  lwc1        $f5, 0x88($sp)
    ctx->pc = 0x25b16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x25b170: 0x46023881  sub.s       $f2, $f7, $f2
    ctx->pc = 0x25b170u;
    ctx->f[2] = FPU_SUB_S(ctx->f[7], ctx->f[2]);
    // 0x25b174: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x25b174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b178: 0x460108c2  mul.s       $f3, $f1, $f1
    ctx->pc = 0x25b178u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x25b17c: 0xe7a10090  swc1        $f1, 0x90($sp)
    ctx->pc = 0x25b17cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x25b180: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x25b180u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x25b184: 0x46021102  mul.s       $f4, $f2, $f2
    ctx->pc = 0x25b184u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x25b188: 0xe7a20094  swc1        $f2, 0x94($sp)
    ctx->pc = 0x25b188u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x25b18c: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x25b18cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x25b190: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x25b190u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x25b194: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x25b194u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x25b198: 0x46151834  c.lt.s      $f3, $f21
    ctx->pc = 0x25b198u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25b19c: 0x0  nop
    ctx->pc = 0x25b19cu;
    // NOP
    // 0x25b1a0: 0x45000025  bc1f        . + 4 + (0x25 << 2)
    ctx->pc = 0x25B1A0u;
    {
        const bool branch_taken_0x25b1a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25B1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B1A0u;
        // 0x25b1a4: 0xe7a00098  swc1        $f0, 0x98($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b1a0) {
            ctx->pc = 0x25B238u;
            goto label_25b238;
        }
    }
    ctx->pc = 0x25B1A8u;
    // 0x25b1a8: 0xe7a60010  swc1        $f6, 0x10($sp)
    ctx->pc = 0x25b1a8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x25b1ac: 0x26460004  addiu       $a2, $s2, 0x4
    ctx->pc = 0x25b1acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x25b1b0: 0xe7a70014  swc1        $f7, 0x14($sp)
    ctx->pc = 0x25b1b0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x25b1b4: 0x26420008  addiu       $v0, $s2, 0x8
    ctx->pc = 0x25b1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x25b1b8: 0xe7a50018  swc1        $f5, 0x18($sp)
    ctx->pc = 0x25b1b8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x25b1bc: 0xd0100b  movn        $v0, $a2, $s0
    ctx->pc = 0x25b1bcu;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x25b1c0: 0x26430008  addiu       $v1, $s2, 0x8
    ctx->pc = 0x25b1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x25b1c4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x25b1c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b1c8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x25b1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x25b1cc: 0xd0180a  movz        $v1, $a2, $s0
    ctx->pc = 0x25b1ccu;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x25b1d0: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x25b1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b1d4: 0x290280a  movz        $a1, $s4, $s0
    ctx->pc = 0x25b1d4u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 20));
    // 0x25b1d8: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x25b1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x25b1dc: 0x46001d46  mov.s       $f21, $f3
    ctx->pc = 0x25b1dcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[3]);
    // 0x25b1e0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x25b1e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x25b1e4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x25b1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25b1e8: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x25b1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b1ec: 0xafa40074  sw          $a0, 0x74($sp)
    ctx->pc = 0x25b1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 4));
    // 0x25b1f0: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x25b1f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x25b1f4: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x25b1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25b1f8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x25b1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25b1fc: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x25b1fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x25b200: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x25b200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
    // 0x25b204: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x25b204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b208: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x25b208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x25b20c: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x25b20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25b210: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x25b210u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x25b214: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x25b214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b218: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x25b218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x25b21c: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x25b21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25b220: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x25b220u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x25b224: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x25b224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b228: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x25b228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x25b22c: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x25b22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25b230: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25B230u;
    {
        const bool branch_taken_0x25b230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B230u;
        // 0x25b234: 0xe7a10060  swc1        $f1, 0x60($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b230) {
            ctx->pc = 0x25B23Cu;
            goto label_25b23c;
        }
    }
    ctx->pc = 0x25B238u;
label_25b238:
    // 0x25b238: 0x26460004  addiu       $a2, $s2, 0x4
    ctx->pc = 0x25b238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_25b23c:
    // 0x25b23c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x25b23cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25b240: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x25b240u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x25b244: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x25b244u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b248: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x25b248u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b24c: 0x2de102a  slt         $v0, $s6, $fp
    ctx->pc = 0x25b24cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x25b250: 0x1440ffa7  bnez        $v0, . + 4 + (-0x59 << 2)
    ctx->pc = 0x25B250u;
    {
        const bool branch_taken_0x25b250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25B254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B250u;
        // 0x25b254: 0x708023  subu        $s0, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b250) {
            ctx->pc = 0x25B0F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25b0f0;
        }
    }
    ctx->pc = 0x25B258u;
label_25b258:
    // 0x25b258: 0x26310018  addiu       $s1, $s1, 0x18
    ctx->pc = 0x25b258u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x25b25c: 0x15c00009  bnez        $t6, . + 4 + (0x9 << 2)
    ctx->pc = 0x25B25Cu;
    {
        const bool branch_taken_0x25b25c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x25B260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B25Cu;
        // 0x25b260: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b25c) {
            ctx->pc = 0x25B284u;
            goto label_25b284;
        }
    }
    ctx->pc = 0x25B264u;
    // 0x25b264: 0x26f70010  addiu       $s7, $s7, 0x10
    ctx->pc = 0x25b264u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
    // 0x25b268: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x25b268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x25b26c: 0x28403  sra         $s0, $v0, 16
    ctx->pc = 0x25b26cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
    // 0x25b270: 0x30597fff  andi        $t9, $v0, 0x7FFF
    ctx->pc = 0x25b270u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x25b274: 0x3a100001  xori        $s0, $s0, 0x1
    ctx->pc = 0x25b274u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
    // 0x25b278: 0x304e8000  andi        $t6, $v0, 0x8000
    ctx->pc = 0x25b278u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x25b27c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25B27Cu;
    {
        const bool branch_taken_0x25b27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B27Cu;
        // 0x25b280: 0x32100001  andi        $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b27c) {
            ctx->pc = 0x25B28Cu;
            goto label_25b28c;
        }
    }
    ctx->pc = 0x25B284u;
label_25b284:
    // 0x25b284: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x25b284u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25b288: 0xafa90148  sw          $t1, 0x148($sp)
    ctx->pc = 0x25b288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 9));
label_25b28c:
    // 0x25b28c: 0x8faa0148  lw          $t2, 0x148($sp)
    ctx->pc = 0x25b28cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x25b290: 0x5140ff93  beql        $t2, $zero, . + 4 + (-0x6D << 2)
    ctx->pc = 0x25B290u;
    {
        const bool branch_taken_0x25b290 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b290) {
            ctx->pc = 0x25B294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25B290u;
            // 0x25b294: 0x273efffe  addiu       $fp, $t9, -0x2 (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967294));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25B0E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25b0e0;
        }
    }
    ctx->pc = 0x25B298u;
    // 0x25b298: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25B298u;
    {
        const bool branch_taken_0x25b298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B298u;
        // 0x25b29c: 0x8fb0015c  lw          $s0, 0x15C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b298) {
            ctx->pc = 0x25B2B4u;
            goto label_25b2b4;
        }
    }
    ctx->pc = 0x25B2A0u;
label_25b2a0:
    // 0x25b2a0: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x25b2a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x25b2a4: 0x26730024  addiu       $s3, $s3, 0x24
    ctx->pc = 0x25b2a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
    // 0x25b2a8: 0xafb0015c  sw          $s0, 0x15C($sp)
    ctx->pc = 0x25b2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 16));
    // 0x25b2ac: 0xafb30150  sw          $s3, 0x150($sp)
    ctx->pc = 0x25b2acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 19));
    // 0x25b2b0: 0x8fb0015c  lw          $s0, 0x15C($sp)
    ctx->pc = 0x25b2b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
label_25b2b4:
    // 0x25b2b4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x25b2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x25b2b8: 0x441ff63  bgez        $v0, . + 4 + (-0x9D << 2)
    ctx->pc = 0x25B2B8u;
    {
        const bool branch_taken_0x25b2b8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x25B2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B2B8u;
        // 0x25b2bc: 0x8fb30150  lw          $s3, 0x150($sp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b2b8) {
            ctx->pc = 0x25B048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25b048;
        }
    }
    ctx->pc = 0x25B2C0u;
    // 0x25b2c0: 0x8fa2013c  lw          $v0, 0x13C($sp)
    ctx->pc = 0x25b2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x25b2c4: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x25b2c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25b2c8:
    // 0x25b2c8: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x25b2c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_25b2cc:
    // 0x25b2cc: 0xc8102a  slt         $v0, $a2, $t0
    ctx->pc = 0x25b2ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x25b2d0: 0x1440ff29  bnez        $v0, . + 4 + (-0xD7 << 2)
    ctx->pc = 0x25B2D0u;
    {
        const bool branch_taken_0x25b2d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25B2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B2D0u;
        // 0x25b2d4: 0x8fa20144  lw          $v0, 0x144($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b2d0) {
            ctx->pc = 0x25AF78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25af78;
        }
    }
    ctx->pc = 0x25B2D8u;
label_25b2d8:
    // 0x25b2d8: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x25b2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x25b2dc: 0xc474ea90  lwc1        $f20, -0x1570($v1)
    ctx->pc = 0x25b2dcu;
    { uint32_t bits = FAST_READ32(0x3AEA90u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25b2e0: 0x4614a832  c.eq.s      $f21, $f20
    ctx->pc = 0x25b2e0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25b2e4: 0x0  nop
    ctx->pc = 0x25b2e4u;
    // NOP
    // 0x25b2e8: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x25B2E8u;
    {
        const bool branch_taken_0x25b2e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25B2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B2E8u;
        // 0x25b2ec: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b2e8) {
            ctx->pc = 0x25B33Cu;
            goto label_25b33c;
        }
    }
    ctx->pc = 0x25B2F0u;
    // 0x25b2f0: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x25b2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x25b2f4: 0x8fa5014c  lw          $a1, 0x14C($sp)
    ctx->pc = 0x25b2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x25b2f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25b2f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b2fc: 0x8fa6012c  lw          $a2, 0x12C($sp)
    ctx->pc = 0x25b2fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x25b300: 0x24432690  addiu       $v1, $v0, 0x2690
    ctx->pc = 0x25b300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 9872));
    // 0x25b304: 0x68690007  ldl         $t1, 0x7($v1)
    ctx->pc = 0x25b304u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x25b308: 0x6c690000  ldr         $t1, 0x0($v1)
    ctx->pc = 0x25b308u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x25b30c: 0x8c6a0008  lw          $t2, 0x8($v1)
    ctx->pc = 0x25b30cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x25b310: 0xb3a90087  sdl         $t1, 0x87($sp)
    ctx->pc = 0x25b310u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x25b314: 0xb7a90080  sdr         $t1, 0x80($sp)
    ctx->pc = 0x25b314u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x25b318: 0xafaa0088  sw          $t2, 0x88($sp)
    ctx->pc = 0x25b318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 10));
    // 0x25b31c: 0xc09633c  jal         func_258CF0
    ctx->pc = 0x25B31Cu;
    SET_GPR_U32(ctx, 31, 0x25B324u);
    ctx->pc = 0x25B320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B31Cu;
    // 0x25b320: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258CF0u, 0x25B31Cu, 0x25B324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B324u;
label_25b324:
    // 0x25b324: 0x8fa4012c  lw          $a0, 0x12C($sp)
    ctx->pc = 0x25b324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x25b328: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25B328u;
    {
        const bool branch_taken_0x25b328 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x25B32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B328u;
        // 0x25b32c: 0x3c05003b  lui         $a1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b328) {
            ctx->pc = 0x25B348u;
            goto label_25b348;
        }
    }
    ctx->pc = 0x25B330u;
    // 0x25b330: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x25b330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
    // 0x25b334: 0x4614a832  c.eq.s      $f21, $f20
    ctx->pc = 0x25b334u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25b338: 0x0  nop
    ctx->pc = 0x25b338u;
    // NOP
label_25b33c:
    // 0x25b33c: 0x4501fefa  bc1t        . + 4 + (-0x106 << 2)
    ctx->pc = 0x25B33Cu;
    {
        const bool branch_taken_0x25b33c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25B340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B33Cu;
        // 0x25b340: 0x8fa9012c  lw          $t1, 0x12C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b33c) {
            ctx->pc = 0x25AF28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25af28;
        }
    }
    ctx->pc = 0x25B344u;
label_25b344:
    // 0x25b344: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x25b344u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
label_25b348:
    // 0x25b348: 0xc4a0ea90  lwc1        $f0, -0x1570($a1)
    ctx->pc = 0x25b348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294961808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b34c: 0x4600a832  c.eq.s      $f21, $f0
    ctx->pc = 0x25b34cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25b350: 0x0  nop
    ctx->pc = 0x25b350u;
    // NOP
    // 0x25b354: 0x45010179  bc1t        . + 4 + (0x179 << 2)
    ctx->pc = 0x25B354u;
    {
        const bool branch_taken_0x25b354 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25B358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B354u;
        // 0x25b358: 0x8fa30128  lw          $v1, 0x128($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b354) {
            ctx->pc = 0x25B93Cu;
            goto label_25b93c;
        }
    }
    ctx->pc = 0x25B35Cu;
    // 0x25b35c: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x25b35cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25b360: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x25b360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x25b364: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25B364u;
    {
        const bool branch_taken_0x25b364 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x25B368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B364u;
        // 0x25b368: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b364) {
            ctx->pc = 0x25B378u;
            goto label_25b378;
        }
    }
    ctx->pc = 0x25B36Cu;
    // 0x25b36c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25b36cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25b370: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25B370u;
    {
        const bool branch_taken_0x25b370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B370u;
        // 0x25b374: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b370) {
            ctx->pc = 0x25B38Cu;
            goto label_25b38c;
        }
    }
    ctx->pc = 0x25B378u;
label_25b378:
    // 0x25b378: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x25b378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x25b37c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x25b37cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x25b380: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25b380u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25b384: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x25b384u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x25b388: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x25b388u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_25b38c:
    // 0x25b38c: 0xc78082fc  lwc1        $f0, -0x7D04($gp)
    ctx->pc = 0x25b38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b390: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x25b390u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x25b394: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x25b394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25b398: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x25b398u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25b39c: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25B39Cu;
    {
        const bool branch_taken_0x25b39c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x25B3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B39Cu;
        // 0x25b3a0: 0xe7a000d0  swc1        $f0, 0xD0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b39c) {
            ctx->pc = 0x25B3B0u;
            goto label_25b3b0;
        }
    }
    ctx->pc = 0x25B3A4u;
    // 0x25b3a4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x25b3a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25b3a8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x25B3A8u;
    {
        const bool branch_taken_0x25b3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B3A8u;
        // 0x25b3ac: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b3a8) {
            ctx->pc = 0x25B3C8u;
            goto label_25b3c8;
        }
    }
    ctx->pc = 0x25B3B0u;
label_25b3b0:
    // 0x25b3b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25b3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x25b3b4: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x25b3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x25b3b8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x25b3b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x25b3bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25b3bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25b3c0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x25b3c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x25b3c4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x25b3c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_25b3c8:
    // 0x25b3c8: 0xc7808300  lwc1        $f0, -0x7D00($gp)
    ctx->pc = 0x25b3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b3cc: 0x41402  srl         $v0, $a0, 16
    ctx->pc = 0x25b3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x25b3d0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x25b3d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25b3d4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x25b3d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25b3d8: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25B3D8u;
    {
        const bool branch_taken_0x25b3d8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x25B3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B3D8u;
        // 0x25b3dc: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b3d8) {
            ctx->pc = 0x25B3ECu;
            goto label_25b3ec;
        }
    }
    ctx->pc = 0x25B3E0u;
    // 0x25b3e0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x25b3e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25b3e4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x25B3E4u;
    {
        const bool branch_taken_0x25b3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B3E4u;
        // 0x25b3e8: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b3e4) {
            ctx->pc = 0x25B404u;
            goto label_25b404;
        }
    }
    ctx->pc = 0x25B3ECu;
label_25b3ec:
    // 0x25b3ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25b3ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x25b3f0: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x25b3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x25b3f4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x25b3f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x25b3f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25b3f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25b3fc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x25b3fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x25b400: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x25b400u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_25b404:
    // 0x25b404: 0xc7808304  lwc1        $f0, -0x7CFC($gp)
    ctx->pc = 0x25b404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b408: 0x8fa40074  lw          $a0, 0x74($sp)
    ctx->pc = 0x25b408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x25b40c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x25b40cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25b410: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x25b410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x25b414: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25B414u;
    {
        const bool branch_taken_0x25b414 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x25B418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B414u;
        // 0x25b418: 0xe7a000d8  swc1        $f0, 0xD8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b414) {
            ctx->pc = 0x25B428u;
            goto label_25b428;
        }
    }
    ctx->pc = 0x25B41Cu;
    // 0x25b41c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25b41cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25b420: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x25B420u;
    {
        const bool branch_taken_0x25b420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B420u;
        // 0x25b424: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b420) {
            ctx->pc = 0x25B440u;
            goto label_25b440;
        }
    }
    ctx->pc = 0x25B428u;
label_25b428:
    // 0x25b428: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x25b428u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x25b42c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x25b42cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x25b430: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x25b430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x25b434: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25b434u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25b438: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x25b438u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x25b43c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x25b43cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_25b440:
    // 0x25b440: 0xc7808308  lwc1        $f0, -0x7CF8($gp)
    ctx->pc = 0x25b440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b444: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x25b444u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x25b448: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x25b448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25b44c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x25b44cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25b450: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25B450u;
    {
        const bool branch_taken_0x25b450 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x25B454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B450u;
        // 0x25b454: 0xe7a000dc  swc1        $f0, 0xDC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b450) {
            ctx->pc = 0x25B464u;
            goto label_25b464;
        }
    }
    ctx->pc = 0x25B458u;
    // 0x25b458: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x25b458u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25b45c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x25B45Cu;
    {
        const bool branch_taken_0x25b45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B45Cu;
        // 0x25b460: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b45c) {
            ctx->pc = 0x25B47Cu;
            goto label_25b47c;
        }
    }
    ctx->pc = 0x25B464u;
label_25b464:
    // 0x25b464: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25b464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x25b468: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x25b468u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x25b46c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x25b46cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x25b470: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25b470u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25b474: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x25b474u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x25b478: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x25b478u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_25b47c:
    // 0x25b47c: 0xc780830c  lwc1        $f0, -0x7CF4($gp)
    ctx->pc = 0x25b47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b480: 0x41402  srl         $v0, $a0, 16
    ctx->pc = 0x25b480u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x25b484: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x25b484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25b488: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x25b488u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25b48c: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25B48Cu;
    {
        const bool branch_taken_0x25b48c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x25B490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B48Cu;
        // 0x25b490: 0xe7a000e0  swc1        $f0, 0xE0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b48c) {
            ctx->pc = 0x25B4A0u;
            goto label_25b4a0;
        }
    }
    ctx->pc = 0x25B494u;
    // 0x25b494: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x25b494u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25b498: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x25B498u;
    {
        const bool branch_taken_0x25b498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B498u;
        // 0x25b49c: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b498) {
            ctx->pc = 0x25B4B8u;
            goto label_25b4b8;
        }
    }
    ctx->pc = 0x25B4A0u;
label_25b4a0:
    // 0x25b4a0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25b4a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x25b4a4: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x25b4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x25b4a8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x25b4a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x25b4ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25b4acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25b4b0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x25b4b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x25b4b4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x25b4b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_25b4b8:
    // 0x25b4b8: 0xc7808310  lwc1        $f0, -0x7CF0($gp)
    ctx->pc = 0x25b4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b4bc: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x25b4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x25b4c0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x25b4c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25b4c4: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x25b4c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x25b4c8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25B4C8u;
    {
        const bool branch_taken_0x25b4c8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x25B4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B4C8u;
        // 0x25b4cc: 0xe7a000e4  swc1        $f0, 0xE4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b4c8) {
            ctx->pc = 0x25B4DCu;
            goto label_25b4dc;
        }
    }
    ctx->pc = 0x25B4D0u;
    // 0x25b4d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25b4d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25b4d4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x25B4D4u;
    {
        const bool branch_taken_0x25b4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B4D4u;
        // 0x25b4d8: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b4d4) {
            ctx->pc = 0x25B4F4u;
            goto label_25b4f4;
        }
    }
    ctx->pc = 0x25B4DCu;
label_25b4dc:
    // 0x25b4dc: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x25b4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x25b4e0: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x25b4e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x25b4e4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x25b4e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x25b4e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25b4e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25b4ec: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x25b4ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x25b4f0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x25b4f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_25b4f4:
    // 0x25b4f4: 0xc7808314  lwc1        $f0, -0x7CEC($gp)
    ctx->pc = 0x25b4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b4f8: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x25b4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x25b4fc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x25b4fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25b500: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x25b500u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25b504: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25B504u;
    {
        const bool branch_taken_0x25b504 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x25B508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B504u;
        // 0x25b508: 0xe7a000e8  swc1        $f0, 0xE8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b504) {
            ctx->pc = 0x25B518u;
            goto label_25b518;
        }
    }
    ctx->pc = 0x25B50Cu;
    // 0x25b50c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x25b50cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25b510: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x25B510u;
    {
        const bool branch_taken_0x25b510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B510u;
        // 0x25b514: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b510) {
            ctx->pc = 0x25B530u;
            goto label_25b530;
        }
    }
    ctx->pc = 0x25B518u;
label_25b518:
    // 0x25b518: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25b518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x25b51c: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x25b51cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x25b520: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x25b520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x25b524: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25b524u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25b528: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x25b528u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x25b52c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x25b52cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_25b530:
    // 0x25b530: 0xc7808318  lwc1        $f0, -0x7CE8($gp)
    ctx->pc = 0x25b530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b534: 0x41402  srl         $v0, $a0, 16
    ctx->pc = 0x25b534u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x25b538: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x25b538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25b53c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x25b53cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25b540: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x25B540u;
    {
        const bool branch_taken_0x25b540 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x25B544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B540u;
        // 0x25b544: 0xe7a000ec  swc1        $f0, 0xEC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b540) {
            ctx->pc = 0x25B558u;
            goto label_25b558;
        }
    }
    ctx->pc = 0x25B548u;
    // 0x25b548: 0x44833000  mtc1        $v1, $f6
    ctx->pc = 0x25b548u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x25b54c: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x25b54cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x25b550: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25B550u;
    {
        const bool branch_taken_0x25b550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B550u;
        // 0x25b554: 0xc7a0004c  lwc1        $f0, 0x4C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b550) {
            ctx->pc = 0x25B574u;
            goto label_25b574;
        }
    }
    ctx->pc = 0x25B558u;
label_25b558:
    // 0x25b558: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25b558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x25b55c: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x25b55cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x25b560: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x25b560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x25b564: 0x44823000  mtc1        $v0, $f6
    ctx->pc = 0x25b564u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x25b568: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x25b568u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x25b56c: 0x46063180  add.s       $f6, $f6, $f6
    ctx->pc = 0x25b56cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[6]);
    // 0x25b570: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x25b570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25b574:
    // 0x25b574: 0xc7af0040  lwc1        $f15, 0x40($sp)
    ctx->pc = 0x25b574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x25b578: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x25b578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25b57c: 0xc7b30044  lwc1        $f19, 0x44($sp)
    ctx->pc = 0x25b57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x25b580: 0x460f0001  sub.s       $f0, $f0, $f15
    ctx->pc = 0x25b580u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[15]);
    // 0x25b584: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x25b584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25b588: 0x46130841  sub.s       $f1, $f1, $f19
    ctx->pc = 0x25b588u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[19]);
    // 0x25b58c: 0xc7b40048  lwc1        $f20, 0x48($sp)
    ctx->pc = 0x25b58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25b590: 0x46000102  mul.s       $f4, $f0, $f0
    ctx->pc = 0x25b590u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x25b594: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x25b594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x25b598: 0x46141081  sub.s       $f2, $f2, $f20
    ctx->pc = 0x25b598u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[20]);
    // 0x25b59c: 0xc783831c  lwc1        $f3, -0x7CE4($gp)
    ctx->pc = 0x25b59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25b5a0: 0x46010942  mul.s       $f5, $f1, $f1
    ctx->pc = 0x25b5a0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x25b5a4: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x25b5a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x25b5a8: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x25b5a8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x25b5ac: 0x46021002  mul.s       $f0, $f2, $f2
    ctx->pc = 0x25b5acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x25b5b0: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x25b5b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x25b5b4: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x25b5b4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x25b5b8: 0x46002300  add.s       $f12, $f4, $f0
    ctx->pc = 0x25b5b8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x25b5bc: 0x0  nop
    ctx->pc = 0x25b5bcu;
    // NOP
    // 0x25b5c0: 0x0  nop
    ctx->pc = 0x25b5c0u;
    // NOP
    // 0x25b5c4: 0x460c0044  c1          0xC0044
    ctx->pc = 0x25b5c4u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[12]);
    // 0x25b5c8: 0x46010832  c.eq.s      $f1, $f1
    ctx->pc = 0x25b5c8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25b5cc: 0x0  nop
    ctx->pc = 0x25b5ccu;
    // NOP
    // 0x25b5d0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x25B5D0u;
    {
        const bool branch_taken_0x25b5d0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25B5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B5D0u;
        // 0x25b5d4: 0xe7a300f0  swc1        $f3, 0xF0($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b5d0) {
            ctx->pc = 0x25B5F0u;
            goto label_25b5f0;
        }
    }
    ctx->pc = 0x25B5D8u;
    // 0x25b5d8: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x25B5D8u;
    SET_GPR_U32(ctx, 31, 0x25B5E0u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x25B5D8u, 0x25B5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B5E0u;
label_25b5e0:
    // 0x25b5e0: 0xc7af0040  lwc1        $f15, 0x40($sp)
    ctx->pc = 0x25b5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x25b5e4: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x25b5e4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x25b5e8: 0xc7b30044  lwc1        $f19, 0x44($sp)
    ctx->pc = 0x25b5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x25b5ec: 0xc7b40048  lwc1        $f20, 0x48($sp)
    ctx->pc = 0x25b5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_25b5f0:
    // 0x25b5f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25b5f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25b5f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25b5f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25b5f8: 0xc7a60080  lwc1        $f6, 0x80($sp)
    ctx->pc = 0x25b5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x25b5fc: 0x0  nop
    ctx->pc = 0x25b5fcu;
    // NOP
    // 0x25b600: 0x0  nop
    ctx->pc = 0x25b600u;
    // NOP
    // 0x25b604: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x25b604u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x25b608: 0xc7a50084  lwc1        $f5, 0x84($sp)
    ctx->pc = 0x25b608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x25b60c: 0xc7b70010  lwc1        $f23, 0x10($sp)
    ctx->pc = 0x25b60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x25b610: 0xc7b80014  lwc1        $f24, 0x14($sp)
    ctx->pc = 0x25b610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x25b614: 0x460fba41  sub.s       $f9, $f23, $f15
    ctx->pc = 0x25b614u;
    ctx->f[9] = FPU_SUB_S(ctx->f[23], ctx->f[15]);
    // 0x25b618: 0xc7a40088  lwc1        $f4, 0x88($sp)
    ctx->pc = 0x25b618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x25b61c: 0x4613c2c1  sub.s       $f11, $f24, $f19
    ctx->pc = 0x25b61cu;
    ctx->f[11] = FPU_SUB_S(ctx->f[24], ctx->f[19]);
    // 0x25b620: 0xc7b60018  lwc1        $f22, 0x18($sp)
    ctx->pc = 0x25b620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x25b624: 0xc7b10058  lwc1        $f17, 0x58($sp)
    ctx->pc = 0x25b624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x25b628: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x25b628u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x25b62c: 0xc7b0005c  lwc1        $f16, 0x5C($sp)
    ctx->pc = 0x25b62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x25b630: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x25b630u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x25b634: 0xc7b50060  lwc1        $f21, 0x60($sp)
    ctx->pc = 0x25b634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x25b638: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x25b638u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x25b63c: 0x460649c2  mul.s       $f7, $f9, $f6
    ctx->pc = 0x25b63cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[9], ctx->f[6]);
    // 0x25b640: 0xe7a60080  swc1        $f6, 0x80($sp)
    ctx->pc = 0x25b640u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x25b644: 0x46055802  mul.s       $f0, $f11, $f5
    ctx->pc = 0x25b644u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[5]);
    // 0x25b648: 0xe7a50084  swc1        $f5, 0x84($sp)
    ctx->pc = 0x25b648u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x25b64c: 0x4614b281  sub.s       $f10, $f22, $f20
    ctx->pc = 0x25b64cu;
    ctx->f[10] = FPU_SUB_S(ctx->f[22], ctx->f[20]);
    // 0x25b650: 0xe7a40088  swc1        $f4, 0x88($sp)
    ctx->pc = 0x25b650u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x25b654: 0x460f8841  sub.s       $f1, $f17, $f15
    ctx->pc = 0x25b654u;
    ctx->f[1] = FPU_SUB_S(ctx->f[17], ctx->f[15]);
    // 0x25b658: 0x46138081  sub.s       $f2, $f16, $f19
    ctx->pc = 0x25b658u;
    ctx->f[2] = FPU_SUB_S(ctx->f[16], ctx->f[19]);
    // 0x25b65c: 0x46045302  mul.s       $f12, $f10, $f4
    ctx->pc = 0x25b65cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[10], ctx->f[4]);
    // 0x25b660: 0x460039c0  add.s       $f7, $f7, $f0
    ctx->pc = 0x25b660u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
    // 0x25b664: 0x46051202  mul.s       $f8, $f2, $f5
    ctx->pc = 0x25b664u;
    ctx->f[8] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x25b668: 0x46060802  mul.s       $f0, $f1, $f6
    ctx->pc = 0x25b668u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x25b66c: 0x4614a8c1  sub.s       $f3, $f21, $f20
    ctx->pc = 0x25b66cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
    // 0x25b670: 0x460c3b80  add.s       $f14, $f7, $f12
    ctx->pc = 0x25b670u;
    ctx->f[14] = FPU_ADD_S(ctx->f[7], ctx->f[12]);
    // 0x25b674: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x25b674u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x25b678: 0x46041b42  mul.s       $f13, $f3, $f4
    ctx->pc = 0x25b678u;
    ctx->f[13] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x25b67c: 0x46047302  mul.s       $f12, $f14, $f4
    ctx->pc = 0x25b67cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[14], ctx->f[4]);
    // 0x25b680: 0x460671c2  mul.s       $f7, $f14, $f6
    ctx->pc = 0x25b680u;
    ctx->f[7] = FPU_MUL_S(ctx->f[14], ctx->f[6]);
    // 0x25b684: 0x46057202  mul.s       $f8, $f14, $f5
    ctx->pc = 0x25b684u;
    ctx->f[8] = FPU_MUL_S(ctx->f[14], ctx->f[5]);
    // 0x25b688: 0x460d0380  add.s       $f14, $f0, $f13
    ctx->pc = 0x25b688u;
    ctx->f[14] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
    // 0x25b68c: 0x46074a41  sub.s       $f9, $f9, $f7
    ctx->pc = 0x25b68cu;
    ctx->f[9] = FPU_SUB_S(ctx->f[9], ctx->f[7]);
    // 0x25b690: 0x46085ac1  sub.s       $f11, $f11, $f8
    ctx->pc = 0x25b690u;
    ctx->f[11] = FPU_SUB_S(ctx->f[11], ctx->f[8]);
    // 0x25b694: 0x46067182  mul.s       $f6, $f14, $f6
    ctx->pc = 0x25b694u;
    ctx->f[6] = FPU_MUL_S(ctx->f[14], ctx->f[6]);
    // 0x25b698: 0x46057142  mul.s       $f5, $f14, $f5
    ctx->pc = 0x25b698u;
    ctx->f[5] = FPU_MUL_S(ctx->f[14], ctx->f[5]);
    // 0x25b69c: 0x46047102  mul.s       $f4, $f14, $f4
    ctx->pc = 0x25b69cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[14], ctx->f[4]);
    // 0x25b6a0: 0x46060841  sub.s       $f1, $f1, $f6
    ctx->pc = 0x25b6a0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
    // 0x25b6a4: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x25b6a4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x25b6a8: 0x460418c1  sub.s       $f3, $f3, $f4
    ctx->pc = 0x25b6a8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x25b6ac: 0xe7a100a0  swc1        $f1, 0xA0($sp)
    ctx->pc = 0x25b6acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x25b6b0: 0x460c5281  sub.s       $f10, $f10, $f12
    ctx->pc = 0x25b6b0u;
    ctx->f[10] = FPU_SUB_S(ctx->f[10], ctx->f[12]);
    // 0x25b6b4: 0xe7a200a4  swc1        $f2, 0xA4($sp)
    ctx->pc = 0x25b6b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x25b6b8: 0x46094a42  mul.s       $f9, $f9, $f9
    ctx->pc = 0x25b6b8u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[9]);
    // 0x25b6bc: 0x460b5ac2  mul.s       $f11, $f11, $f11
    ctx->pc = 0x25b6bcu;
    ctx->f[11] = FPU_MUL_S(ctx->f[11], ctx->f[11]);
    // 0x25b6c0: 0xe7a300a8  swc1        $f3, 0xA8($sp)
    ctx->pc = 0x25b6c0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x25b6c4: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x25b6c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x25b6c8: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x25b6c8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x25b6cc: 0x460b4a40  add.s       $f9, $f9, $f11
    ctx->pc = 0x25b6ccu;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[11]);
    // 0x25b6d0: 0x460a5282  mul.s       $f10, $f10, $f10
    ctx->pc = 0x25b6d0u;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
    // 0x25b6d4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x25b6d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x25b6d8: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x25b6d8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x25b6dc: 0x460a4980  add.s       $f6, $f9, $f10
    ctx->pc = 0x25b6dcu;
    ctx->f[6] = FPU_ADD_S(ctx->f[9], ctx->f[10]);
    // 0x25b6e0: 0x460308c0  add.s       $f3, $f1, $f3
    ctx->pc = 0x25b6e0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x25b6e4: 0x0  nop
    ctx->pc = 0x25b6e4u;
    // NOP
    // 0x25b6e8: 0x0  nop
    ctx->pc = 0x25b6e8u;
    // NOP
    // 0x25b6ec: 0x46033303  div.s       $f12, $f6, $f3
    ctx->pc = 0x25b6ecu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[6] * 0.0f); } else ctx->f[12] = ctx->f[6] / ctx->f[3];
    // 0x25b6f0: 0x0  nop
    ctx->pc = 0x25b6f0u;
    // NOP
    // 0x25b6f4: 0x0  nop
    ctx->pc = 0x25b6f4u;
    // NOP
    // 0x25b6f8: 0x460c0004  c1          0xC0004
    ctx->pc = 0x25b6f8u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x25b6fc: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x25b6fcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25b700: 0x0  nop
    ctx->pc = 0x25b700u;
    // NOP
    // 0x25b704: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x25B704u;
    {
        const bool branch_taken_0x25b704 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25B708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B704u;
        // 0x25b708: 0xc7a3004c  lwc1        $f3, 0x4C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b704) {
            ctx->pc = 0x25B73Cu;
            goto label_25b73c;
        }
    }
    ctx->pc = 0x25B70Cu;
    // 0x25b70c: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x25B70Cu;
    SET_GPR_U32(ctx, 31, 0x25B714u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x25B70Cu, 0x25B714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B714u;
label_25b714:
    // 0x25b714: 0xc7af0040  lwc1        $f15, 0x40($sp)
    ctx->pc = 0x25b714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x25b718: 0xc7b30044  lwc1        $f19, 0x44($sp)
    ctx->pc = 0x25b718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x25b71c: 0xc7b40048  lwc1        $f20, 0x48($sp)
    ctx->pc = 0x25b71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25b720: 0xc7b70010  lwc1        $f23, 0x10($sp)
    ctx->pc = 0x25b720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x25b724: 0xc7b80014  lwc1        $f24, 0x14($sp)
    ctx->pc = 0x25b724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x25b728: 0xc7b60018  lwc1        $f22, 0x18($sp)
    ctx->pc = 0x25b728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x25b72c: 0xc7b10058  lwc1        $f17, 0x58($sp)
    ctx->pc = 0x25b72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x25b730: 0xc7b0005c  lwc1        $f16, 0x5C($sp)
    ctx->pc = 0x25b730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x25b734: 0xc7b50060  lwc1        $f21, 0x60($sp)
    ctx->pc = 0x25b734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x25b738: 0xc7a3004c  lwc1        $f3, 0x4C($sp)
    ctx->pc = 0x25b738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_25b73c:
    // 0x25b73c: 0x460f8841  sub.s       $f1, $f17, $f15
    ctx->pc = 0x25b73cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[17], ctx->f[15]);
    // 0x25b740: 0xc7a40050  lwc1        $f4, 0x50($sp)
    ctx->pc = 0x25b740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x25b744: 0x46138081  sub.s       $f2, $f16, $f19
    ctx->pc = 0x25b744u;
    ctx->f[2] = FPU_SUB_S(ctx->f[16], ctx->f[19]);
    // 0x25b748: 0x460389c1  sub.s       $f7, $f17, $f3
    ctx->pc = 0x25b748u;
    ctx->f[7] = FPU_SUB_S(ctx->f[17], ctx->f[3]);
    // 0x25b74c: 0xc7a50054  lwc1        $f5, 0x54($sp)
    ctx->pc = 0x25b74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x25b750: 0x46048201  sub.s       $f8, $f16, $f4
    ctx->pc = 0x25b750u;
    ctx->f[8] = FPU_SUB_S(ctx->f[16], ctx->f[4]);
    // 0x25b754: 0x46000486  mov.s       $f18, $f0
    ctx->pc = 0x25b754u;
    ctx->f[18] = FPU_MOV_S(ctx->f[0]);
    // 0x25b758: 0x4605a981  sub.s       $f6, $f21, $f5
    ctx->pc = 0x25b758u;
    ctx->f[6] = FPU_SUB_S(ctx->f[21], ctx->f[5]);
    // 0x25b75c: 0xc7ab00e8  lwc1        $f11, 0xE8($sp)
    ctx->pc = 0x25b75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x25b760: 0x460791c2  mul.s       $f7, $f18, $f7
    ctx->pc = 0x25b760u;
    ctx->f[7] = FPU_MUL_S(ctx->f[18], ctx->f[7]);
    // 0x25b764: 0xc7aa00ec  lwc1        $f10, 0xEC($sp)
    ctx->pc = 0x25b764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x25b768: 0x46089202  mul.s       $f8, $f18, $f8
    ctx->pc = 0x25b768u;
    ctx->f[8] = FPU_MUL_S(ctx->f[18], ctx->f[8]);
    // 0x25b76c: 0xc7a900f0  lwc1        $f9, 0xF0($sp)
    ctx->pc = 0x25b76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x25b770: 0x46019042  mul.s       $f1, $f18, $f1
    ctx->pc = 0x25b770u;
    ctx->f[1] = FPU_MUL_S(ctx->f[18], ctx->f[1]);
    // 0x25b774: 0xc7ad00e0  lwc1        $f13, 0xE0($sp)
    ctx->pc = 0x25b774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x25b778: 0x46029082  mul.s       $f2, $f18, $f2
    ctx->pc = 0x25b778u;
    ctx->f[2] = FPU_MUL_S(ctx->f[18], ctx->f[2]);
    // 0x25b77c: 0xc7ac00e4  lwc1        $f12, 0xE4($sp)
    ctx->pc = 0x25b77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25b780: 0x4614a801  sub.s       $f0, $f21, $f20
    ctx->pc = 0x25b780u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
    // 0x25b784: 0xc7b100d0  lwc1        $f17, 0xD0($sp)
    ctx->pc = 0x25b784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x25b788: 0x460718c0  add.s       $f3, $f3, $f7
    ctx->pc = 0x25b788u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[7]);
    // 0x25b78c: 0xc7b000d4  lwc1        $f16, 0xD4($sp)
    ctx->pc = 0x25b78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x25b790: 0x46082100  add.s       $f4, $f4, $f8
    ctx->pc = 0x25b790u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[8]);
    // 0x25b794: 0xc7ae00d8  lwc1        $f14, 0xD8($sp)
    ctx->pc = 0x25b794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x25b798: 0x46069182  mul.s       $f6, $f18, $f6
    ctx->pc = 0x25b798u;
    ctx->f[6] = FPU_MUL_S(ctx->f[18], ctx->f[6]);
    // 0x25b79c: 0x46017840  add.s       $f1, $f15, $f1
    ctx->pc = 0x25b79cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[15], ctx->f[1]);
    // 0x25b7a0: 0xe7a3010c  swc1        $f3, 0x10C($sp)
    ctx->pc = 0x25b7a0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x25b7a4: 0x46029880  add.s       $f2, $f19, $f2
    ctx->pc = 0x25b7a4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[19], ctx->f[2]);
    // 0x25b7a8: 0xe7a40110  swc1        $f4, 0x110($sp)
    ctx->pc = 0x25b7a8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x25b7ac: 0x46009002  mul.s       $f0, $f18, $f0
    ctx->pc = 0x25b7acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[18], ctx->f[0]);
    // 0x25b7b0: 0xc7af00dc  lwc1        $f15, 0xDC($sp)
    ctx->pc = 0x25b7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x25b7b4: 0x46062940  add.s       $f5, $f5, $f6
    ctx->pc = 0x25b7b4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
    // 0x25b7b8: 0xe7a10100  swc1        $f1, 0x100($sp)
    ctx->pc = 0x25b7b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x25b7bc: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x25b7bcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x25b7c0: 0xe7a20104  swc1        $f2, 0x104($sp)
    ctx->pc = 0x25b7c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x25b7c4: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x25b7c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x25b7c8: 0x46022101  sub.s       $f4, $f4, $f2
    ctx->pc = 0x25b7c8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x25b7cc: 0xe7a50114  swc1        $f5, 0x114($sp)
    ctx->pc = 0x25b7ccu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x25b7d0: 0x4601b841  sub.s       $f1, $f23, $f1
    ctx->pc = 0x25b7d0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[23], ctx->f[1]);
    // 0x25b7d4: 0xe7a300a0  swc1        $f3, 0xA0($sp)
    ctx->pc = 0x25b7d4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x25b7d8: 0x4602c081  sub.s       $f2, $f24, $f2
    ctx->pc = 0x25b7d8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[24], ctx->f[2]);
    // 0x25b7dc: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x25b7dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x25b7e0: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x25b7e0u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x25b7e4: 0xe7a400a4  swc1        $f4, 0xA4($sp)
    ctx->pc = 0x25b7e4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x25b7e8: 0x4600b001  sub.s       $f0, $f22, $f0
    ctx->pc = 0x25b7e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
    // 0x25b7ec: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x25b7ecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x25b7f0: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x25b7f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x25b7f4: 0xe7a500a8  swc1        $f5, 0xA8($sp)
    ctx->pc = 0x25b7f4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x25b7f8: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x25b7f8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x25b7fc: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x25b7fcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x25b800: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x25b800u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x25b804: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x25b804u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x25b808: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x25b808u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x25b80c: 0x46052942  mul.s       $f5, $f5, $f5
    ctx->pc = 0x25b80cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x25b810: 0x46000980  add.s       $f6, $f1, $f0
    ctx->pc = 0x25b810u;
    ctx->f[6] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x25b814: 0x460f5881  sub.s       $f2, $f11, $f15
    ctx->pc = 0x25b814u;
    ctx->f[2] = FPU_SUB_S(ctx->f[11], ctx->f[15]);
    // 0x25b818: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x25b818u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x25b81c: 0x460d5001  sub.s       $f0, $f10, $f13
    ctx->pc = 0x25b81cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[10], ctx->f[13]);
    // 0x25b820: 0x460c4841  sub.s       $f1, $f9, $f12
    ctx->pc = 0x25b820u;
    ctx->f[1] = FPU_SUB_S(ctx->f[9], ctx->f[12]);
    // 0x25b824: 0x0  nop
    ctx->pc = 0x25b824u;
    // NOP
    // 0x25b828: 0x0  nop
    ctx->pc = 0x25b828u;
    // NOP
    // 0x25b82c: 0x460330c3  div.s       $f3, $f6, $f3
    ctx->pc = 0x25b82cu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[6] * 0.0f); } else ctx->f[3] = ctx->f[6] / ctx->f[3];
    // 0x25b830: 0x46115ac1  sub.s       $f11, $f11, $f17
    ctx->pc = 0x25b830u;
    ctx->f[11] = FPU_SUB_S(ctx->f[11], ctx->f[17]);
    // 0x25b834: 0x46105281  sub.s       $f10, $f10, $f16
    ctx->pc = 0x25b834u;
    ctx->f[10] = FPU_SUB_S(ctx->f[10], ctx->f[16]);
    // 0x25b838: 0x460e4a41  sub.s       $f9, $f9, $f14
    ctx->pc = 0x25b838u;
    ctx->f[9] = FPU_SUB_S(ctx->f[9], ctx->f[14]);
    // 0x25b83c: 0x46019042  mul.s       $f1, $f18, $f1
    ctx->pc = 0x25b83cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[18], ctx->f[1]);
    // 0x25b840: 0x460b92c2  mul.s       $f11, $f18, $f11
    ctx->pc = 0x25b840u;
    ctx->f[11] = FPU_MUL_S(ctx->f[18], ctx->f[11]);
    // 0x25b844: 0x0  nop
    ctx->pc = 0x25b844u;
    // NOP
    // 0x25b848: 0x0  nop
    ctx->pc = 0x25b848u;
    // NOP
    // 0x25b84c: 0x460304c4  c1          0x304C4
    ctx->pc = 0x25b84cu;
    ctx->f[19] = FPU_SQRT_S(ctx->f[3]);
    // 0x25b850: 0x460a9282  mul.s       $f10, $f18, $f10
    ctx->pc = 0x25b850u;
    ctx->f[10] = FPU_MUL_S(ctx->f[18], ctx->f[10]);
    // 0x25b854: 0x46099242  mul.s       $f9, $f18, $f9
    ctx->pc = 0x25b854u;
    ctx->f[9] = FPU_MUL_S(ctx->f[18], ctx->f[9]);
    // 0x25b858: 0x46029082  mul.s       $f2, $f18, $f2
    ctx->pc = 0x25b858u;
    ctx->f[2] = FPU_MUL_S(ctx->f[18], ctx->f[2]);
    // 0x25b85c: 0x46009002  mul.s       $f0, $f18, $f0
    ctx->pc = 0x25b85cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[18], ctx->f[0]);
    // 0x25b860: 0x460b8c40  add.s       $f17, $f17, $f11
    ctx->pc = 0x25b860u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[11]);
    // 0x25b864: 0x460a8400  add.s       $f16, $f16, $f10
    ctx->pc = 0x25b864u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[10]);
    // 0x25b868: 0x46097380  add.s       $f14, $f14, $f9
    ctx->pc = 0x25b868u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[9]);
    // 0x25b86c: 0x46027bc0  add.s       $f15, $f15, $f2
    ctx->pc = 0x25b86cu;
    ctx->f[15] = FPU_ADD_S(ctx->f[15], ctx->f[2]);
    // 0x25b870: 0xe7b100b0  swc1        $f17, 0xB0($sp)
    ctx->pc = 0x25b870u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x25b874: 0x46006b40  add.s       $f13, $f13, $f0
    ctx->pc = 0x25b874u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x25b878: 0xe7b000b4  swc1        $f16, 0xB4($sp)
    ctx->pc = 0x25b878u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x25b87c: 0x46016300  add.s       $f12, $f12, $f1
    ctx->pc = 0x25b87cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x25b880: 0xe7ae00b8  swc1        $f14, 0xB8($sp)
    ctx->pc = 0x25b880u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x25b884: 0x46139832  c.eq.s      $f19, $f19
    ctx->pc = 0x25b884u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[19], ctx->f[19])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25b888: 0xe7af00bc  swc1        $f15, 0xBC($sp)
    ctx->pc = 0x25b888u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x25b88c: 0xe7ad00c0  swc1        $f13, 0xC0($sp)
    ctx->pc = 0x25b88cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x25b890: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x25B890u;
    {
        const bool branch_taken_0x25b890 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25B894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B890u;
        // 0x25b894: 0xe7ac00c4  swc1        $f12, 0xC4($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b890) {
            ctx->pc = 0x25B8A4u;
            goto label_25b8a4;
        }
    }
    ctx->pc = 0x25B898u;
    // 0x25b898: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x25B898u;
    SET_GPR_U32(ctx, 31, 0x25B8A0u);
    ctx->pc = 0x25B89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B898u;
    // 0x25b89c: 0x46001b06  mov.s       $f12, $f3 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[3]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x25B898u, 0x25B8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B8A0u;
label_25b8a0:
    // 0x25b8a0: 0x460004c6  mov.s       $f19, $f0
    ctx->pc = 0x25b8a0u;
    ctx->f[19] = FPU_MOV_S(ctx->f[0]);
label_25b8a4:
    // 0x25b8a4: 0xc7a500b4  lwc1        $f5, 0xB4($sp)
    ctx->pc = 0x25b8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x25b8a8: 0x46009c86  mov.s       $f18, $f19
    ctx->pc = 0x25b8a8u;
    ctx->f[18] = FPU_MOV_S(ctx->f[19]);
    // 0x25b8ac: 0xc7a200c0  lwc1        $f2, 0xC0($sp)
    ctx->pc = 0x25b8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25b8b0: 0xc7a400b0  lwc1        $f4, 0xB0($sp)
    ctx->pc = 0x25b8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x25b8b4: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x25b8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b8b8: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x25b8b8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x25b8bc: 0xc7a600b8  lwc1        $f6, 0xB8($sp)
    ctx->pc = 0x25b8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x25b8c0: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x25b8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25b8c4: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x25b8c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x25b8c8: 0x46029082  mul.s       $f2, $f18, $f2
    ctx->pc = 0x25b8c8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[18], ctx->f[2]);
    // 0x25b8cc: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x25b8ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x25b8d0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x25b8d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x25b8d4: 0x46060841  sub.s       $f1, $f1, $f6
    ctx->pc = 0x25b8d4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
    // 0x25b8d8: 0x8fa60124  lw          $a2, 0x124($sp)
    ctx->pc = 0x25b8d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x25b8dc: 0x46009002  mul.s       $f0, $f18, $f0
    ctx->pc = 0x25b8dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[18], ctx->f[0]);
    // 0x25b8e0: 0x46022940  add.s       $f5, $f5, $f2
    ctx->pc = 0x25b8e0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x25b8e4: 0x46019042  mul.s       $f1, $f18, $f1
    ctx->pc = 0x25b8e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[18], ctx->f[1]);
    // 0x25b8e8: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x25b8e8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x25b8ec: 0x46032882  mul.s       $f2, $f5, $f3
    ctx->pc = 0x25b8ecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x25b8f0: 0xe4c50004  swc1        $f5, 0x4($a2)
    ctx->pc = 0x25b8f0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x25b8f4: 0x46013180  add.s       $f6, $f6, $f1
    ctx->pc = 0x25b8f4u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[1]);
    // 0x25b8f8: 0x46032002  mul.s       $f0, $f4, $f3
    ctx->pc = 0x25b8f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x25b8fc: 0xe4c40000  swc1        $f4, 0x0($a2)
    ctx->pc = 0x25b8fcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x25b900: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x25b900u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x25b904: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x25b904u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x25b908: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x25b908u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x25b90c: 0xe4c60008  swc1        $f6, 0x8($a2)
    ctx->pc = 0x25b90cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x25b910: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x25b910u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x25b914: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x25b914u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x25b918: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x25b918u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x25b91c: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x25b91cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x25b920: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x25b920u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x25b924: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x25b924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x25b928: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x25b928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x25b92c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x25b92cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x25b930: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x25b930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x25b934: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x25B934u;
    {
        const bool branch_taken_0x25b934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B934u;
        // 0x25b938: 0xac43021c  sw          $v1, 0x21C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 540), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b934) {
            ctx->pc = 0x25BA18u;
            goto label_25ba18;
        }
    }
    ctx->pc = 0x25B93Cu;
label_25b93c:
    // 0x25b93c: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x25b93cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x25b940: 0x34424c4c  ori         $v0, $v0, 0x4C4C
    ctx->pc = 0x25b940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19532);
    // 0x25b944: 0xc7808320  lwc1        $f0, -0x7CE0($gp)
    ctx->pc = 0x25b944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b948: 0xac62021c  sw          $v0, 0x21C($v1)
    ctx->pc = 0x25b948u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 540), GPR_U32(ctx, 2));
    // 0x25b94c: 0x8fa40124  lw          $a0, 0x124($sp)
    ctx->pc = 0x25b94cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x25b950: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x25b950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x25b954: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x25b954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x25b958: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x25B958u;
    {
        const bool branch_taken_0x25b958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B958u;
        // 0x25b95c: 0xe4800004  swc1        $f0, 0x4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b958) {
            ctx->pc = 0x25BA18u;
            goto label_25ba18;
        }
    }
    ctx->pc = 0x25B960u;
label_25b960:
    // 0x25b960: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25B960u;
    {
        const bool branch_taken_0x25b960 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x25B964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B960u;
        // 0x25b964: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b960) {
            ctx->pc = 0x25B974u;
            goto label_25b974;
        }
    }
    ctx->pc = 0x25B968u;
    // 0x25b968: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25b968u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25b96c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25B96Cu;
    {
        const bool branch_taken_0x25b96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B96Cu;
        // 0x25b970: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b96c) {
            ctx->pc = 0x25B988u;
            goto label_25b988;
        }
    }
    ctx->pc = 0x25B974u;
label_25b974:
    // 0x25b974: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x25b974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x25b978: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x25b978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x25b97c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25b97cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25b980: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x25b980u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x25b984: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x25b984u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_25b988:
    // 0x25b988: 0xc7808324  lwc1        $f0, -0x7CDC($gp)
    ctx->pc = 0x25b988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b98c: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x25b98cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x25b990: 0x8fa50124  lw          $a1, 0x124($sp)
    ctx->pc = 0x25b990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x25b994: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x25b994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25b998: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x25b998u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25b99c: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25B99Cu;
    {
        const bool branch_taken_0x25b99c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x25B9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B99Cu;
        // 0x25b9a0: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b99c) {
            ctx->pc = 0x25B9B0u;
            goto label_25b9b0;
        }
    }
    ctx->pc = 0x25B9A4u;
    // 0x25b9a4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x25b9a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25b9a8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x25B9A8u;
    {
        const bool branch_taken_0x25b9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B9A8u;
        // 0x25b9ac: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b9a8) {
            ctx->pc = 0x25B9C8u;
            goto label_25b9c8;
        }
    }
    ctx->pc = 0x25B9B0u;
label_25b9b0:
    // 0x25b9b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25b9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x25b9b4: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x25b9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x25b9b8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x25b9b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x25b9bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25b9bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25b9c0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x25b9c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x25b9c4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x25b9c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_25b9c8:
    // 0x25b9c8: 0xc7808328  lwc1        $f0, -0x7CD8($gp)
    ctx->pc = 0x25b9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b9cc: 0x41402  srl         $v0, $a0, 16
    ctx->pc = 0x25b9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x25b9d0: 0x8fa60124  lw          $a2, 0x124($sp)
    ctx->pc = 0x25b9d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x25b9d4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x25b9d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25b9d8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x25b9d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25b9dc: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25B9DCu;
    {
        const bool branch_taken_0x25b9dc = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x25B9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B9DCu;
        // 0x25b9e0: 0xe4c00004  swc1        $f0, 0x4($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b9dc) {
            ctx->pc = 0x25B9F0u;
            goto label_25b9f0;
        }
    }
    ctx->pc = 0x25B9E4u;
    // 0x25b9e4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x25b9e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25b9e8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x25B9E8u;
    {
        const bool branch_taken_0x25b9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B9E8u;
        // 0x25b9ec: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b9e8) {
            ctx->pc = 0x25BA08u;
            goto label_25ba08;
        }
    }
    ctx->pc = 0x25B9F0u;
label_25b9f0:
    // 0x25b9f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25b9f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x25b9f4: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x25b9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x25b9f8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x25b9f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x25b9fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25b9fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25ba00: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x25ba00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x25ba04: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x25ba04u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_25ba08:
    // 0x25ba08: 0xc780832c  lwc1        $f0, -0x7CD4($gp)
    ctx->pc = 0x25ba08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ba0c: 0x8fa90124  lw          $t1, 0x124($sp)
    ctx->pc = 0x25ba0cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x25ba10: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x25ba10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25ba14: 0xe5200008  swc1        $f0, 0x8($t1)
    ctx->pc = 0x25ba14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
label_25ba18:
    // 0x25ba18: 0x8faa0134  lw          $t2, 0x134($sp)
    ctx->pc = 0x25ba18u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x25ba1c: 0x11400064  beqz        $t2, . + 4 + (0x64 << 2)
    ctx->pc = 0x25BA1Cu;
    {
        const bool branch_taken_0x25ba1c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BA1Cu;
        // 0x25ba20: 0x8fab0138  lw          $t3, 0x138($sp) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ba1c) {
            ctx->pc = 0x25BBB0u;
            goto label_25bbb0;
        }
    }
    ctx->pc = 0x25BA24u;
    // 0x25ba24: 0x8d6201a4  lw          $v0, 0x1A4($t3)
    ctx->pc = 0x25ba24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 420)));
    // 0x25ba28: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25BA28u;
    {
        const bool branch_taken_0x25ba28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BA28u;
        // 0x25ba2c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ba28) {
            ctx->pc = 0x25BA40u;
            goto label_25ba40;
        }
    }
    ctx->pc = 0x25BA30u;
    // 0x25ba30: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x25ba30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x25ba34: 0x94430124  lhu         $v1, 0x124($v0)
    ctx->pc = 0x25ba34u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 292)));
    // 0x25ba38: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25BA38u;
    {
        const bool branch_taken_0x25ba38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BA38u;
        // 0x25ba3c: 0x30710001  andi        $s1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ba38) {
            ctx->pc = 0x25BA44u;
            goto label_25ba44;
        }
    }
    ctx->pc = 0x25BA40u;
label_25ba40:
    // 0x25ba40: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x25ba40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25ba44:
    // 0x25ba44: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25ba44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25ba48: 0x8c620264  lw          $v0, 0x264($v1)
    ctx->pc = 0x25ba48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 612)));
    // 0x25ba4c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25BA4Cu;
    {
        const bool branch_taken_0x25ba4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BA4Cu;
        // 0x25ba50: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ba4c) {
            ctx->pc = 0x25BA60u;
            goto label_25ba60;
        }
    }
    ctx->pc = 0x25BA54u;
    // 0x25ba54: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x25ba54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x25ba58: 0x94430124  lhu         $v1, 0x124($v0)
    ctx->pc = 0x25ba58u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 292)));
    // 0x25ba5c: 0x30700001  andi        $s0, $v1, 0x1
    ctx->pc = 0x25ba5cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_25ba60:
    // 0x25ba60: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x25BA60u;
    {
        const bool branch_taken_0x25ba60 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BA60u;
        // 0x25ba64: 0x8fa50138  lw          $a1, 0x138($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ba60) {
            ctx->pc = 0x25BA78u;
            goto label_25ba78;
        }
    }
    ctx->pc = 0x25BA68u;
    // 0x25ba68: 0xc0a41a8  jal         func_2906A0
    ctx->pc = 0x25BA68u;
    SET_GPR_U32(ctx, 31, 0x25BA70u);
    ctx->pc = 0x25BA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BA68u;
    // 0x25ba6c: 0x24a40198  addiu       $a0, $a1, 0x198 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2906A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2906A0u, 0x25BA68u, 0x25BA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BA70u;
label_25ba70:
    // 0x25ba70: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25BA70u;
    {
        const bool branch_taken_0x25ba70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BA70u;
        // 0x25ba74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ba70) {
            ctx->pc = 0x25BA8Cu;
            goto label_25ba8c;
        }
    }
    ctx->pc = 0x25BA78u;
label_25ba78:
    // 0x25ba78: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25BA78u;
    {
        const bool branch_taken_0x25ba78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BA78u;
        // 0x25ba7c: 0x8fa60138  lw          $a2, 0x138($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ba78) {
            ctx->pc = 0x25BA8Cu;
            goto label_25ba8c;
        }
    }
    ctx->pc = 0x25BA80u;
    // 0x25ba80: 0xc0a41a8  jal         func_2906A0
    ctx->pc = 0x25BA80u;
    SET_GPR_U32(ctx, 31, 0x25BA88u);
    ctx->pc = 0x25BA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BA80u;
    // 0x25ba84: 0x24c40258  addiu       $a0, $a2, 0x258 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2906A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2906A0u, 0x25BA80u, 0x25BA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BA88u;
label_25ba88:
    // 0x25ba88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x25ba88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25ba8c:
    // 0x25ba8c: 0x10800049  beqz        $a0, . + 4 + (0x49 << 2)
    ctx->pc = 0x25BA8Cu;
    {
        const bool branch_taken_0x25ba8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BA8Cu;
        // 0x25ba90: 0x8faa0120  lw          $t2, 0x120($sp) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ba8c) {
            ctx->pc = 0x25BBB4u;
            goto label_25bbb4;
        }
    }
    ctx->pc = 0x25BA94u;
    // 0x25ba94: 0xc0a340e  jal         func_28D038
    ctx->pc = 0x25BA94u;
    SET_GPR_U32(ctx, 31, 0x25BA9Cu);
    ctx->pc = 0x25BA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BA94u;
    // 0x25ba98: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D038u, 0x25BA94u, 0x25BA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BA9Cu;
label_25ba9c:
    // 0x25ba9c: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x25BA9Cu;
    {
        const bool branch_taken_0x25ba9c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BA9Cu;
        // 0x25baa0: 0x8fa90138  lw          $t1, 0x138($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ba9c) {
            ctx->pc = 0x25BAB8u;
            goto label_25bab8;
        }
    }
    ctx->pc = 0x25BAA4u;
    // 0x25baa4: 0x8faa0120  lw          $t2, 0x120($sp)
    ctx->pc = 0x25baa4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x25baa8: 0x8d2201a4  lw          $v0, 0x1A4($t1)
    ctx->pc = 0x25baa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 420)));
    // 0x25baac: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x25baacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x25bab0: 0x106a0008  beq         $v1, $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x25BAB0u;
    {
        const bool branch_taken_0x25bab0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 10));
        if (branch_taken_0x25bab0) {
            ctx->pc = 0x25BAD4u;
            goto label_25bad4;
        }
    }
    ctx->pc = 0x25BAB8u;
label_25bab8:
    // 0x25bab8: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x25BAB8u;
    {
        const bool branch_taken_0x25bab8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BAB8u;
        // 0x25babc: 0x8fab0138  lw          $t3, 0x138($sp) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bab8) {
            ctx->pc = 0x25BB1Cu;
            goto label_25bb1c;
        }
    }
    ctx->pc = 0x25BAC0u;
    // 0x25bac0: 0x8d620264  lw          $v0, 0x264($t3)
    ctx->pc = 0x25bac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 612)));
    // 0x25bac4: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x25bac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x25bac8: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x25bac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x25bacc: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x25BACCu;
    {
        const bool branch_taken_0x25bacc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25bacc) {
            ctx->pc = 0x25BB1Cu;
            goto label_25bb1c;
        }
    }
    ctx->pc = 0x25BAD4u;
label_25bad4:
    // 0x25bad4: 0xc7818330  lwc1        $f1, -0x7CD0($gp)
    ctx->pc = 0x25bad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25bad8: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x25bad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25badc: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x25badcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x25bae0: 0xc7a50018  lwc1        $f5, 0x18($sp)
    ctx->pc = 0x25bae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x25bae4: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x25bae4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x25bae8: 0x8fa30124  lw          $v1, 0x124($sp)
    ctx->pc = 0x25bae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x25baec: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x25baecu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x25baf0: 0x46012942  mul.s       $f5, $f5, $f1
    ctx->pc = 0x25baf0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x25baf4: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x25baf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25baf8: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x25baf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25bafc: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x25bafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25bb00: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x25bb00u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x25bb04: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x25bb04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x25bb08: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x25bb08u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x25bb0c: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x25bb0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x25bb10: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x25bb10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x25bb14: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x25BB14u;
    {
        const bool branch_taken_0x25bb14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BB14u;
        // 0x25bb18: 0xe4610008  swc1        $f1, 0x8($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bb14) {
            ctx->pc = 0x25BB60u;
            goto label_25bb60;
        }
    }
    ctx->pc = 0x25BB1Cu;
label_25bb1c:
    // 0x25bb1c: 0xc7818334  lwc1        $f1, -0x7CCC($gp)
    ctx->pc = 0x25bb1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25bb20: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x25bb20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25bb24: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x25bb24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x25bb28: 0xc7a50018  lwc1        $f5, 0x18($sp)
    ctx->pc = 0x25bb28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x25bb2c: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x25bb2cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x25bb30: 0x8fa40124  lw          $a0, 0x124($sp)
    ctx->pc = 0x25bb30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x25bb34: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x25bb34u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x25bb38: 0x46012942  mul.s       $f5, $f5, $f1
    ctx->pc = 0x25bb38u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x25bb3c: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x25bb3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25bb40: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x25bb40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25bb44: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x25bb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25bb48: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x25bb48u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x25bb4c: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x25bb4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x25bb50: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x25bb50u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x25bb54: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x25bb54u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x25bb58: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x25bb58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x25bb5c: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x25bb5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_25bb60:
    // 0x25bb60: 0x8fa50124  lw          $a1, 0x124($sp)
    ctx->pc = 0x25bb60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x25bb64: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25bb64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25bb68: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25bb68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25bb6c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x25bb6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25bb70: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25bb70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25bb74: 0x0  nop
    ctx->pc = 0x25bb74u;
    // NOP
    // 0x25bb78: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x25BB78u;
    {
        const bool branch_taken_0x25bb78 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25bb78) {
            ctx->pc = 0x25BB7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BB78u;
            // 0x25bb7c: 0xe4a10000  swc1        $f1, 0x0($a1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BB80u;
            goto label_25bb80;
        }
    }
    ctx->pc = 0x25BB80u;
label_25bb80:
    // 0x25bb80: 0x8fa60124  lw          $a2, 0x124($sp)
    ctx->pc = 0x25bb80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x25bb84: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x25bb84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25bb88: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25bb88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25bb8c: 0x0  nop
    ctx->pc = 0x25bb8cu;
    // NOP
    // 0x25bb90: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x25BB90u;
    {
        const bool branch_taken_0x25bb90 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25bb90) {
            ctx->pc = 0x25BB94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BB90u;
            // 0x25bb94: 0xe4c10004  swc1        $f1, 0x4($a2) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BB98u;
            goto label_25bb98;
        }
    }
    ctx->pc = 0x25BB98u;
label_25bb98:
    // 0x25bb98: 0x8fa90124  lw          $t1, 0x124($sp)
    ctx->pc = 0x25bb98u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x25bb9c: 0xc5200008  lwc1        $f0, 0x8($t1)
    ctx->pc = 0x25bb9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25bba0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25bba0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25bba4: 0x0  nop
    ctx->pc = 0x25bba4u;
    // NOP
    // 0x25bba8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x25BBA8u;
    {
        const bool branch_taken_0x25bba8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25bba8) {
            ctx->pc = 0x25BBACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BBA8u;
            // 0x25bbac: 0xe5210008  swc1        $f1, 0x8($t1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BBB0u;
            goto label_25bbb0;
        }
    }
    ctx->pc = 0x25BBB0u;
label_25bbb0:
    // 0x25bbb0: 0x8faa0120  lw          $t2, 0x120($sp)
    ctx->pc = 0x25bbb0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_25bbb4:
    // 0x25bbb4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25bbb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25bbb8: 0xc5420138  lwc1        $f2, 0x138($t2)
    ctx->pc = 0x25bbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25bbbc: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x25bbbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25bbc0: 0x0  nop
    ctx->pc = 0x25bbc0u;
    // NOP
    // 0x25bbc4: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x25BBC4u;
    {
        const bool branch_taken_0x25bbc4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25BBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BBC4u;
        // 0x25bbc8: 0x8fab0124  lw          $t3, 0x124($sp) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bbc4) {
            ctx->pc = 0x25BC44u;
            goto label_25bc44;
        }
    }
    ctx->pc = 0x25BBCCu;
    // 0x25bbcc: 0xc543013c  lwc1        $f3, 0x13C($t2)
    ctx->pc = 0x25bbccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25bbd0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x25bbd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x25bbd4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25bbd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25bbd8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25bbd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25bbdc: 0xc5440140  lwc1        $f4, 0x140($t2)
    ctx->pc = 0x25bbdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x25bbe0: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x25bbe0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x25bbe4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x25bbe4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x25bbe8: 0xc7878338  lwc1        $f7, -0x7CC8($gp)
    ctx->pc = 0x25bbe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x25bbec: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x25bbecu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x25bbf0: 0xc5610000  lwc1        $f1, 0x0($t3)
    ctx->pc = 0x25bbf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25bbf4: 0xc5620004  lwc1        $f2, 0x4($t3)
    ctx->pc = 0x25bbf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25bbf8: 0xc5450144  lwc1        $f5, 0x144($t2)
    ctx->pc = 0x25bbf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x25bbfc: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x25bbfcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x25bc00: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x25bc00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25bc04: 0xc5660008  lwc1        $f6, 0x8($t3)
    ctx->pc = 0x25bc04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x25bc08: 0x460718c2  mul.s       $f3, $f3, $f7
    ctx->pc = 0x25bc08u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x25bc0c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x25bc0cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x25bc10: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x25bc10u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x25bc14: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x25bc14u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x25bc18: 0xe5610000  swc1        $f1, 0x0($t3)
    ctx->pc = 0x25bc18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
    // 0x25bc1c: 0xc5400138  lwc1        $f0, 0x138($t2)
    ctx->pc = 0x25bc1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25bc20: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x25bc20u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x25bc24: 0x46072102  mul.s       $f4, $f4, $f7
    ctx->pc = 0x25bc24u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x25bc28: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x25bc28u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x25bc2c: 0xe5620004  swc1        $f2, 0x4($t3)
    ctx->pc = 0x25bc2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4), bits); }
    // 0x25bc30: 0xc5400138  lwc1        $f0, 0x138($t2)
    ctx->pc = 0x25bc30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25bc34: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x25bc34u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x25bc38: 0x46072942  mul.s       $f5, $f5, $f7
    ctx->pc = 0x25bc38u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[7]);
    // 0x25bc3c: 0x46053180  add.s       $f6, $f6, $f5
    ctx->pc = 0x25bc3cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x25bc40: 0xe5660008  swc1        $f6, 0x8($t3)
    ctx->pc = 0x25bc40u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 8), bits); }
label_25bc44:
    // 0x25bc44: 0xdfbf0250  ld          $ra, 0x250($sp)
    ctx->pc = 0x25bc44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x25bc48: 0xdfbe0240  ld          $fp, 0x240($sp)
    ctx->pc = 0x25bc48u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x25bc4c: 0xdfb70230  ld          $s7, 0x230($sp)
    ctx->pc = 0x25bc4cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x25bc50: 0xdfb60220  ld          $s6, 0x220($sp)
    ctx->pc = 0x25bc50u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x25bc54: 0xdfb50210  ld          $s5, 0x210($sp)
    ctx->pc = 0x25bc54u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x25bc58: 0xdfb40200  ld          $s4, 0x200($sp)
    ctx->pc = 0x25bc58u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x25bc5c: 0xdfb301f0  ld          $s3, 0x1F0($sp)
    ctx->pc = 0x25bc5cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x25bc60: 0xdfb201e0  ld          $s2, 0x1E0($sp)
    ctx->pc = 0x25bc60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x25bc64: 0xdfb101d0  ld          $s1, 0x1D0($sp)
    ctx->pc = 0x25bc64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x25bc68: 0xdfb001c0  ld          $s0, 0x1C0($sp)
    ctx->pc = 0x25bc68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x25bc6c: 0xc7b80280  lwc1        $f24, 0x280($sp)
    ctx->pc = 0x25bc6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x25bc70: 0xc7b70278  lwc1        $f23, 0x278($sp)
    ctx->pc = 0x25bc70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x25bc74: 0xc7b60270  lwc1        $f22, 0x270($sp)
    ctx->pc = 0x25bc74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x25bc78: 0xc7b50268  lwc1        $f21, 0x268($sp)
    ctx->pc = 0x25bc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x25bc7c: 0xc7b40260  lwc1        $f20, 0x260($sp)
    ctx->pc = 0x25bc7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25bc80: 0x3e00008  jr          $ra
    ctx->pc = 0x25BC80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25BC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BC80u;
        // 0x25bc84: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25BC80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25BC88u;
}
