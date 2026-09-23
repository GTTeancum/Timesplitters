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

// Function: StatsCalc
// Address: 0x221468 - 0x221910
void StatsCalc_0x221468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StatsCalc_0x221468");
#endif

    switch (ctx->pc) {
        case 0x2214c0u: goto label_2214c0;
        case 0x2214c8u: goto label_2214c8;
        case 0x2214e8u: goto label_2214e8;
        case 0x2214f8u: goto label_2214f8;
        case 0x221510u: goto label_221510;
        case 0x22151cu: goto label_22151c;
        case 0x22152cu: goto label_22152c;
        case 0x22153cu: goto label_22153c;
        case 0x221558u: goto label_221558;
        case 0x221568u: goto label_221568;
        case 0x22157cu: goto label_22157c;
        case 0x22158cu: goto label_22158c;
        case 0x2215a8u: goto label_2215a8;
        case 0x2215b8u: goto label_2215b8;
        case 0x2215d0u: goto label_2215d0;
        case 0x2215dcu: goto label_2215dc;
        case 0x2215ecu: goto label_2215ec;
        case 0x221604u: goto label_221604;
        case 0x221610u: goto label_221610;
        case 0x221620u: goto label_221620;
        case 0x221638u: goto label_221638;
        case 0x221644u: goto label_221644;
        case 0x221654u: goto label_221654;
        case 0x22166cu: goto label_22166c;
        case 0x221678u: goto label_221678;
        case 0x221688u: goto label_221688;
        case 0x2216a0u: goto label_2216a0;
        case 0x2216b4u: goto label_2216b4;
        case 0x2216c4u: goto label_2216c4;
        case 0x2216d4u: goto label_2216d4;
        case 0x2216e4u: goto label_2216e4;
        case 0x2216f4u: goto label_2216f4;
        case 0x221748u: goto label_221748;
        case 0x221760u: goto label_221760;
        case 0x221770u: goto label_221770;
        case 0x221790u: goto label_221790;
        case 0x2217a8u: goto label_2217a8;
        case 0x2217c0u: goto label_2217c0;
        case 0x2217d8u: goto label_2217d8;
        case 0x2217f0u: goto label_2217f0;
        case 0x221800u: goto label_221800;
        case 0x221824u: goto label_221824;
        case 0x221834u: goto label_221834;
        case 0x221840u: goto label_221840;
        case 0x22185cu: goto label_22185c;
        case 0x221874u: goto label_221874;
        case 0x221888u: goto label_221888;
        case 0x2218a4u: goto label_2218a4;
        default: break;
    }

    ctx->pc = 0x221468u;

    // 0x221468: 0xc7809da8  lwc1        $f0, -0x6258($gp)
    ctx->pc = 0x221468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22146c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22146cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x221470: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x221470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x221474: 0xc7818084  lwc1        $f1, -0x7F7C($gp)
    ctx->pc = 0x221474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x221478: 0xe7b60080  swc1        $f22, 0x80($sp)
    ctx->pc = 0x221478u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x22147c: 0x46010582  mul.s       $f22, $f0, $f1
    ctx->pc = 0x22147cu;
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x221480: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x221480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x221484: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x221484u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x221488: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x221488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x22148c: 0x4602b032  c.eq.s      $f22, $f2
    ctx->pc = 0x22148cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[22], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x221490: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x221490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x221494: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x221494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x221498: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x221498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22149c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x22149cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2214a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2214a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2214a4: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x2214a4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2214a8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2214A8u;
    {
        const bool branch_taken_0x2214a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2214ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2214A8u;
        // 0x2214ac: 0xe7b40070  swc1        $f20, 0x70($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2214a8) {
            ctx->pc = 0x2214B4u;
            goto label_2214b4;
        }
    }
    ctx->pc = 0x2214B0u;
    // 0x2214b0: 0xc7968088  lwc1        $f22, -0x7F78($gp)
    ctx->pc = 0x2214b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2214b4:
    // 0x2214b4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2214b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2214b8: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x2214B8u;
    {
        const bool branch_taken_0x2214b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2214BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2214B8u;
        // 0x2214bc: 0x3c100033  lui         $s0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2214b8) {
            ctx->pc = 0x2216F8u;
            goto label_2216f8;
        }
    }
    ctx->pc = 0x2214C0u;
