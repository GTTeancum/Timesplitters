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

// Function: loadAnimation
// Address: 0x2147e0 - 0x214974
void loadAnimation_0x2147e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("loadAnimation_0x2147e0");
#endif

    switch (ctx->pc) {
        case 0x2147f4u: goto label_2147f4;
        case 0x2148b8u: goto label_2148b8;
        default: break;
    }

    ctx->pc = 0x2147e0u;

    // 0x2147e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2147e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2147e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2147e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2147e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2147e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2147ec: 0xc0868a2  jal         func_21A288
    ctx->pc = 0x2147ECu;
    SET_GPR_U32(ctx, 31, 0x2147F4u);
    ctx->pc = 0x2147F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2147ECu;
    // 0x2147f0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A288u, 0x2147ECu, 0x2147F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2147F4u;
label_2147f4:
    // 0x2147f4: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2147f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2147f8: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x2147f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x2147fc: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x2147fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214800: 0x34c6fff0  ori         $a2, $a2, 0xFFF0
    ctx->pc = 0x214800u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65520);
    // 0x214804: 0x24a3000f  addiu       $v1, $a1, 0xF
    ctx->pc = 0x214804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x214808: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x214808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x21480c: 0x664824  and         $t1, $v1, $a2
    ctx->pc = 0x21480cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x214810: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x214810u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x214814: 0x8d24000c  lw          $a0, 0xC($t1)
    ctx->pc = 0x214814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x214818: 0x2442b690  addiu       $v0, $v0, -0x4970
    ctx->pc = 0x214818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948496));
    // 0x21481c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x21481cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x214820: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x214820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x214824: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x214824u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x214828: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x214828u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x21482c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21482cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x214830: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x214830u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x214834: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x214834u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x214838: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x214838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21483c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x21483cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x214840: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x214840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x214844: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x214844u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x214848: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x214848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x21484c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x21484cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x214850: 0x8d2a001c  lw          $t2, 0x1C($t1)
    ctx->pc = 0x214850u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 28)));
    // 0x214854: 0x2463003f  addiu       $v1, $v1, 0x3F
    ctx->pc = 0x214854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x214858: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x214858u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x21485c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21485cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x214860: 0xa2140  sll         $a0, $t2, 5
    ctx->pc = 0x214860u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
    // 0x214864: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x214864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x214868: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x214868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x21486c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x21486cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x214870: 0x0  nop
    ctx->pc = 0x214870u;
    // NOP
    // 0x214874: 0x0  nop
    ctx->pc = 0x214874u;
    // NOP
    // 0x214878: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x214878u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x21487c: 0x444021  addu        $t0, $v0, $a0
    ctx->pc = 0x21487cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x214880: 0x24e7ab60  addiu       $a3, $a3, -0x54A0
    ctx->pc = 0x214880u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294945632));
    // 0x214884: 0x24a50033  addiu       $a1, $a1, 0x33
    ctx->pc = 0x214884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 51));
    // 0x214888: 0x25020033  addiu       $v0, $t0, 0x33
    ctx->pc = 0x214888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 51));
    // 0x21488c: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x21488cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x214890: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x214890u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x214894: 0x2078021  addu        $s0, $s0, $a3
    ctx->pc = 0x214894u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x214898: 0x464024  and         $t0, $v0, $a2
    ctx->pc = 0x214898u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x21489c: 0xad250014  sw          $a1, 0x14($t1)
    ctx->pc = 0x21489cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 5));
    // 0x2148a0: 0xae090000  sw          $t1, 0x0($s0)
    ctx->pc = 0x2148a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 9));
    // 0x2148a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2148a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2148a8: 0xe5200010  swc1        $f0, 0x10($t1)
    ctx->pc = 0x2148a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 16), bits); }
    // 0x2148ac: 0x1940002d  blez        $t2, . + 4 + (0x2D << 2)
    ctx->pc = 0x2148ACu;
    {
        const bool branch_taken_0x2148ac = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x2148B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2148ACu;
        // 0x2148b0: 0xad230020  sw          $v1, 0x20($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2148ac) {
            ctx->pc = 0x214964u;
            goto label_214964;
        }
    }
    ctx->pc = 0x2148B4u;
    // 0x2148b4: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x2148b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2148b8:
    // 0x2148b8: 0x61140  sll         $v0, $a2, 5
    ctx->pc = 0x2148b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x2148bc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2148bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2148c0: 0xe22821  addu        $a1, $a3, $v0
    ctx->pc = 0x2148c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2148c4: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x2148c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2148c8: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2148C8u;
    {
        const bool branch_taken_0x2148c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2148CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2148C8u;
        // 0x2148cc: 0xaca80014  sw          $t0, 0x14($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2148c8) {
            ctx->pc = 0x214904u;
            goto label_214904;
        }
    }
    ctx->pc = 0x2148D0u;
    // 0x2148d0: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x2148d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2148d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2148D4u;
    {
        const bool branch_taken_0x2148d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2148D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2148D4u;
        // 0x2148d8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2148d4) {
            ctx->pc = 0x2148ECu;
            goto label_2148ec;
        }
    }
    ctx->pc = 0x2148DCu;
    // 0x2148dc: 0x50800018  beql        $a0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x2148DCu;
    {
        const bool branch_taken_0x2148dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2148dc) {
            ctx->pc = 0x2148E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2148DCu;
            // 0x2148e0: 0x2508001c  addiu       $t0, $t0, 0x1C (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 28));
            ctx->in_delay_slot = false;
            ctx->pc = 0x214940u;
            goto label_214940;
        }
    }
    ctx->pc = 0x2148E4u;
    // 0x2148e4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2148E4u;
    {
        const bool branch_taken_0x2148e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2148e4) {
            ctx->pc = 0x214940u;
            goto label_214940;
        }
    }
    ctx->pc = 0x2148ECu;
