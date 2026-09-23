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

// Function: extractAnimRootData
// Address: 0x215590 - 0x215700
void extractAnimRootData_0x215590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("extractAnimRootData_0x215590");
#endif

    ctx->pc = 0x215590u;

    // 0x215590: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x215590u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215594: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x215594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x215598: 0x2442ab60  addiu       $v0, $v0, -0x54A0
    ctx->pc = 0x215598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945632));
    // 0x21559c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x21559cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2155a0: 0x8d830160  lw          $v1, 0x160($t4)
    ctx->pc = 0x2155a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 352)));
    // 0x2155a4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2155a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2155a8: 0x8caa0000  lw          $t2, 0x0($a1)
    ctx->pc = 0x2155a8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2155ac: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x2155acu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2155b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2155b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2155b4: 0x1122000e  beq         $t1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2155B4u;
    {
        const bool branch_taken_0x2155b4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        ctx->pc = 0x2155B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2155B4u;
        // 0x2155b8: 0xc4620b18  lwc1        $f2, 0xB18($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2155b4) {
            ctx->pc = 0x2155F0u;
            goto label_2155f0;
        }
    }
    ctx->pc = 0x2155BCu;
    // 0x2155bc: 0x29220002  slti        $v0, $t1, 0x2
    ctx->pc = 0x2155bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2155c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2155C0u;
    {
        const bool branch_taken_0x2155c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2155C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2155C0u;
        // 0x2155c4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2155c0) {
            ctx->pc = 0x2155D8u;
            goto label_2155d8;
        }
    }
    ctx->pc = 0x2155C8u;
    // 0x2155c8: 0x11200007  beqz        $t1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2155C8u;
    {
        const bool branch_taken_0x2155c8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2155CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2155C8u;
        // 0x2155cc: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2155c8) {
            ctx->pc = 0x2155E8u;
            goto label_2155e8;
        }
    }
    ctx->pc = 0x2155D0u;
    // 0x2155d0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2155D0u;
    {
        const bool branch_taken_0x2155d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2155d0) {
            ctx->pc = 0x2155FCu;
            goto label_2155fc;
        }
    }
    ctx->pc = 0x2155D8u;
label_2155d8:
    // 0x2155d8: 0x11220007  beq         $t1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2155D8u;
    {
        const bool branch_taken_0x2155d8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        ctx->pc = 0x2155DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2155D8u;
        // 0x2155dc: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2155d8) {
            ctx->pc = 0x2155F8u;
            goto label_2155f8;
        }
    }
    ctx->pc = 0x2155E0u;
    // 0x2155e0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2155E0u;
    {
        const bool branch_taken_0x2155e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2155e0) {
            ctx->pc = 0x2155FCu;
            goto label_2155fc;
        }
    }
    ctx->pc = 0x2155E8u;
label_2155e8:
    // 0x2155e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2155E8u;
    {
        const bool branch_taken_0x2155e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2155ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2155E8u;
        // 0x2155ec: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2155e8) {
            ctx->pc = 0x2155FCu;
            goto label_2155fc;
        }
    }
    ctx->pc = 0x2155F0u;
label_2155f0:
    // 0x2155f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2155F0u;
    {
        const bool branch_taken_0x2155f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2155F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2155F0u;
        // 0x2155f4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2155f0) {
            ctx->pc = 0x2155FCu;
            goto label_2155fc;
        }
    }
    ctx->pc = 0x2155F8u;
label_2155f8:
    // 0x2155f8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2155f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2155fc:
    // 0x2155fc: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x2155fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215600: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x215600u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x215604: 0x8d450020  lw          $a1, 0x20($t2)
    ctx->pc = 0x215604u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 32)));
    // 0x215608: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x215608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21560c: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x21560cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x215610: 0x1082000e  beq         $a0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x215610u;
    {
        const bool branch_taken_0x215610 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x215614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215610u;
        // 0x215614: 0xe5000000  swc1        $f0, 0x0($t0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x215610) {
            ctx->pc = 0x21564Cu;
            goto label_21564c;
        }
    }
    ctx->pc = 0x215618u;
    // 0x215618: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x215618u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x21561c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21561Cu;
    {
        const bool branch_taken_0x21561c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x215620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21561Cu;
        // 0x215620: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21561c) {
            ctx->pc = 0x215634u;
            goto label_215634;
        }
    }
    ctx->pc = 0x215624u;
    // 0x215624: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x215624u;
    {
        const bool branch_taken_0x215624 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x215624) {
            ctx->pc = 0x215628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215624u;
            // 0x215628: 0x8ca20014  lw          $v0, 0x14($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215650u;
            goto label_215650;
        }
    }
    ctx->pc = 0x21562Cu;
    // 0x21562c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x21562Cu;
    {
        const bool branch_taken_0x21562c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21562Cu;
        // 0x215630: 0x8d840020  lw          $a0, 0x20($t4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21562c) {
            ctx->pc = 0x2156C8u;
            goto label_2156c8;
        }
    }
    ctx->pc = 0x215634u;