label_2214c0:
    // 0x2214c0: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x2214C0u;
    SET_GPR_U32(ctx, 31, 0x2214C8u);
    ctx->pc = 0x2214C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2214C0u;
    // 0x2214c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x2214C0u, 0x2214C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2214C8u;
label_2214c8:
    // 0x2214c8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2214c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2214cc: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x2214ccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2214d0: 0x0  nop
    ctx->pc = 0x2214d0u;
    // NOP
    // 0x2214d4: 0x45010022  bc1t        . + 4 + (0x22 << 2)
    ctx->pc = 0x2214D4u;
    {
        const bool branch_taken_0x2214d4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2214D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2214D4u;
        // 0x2214d8: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2214d4) {
            ctx->pc = 0x221560u;
            goto label_221560;
        }
    }
    ctx->pc = 0x2214DCu;
    // 0x2214dc: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x2214dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2214e0: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x2214E0u;
    SET_GPR_U32(ctx, 31, 0x2214E8u);
    ctx->pc = 0x2214E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2214E0u;
    // 0x2214e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x2214E0u, 0x2214E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2214E8u;
label_2214e8:
    // 0x2214e8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2214e8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2214ec: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2214ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2214f0: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x2214F0u;
    SET_GPR_U32(ctx, 31, 0x2214F8u);
    ctx->pc = 0x2214F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2214F0u;
    // 0x2214f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x2214F0u, 0x2214F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2214F8u;
label_2214f8:
    // 0x2214f8: 0x0  nop
    ctx->pc = 0x2214f8u;
    // NOP
    // 0x2214fc: 0x0  nop
    ctx->pc = 0x2214fcu;
    // NOP
    // 0x221500: 0x4600a303  div.s       $f12, $f20, $f0
    ctx->pc = 0x221500u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[12] = ctx->f[20] / ctx->f[0];
    // 0x221504: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x221504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x221508: 0xc088f78  jal         func_223DE0
    ctx->pc = 0x221508u;
    SET_GPR_U32(ctx, 31, 0x221510u);
    ctx->pc = 0x22150Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221508u;
    // 0x22150c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223DE0u, 0x221508u, 0x221510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221510u;
label_221510:
    // 0x221510: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x221510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x221514: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x221514u;
    SET_GPR_U32(ctx, 31, 0x22151Cu);
    ctx->pc = 0x221518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221514u;
    // 0x221518: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x221514u, 0x22151Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22151Cu;
label_22151c:
    // 0x22151c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x22151cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x221520: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x221520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x221524: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x221524u;
    SET_GPR_U32(ctx, 31, 0x22152Cu);
    ctx->pc = 0x221528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221524u;
    // 0x221528: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x221524u, 0x22152Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22152Cu;
label_22152c:
    // 0x22152c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x22152cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x221530: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x221530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x221534: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x221534u;
    SET_GPR_U32(ctx, 31, 0x22153Cu);
    ctx->pc = 0x221538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221534u;
    // 0x221538: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x221534u, 0x22153Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22153Cu;
label_22153c:
    // 0x22153c: 0x4615a501  sub.s       $f20, $f20, $f21
    ctx->pc = 0x22153cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
    // 0x221540: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x221540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x221544: 0x0  nop
    ctx->pc = 0x221544u;
    // NOP
    // 0x221548: 0x0  nop
    ctx->pc = 0x221548u;
    // NOP
    // 0x22154c: 0x4600a303  div.s       $f12, $f20, $f0
    ctx->pc = 0x22154cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[12] = ctx->f[20] / ctx->f[0];
    // 0x221550: 0xc088f78  jal         func_223DE0
    ctx->pc = 0x221550u;
    SET_GPR_U32(ctx, 31, 0x221558u);
    ctx->pc = 0x221554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221550u;
    // 0x221554: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223DE0u, 0x221550u, 0x221558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221558u;
