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

// Function: propNew
// Address: 0x2686f8 - 0x268d0c
void propNew_0x2686f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("propNew_0x2686f8");
#endif

    switch (ctx->pc) {
        case 0x268788u: goto label_268788;
        case 0x268824u: goto label_268824;
        case 0x26882cu: goto label_26882c;
        case 0x268840u: goto label_268840;
        case 0x268848u: goto label_268848;
        case 0x268860u: goto label_268860;
        case 0x268870u: goto label_268870;
        case 0x268878u: goto label_268878;
        case 0x26888cu: goto label_26888c;
        case 0x2688b0u: goto label_2688b0;
        case 0x2688bcu: goto label_2688bc;
        case 0x2688d8u: goto label_2688d8;
        case 0x268984u: goto label_268984;
        case 0x26898cu: goto label_26898c;
        case 0x2689e8u: goto label_2689e8;
        case 0x2689fcu: goto label_2689fc;
        case 0x268a10u: goto label_268a10;
        case 0x268a24u: goto label_268a24;
        case 0x268a38u: goto label_268a38;
        case 0x268a4cu: goto label_268a4c;
        case 0x268a60u: goto label_268a60;
        case 0x268a74u: goto label_268a74;
        case 0x268a88u: goto label_268a88;
        case 0x268a9cu: goto label_268a9c;
        case 0x268ba4u: goto label_268ba4;
        case 0x268bb0u: goto label_268bb0;
        case 0x268bbcu: goto label_268bbc;
        case 0x268bc8u: goto label_268bc8;
        case 0x268bd0u: goto label_268bd0;
        case 0x268bf8u: goto label_268bf8;
        case 0x268c60u: goto label_268c60;
        case 0x268cdcu: goto label_268cdc;
        default: break;
    }

    ctx->pc = 0x2686f8u;

    // 0x2686f8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2686f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2686fc: 0x8f82b160  lw          $v0, -0x4EA0($gp)
    ctx->pc = 0x2686fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947168)));
    // 0x268700: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x268700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x268704: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x268704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x268708: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x268708u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26870c: 0xe7b70068  swc1        $f23, 0x68($sp)
    ctx->pc = 0x26870cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x268710: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x268710u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268714: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x268714u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x268718: 0x46006dc6  mov.s       $f23, $f13
    ctx->pc = 0x268718u;
    ctx->f[23] = FPU_MOV_S(ctx->f[13]);
    // 0x26871c: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x26871cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x268720: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x268720u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x268724: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x268724u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x268728: 0x46007546  mov.s       $f21, $f14
    ctx->pc = 0x268728u;
    ctx->f[21] = FPU_MOV_S(ctx->f[14]);
    // 0x26872c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x26872cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x268730: 0x46007d06  mov.s       $f20, $f15
    ctx->pc = 0x268730u;
    ctx->f[20] = FPU_MOV_S(ctx->f[15]);
    // 0x268734: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x268734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x268738: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x268738u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26873c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x26873Cu;
    {
        const bool branch_taken_0x26873c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x268740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26873Cu;
        // 0x268740: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26873c) {
            ctx->pc = 0x268768u;
            goto label_268768;
        }
    }
    ctx->pc = 0x268744u;
    // 0x268744: 0x8f83b15c  lw          $v1, -0x4EA4($gp)
    ctx->pc = 0x268744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947164)));
    // 0x268748: 0x24020250  addiu       $v0, $zero, 0x250
    ctx->pc = 0x268748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
    // 0x26874c: 0x8f84b07c  lw          $a0, -0x4F84($gp)
    ctx->pc = 0x26874cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946940)));
    // 0x268750: 0x3c090036  lui         $t1, 0x36
    ctx->pc = 0x268750u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)54 << 16));
    // 0x268754: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x268754u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x268758: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x268758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26875c: 0xaf85b15c  sw          $a1, -0x4EA4($gp)
    ctx->pc = 0x26875cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947164), GPR_U32(ctx, 5));
    // 0x268760: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x268760u;
    {
        const bool branch_taken_0x268760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268760u;
        // 0x268764: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268760) {
            ctx->pc = 0x2687F0u;
            goto label_2687f0;
        }
    }
    ctx->pc = 0x268768u;
label_268768:
    // 0x268768: 0x8f85b15c  lw          $a1, -0x4EA4($gp)
    ctx->pc = 0x268768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947164)));
    // 0x26876c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26876cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268770: 0x18a00011  blez        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x268770u;
    {
        const bool branch_taken_0x268770 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x268774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268770u;
        // 0x268774: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268770) {
            ctx->pc = 0x2687B8u;
            goto label_2687b8;
        }
    }
    ctx->pc = 0x268778u;
    // 0x268778: 0x8f85b07c  lw          $a1, -0x4F84($gp)
    ctx->pc = 0x268778u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946940)));
    // 0x26877c: 0x3c090036  lui         $t1, 0x36
    ctx->pc = 0x26877cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)54 << 16));
    // 0x268780: 0x24020250  addiu       $v0, $zero, 0x250
    ctx->pc = 0x268780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
    // 0x268784: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x268784u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_268788:
    // 0x268788: 0xc21818  mult        $v1, $a2, $v0
    ctx->pc = 0x268788u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x26878c: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x26878cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x268790: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x268790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x268794: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x268794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x268798: 0x43880b  movn        $s1, $v0, $v1
    ctx->pc = 0x268798u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x26879c: 0x16200011  bnez        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x26879Cu;
    {
        const bool branch_taken_0x26879c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2687A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26879Cu;
        // 0x2687a0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26879c) {
            ctx->pc = 0x2687E4u;
            goto label_2687e4;
        }
    }
    ctx->pc = 0x2687A4u;
    // 0x2687a4: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x2687a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2687a8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2687A8u;
    {
        const bool branch_taken_0x2687a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2687ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2687A8u;
        // 0x2687ac: 0x24020250  addiu       $v0, $zero, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2687a8) {
            ctx->pc = 0x268788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_268788;
        }
    }
    ctx->pc = 0x2687B0u;
    // 0x2687b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2687B0u;
    {
        const bool branch_taken_0x2687b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2687b0) {
            ctx->pc = 0x2687BCu;
            goto label_2687bc;
        }
    }
    ctx->pc = 0x2687B8u;