label_215634:
    // 0x215634: 0x1082000c  beq         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x215634u;
    {
        const bool branch_taken_0x215634 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x215638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215634u;
        // 0x215638: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215634) {
            ctx->pc = 0x215668u;
            goto label_215668;
        }
    }
    ctx->pc = 0x21563Cu;
    // 0x21563c: 0x50820016  beql        $a0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x21563Cu;
    {
        const bool branch_taken_0x21563c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x21563c) {
            ctx->pc = 0x215640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21563Cu;
            // 0x215640: 0x8d420004  lw          $v0, 0x4($t2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215698u;
            goto label_215698;
        }
    }
    ctx->pc = 0x215644u;
    // 0x215644: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x215644u;
    {
        const bool branch_taken_0x215644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215644u;
        // 0x215648: 0x8d840020  lw          $a0, 0x20($t4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215644) {
            ctx->pc = 0x2156C8u;
            goto label_2156c8;
        }
    }
    ctx->pc = 0x21564Cu;
label_21564c:
    // 0x21564c: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x21564cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_215650:
    // 0x215650: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x215650u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x215654: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x215654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x215658: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x215658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21565c: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x21565cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x215660: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x215660u;
    {
        const bool branch_taken_0x215660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215660u;
        // 0x215664: 0xe5600000  swc1        $f0, 0x0($t3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x215660) {
            ctx->pc = 0x2156C4u;
            goto label_2156c4;
        }
    }
    ctx->pc = 0x215668u;
label_215668:
    // 0x215668: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x215668u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21566c: 0x8d420004  lw          $v0, 0x4($t2)
    ctx->pc = 0x21566cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x215670: 0x8ca50014  lw          $a1, 0x14($a1)
    ctx->pc = 0x215670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x215674: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x215674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x215678: 0x434018  mult        $t0, $v0, $v1
    ctx->pc = 0x215678u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x21567c: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x21567cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x215680: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x215680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215684: 0x1051021  addu        $v0, $t0, $a1
    ctx->pc = 0x215684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x215688: 0xe5600000  swc1        $f0, 0x0($t3)
    ctx->pc = 0x215688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
    // 0x21568c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x21568cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x215690: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x215690u;
    {
        const bool branch_taken_0x215690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215690u;
        // 0x215694: 0xc4400004  lwc1        $f0, 0x4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x215690) {
            ctx->pc = 0x2156C0u;
            goto label_2156c0;
        }
    }
    ctx->pc = 0x215698u;
label_215698:
    // 0x215698: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x215698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x21569c: 0x8ca60014  lw          $a2, 0x14($a1)
    ctx->pc = 0x21569cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x2156a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2156a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2156a4: 0x444018  mult        $t0, $v0, $a0
    ctx->pc = 0x2156a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x2156a8: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x2156a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2156ac: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2156acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2156b0: 0x1061021  addu        $v0, $t0, $a2
    ctx->pc = 0x2156b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x2156b4: 0xe5600000  swc1        $f0, 0x0($t3)
    ctx->pc = 0x2156b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
    // 0x2156b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2156b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2156bc: 0xc460ffe4  lwc1        $f0, -0x1C($v1)
    ctx->pc = 0x2156bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2156c0:
    // 0x2156c0: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x2156c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_2156c4:
    // 0x2156c4: 0x8d840020  lw          $a0, 0x20($t4)
    ctx->pc = 0x2156c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 32)));
label_2156c8:
    // 0x2156c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2156c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2156cc: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x2156ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x2156d0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2156d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2156d4: 0x54650004  bnel        $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2156D4u;
    {
        const bool branch_taken_0x2156d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x2156d4) {
            ctx->pc = 0x2156D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2156D4u;
            // 0x2156d8: 0xc5600000  lwc1        $f0, 0x0($t3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2156E8u;
            goto label_2156e8;
        }
    }
    ctx->pc = 0x2156DCu;
    // 0x2156dc: 0xc7808050  lwc1        $f0, -0x7FB0($gp)
    ctx->pc = 0x2156dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2156e0: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2156e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2156e4: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x2156e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2156e8:
    // 0x2156e8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2156e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2156ec: 0xe5600000  swc1        $f0, 0x0($t3)
    ctx->pc = 0x2156ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
    // 0x2156f0: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x2156f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2156f4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2156f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2156f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2156F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2156FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2156F8u;
        // 0x2156fc: 0xe4e10000  swc1        $f1, 0x0($a3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2156F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x215700u;
}