label_221558:
    // 0x221558: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x221558u;
    {
        const bool branch_taken_0x221558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22155Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221558u;
        // 0x22155c: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221558) {
            ctx->pc = 0x221580u;
            goto label_221580;
        }
    }
    ctx->pc = 0x221560u;
label_221560:
    // 0x221560: 0xc088f78  jal         func_223DE0
    ctx->pc = 0x221560u;
    SET_GPR_U32(ctx, 31, 0x221568u);
    ctx->pc = 0x221564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221560u;
    // 0x221564: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223DE0u, 0x221560u, 0x221568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221568u;
label_221568:
    // 0x221568: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x221568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22156c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22156cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x221570: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x221570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x221574: 0xc088f78  jal         func_223DE0
    ctx->pc = 0x221574u;
    SET_GPR_U32(ctx, 31, 0x22157Cu);
    ctx->pc = 0x221578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221574u;
    // 0x221578: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223DE0u, 0x221574u, 0x22157Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22157Cu;
label_22157c:
    // 0x22157c: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x22157cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_221580:
    // 0x221580: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x221580u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x221584: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x221584u;
    SET_GPR_U32(ctx, 31, 0x22158Cu);
    ctx->pc = 0x221588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221584u;
    // 0x221588: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x221584u, 0x22158Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22158Cu;
label_22158c:
    // 0x22158c: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x22158cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x221590: 0x0  nop
    ctx->pc = 0x221590u;
    // NOP
    // 0x221594: 0x45010044  bc1t        . + 4 + (0x44 << 2)
    ctx->pc = 0x221594u;
    {
        const bool branch_taken_0x221594 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x221598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221594u;
        // 0x221598: 0x24040012  addiu       $a0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221594) {
            ctx->pc = 0x2216A8u;
            goto label_2216a8;
        }
    }
    ctx->pc = 0x22159Cu;
    // 0x22159c: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x22159cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2215a0: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x2215A0u;
    SET_GPR_U32(ctx, 31, 0x2215A8u);
    ctx->pc = 0x2215A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2215A0u;
    // 0x2215a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x2215A0u, 0x2215A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2215A8u;
label_2215a8:
    // 0x2215a8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2215a8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2215ac: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x2215acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2215b0: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x2215B0u;
    SET_GPR_U32(ctx, 31, 0x2215B8u);
    ctx->pc = 0x2215B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2215B0u;
    // 0x2215b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x2215B0u, 0x2215B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2215B8u;
label_2215b8:
    // 0x2215b8: 0x0  nop
    ctx->pc = 0x2215b8u;
    // NOP
    // 0x2215bc: 0x0  nop
    ctx->pc = 0x2215bcu;
    // NOP
    // 0x2215c0: 0x4600a303  div.s       $f12, $f20, $f0
    ctx->pc = 0x2215c0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[12] = ctx->f[20] / ctx->f[0];
    // 0x2215c4: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x2215c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2215c8: 0xc088f78  jal         func_223DE0
    ctx->pc = 0x2215C8u;
    SET_GPR_U32(ctx, 31, 0x2215D0u);
    ctx->pc = 0x2215CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2215C8u;
    // 0x2215cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223DE0u, 0x2215C8u, 0x2215D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2215D0u;
label_2215d0:
    // 0x2215d0: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x2215d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2215d4: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x2215D4u;
    SET_GPR_U32(ctx, 31, 0x2215DCu);
    ctx->pc = 0x2215D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2215D4u;
    // 0x2215d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x2215D4u, 0x2215DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2215DCu;
label_2215dc:
    // 0x2215dc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2215dcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2215e0: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x2215e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2215e4: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x2215E4u;
    SET_GPR_U32(ctx, 31, 0x2215ECu);
    ctx->pc = 0x2215E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2215E4u;
    // 0x2215e8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x2215E4u, 0x2215ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2215ECu;