label_2687b8:
    // 0x2687b8: 0x3c090036  lui         $t1, 0x36
    ctx->pc = 0x2687b8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)54 << 16));
label_2687bc:
    // 0x2687bc: 0x1620000a  bnez        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x2687BCu;
    {
        const bool branch_taken_0x2687bc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2687C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2687BCu;
        // 0x2687c0: 0x2502ffff  addiu       $v0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2687bc) {
            ctx->pc = 0x2687E8u;
            goto label_2687e8;
        }
    }
    ctx->pc = 0x2687C4u;
    // 0x2687c4: 0x24020250  addiu       $v0, $zero, 0x250
    ctx->pc = 0x2687c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
    // 0x2687c8: 0x8f83b07c  lw          $v1, -0x4F84($gp)
    ctx->pc = 0x2687c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946940)));
    // 0x2687cc: 0xe21018  mult        $v0, $a3, $v0
    ctx->pc = 0x2687ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2687d0: 0x24e50001  addiu       $a1, $a3, 0x1
    ctx->pc = 0x2687d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2687d4: 0xaf85b15c  sw          $a1, -0x4EA4($gp)
    ctx->pc = 0x2687d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947164), GPR_U32(ctx, 5));
    // 0x2687d8: 0xaf80b160  sw          $zero, -0x4EA0($gp)
    ctx->pc = 0x2687d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947168), GPR_U32(ctx, 0));
    // 0x2687dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2687DCu;
    {
        const bool branch_taken_0x2687dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2687E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2687DCu;
        // 0x2687e0: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2687dc) {
            ctx->pc = 0x2687F0u;
            goto label_2687f0;
        }
    }
    ctx->pc = 0x2687E4u;
label_2687e4:
    // 0x2687e4: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x2687e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_2687e8:
    // 0x2687e8: 0xaf82b160  sw          $v0, -0x4EA0($gp)
    ctx->pc = 0x2687e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947168), GPR_U32(ctx, 2));
    // 0x2687ec: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x2687ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_2687f0:
    // 0x2687f0: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x2687f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2687f4: 0x252490c0  addiu       $a0, $t1, -0x6F40
    ctx->pc = 0x2687f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 4294938816));
    // 0x2687f8: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x2687f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2687fc: 0x449021  addu        $s2, $v0, $a0
    ctx->pc = 0x2687fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x268800: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x268800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x268804: 0x14600023  bnez        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x268804u;
    {
        const bool branch_taken_0x268804 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x268808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268804u;
        // 0x268808: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268804) {
            ctx->pc = 0x268894u;
            goto label_268894;
        }
    }
    ctx->pc = 0x26880Cu;
    // 0x26880c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x26880cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x268810: 0x24130010  addiu       $s3, $zero, 0x10
    ctx->pc = 0x268810u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x268814: 0x14530003  bne         $v0, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x268814u;
    {
        const bool branch_taken_0x268814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x268814) {
            ctx->pc = 0x268824u;
            goto label_268824;
        }
    }
    ctx->pc = 0x26881Cu;
    // 0x26881c: 0xc097aca  jal         func_25EB28
    ctx->pc = 0x26881Cu;
    SET_GPR_U32(ctx, 31, 0x268824u);
    ctx->pc = 0x268820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26881Cu;
    // 0x268820: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EB28u, 0x26881Cu, 0x268824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268824u;
label_268824:
    // 0x268824: 0xc097b80  jal         func_25EE00
    ctx->pc = 0x268824u;
    SET_GPR_U32(ctx, 31, 0x26882Cu);
    ctx->pc = 0x268828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268824u;
    // 0x268828: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EE00u, 0x268824u, 0x26882Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26882Cu;
label_26882c:
    // 0x26882c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x26882cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x268830: 0x14730003  bne         $v1, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x268830u;
    {
        const bool branch_taken_0x268830 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x268834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268830u;
        // 0x268834: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268830) {
            ctx->pc = 0x268840u;
            goto label_268840;
        }
    }
    ctx->pc = 0x268838u;
    // 0x268838: 0xc097aca  jal         func_25EB28
    ctx->pc = 0x268838u;
    SET_GPR_U32(ctx, 31, 0x268840u);
    ctx->pc = 0x26883Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268838u;
    // 0x26883c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EB28u, 0x268838u, 0x268840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268840u;
label_268840:
    // 0x268840: 0xc09a136  jal         func_2684D8
    ctx->pc = 0x268840u;
    SET_GPR_U32(ctx, 31, 0x268848u);
    ctx->pc = 0x268844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268840u;
    // 0x268844: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2684D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2684D8u, 0x268840u, 0x268848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268848u;
