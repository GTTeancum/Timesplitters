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

// Function: playerAutoAimTick
// Address: 0x280858 - 0x280b60
void playerAutoAimTick_0x280858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("playerAutoAimTick_0x280858");
#endif

    switch (ctx->pc) {
        case 0x2808c0u: goto label_2808c0;
        case 0x2809d0u: goto label_2809d0;
        case 0x2809f8u: goto label_2809f8;
        case 0x280a50u: goto label_280a50;
        case 0x280a94u: goto label_280a94;
        default: break;
    }

    ctx->pc = 0x280858u;

    // 0x280858: 0x8f82b944  lw          $v0, -0x46BC($gp)
    ctx->pc = 0x280858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949188)));
    // 0x28085c: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x28085cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x280860: 0xffb60110  sd          $s6, 0x110($sp)
    ctx->pc = 0x280860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 22));
    // 0x280864: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x280864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x280868: 0xffb400f0  sd          $s4, 0xF0($sp)
    ctx->pc = 0x280868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 20));
    // 0x28086c: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x28086cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
    // 0x280870: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x280870u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280874: 0xffb70120  sd          $s7, 0x120($sp)
    ctx->pc = 0x280874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 23));
    // 0x280878: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x280878u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28087c: 0xffb50100  sd          $s5, 0x100($sp)
    ctx->pc = 0x28087cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 21));
    // 0x280880: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x280880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x280884: 0xffb300e0  sd          $s3, 0xE0($sp)
    ctx->pc = 0x280884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 19));
    // 0x280888: 0xffb200d0  sd          $s2, 0xD0($sp)
    ctx->pc = 0x280888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 18));
    // 0x28088c: 0xffb100c0  sd          $s1, 0xC0($sp)
    ctx->pc = 0x28088cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 17));
    // 0x280890: 0xffb000b0  sd          $s0, 0xB0($sp)
    ctx->pc = 0x280890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
    // 0x280894: 0x146000a7  bnez        $v1, . + 4 + (0xA7 << 2)
    ctx->pc = 0x280894u;
    {
        const bool branch_taken_0x280894 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x280898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280894u;
        // 0x280898: 0xaf82b944  sw          $v0, -0x46BC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280894) {
            ctx->pc = 0x280B34u;
            goto label_280b34;
        }
    }
    ctx->pc = 0x28089Cu;
    // 0x28089c: 0x8f849f74  lw          $a0, -0x608C($gp)
    ctx->pc = 0x28089cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x2808a0: 0x8f83b59c  lw          $v1, -0x4A64($gp)
    ctx->pc = 0x2808a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x2808a4: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x2808a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2808a8: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x2808a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2808ac: 0x184000a1  blez        $v0, . + 4 + (0xA1 << 2)
    ctx->pc = 0x2808ACu;
    {
        const bool branch_taken_0x2808ac = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2808B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2808ACu;
        // 0x2808b0: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2808ac) {
            ctx->pc = 0x280B34u;
            goto label_280b34;
        }
    }
    ctx->pc = 0x2808B4u;
    // 0x2808b4: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x2808b4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2808b8: 0x8f88b210  lw          $t0, -0x4DF0($gp)
    ctx->pc = 0x2808b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947344)));
    // 0x2808bc: 0x0  nop
    ctx->pc = 0x2808bcu;
    // NOP
label_2808c0:
    // 0x2808c0: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x2808c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2808c4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2808c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2808c8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2808c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2808cc: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x2808ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2808d0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2808D0u;
    {
        const bool branch_taken_0x2808d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2808D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2808D0u;
        // 0x2808d4: 0xaf88b210  sw          $t0, -0x4DF0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294947344), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2808d0) {
            ctx->pc = 0x280900u;
            goto label_280900;
        }
    }
    ctx->pc = 0x2808D8u;
    // 0x2808d8: 0x8f83b20c  lw          $v1, -0x4DF4($gp)
    ctx->pc = 0x2808d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947340)));
    // 0x2808dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2808dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2808e0: 0xaf80b210  sw          $zero, -0x4DF0($gp)
    ctx->pc = 0x2808e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947344), GPR_U32(ctx, 0));
    // 0x2808e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2808e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2808e8: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x2808e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2808ec: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2808ECu;
    {
        const bool branch_taken_0x2808ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2808F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2808ECu;
        // 0x2808f0: 0xaf83b20c  sw          $v1, -0x4DF4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294947340), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2808ec) {
            ctx->pc = 0x280904u;
            goto label_280904;
        }
    }
    ctx->pc = 0x2808F4u;
    // 0x2808f4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2808f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2808f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2808F8u;
    {
        const bool branch_taken_0x2808f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2808FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2808F8u;
        // 0x2808fc: 0xaf80b20c  sw          $zero, -0x4DF4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294947340), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2808f8) {
            ctx->pc = 0x280904u;
            goto label_280904;
        }
    }
    ctx->pc = 0x280900u;