label_2215ec:
    // 0x2215ec: 0x0  nop
    ctx->pc = 0x2215ecu;
    // NOP
    // 0x2215f0: 0x0  nop
    ctx->pc = 0x2215f0u;
    // NOP
    // 0x2215f4: 0x4600a303  div.s       $f12, $f20, $f0
    ctx->pc = 0x2215f4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[12] = ctx->f[20] / ctx->f[0];
    // 0x2215f8: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x2215f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2215fc: 0xc088f78  jal         func_223DE0
    ctx->pc = 0x2215FCu;
    SET_GPR_U32(ctx, 31, 0x221604u);
    ctx->pc = 0x221600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2215FCu;
    // 0x221600: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223DE0u, 0x2215FCu, 0x221604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221604u;
label_221604:
    // 0x221604: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x221604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x221608: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x221608u;
    SET_GPR_U32(ctx, 31, 0x221610u);
    ctx->pc = 0x22160Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221608u;
    // 0x22160c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x221608u, 0x221610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221610u;
label_221610:
    // 0x221610: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x221610u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x221614: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x221614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x221618: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x221618u;
    SET_GPR_U32(ctx, 31, 0x221620u);
    ctx->pc = 0x22161Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221618u;
    // 0x22161c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x221618u, 0x221620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221620u;
label_221620:
    // 0x221620: 0x0  nop
    ctx->pc = 0x221620u;
    // NOP
    // 0x221624: 0x0  nop
    ctx->pc = 0x221624u;
    // NOP
    // 0x221628: 0x4600a303  div.s       $f12, $f20, $f0
    ctx->pc = 0x221628u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[12] = ctx->f[20] / ctx->f[0];
    // 0x22162c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x22162cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x221630: 0xc088f78  jal         func_223DE0
    ctx->pc = 0x221630u;
    SET_GPR_U32(ctx, 31, 0x221638u);
    ctx->pc = 0x221634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221630u;
    // 0x221634: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223DE0u, 0x221630u, 0x221638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221638u;
label_221638:
    // 0x221638: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x221638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x22163c: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x22163Cu;
    SET_GPR_U32(ctx, 31, 0x221644u);
    ctx->pc = 0x221640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22163Cu;
    // 0x221640: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x22163Cu, 0x221644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221644u;
label_221644:
    // 0x221644: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x221644u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x221648: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x221648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x22164c: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x22164Cu;
    SET_GPR_U32(ctx, 31, 0x221654u);
    ctx->pc = 0x221650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22164Cu;
    // 0x221650: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x22164Cu, 0x221654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221654u;
label_221654:
    // 0x221654: 0x0  nop
    ctx->pc = 0x221654u;
    // NOP
    // 0x221658: 0x0  nop
    ctx->pc = 0x221658u;
    // NOP
    // 0x22165c: 0x4600a303  div.s       $f12, $f20, $f0
    ctx->pc = 0x22165cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[12] = ctx->f[20] / ctx->f[0];
    // 0x221660: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x221660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x221664: 0xc088f78  jal         func_223DE0
    ctx->pc = 0x221664u;
    SET_GPR_U32(ctx, 31, 0x22166Cu);
    ctx->pc = 0x221668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221664u;
    // 0x221668: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223DE0u, 0x221664u, 0x22166Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22166Cu;
label_22166c:
    // 0x22166c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x22166cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x221670: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x221670u;
    SET_GPR_U32(ctx, 31, 0x221678u);
    ctx->pc = 0x221674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221670u;
    // 0x221674: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x221670u, 0x221678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221678u;
label_221678:
    // 0x221678: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x221678u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x22167c: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x22167cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x221680: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x221680u;
    SET_GPR_U32(ctx, 31, 0x221688u);
    ctx->pc = 0x221684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221680u;
    // 0x221684: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x221680u, 0x221688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221688u;