label_268848:
    // 0x268848: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x268848u;
    {
        const bool branch_taken_0x268848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26884Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268848u;
        // 0x26884c: 0x240200c9  addiu       $v0, $zero, 0xC9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268848) {
            ctx->pc = 0x268870u;
            goto label_268870;
        }
    }
    ctx->pc = 0x268850u;
    // 0x268850: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x268850u;
    {
        const bool branch_taken_0x268850 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x268854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268850u;
        // 0x268854: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268850) {
            ctx->pc = 0x268868u;
            goto label_268868;
        }
    }
    ctx->pc = 0x268858u;
    // 0x268858: 0xc097a30  jal         func_25E8C0
    ctx->pc = 0x268858u;
    SET_GPR_U32(ctx, 31, 0x268860u);
    ctx->pc = 0x26885Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268858u;
    // 0x26885c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E8C0u, 0x268858u, 0x268860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268860u;
label_268860:
    // 0x268860: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x268860u;
    {
        const bool branch_taken_0x268860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268860) {
            ctx->pc = 0x268870u;
            goto label_268870;
        }
    }
    ctx->pc = 0x268868u;
label_268868:
    // 0x268868: 0xc097a30  jal         func_25E8C0
    ctx->pc = 0x268868u;
    SET_GPR_U32(ctx, 31, 0x268870u);
    ctx->pc = 0x26886Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268868u;
    // 0x26886c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E8C0u, 0x268868u, 0x268870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268870u;
label_268870:
    // 0x268870: 0xc09a12e  jal         func_2684B8
    ctx->pc = 0x268870u;
    SET_GPR_U32(ctx, 31, 0x268878u);
    ctx->pc = 0x268874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268870u;
    // 0x268874: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2684B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2684B8u, 0x268870u, 0x268878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268878u;
label_268878:
    // 0x268878: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x268878u;
    {
        const bool branch_taken_0x268878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x268878) {
            ctx->pc = 0x26887Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268878u;
            // 0x26887c: 0xae400014  sw          $zero, 0x14($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268890u;
            goto label_268890;
        }
    }
    ctx->pc = 0x268880u;
    // 0x268880: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x268880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x268884: 0xc099dea  jal         func_2677A8
    ctx->pc = 0x268884u;
    SET_GPR_U32(ctx, 31, 0x26888Cu);
    ctx->pc = 0x268888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268884u;
    // 0x268888: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2677A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2677A8u, 0x268884u, 0x26888Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26888Cu;
label_26888c:
    // 0x26888c: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x26888cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
label_268890:
    // 0x268890: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x268890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_268894:
    // 0x268894: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x268894u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x268898: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x268898u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x26889c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26889cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2688a0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2688a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2688a4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2688a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2688a8: 0xc0981bc  jal         func_2606F0
    ctx->pc = 0x2688A8u;
    SET_GPR_U32(ctx, 31, 0x2688B0u);
    ctx->pc = 0x2688ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2688A8u;
    // 0x2688ac: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2606F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2606F0u, 0x2688A8u, 0x2688B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2688B0u;
label_2688b0:
    // 0x2688b0: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x2688b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x2688b4: 0xc09a14e  jal         func_268538
    ctx->pc = 0x2688B4u;
    SET_GPR_U32(ctx, 31, 0x2688BCu);
    ctx->pc = 0x2688B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2688B4u;
    // 0x2688b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x268538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268538u, 0x2688B4u, 0x2688BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2688BCu;
label_2688bc:
    // 0x2688bc: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2688bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2688c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2688c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2688c4: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2688C4u;
    {
        const bool branch_taken_0x2688c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2688C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2688C4u;
        // 0x2688c8: 0x24020121  addiu       $v0, $zero, 0x121 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 289));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2688c4) {
            ctx->pc = 0x2688D0u;
            goto label_2688d0;
        }
    }
    ctx->pc = 0x2688CCu;
    // 0x2688cc: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x2688ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_2688d0:
    // 0x2688d0: 0xc09a3c0  jal         func_268F00
    ctx->pc = 0x2688D0u;
    SET_GPR_U32(ctx, 31, 0x2688D8u);
    ctx->pc = 0x2688D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2688D0u;
    // 0x2688d4: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x268F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268F00u, 0x2688D0u, 0x2688D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2688D8u;