label_280900:
    // 0x280900: 0x8f83b20c  lw          $v1, -0x4DF4($gp)
    ctx->pc = 0x280900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947340)));
label_280904:
    // 0x280904: 0x10680082  beq         $v1, $t0, . + 4 + (0x82 << 2)
    ctx->pc = 0x280904u;
    {
        const bool branch_taken_0x280904 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        ctx->pc = 0x280908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280904u;
        // 0x280908: 0x2402071c  addiu       $v0, $zero, 0x71C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1820));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280904) {
            ctx->pc = 0x280B10u;
            goto label_280b10;
        }
    }
    ctx->pc = 0x28090Cu;
    // 0x28090c: 0x8f87b230  lw          $a3, -0x4DD0($gp)
    ctx->pc = 0x28090cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x280910: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x280910u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x280914: 0x24131210  addiu       $s3, $zero, 0x1210
    ctx->pc = 0x280914u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
    // 0x280918: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x280918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x28091c: 0x1133018  mult        $a2, $t0, $s3
    ctx->pc = 0x28091cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x280920: 0x1031818  mult        $v1, $t0, $v1
    ctx->pc = 0x280920u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x280924: 0x8f85b238  lw          $a1, -0x4DC8($gp)
    ctx->pc = 0x280924u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x280928: 0xe28021  addu        $s0, $a3, $v0
    ctx->pc = 0x280928u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x28092c: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x28092cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x280930: 0xa68821  addu        $s1, $a1, $a2
    ctx->pc = 0x280930u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x280934: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x280934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x280938: 0x839021  addu        $s2, $a0, $v1
    ctx->pc = 0x280938u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x28093c: 0x8e250bcc  lw          $a1, 0xBCC($s1)
    ctx->pc = 0x28093cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3020)));
    // 0x280940: 0x8c430160  lw          $v1, 0x160($v0)
    ctx->pc = 0x280940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x280944: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x280944u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x280948: 0x8c640018  lw          $a0, 0x18($v1)
    ctx->pc = 0x280948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x28094c: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x28094cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x280950: 0x1082006f  beq         $a0, $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x280950u;
    {
        const bool branch_taken_0x280950 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x280954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280950u;
        // 0x280954: 0x8f829f74  lw          $v0, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280950) {
            ctx->pc = 0x280B10u;
            goto label_280b10;
        }
    }
    ctx->pc = 0x280958u;
    // 0x280958: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x280958u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x28095c: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x28095Cu;
    {
        const bool branch_taken_0x28095c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28095c) {
            ctx->pc = 0x280960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28095Cu;
            // 0x280960: 0xc4af004c  lwc1        $f15, 0x4C($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2809A0u;
            goto label_2809a0;
        }
    }
    ctx->pc = 0x280964u;
    // 0x280964: 0x8e230a9c  lw          $v1, 0xA9C($s1)
    ctx->pc = 0x280964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2716)));
    // 0x280968: 0x10600069  beqz        $v1, . + 4 + (0x69 << 2)
    ctx->pc = 0x280968u;
    {
        const bool branch_taken_0x280968 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28096Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280968u;
        // 0x28096c: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280968) {
            ctx->pc = 0x280B10u;
            goto label_280b10;
        }
    }
    ctx->pc = 0x280970u;
    // 0x280970: 0x10620067  beq         $v1, $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x280970u;
    {
        const bool branch_taken_0x280970 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x280970) {
            ctx->pc = 0x280B10u;
            goto label_280b10;
        }
    }
    ctx->pc = 0x280978u;
    // 0x280978: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x280978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x28097c: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x28097cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x280980: 0x14400063  bnez        $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x280980u;
    {
        const bool branch_taken_0x280980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x280984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280980u;
        // 0x280984: 0x3c020f00  lui         $v0, 0xF00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3840 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280980) {
            ctx->pc = 0x280B10u;
            goto label_280b10;
        }
    }
    ctx->pc = 0x280988u;
    // 0x280988: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x280988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x28098c: 0x10400060  beqz        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x28098Cu;
    {
        const bool branch_taken_0x28098c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x280990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28098Cu;
        // 0x280990: 0x30620100  andi        $v0, $v1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28098c) {
            ctx->pc = 0x280B10u;
            goto label_280b10;
        }
    }
    ctx->pc = 0x280994u;
    // 0x280994: 0x1440005e  bnez        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x280994u;
    {
        const bool branch_taken_0x280994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x280994) {
            ctx->pc = 0x280B10u;
            goto label_280b10;
        }
    }
    ctx->pc = 0x28099Cu;
    // 0x28099c: 0xc4af004c  lwc1        $f15, 0x4C($a1)
    ctx->pc = 0x28099cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_2809a0:
    // 0x2809a0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2809a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2809a4: 0xc78087f4  lwc1        $f0, -0x780C($gp)
    ctx->pc = 0x2809a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2809a8: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2809a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2809ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2809acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2809b0: 0x46007bc2  mul.s       $f15, $f15, $f0
    ctx->pc = 0x2809b0u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[0]);
    // 0x2809b4: 0xc4ae0038  lwc1        $f14, 0x38($a1)
    ctx->pc = 0x2809b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2809b8: 0xc4ac0030  lwc1        $f12, 0x30($a1)
    ctx->pc = 0x2809b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2809bc: 0x0  nop
    ctx->pc = 0x2809bcu;
    // NOP
    // 0x2809c0: 0x0  nop
    ctx->pc = 0x2809c0u;
    // NOP
    // 0x2809c4: 0x46017bc3  div.s       $f15, $f15, $f1
    ctx->pc = 0x2809c4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[15] = copysignf(INFINITY, ctx->f[15] * 0.0f); } else ctx->f[15] = ctx->f[15] / ctx->f[1];
    // 0x2809c8: 0xc0ad314  jal         func_2B4C50
    ctx->pc = 0x2809C8u;
    SET_GPR_U32(ctx, 31, 0x2809D0u);
    ctx->pc = 0x2809CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2809C8u;
    // 0x2809cc: 0xc4ad0034  lwc1        $f13, 0x34($a1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4C50u, 0x2809C8u, 0x2809D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2809D0u;