label_221688:
    // 0x221688: 0x0  nop
    ctx->pc = 0x221688u;
    // NOP
    // 0x22168c: 0x0  nop
    ctx->pc = 0x22168cu;
    // NOP
    // 0x221690: 0x4600a303  div.s       $f12, $f20, $f0
    ctx->pc = 0x221690u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[12] = ctx->f[20] / ctx->f[0];
    // 0x221694: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x221694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x221698: 0xc088f78  jal         func_223DE0
    ctx->pc = 0x221698u;
    SET_GPR_U32(ctx, 31, 0x2216A0u);
    ctx->pc = 0x22169Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221698u;
    // 0x22169c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223DE0u, 0x221698u, 0x2216A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2216A0u;
label_2216a0:
    // 0x2216a0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2216A0u;
    {
        const bool branch_taken_0x2216a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2216A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2216A0u;
        // 0x2216a4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2216a0) {
            ctx->pc = 0x2216F8u;
            goto label_2216f8;
        }
    }
    ctx->pc = 0x2216A8u;
label_2216a8:
    // 0x2216a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2216a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2216ac: 0xc088f78  jal         func_223DE0
    ctx->pc = 0x2216ACu;
    SET_GPR_U32(ctx, 31, 0x2216B4u);
    ctx->pc = 0x2216B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2216ACu;
    // 0x2216b0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x223DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223DE0u, 0x2216ACu, 0x2216B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2216B4u;
label_2216b4:
    // 0x2216b4: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x2216b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2216b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2216b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2216bc: 0xc088f78  jal         func_223DE0
    ctx->pc = 0x2216BCu;
    SET_GPR_U32(ctx, 31, 0x2216C4u);
    ctx->pc = 0x2216C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2216BCu;
    // 0x2216c0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x223DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223DE0u, 0x2216BCu, 0x2216C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2216C4u;
label_2216c4:
    // 0x2216c4: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2216c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2216c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2216c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2216cc: 0xc088f78  jal         func_223DE0
    ctx->pc = 0x2216CCu;
    SET_GPR_U32(ctx, 31, 0x2216D4u);
    ctx->pc = 0x2216D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2216CCu;
    // 0x2216d0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x223DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223DE0u, 0x2216CCu, 0x2216D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2216D4u;
label_2216d4:
    // 0x2216d4: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x2216d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2216d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2216d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2216dc: 0xc088f78  jal         func_223DE0
    ctx->pc = 0x2216DCu;
    SET_GPR_U32(ctx, 31, 0x2216E4u);
    ctx->pc = 0x2216E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2216DCu;
    // 0x2216e0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x223DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223DE0u, 0x2216DCu, 0x2216E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2216E4u;
label_2216e4:
    // 0x2216e4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2216e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2216e8: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x2216e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2216ec: 0xc088f78  jal         func_223DE0
    ctx->pc = 0x2216ECu;
    SET_GPR_U32(ctx, 31, 0x2216F4u);
    ctx->pc = 0x2216F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2216ECu;
    // 0x2216f0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223DE0u, 0x2216ECu, 0x2216F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2216F4u;
label_2216f4:
    // 0x2216f4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2216f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2216f8:
    // 0x2216f8: 0x2603c4a8  addiu       $v1, $s0, -0x3B58
    ctx->pc = 0x2216f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294952104));
    // 0x2216fc: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2216fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x221700: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x221700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x221704: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x221704u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x221708: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x221708u;
    {
        const bool branch_taken_0x221708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22170Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221708u;
        // 0x22170c: 0x2a220004  slti        $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x221708) {
            ctx->pc = 0x221730u;
            goto label_221730;
        }
    }
    ctx->pc = 0x221710u;
    // 0x221710: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x221710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x221714: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x221714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x221718: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x221718u;
    {
        const bool branch_taken_0x221718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x221718) {
            ctx->pc = 0x22171Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x221718u;
            // 0x22171c: 0x2a220004  slti        $v0, $s1, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x221730u;
            goto label_221730;
        }
    }
    ctx->pc = 0x221720u;
    // 0x221720: 0x8f829f74  lw          $v0, -0x608C($gp)
    ctx->pc = 0x221720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x221724: 0x8f83b59c  lw          $v1, -0x4A64($gp)
    ctx->pc = 0x221724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x221728: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x221728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22172c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x22172cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_221730:
    // 0x221730: 0x1440ff63  bnez        $v0, . + 4 + (-0x9D << 2)
    ctx->pc = 0x221730u;
    {
        const bool branch_taken_0x221730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x221734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221730u;
        // 0x221734: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221730) {
            ctx->pc = 0x2214C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2214c0;
        }
    }
    ctx->pc = 0x221738u;
    // 0x221738: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x221738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x22173c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22173cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221740: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x221740u;
    {
        const bool branch_taken_0x221740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221740u;
        // 0x221744: 0x2455c4a8  addiu       $s5, $v0, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221740) {
            ctx->pc = 0x2218A4u;
            goto label_2218a4;
        }
    }
    ctx->pc = 0x221748u;