label_2688d8:
    // 0x2688d8: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x2688d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2688dc: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x2688dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2688e0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2688e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2688e4: 0xe6360070  swc1        $f22, 0x70($s1)
    ctx->pc = 0x2688e4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 112), bits); }
    // 0x2688e8: 0x262400d0  addiu       $a0, $s1, 0xD0
    ctx->pc = 0x2688e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
    // 0x2688ec: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2688ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x2688f0: 0xe6370074  swc1        $f23, 0x74($s1)
    ctx->pc = 0x2688f0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
    // 0x2688f4: 0xae250010  sw          $a1, 0x10($s1)
    ctx->pc = 0x2688f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 5));
    // 0x2688f8: 0x34a30800  ori         $v1, $a1, 0x800
    ctx->pc = 0x2688f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2048);
    // 0x2688fc: 0xe6350078  swc1        $f21, 0x78($s1)
    ctx->pc = 0x2688fcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 120), bits); }
    // 0x268900: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x268900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x268904: 0xae26008c  sw          $a2, 0x8C($s1)
    ctx->pc = 0x268904u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 6));
    // 0x268908: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x268908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x26890c: 0xae260088  sw          $a2, 0x88($s1)
    ctx->pc = 0x26890cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 6));
    // 0x268910: 0xa2180a  movz        $v1, $a1, $v0
    ctx->pc = 0x268910u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x268914: 0xe6340080  swc1        $f20, 0x80($s1)
    ctx->pc = 0x268914u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
    // 0x268918: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x268918u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x26891c: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x26891cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x268920: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x268920u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x268924: 0xae2001e8  sw          $zero, 0x1E8($s1)
    ctx->pc = 0x268924u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 488), GPR_U32(ctx, 0));
    // 0x268928: 0xe6360024  swc1        $f22, 0x24($s1)
    ctx->pc = 0x268928u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x26892c: 0xe6370028  swc1        $f23, 0x28($s1)
    ctx->pc = 0x26892cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x268930: 0xe635002c  swc1        $f21, 0x2C($s1)
    ctx->pc = 0x268930u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
    // 0x268934: 0xe6360030  swc1        $f22, 0x30($s1)
    ctx->pc = 0x268934u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x268938: 0xe6370034  swc1        $f23, 0x34($s1)
    ctx->pc = 0x268938u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x26893c: 0xe6350038  swc1        $f21, 0x38($s1)
    ctx->pc = 0x26893cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x268940: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x268940u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
    // 0x268944: 0xe634004c  swc1        $f20, 0x4C($s1)
    ctx->pc = 0x268944u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
    // 0x268948: 0xe6340054  swc1        $f20, 0x54($s1)
    ctx->pc = 0x268948u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
    // 0x26894c: 0xe6340050  swc1        $f20, 0x50($s1)
    ctx->pc = 0x26894cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
    // 0x268950: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x268950u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
    // 0x268954: 0xae20007c  sw          $zero, 0x7C($s1)
    ctx->pc = 0x268954u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 0));
    // 0x268958: 0xae200084  sw          $zero, 0x84($s1)
    ctx->pc = 0x268958u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 0));
    // 0x26895c: 0xae20005c  sw          $zero, 0x5C($s1)
    ctx->pc = 0x26895cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
    // 0x268960: 0xae200060  sw          $zero, 0x60($s1)
    ctx->pc = 0x268960u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 0));
    // 0x268964: 0xae200214  sw          $zero, 0x214($s1)
    ctx->pc = 0x268964u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 0));
    // 0x268968: 0xae200218  sw          $zero, 0x218($s1)
    ctx->pc = 0x268968u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 536), GPR_U32(ctx, 0));
    // 0x26896c: 0xae300240  sw          $s0, 0x240($s1)
    ctx->pc = 0x26896cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 576), GPR_U32(ctx, 16));
    // 0x268970: 0xae2000b8  sw          $zero, 0xB8($s1)
    ctx->pc = 0x268970u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 0));
    // 0x268974: 0xae2000bc  sw          $zero, 0xBC($s1)
    ctx->pc = 0x268974u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 0));
    // 0x268978: 0xae3000c0  sw          $s0, 0xC0($s1)
    ctx->pc = 0x268978u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 16));
    // 0x26897c: 0xc0b5862  jal         func_2D6188
    ctx->pc = 0x26897Cu;
    SET_GPR_U32(ctx, 31, 0x268984u);
    ctx->pc = 0x268980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26897Cu;
    // 0x268980: 0xae2000c4  sw          $zero, 0xC4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6188u, 0x26897Cu, 0x268984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268984u;
label_268984:
    // 0x268984: 0xc0b5862  jal         func_2D6188
    ctx->pc = 0x268984u;
    SET_GPR_U32(ctx, 31, 0x26898Cu);
    ctx->pc = 0x268988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268984u;
    // 0x268988: 0x26240110  addiu       $a0, $s1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6188u, 0x268984u, 0x26898Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26898Cu;
label_26898c:
    // 0x26898c: 0xae300150  sw          $s0, 0x150($s1)
    ctx->pc = 0x26898cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 336), GPR_U32(ctx, 16));
    // 0x268990: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x268990u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x268994: 0xae300154  sw          $s0, 0x154($s1)
    ctx->pc = 0x268994u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 16));
    // 0x268998: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x268998u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x26899c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26899cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2689a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2689a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2689a4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2689a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2689a8: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x2689a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2689ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2689acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2689b0: 0xa6300222  sh          $s0, 0x222($s1)
    ctx->pc = 0x2689b0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 546), (uint16_t)GPR_U32(ctx, 16));
    // 0x2689b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2689b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2689b8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2689b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2689bc: 0xae200164  sw          $zero, 0x164($s1)
    ctx->pc = 0x2689bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 356), GPR_U32(ctx, 0));
    // 0x2689c0: 0x2400b  movn        $t0, $zero, $v0
    ctx->pc = 0x2689c0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
    // 0x2689c4: 0xa6300220  sh          $s0, 0x220($s1)
    ctx->pc = 0x2689c4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 544), (uint16_t)GPR_U32(ctx, 16));
    // 0x2689c8: 0xae28015c  sw          $t0, 0x15C($s1)
    ctx->pc = 0x2689c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 348), GPR_U32(ctx, 8));
    // 0x2689cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2689ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2689d0: 0xe6200208  swc1        $f0, 0x208($s1)
    ctx->pc = 0x2689d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 520), bits); }
    // 0x2689d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2689d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2689d8: 0xae230224  sw          $v1, 0x224($s1)
    ctx->pc = 0x2689d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 548), GPR_U32(ctx, 3));
    // 0x2689dc: 0xae280158  sw          $t0, 0x158($s1)
    ctx->pc = 0x2689dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 8));
    // 0x2689e0: 0xc099c78  jal         func_2671E0
    ctx->pc = 0x2689E0u;
    SET_GPR_U32(ctx, 31, 0x2689E8u);
    ctx->pc = 0x2689E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2689E0u;
    // 0x2689e4: 0xae23021c  sw          $v1, 0x21C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 540), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2671E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2671E0u, 0x2689E0u, 0x2689E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2689E8u;