label_2809d0:
    // 0x2809d0: 0x8e260bcc  lw          $a2, 0xBCC($s1)
    ctx->pc = 0x2809d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3020)));
    // 0x2809d4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2809d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2809d8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2809d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2809dc: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x2809dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2809e0: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x2809e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x2809e4: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2809e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2809e8: 0x8c660014  lw          $a2, 0x14($v1)
    ctx->pc = 0x2809e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2809ec: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x2809ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x2809f0: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x2809F0u;
    SET_GPR_U32(ctx, 31, 0x2809F8u);
    ctx->pc = 0x2809F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2809F0u;
    // 0x2809f4: 0xe63021  addu        $a2, $a3, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x2809F0u, 0x2809F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2809F8u;
label_2809f8:
    // 0x2809f8: 0xc7a20084  lwc1        $f2, 0x84($sp)
    ctx->pc = 0x2809f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2809fc: 0x27b100a0  addiu       $s1, $sp, 0xA0
    ctx->pc = 0x2809fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x280a00: 0xc78087f8  lwc1        $f0, -0x7808($gp)
    ctx->pc = 0x280a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280a04: 0x260400bc  addiu       $a0, $s0, 0xBC
    ctx->pc = 0x280a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 188));
    // 0x280a08: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x280a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x280a0c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x280a0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280a10: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x280a10u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x280a14: 0xc7a30088  lwc1        $f3, 0x88($sp)
    ctx->pc = 0x280a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x280a18: 0xe7a10090  swc1        $f1, 0x90($sp)
    ctx->pc = 0x280a18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x280a1c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x280a1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280a20: 0xe7a30098  swc1        $f3, 0x98($sp)
    ctx->pc = 0x280a20u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x280a24: 0xe7a20094  swc1        $f2, 0x94($sp)
    ctx->pc = 0x280a24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x280a28: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x280a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280a2c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x280a2cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x280a30: 0xe7a100a0  swc1        $f1, 0xA0($sp)
    ctx->pc = 0x280a30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x280a34: 0xc600009c  lwc1        $f0, 0x9C($s0)
    ctx->pc = 0x280a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280a38: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x280a38u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x280a3c: 0xe7a200a4  swc1        $f2, 0xA4($sp)
    ctx->pc = 0x280a3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x280a40: 0xc60000a0  lwc1        $f0, 0xA0($s0)
    ctx->pc = 0x280a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280a44: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x280a44u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x280a48: 0xc0a01e0  jal         func_280780
    ctx->pc = 0x280A48u;
    SET_GPR_U32(ctx, 31, 0x280A50u);
    ctx->pc = 0x280A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280A48u;
    // 0x280a4c: 0xe7a300a8  swc1        $f3, 0xA8($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x280780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280780u, 0x280A48u, 0x280A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280A50u;