label_221748:
    // 0x221748: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x221748u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x22174c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x22174cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221750: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x221750u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221754: 0x4600ad06  mov.s       $f20, $f21
    ctx->pc = 0x221754u;
    ctx->f[20] = FPU_MOV_S(ctx->f[21]);
    // 0x221758: 0x26340001  addiu       $s4, $s1, 0x1
    ctx->pc = 0x221758u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x22175c: 0x0  nop
    ctx->pc = 0x22175cu;
    // NOP
label_221760:
    // 0x221760: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x221760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x221764: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x221764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221768: 0xc088fde  jal         func_223F78
    ctx->pc = 0x221768u;
    SET_GPR_U32(ctx, 31, 0x221770u);
    ctx->pc = 0x22176Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221768u;
    // 0x22176c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223F78u, 0x221768u, 0x221770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221770u;
label_221770:
    // 0x221770: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x221770u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x221774: 0x0  nop
    ctx->pc = 0x221774u;
    // NOP
    // 0x221778: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x221778u;
    {
        const bool branch_taken_0x221778 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22177Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221778u;
        // 0x22177c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221778) {
            ctx->pc = 0x2217ACu;
            goto label_2217ac;
        }
    }
    ctx->pc = 0x221780u;
    // 0x221780: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x221780u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221784: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x221784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221788: 0xc088fde  jal         func_223F78
    ctx->pc = 0x221788u;
    SET_GPR_U32(ctx, 31, 0x221790u);
    ctx->pc = 0x22178Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221788u;
    // 0x22178c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223F78u, 0x221788u, 0x221790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221790u;
label_221790:
    // 0x221790: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x221790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x221794: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x221794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221798: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x221798u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x22179c: 0x44130800  mfc1        $s3, $f1
    ctx->pc = 0x22179cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
    // 0x2217a0: 0xc088fde  jal         func_223F78
    ctx->pc = 0x2217A0u;
    SET_GPR_U32(ctx, 31, 0x2217A8u);
    ctx->pc = 0x2217A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2217A0u;
    // 0x2217a4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223F78u, 0x2217A0u, 0x2217A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2217A8u;
label_2217a8:
    // 0x2217a8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2217a8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2217ac:
    // 0x2217ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2217acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2217b0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2217b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2217b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2217b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2217b8: 0xc088fde  jal         func_223F78
    ctx->pc = 0x2217B8u;
    SET_GPR_U32(ctx, 31, 0x2217C0u);
    ctx->pc = 0x2217BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2217B8u;
    // 0x2217bc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223F78u, 0x2217B8u, 0x2217C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2217C0u;
label_2217c0:
    // 0x2217c0: 0x2a020021  slti        $v0, $s0, 0x21
    ctx->pc = 0x2217c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x2217c4: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x2217C4u;
    {
        const bool branch_taken_0x2217c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2217C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2217C4u;
        // 0x2217c8: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2217c4) {
            ctx->pc = 0x221760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_221760;
        }
    }
    ctx->pc = 0x2217CCu;
    // 0x2217cc: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x2217ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x2217d0: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x2217D0u;
    SET_GPR_U32(ctx, 31, 0x2217D8u);
    ctx->pc = 0x2217D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2217D0u;
    // 0x2217d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x2217D0u, 0x2217D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2217D8u;