label_2689e8:
    // 0x2689e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2689e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2689ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2689ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2689f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2689f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2689f4: 0xc099c78  jal         func_2671E0
    ctx->pc = 0x2689F4u;
    SET_GPR_U32(ctx, 31, 0x2689FCu);
    ctx->pc = 0x2689F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2689F4u;
    // 0x2689f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2671E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2671E0u, 0x2689F4u, 0x2689FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2689FCu;
label_2689fc:
    // 0x2689fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2689fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268a00: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x268a00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x268a04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x268a04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268a08: 0xc099c78  jal         func_2671E0
    ctx->pc = 0x268A08u;
    SET_GPR_U32(ctx, 31, 0x268A10u);
    ctx->pc = 0x268A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268A08u;
    // 0x268a0c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2671E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2671E0u, 0x268A08u, 0x268A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268A10u;
label_268a10:
    // 0x268a10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x268a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268a14: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x268a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x268a18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x268a18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268a1c: 0xc099c78  jal         func_2671E0
    ctx->pc = 0x268A1Cu;
    SET_GPR_U32(ctx, 31, 0x268A24u);
    ctx->pc = 0x268A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268A1Cu;
    // 0x268a20: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2671E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2671E0u, 0x268A1Cu, 0x268A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268A24u;
label_268a24:
    // 0x268a24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x268a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268a28: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x268a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x268a2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x268a2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268a30: 0xc099c78  jal         func_2671E0
    ctx->pc = 0x268A30u;
    SET_GPR_U32(ctx, 31, 0x268A38u);
    ctx->pc = 0x268A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268A30u;
    // 0x268a34: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2671E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2671E0u, 0x268A30u, 0x268A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268A38u;
label_268a38:
    // 0x268a38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x268a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268a3c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x268a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x268a40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x268a40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268a44: 0xc099c78  jal         func_2671E0
    ctx->pc = 0x268A44u;
    SET_GPR_U32(ctx, 31, 0x268A4Cu);
    ctx->pc = 0x268A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268A44u;
    // 0x268a48: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2671E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2671E0u, 0x268A44u, 0x268A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268A4Cu;
label_268a4c:
    // 0x268a4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x268a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268a50: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x268a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x268a54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x268a54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268a58: 0xc099c78  jal         func_2671E0
    ctx->pc = 0x268A58u;
    SET_GPR_U32(ctx, 31, 0x268A60u);
    ctx->pc = 0x268A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268A58u;
    // 0x268a5c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2671E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2671E0u, 0x268A58u, 0x268A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268A60u;
label_268a60:
    // 0x268a60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x268a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268a64: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x268a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x268a68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x268a68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268a6c: 0xc099c78  jal         func_2671E0
    ctx->pc = 0x268A6Cu;
    SET_GPR_U32(ctx, 31, 0x268A74u);
    ctx->pc = 0x268A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268A6Cu;
    // 0x268a70: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2671E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2671E0u, 0x268A6Cu, 0x268A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268A74u;
label_268a74:
    // 0x268a74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x268a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268a78: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x268a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x268a7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x268a7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268a80: 0xc099c78  jal         func_2671E0
    ctx->pc = 0x268A80u;
    SET_GPR_U32(ctx, 31, 0x268A88u);
    ctx->pc = 0x268A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268A80u;
    // 0x268a84: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2671E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2671E0u, 0x268A80u, 0x268A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268A88u;
label_268a88:
    // 0x268a88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x268a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268a8c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x268a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x268a90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x268a90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268a94: 0xc099c78  jal         func_2671E0
    ctx->pc = 0x268A94u;
    SET_GPR_U32(ctx, 31, 0x268A9Cu);
    ctx->pc = 0x268A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268A94u;
    // 0x268a98: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2671E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2671E0u, 0x268A94u, 0x268A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268A9Cu;