label_280a50:
    // 0x280a50: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x280a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x280a54: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x280a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x280a58: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x280a58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x280a5c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x280a5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280a60: 0x0  nop
    ctx->pc = 0x280a60u;
    // NOP
    // 0x280a64: 0x45000022  bc1f        . + 4 + (0x22 << 2)
    ctx->pc = 0x280A64u;
    {
        const bool branch_taken_0x280a64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x280A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280A64u;
        // 0x280a68: 0x26050098  addiu       $a1, $s0, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280a64) {
            ctx->pc = 0x280AF0u;
            goto label_280af0;
        }
    }
    ctx->pc = 0x280A6Cu;
    // 0x280a6c: 0xafb70000  sw          $s7, 0x0($sp)
    ctx->pc = 0x280a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 23));
    // 0x280a70: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x280a70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x280a74: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x280a74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280a78: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x280a78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280a7c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x280a7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280a80: 0x8e04031c  lw          $a0, 0x31C($s0)
    ctx->pc = 0x280a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 796)));
    // 0x280a84: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x280a84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280a88: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x280a88u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280a8c: 0xc09640e  jal         func_259038
    ctx->pc = 0x280A8Cu;
    SET_GPR_U32(ctx, 31, 0x280A94u);
    ctx->pc = 0x280A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280A8Cu;
    // 0x280a90: 0x240b0078  addiu       $t3, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259038u, 0x280A8Cu, 0x280A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280A94u;
label_280a94:
    // 0x280a94: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x280A94u;
    {
        const bool branch_taken_0x280a94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x280A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280A94u;
        // 0x280a98: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280a94) {
            ctx->pc = 0x280AE0u;
            goto label_280ae0;
        }
    }
    ctx->pc = 0x280A9Cu;
    // 0x280a9c: 0x8f82b210  lw          $v0, -0x4DF0($gp)
    ctx->pc = 0x280a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947344)));
    // 0x280aa0: 0x8f87b20c  lw          $a3, -0x4DF4($gp)
    ctx->pc = 0x280aa0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947340)));
    // 0x280aa4: 0x531018  mult        $v0, $v0, $s3
    ctx->pc = 0x280aa4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x280aa8: 0x8f84b238  lw          $a0, -0x4DC8($gp)
    ctx->pc = 0x280aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x280aac: 0xf31818  mult        $v1, $a3, $s3
    ctx->pc = 0x280aacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x280ab0: 0x443021  addu        $a2, $v0, $a0
    ctx->pc = 0x280ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x280ab4: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x280ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x280ab8: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x280ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x280abc: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x280abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x280ac0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x280AC0u;
    {
        const bool branch_taken_0x280ac0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x280AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280AC0u;
        // 0x280ac4: 0x8f82b234  lw          $v0, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280ac0) {
            ctx->pc = 0x280AD8u;
            goto label_280ad8;
        }
    }
    ctx->pc = 0x280AC8u;
    // 0x280ac8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x280ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x280acc: 0x8c430128  lw          $v1, 0x128($v0)
    ctx->pc = 0x280accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 296)));
    // 0x280ad0: 0x54640001  bnel        $v1, $a0, . + 4 + (0x1 << 2)
    ctx->pc = 0x280AD0u;
    {
        const bool branch_taken_0x280ad0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x280ad0) {
            ctx->pc = 0x280AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x280AD0u;
            // 0x280ad4: 0xacc70ad8  sw          $a3, 0xAD8($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 2776), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x280AD8u;
            goto label_280ad8;
        }
    }
    ctx->pc = 0x280AD8u;