label_2217d8:
    // 0x2217d8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2217d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2217dc: 0x0  nop
    ctx->pc = 0x2217dcu;
    // NOP
    // 0x2217e0: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x2217E0u;
    {
        const bool branch_taken_0x2217e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2217E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2217E0u;
        // 0x2217e4: 0x2404003f  addiu       $a0, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2217e0) {
            ctx->pc = 0x221808u;
            goto label_221808;
        }
    }
    ctx->pc = 0x2217E8u;
    // 0x2217e8: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x2217E8u;
    SET_GPR_U32(ctx, 31, 0x2217F0u);
    ctx->pc = 0x2217ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2217E8u;
    // 0x2217ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x2217E8u, 0x2217F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2217F0u;
label_2217f0:
    // 0x2217f0: 0x24120021  addiu       $s2, $zero, 0x21
    ctx->pc = 0x2217f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2217f4: 0x2404003e  addiu       $a0, $zero, 0x3E
    ctx->pc = 0x2217f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x2217f8: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x2217F8u;
    SET_GPR_U32(ctx, 31, 0x221800u);
    ctx->pc = 0x2217FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2217F8u;
    // 0x2217fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x2217F8u, 0x221800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221800u;
label_221800:
    // 0x221800: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x221800u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x221804: 0x44130800  mfc1        $s3, $f1
    ctx->pc = 0x221804u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
label_221808:
    // 0x221808: 0x44926000  mtc1        $s2, $f12
    ctx->pc = 0x221808u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22180c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x22180cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x221810: 0x2404002b  addiu       $a0, $zero, 0x2B
    ctx->pc = 0x221810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x221814: 0x4493a000  mtc1        $s3, $f20
    ctx->pc = 0x221814u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x221818: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x221818u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x22181c: 0xc088f78  jal         func_223DE0
    ctx->pc = 0x22181Cu;
    SET_GPR_U32(ctx, 31, 0x221824u);
    ctx->pc = 0x221820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22181Cu;
    // 0x221820: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223DE0u, 0x22181Cu, 0x221824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221824u;
label_221824:
    // 0x221824: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x221824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x221828: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x221828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22182c: 0xc088f78  jal         func_223DE0
    ctx->pc = 0x22182Cu;
    SET_GPR_U32(ctx, 31, 0x221834u);
    ctx->pc = 0x221830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22182Cu;
    // 0x221830: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x223DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223DE0u, 0x22182Cu, 0x221834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221834u;
label_221834:
    // 0x221834: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x221834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x221838: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x221838u;
    SET_GPR_U32(ctx, 31, 0x221840u);
    ctx->pc = 0x22183Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221838u;
    // 0x22183c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x221838u, 0x221840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221840u;
label_221840:
    // 0x221840: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x221840u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x221844: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x221844u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x221848: 0x0  nop
    ctx->pc = 0x221848u;
    // NOP
    // 0x22184c: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x22184Cu;
    {
        const bool branch_taken_0x22184c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x221850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22184Cu;
        // 0x221850: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22184c) {
            ctx->pc = 0x22187Cu;
            goto label_22187c;
        }
    }
    ctx->pc = 0x221854u;
    // 0x221854: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x221854u;
    SET_GPR_U32(ctx, 31, 0x22185Cu);
    ctx->pc = 0x221858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221854u;
    // 0x221858: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x221854u, 0x22185Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22185Cu;
label_22185c:
    // 0x22185c: 0x0  nop
    ctx->pc = 0x22185cu;
    // NOP
    // 0x221860: 0x0  nop
    ctx->pc = 0x221860u;
    // NOP
    // 0x221864: 0x4600a303  div.s       $f12, $f20, $f0
    ctx->pc = 0x221864u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[12] = ctx->f[20] / ctx->f[0];
    // 0x221868: 0x2404002d  addiu       $a0, $zero, 0x2D
    ctx->pc = 0x221868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x22186c: 0xc088f78  jal         func_223DE0
    ctx->pc = 0x22186Cu;
    SET_GPR_U32(ctx, 31, 0x221874u);
    ctx->pc = 0x221870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22186Cu;
    // 0x221870: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223DE0u, 0x22186Cu, 0x221874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221874u;