label_268a9c:
    // 0x268a9c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x268a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x268aa0: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x268aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x268aa4: 0x10620040  beq         $v1, $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x268AA4u;
    {
        const bool branch_taken_0x268aa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x268AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268AA4u;
        // 0x268aa8: 0xae200160  sw          $zero, 0x160($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 352), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268aa4) {
            ctx->pc = 0x268BA8u;
            goto label_268ba8;
        }
    }
    ctx->pc = 0x268AACu;
    // 0x268aac: 0x28620041  slti        $v0, $v1, 0x41
    ctx->pc = 0x268aacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)65) ? 1 : 0);
    // 0x268ab0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x268AB0u;
    {
        const bool branch_taken_0x268ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268AB0u;
        // 0x268ab4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268ab0) {
            ctx->pc = 0x268AE0u;
            goto label_268ae0;
        }
    }
    ctx->pc = 0x268AB8u;
    // 0x268ab8: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x268AB8u;
    {
        const bool branch_taken_0x268ab8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x268ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268AB8u;
        // 0x268abc: 0x28620005  slti        $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x268ab8) {
            ctx->pc = 0x268B20u;
            goto label_268b20;
        }
    }
    ctx->pc = 0x268AC0u;
    // 0x268ac0: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x268AC0u;
    {
        const bool branch_taken_0x268ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268AC0u;
        // 0x268ac4: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x268ac0) {
            ctx->pc = 0x268BA8u;
            goto label_268ba8;
        }
    }
    ctx->pc = 0x268AC8u;
    // 0x268ac8: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x268AC8u;
    {
        const bool branch_taken_0x268ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x268ac8) {
            ctx->pc = 0x268BA8u;
            goto label_268ba8;
        }
    }
    ctx->pc = 0x268AD0u;
    // 0x268ad0: 0x1c600035  bgtz        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x268AD0u;
    {
        const bool branch_taken_0x268ad0 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x268ad0) {
            ctx->pc = 0x268BA8u;
            goto label_268ba8;
        }
    }
    ctx->pc = 0x268AD8u;
    // 0x268ad8: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x268AD8u;
    {
        const bool branch_taken_0x268ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268ad8) {
            ctx->pc = 0x268BA8u;
            goto label_268ba8;
        }
    }
    ctx->pc = 0x268AE0u;
label_268ae0:
    // 0x268ae0: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x268ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x268ae4: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x268AE4u;
    {
        const bool branch_taken_0x268ae4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x268AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268AE4u;
        // 0x268ae8: 0x28620201  slti        $v0, $v1, 0x201 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)513) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x268ae4) {
            ctx->pc = 0x268B64u;
            goto label_268b64;
        }
    }
    ctx->pc = 0x268AECu;
    // 0x268aec: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x268AECu;
    {
        const bool branch_taken_0x268aec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268AECu;
        // 0x268af0: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268aec) {
            ctx->pc = 0x268B0Cu;
            goto label_268b0c;
        }
    }
    ctx->pc = 0x268AF4u;
    // 0x268af4: 0x1062002c  beq         $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x268AF4u;
    {
        const bool branch_taken_0x268af4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x268AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268AF4u;
        // 0x268af8: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268af4) {
            ctx->pc = 0x268BA8u;
            goto label_268ba8;
        }
    }
    ctx->pc = 0x268AFCu;
    // 0x268afc: 0x50620011  beql        $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x268AFCu;
    {
        const bool branch_taken_0x268afc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x268afc) {
            ctx->pc = 0x268B00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268AFCu;
            // 0x268b00: 0x8f84b08c  lw          $a0, -0x4F74($gp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946956)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268B44u;
            goto label_268b44;
        }
    }
    ctx->pc = 0x268B04u;
    // 0x268b04: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x268B04u;
    {
        const bool branch_taken_0x268b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268b04) {
            ctx->pc = 0x268BA8u;
            goto label_268ba8;
        }
    }
    ctx->pc = 0x268B0Cu;
label_268b0c:
    // 0x268b0c: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x268b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x268b10: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x268B10u;
    {
        const bool branch_taken_0x268b10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x268b10) {
            ctx->pc = 0x268B9Cu;
            goto label_268b9c;
        }
    }
    ctx->pc = 0x268B18u;
    // 0x268b18: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x268B18u;
    {
        const bool branch_taken_0x268b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268b18) {
            ctx->pc = 0x268BA8u;
            goto label_268ba8;
        }
    }
    ctx->pc = 0x268B20u;
label_268b20:
    // 0x268b20: 0x8f84b084  lw          $a0, -0x4F7C($gp)
    ctx->pc = 0x268b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946948)));
    // 0x268b24: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x268b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x268b28: 0x8f83b080  lw          $v1, -0x4F80($gp)
    ctx->pc = 0x268b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946944)));
    // 0x268b2c: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x268b2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x268b30: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x268b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x268b34: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x268b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x268b38: 0xae230160  sw          $v1, 0x160($s1)
    ctx->pc = 0x268b38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 352), GPR_U32(ctx, 3));
    // 0x268b3c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x268B3Cu;
    {
        const bool branch_taken_0x268b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268B3Cu;
        // 0x268b40: 0xaf84b084  sw          $a0, -0x4F7C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946948), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268b3c) {
            ctx->pc = 0x268BA8u;
            goto label_268ba8;
        }
    }
    ctx->pc = 0x268B44u;
label_268b44:
    // 0x268b44: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x268b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x268b48: 0x8f83b088  lw          $v1, -0x4F78($gp)
    ctx->pc = 0x268b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946952)));
    // 0x268b4c: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x268b4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x268b50: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x268b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x268b54: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x268b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x268b58: 0xae230160  sw          $v1, 0x160($s1)
    ctx->pc = 0x268b58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 352), GPR_U32(ctx, 3));
    // 0x268b5c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x268B5Cu;
    {
        const bool branch_taken_0x268b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268B5Cu;
        // 0x268b60: 0xaf84b08c  sw          $a0, -0x4F74($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946956), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268b5c) {
            ctx->pc = 0x268BA8u;
            goto label_268ba8;
        }
    }
    ctx->pc = 0x268B64u;