label_280ad8:
    // 0x280ad8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x280AD8u;
    {
        const bool branch_taken_0x280ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280AD8u;
        // 0x280adc: 0xae570000  sw          $s7, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280ad8) {
            ctx->pc = 0x280B10u;
            goto label_280b10;
        }
    }
    ctx->pc = 0x280AE0u;
label_280ae0:
    // 0x280ae0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x280ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x280ae4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x280ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x280ae8: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x280AE8u;
    {
        const bool branch_taken_0x280ae8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x280ae8) {
            ctx->pc = 0x280B10u;
            goto label_280b10;
        }
    }
    ctx->pc = 0x280AF0u;
label_280af0:
    // 0x280af0: 0x8f82b210  lw          $v0, -0x4DF0($gp)
    ctx->pc = 0x280af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947344)));
    // 0x280af4: 0x8f84b238  lw          $a0, -0x4DC8($gp)
    ctx->pc = 0x280af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x280af8: 0x531018  mult        $v0, $v0, $s3
    ctx->pc = 0x280af8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x280afc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x280afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x280b00: 0x8c430a90  lw          $v1, 0xA90($v0)
    ctx->pc = 0x280b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2704)));
    // 0x280b04: 0xac550ad8  sw          $s5, 0xAD8($v0)
    ctx->pc = 0x280b04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2776), GPR_U32(ctx, 21));
    // 0x280b08: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x280b08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x280b0c: 0xac430a90  sw          $v1, 0xA90($v0)
    ctx->pc = 0x280b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2704), GPR_U32(ctx, 3));
label_280b10:
    // 0x280b10: 0x16c00009  bnez        $s6, . + 4 + (0x9 << 2)
    ctx->pc = 0x280B10u;
    {
        const bool branch_taken_0x280b10 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x280B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280B10u;
        // 0x280b14: 0xdfbf0130  ld          $ra, 0x130($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280b10) {
            ctx->pc = 0x280B38u;
            goto label_280b38;
        }
    }
    ctx->pc = 0x280B18u;
    // 0x280b18: 0x8f849f74  lw          $a0, -0x608C($gp)
    ctx->pc = 0x280b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x280b1c: 0x8f83b59c  lw          $v1, -0x4A64($gp)
    ctx->pc = 0x280b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x280b20: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x280b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x280b24: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x280b24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x280b28: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x280b28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x280b2c: 0x1440ff64  bnez        $v0, . + 4 + (-0x9C << 2)
    ctx->pc = 0x280B2Cu;
    {
        const bool branch_taken_0x280b2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x280B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280B2Cu;
        // 0x280b30: 0x8f88b210  lw          $t0, -0x4DF0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947344)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280b2c) {
            ctx->pc = 0x2808C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2808c0;
        }
    }
    ctx->pc = 0x280B34u;
label_280b34:
    // 0x280b34: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x280b34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
label_280b38:
    // 0x280b38: 0xdfb70120  ld          $s7, 0x120($sp)
    ctx->pc = 0x280b38u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x280b3c: 0xdfb60110  ld          $s6, 0x110($sp)
    ctx->pc = 0x280b3cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x280b40: 0xdfb50100  ld          $s5, 0x100($sp)
    ctx->pc = 0x280b40u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x280b44: 0xdfb400f0  ld          $s4, 0xF0($sp)
    ctx->pc = 0x280b44u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x280b48: 0xdfb300e0  ld          $s3, 0xE0($sp)
    ctx->pc = 0x280b48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x280b4c: 0xdfb200d0  ld          $s2, 0xD0($sp)
    ctx->pc = 0x280b4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x280b50: 0xdfb100c0  ld          $s1, 0xC0($sp)
    ctx->pc = 0x280b50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x280b54: 0xdfb000b0  ld          $s0, 0xB0($sp)
    ctx->pc = 0x280b54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x280b58: 0x3e00008  jr          $ra
    ctx->pc = 0x280B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280B58u;
        // 0x280b5c: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280B58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280B60u;
}