label_221874:
    // 0x221874: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x221874u;
    {
        const bool branch_taken_0x221874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x221874) {
            ctx->pc = 0x221888u;
            goto label_221888;
        }
    }
    ctx->pc = 0x22187Cu;
label_22187c:
    // 0x22187c: 0x2404002d  addiu       $a0, $zero, 0x2D
    ctx->pc = 0x22187cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x221880: 0xc088f78  jal         func_223DE0
    ctx->pc = 0x221880u;
    SET_GPR_U32(ctx, 31, 0x221888u);
    ctx->pc = 0x221884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221880u;
    // 0x221884: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223DE0u, 0x221880u, 0x221888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221888u;
label_221888:
    // 0x221888: 0x0  nop
    ctx->pc = 0x221888u;
    // NOP
    // 0x22188c: 0x0  nop
    ctx->pc = 0x22188cu;
    // NOP
    // 0x221890: 0x4616ab03  div.s       $f12, $f21, $f22
    ctx->pc = 0x221890u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[12] = ctx->f[21] / ctx->f[22];
    // 0x221894: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x221894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221898: 0x2404003b  addiu       $a0, $zero, 0x3B
    ctx->pc = 0x221898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x22189c: 0xc088f78  jal         func_223DE0
    ctx->pc = 0x22189Cu;
    SET_GPR_U32(ctx, 31, 0x2218A4u);
    ctx->pc = 0x2218A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22189Cu;
    // 0x2218a0: 0x280882d  daddu       $s1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223DE0u, 0x22189Cu, 0x2218A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2218A4u;
label_2218a4:
    // 0x2218a4: 0x8ea20048  lw          $v0, 0x48($s5)
    ctx->pc = 0x2218a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 72)));
    // 0x2218a8: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x2218a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x2218ac: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2218acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2218b0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2218B0u;
    {
        const bool branch_taken_0x2218b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2218B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2218B0u;
        // 0x2218b4: 0x2a220004  slti        $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2218b0) {
            ctx->pc = 0x2218D8u;
            goto label_2218d8;
        }
    }
    ctx->pc = 0x2218B8u;
    // 0x2218b8: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x2218b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x2218bc: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2218bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2218c0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2218C0u;
    {
        const bool branch_taken_0x2218c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2218c0) {
            ctx->pc = 0x2218C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2218C0u;
            // 0x2218c4: 0x2a220004  slti        $v0, $s1, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2218D8u;
            goto label_2218d8;
        }
    }
    ctx->pc = 0x2218C8u;
    // 0x2218c8: 0x8f829f74  lw          $v0, -0x608C($gp)
    ctx->pc = 0x2218c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x2218cc: 0x8f83b59c  lw          $v1, -0x4A64($gp)
    ctx->pc = 0x2218ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x2218d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2218d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2218d4: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2218d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2218d8:
    // 0x2218d8: 0x1440ff9b  bnez        $v0, . + 4 + (-0x65 << 2)
    ctx->pc = 0x2218D8u;
    {
        const bool branch_taken_0x2218d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2218DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2218D8u;
        // 0x2218dc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2218d8) {
            ctx->pc = 0x221748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_221748;
        }
    }
    ctx->pc = 0x2218E0u;
    // 0x2218e0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2218e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2218e4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2218e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2218e8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2218e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2218ec: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2218ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2218f0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2218f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2218f4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2218f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2218f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2218f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2218fc: 0xc7b60080  lwc1        $f22, 0x80($sp)
    ctx->pc = 0x2218fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x221900: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x221900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x221904: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x221904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x221908: 0x3e00008  jr          $ra
    ctx->pc = 0x221908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22190Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221908u;
        // 0x22190c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221910u;
}