label_268b64:
    // 0x268b64: 0x8f83b098  lw          $v1, -0x4F68($gp)
    ctx->pc = 0x268b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946968)));
    // 0x268b68: 0x2405008c  addiu       $a1, $zero, 0x8C
    ctx->pc = 0x268b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x268b6c: 0x2406006c  addiu       $a2, $zero, 0x6C
    ctx->pc = 0x268b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x268b70: 0x8f84b090  lw          $a0, -0x4F70($gp)
    ctx->pc = 0x268b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946960)));
    // 0x268b74: 0x652818  mult        $a1, $v1, $a1
    ctx->pc = 0x268b74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x268b78: 0x70663018  mult1       $a2, $v1, $a2
    ctx->pc = 0x268b78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x268b7c: 0x8f82b094  lw          $v0, -0x4F6C($gp)
    ctx->pc = 0x268b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946964)));
    // 0x268b80: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x268b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x268b84: 0xaf83b098  sw          $v1, -0x4F68($gp)
    ctx->pc = 0x268b84u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946968), GPR_U32(ctx, 3));
    // 0x268b88: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x268b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x268b8c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x268b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x268b90: 0xac820064  sw          $v0, 0x64($a0)
    ctx->pc = 0x268b90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 2));
    // 0x268b94: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x268B94u;
    {
        const bool branch_taken_0x268b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268B94u;
        // 0x268b98: 0xae240160  sw          $a0, 0x160($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 352), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268b94) {
            ctx->pc = 0x268BA8u;
            goto label_268ba8;
        }
    }
    ctx->pc = 0x268B9Cu;
label_268b9c:
    // 0x268b9c: 0xc09a19e  jal         func_268678
    ctx->pc = 0x268B9Cu;
    SET_GPR_U32(ctx, 31, 0x268BA4u);
    ctx->pc = 0x268678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268678u, 0x268B9Cu, 0x268BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268BA4u;
label_268ba4:
    // 0x268ba4: 0xae220160  sw          $v0, 0x160($s1)
    ctx->pc = 0x268ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 352), GPR_U32(ctx, 2));
label_268ba8:
    // 0x268ba8: 0xc09a0b4  jal         func_2682D0
    ctx->pc = 0x268BA8u;
    SET_GPR_U32(ctx, 31, 0x268BB0u);
    ctx->pc = 0x268BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268BA8u;
    // 0x268bac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2682D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2682D0u, 0x268BA8u, 0x268BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268BB0u;
label_268bb0:
    // 0x268bb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x268bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268bb4: 0xc099cce  jal         func_267338
    ctx->pc = 0x268BB4u;
    SET_GPR_U32(ctx, 31, 0x268BBCu);
    ctx->pc = 0x268BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268BB4u;
    // 0x268bb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267338u, 0x268BB4u, 0x268BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268BBCu;
label_268bbc:
    // 0x268bbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x268bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268bc0: 0xc099d6e  jal         func_2675B8
    ctx->pc = 0x268BC0u;
    SET_GPR_U32(ctx, 31, 0x268BC8u);
    ctx->pc = 0x268BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268BC0u;
    // 0x268bc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2675B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2675B8u, 0x268BC0u, 0x268BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268BC8u;
label_268bc8:
    // 0x268bc8: 0xc099fc2  jal         func_267F08
    ctx->pc = 0x268BC8u;
    SET_GPR_U32(ctx, 31, 0x268BD0u);
    ctx->pc = 0x268BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268BC8u;
    // 0x268bcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267F08u, 0x268BC8u, 0x268BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268BD0u;
label_268bd0:
    // 0x268bd0: 0x8f829f70  lw          $v0, -0x6090($gp)
    ctx->pc = 0x268bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x268bd4: 0x2442ff9a  addiu       $v0, $v0, -0x66
    ctx->pc = 0x268bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967194));
    // 0x268bd8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x268bd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x268bdc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x268BDCu;
    {
        const bool branch_taken_0x268bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x268bdc) {
            ctx->pc = 0x268BF0u;
            goto label_268bf0;
        }
    }
    ctx->pc = 0x268BE4u;
    // 0x268be4: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x268be4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x268be8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x268BE8u;
    {
        const bool branch_taken_0x268be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268BE8u;
        // 0x268bec: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268be8) {
            ctx->pc = 0x268C2Cu;
            goto label_268c2c;
        }
    }
    ctx->pc = 0x268BF0u;
label_268bf0:
    // 0x268bf0: 0xc09a6cc  jal         func_269B30
    ctx->pc = 0x268BF0u;
    SET_GPR_U32(ctx, 31, 0x268BF8u);
    ctx->pc = 0x268BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268BF0u;
    // 0x268bf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269B30u, 0x268BF0u, 0x268BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268BF8u;
label_268bf8:
    // 0x268bf8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x268bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x268bfc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x268bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x268c00: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x268C00u;
    {
        const bool branch_taken_0x268c00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x268c00) {
            ctx->pc = 0x268C04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268C00u;
            // 0x268c04: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268C10u;
            goto label_268c10;
        }
    }
    ctx->pc = 0x268C08u;
    // 0x268c08: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x268C08u;
    {
        const bool branch_taken_0x268c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268C08u;
        // 0x268c0c: 0x8e220090  lw          $v0, 0x90($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268c08) {
            ctx->pc = 0x268C14u;
            goto label_268c14;
        }
    }
    ctx->pc = 0x268C10u;
label_268c10:
    // 0x268c10: 0x2442fe00  addiu       $v0, $v0, -0x200
    ctx->pc = 0x268c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966784));