label_2148ec:
    // 0x2148ec: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2148ECu;
    {
        const bool branch_taken_0x2148ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2148F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2148ECu;
        // 0x2148f0: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2148ec) {
            ctx->pc = 0x214918u;
            goto label_214918;
        }
    }
    ctx->pc = 0x2148F4u;
    // 0x2148f4: 0x5082000f  beql        $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2148F4u;
    {
        const bool branch_taken_0x2148f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2148f4) {
            ctx->pc = 0x2148F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2148F4u;
            // 0x2148f8: 0x8ca3000c  lw          $v1, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x214934u;
            goto label_214934;
        }
    }
    ctx->pc = 0x2148FCu;
    // 0x2148fc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2148FCu;
    {
        const bool branch_taken_0x2148fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2148fc) {
            ctx->pc = 0x214940u;
            goto label_214940;
        }
    }
    ctx->pc = 0x214904u;
label_214904:
    // 0x214904: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x214904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x214908: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x214908u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x21490c: 0x3442000c  ori         $v0, $v0, 0xC
    ctx->pc = 0x21490cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12);
    // 0x214910: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x214910u;
    {
        const bool branch_taken_0x214910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214910u;
        // 0x214914: 0x1024021  addu        $t0, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214910) {
            ctx->pc = 0x214940u;
            goto label_214940;
        }
    }
    ctx->pc = 0x214918u;
label_214918:
    // 0x214918: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x214918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x21491c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x21491cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x214920: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x214920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x214924: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x214924u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x214928: 0x2442001c  addiu       $v0, $v0, 0x1C
    ctx->pc = 0x214928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x21492c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x21492Cu;
    {
        const bool branch_taken_0x21492c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21492Cu;
        // 0x214930: 0x1024021  addu        $t0, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21492c) {
            ctx->pc = 0x214940u;
            goto label_214940;
        }
    }
    ctx->pc = 0x214934u;
label_214934:
    // 0x214934: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x214934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x214938: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x214938u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x21493c: 0x884021  addu        $t0, $a0, $t0
    ctx->pc = 0x21493cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_214940:
    // 0x214940: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x214940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x214944: 0x8d240014  lw          $a0, 0x14($t1)
    ctx->pc = 0x214944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x214948: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x214948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x21494c: 0x2503000f  addiu       $v1, $t0, 0xF
    ctx->pc = 0x21494cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 15));
    // 0x214950: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x214950u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x214954: 0x624024  and         $t0, $v1, $v0
    ctx->pc = 0x214954u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x214958: 0xca102a  slt         $v0, $a2, $t2
    ctx->pc = 0x214958u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x21495c: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x21495Cu;
    {
        const bool branch_taken_0x21495c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x214960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21495Cu;
        // 0x214960: 0xaca40010  sw          $a0, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21495c) {
            ctx->pc = 0x2148B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2148b8;
        }
    }
    ctx->pc = 0x214964u;
label_214964:
    // 0x214964: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x214964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214968: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x214968u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21496c: 0x3e00008  jr          $ra
    ctx->pc = 0x21496Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21496Cu;
        // 0x214970: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21496Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214974u;
}