label_268c14:
    // 0x268c14: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x268c14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x268c18: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x268c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x268c1c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x268C1Cu;
    {
        const bool branch_taken_0x268c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x268C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268C1Cu;
        // 0x268c20: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268c1c) {
            ctx->pc = 0x268C30u;
            goto label_268c30;
        }
    }
    ctx->pc = 0x268C24u;
    // 0x268c24: 0x8e220090  lw          $v0, 0x90($s1)
    ctx->pc = 0x268c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x268c28: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x268c28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_268c2c:
    // 0x268c2c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x268c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_268c30:
    // 0x268c30: 0x14620028  bne         $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x268C30u;
    {
        const bool branch_taken_0x268c30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x268C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268C30u;
        // 0x268c34: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268c30) {
            ctx->pc = 0x268CD4u;
            goto label_268cd4;
        }
    }
    ctx->pc = 0x268C38u;
    // 0x268c38: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x268c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x268c3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x268c3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268c40: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x268c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x268c44: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x268c44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x268c48: 0xc21018  mult        $v0, $a2, $v0
    ctx->pc = 0x268c48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x268c4c: 0x18c00021  blez        $a2, . + 4 + (0x21 << 2)
    ctx->pc = 0x268C4Cu;
    {
        const bool branch_taken_0x268c4c = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x268C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268C4Cu;
        // 0x268c50: 0x624023  subu        $t0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268c4c) {
            ctx->pc = 0x268CD4u;
            goto label_268cd4;
        }
    }
    ctx->pc = 0x268C54u;
    // 0x268c54: 0x8c87005c  lw          $a3, 0x5C($a0)
    ctx->pc = 0x268c54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x268c58: 0x8ce40020  lw          $a0, 0x20($a3)
    ctx->pc = 0x268c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x268c5c: 0x0  nop
    ctx->pc = 0x268c5cu;
    // NOP
label_268c60:
    // 0x268c60: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x268c60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x268c64: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x268c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x268c68: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x268c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x268c6c: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x268c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x268c70: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x268c70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x268c74: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x268C74u;
    {
        const bool branch_taken_0x268c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268C74u;
        // 0x268c78: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268c74) {
            ctx->pc = 0x268CACu;
            goto label_268cac;
        }
    }
    ctx->pc = 0x268C7Cu;
    // 0x268c7c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x268c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x268c80: 0x24427ac0  addiu       $v0, $v0, 0x7AC0
    ctx->pc = 0x268c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31424));
    // 0x268c84: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x268c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x268c88: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x268c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x268c8c: 0x800008  jr          $a0
    ctx->pc = 0x268C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x268C94u: goto label_268c94;
            case 0x268CACu: goto label_268cac;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268C8Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x268C94u;
label_268c94:
    // 0x268c94: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x268c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x268c98: 0xa31018  mult        $v0, $a1, $v1
    ctx->pc = 0x268c98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x268c9c: 0x481821  addu        $v1, $v0, $t0
    ctx->pc = 0x268c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x268ca0: 0x94620044  lhu         $v0, 0x44($v1)
    ctx->pc = 0x268ca0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x268ca4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x268CA4u;
    {
        const bool branch_taken_0x268ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268CA4u;
        // 0x268ca8: 0x34428000  ori         $v0, $v0, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x268ca4) {
            ctx->pc = 0x268CC0u;
            goto label_268cc0;
        }
    }
    ctx->pc = 0x268CACu;
label_268cac:
    // 0x268cac: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x268cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x268cb0: 0xa31018  mult        $v0, $a1, $v1
    ctx->pc = 0x268cb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x268cb4: 0x481821  addu        $v1, $v0, $t0
    ctx->pc = 0x268cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x268cb8: 0x94620044  lhu         $v0, 0x44($v1)
    ctx->pc = 0x268cb8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x268cbc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x268cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_268cc0:
    // 0x268cc0: 0xa4620044  sh          $v0, 0x44($v1)
    ctx->pc = 0x268cc0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 68), (uint16_t)GPR_U32(ctx, 2));
    // 0x268cc4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x268cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x268cc8: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x268cc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x268ccc: 0x5440ffe4  bnel        $v0, $zero, . + 4 + (-0x1C << 2)
    ctx->pc = 0x268CCCu;
    {
        const bool branch_taken_0x268ccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x268ccc) {
            ctx->pc = 0x268CD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268CCCu;
            // 0x268cd0: 0x8ce40020  lw          $a0, 0x20($a3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268C60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_268c60;
        }
    }
    ctx->pc = 0x268CD4u;
label_268cd4:
    // 0x268cd4: 0xc09a344  jal         func_268D10
    ctx->pc = 0x268CD4u;
    SET_GPR_U32(ctx, 31, 0x268CDCu);
    ctx->pc = 0x268CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268CD4u;
    // 0x268cd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x268D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D10u, 0x268CD4u, 0x268CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268CDCu;
label_268cdc:
    // 0x268cdc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x268cdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268ce0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x268ce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x268ce4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x268ce4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x268ce8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x268ce8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x268cec: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x268cecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x268cf0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x268cf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x268cf4: 0xc7b70068  lwc1        $f23, 0x68($sp)
    ctx->pc = 0x268cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x268cf8: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x268cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x268cfc: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x268cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x268d00: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x268d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x268d04: 0x3e00008  jr          $ra
    ctx->pc = 0x268D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x268D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268D04u;
        // 0x268d08: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268D04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x268D0Cu;
}
