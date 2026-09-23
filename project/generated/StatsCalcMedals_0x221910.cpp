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

// Function: StatsCalcMedals
// Address: 0x221910 - 0x223ddc
void StatsCalcMedals_0x221910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StatsCalcMedals_0x221910");
#endif

    switch (ctx->pc) {
        case 0x2219b0u: goto label_2219b0;
        case 0x2219b8u: goto label_2219b8;
        case 0x2219c4u: goto label_2219c4;
        case 0x2219e4u: goto label_2219e4;
        case 0x221a34u: goto label_221a34;
        case 0x221a50u: goto label_221a50;
        case 0x221a60u: goto label_221a60;
        case 0x221a78u: goto label_221a78;
        case 0x221a84u: goto label_221a84;
        case 0x221a94u: goto label_221a94;
        case 0x221aacu: goto label_221aac;
        case 0x221ac0u: goto label_221ac0;
        case 0x221ad0u: goto label_221ad0;
        case 0x221adcu: goto label_221adc;
        case 0x221af4u: goto label_221af4;
        case 0x221b00u: goto label_221b00;
        case 0x221b18u: goto label_221b18;
        case 0x221b24u: goto label_221b24;
        case 0x221b40u: goto label_221b40;
        case 0x221b90u: goto label_221b90;
        case 0x221bb8u: goto label_221bb8;
        case 0x221bccu: goto label_221bcc;
        case 0x221c78u: goto label_221c78;
        case 0x221cfcu: goto label_221cfc;
        case 0x221d48u: goto label_221d48;
        case 0x221d58u: goto label_221d58;
        case 0x221db8u: goto label_221db8;
        case 0x221dc8u: goto label_221dc8;
        case 0x221dd8u: goto label_221dd8;
        case 0x221de8u: goto label_221de8;
        case 0x221e40u: goto label_221e40;
        case 0x221e50u: goto label_221e50;
        case 0x221ec8u: goto label_221ec8;
        case 0x221edcu: goto label_221edc;
        case 0x221f40u: goto label_221f40;
        case 0x221f54u: goto label_221f54;
        case 0x221fa0u: goto label_221fa0;
        case 0x221fa8u: goto label_221fa8;
        case 0x222008u: goto label_222008;
        case 0x222020u: goto label_222020;
        case 0x222098u: goto label_222098;
        case 0x222120u: goto label_222120;
        case 0x2221a8u: goto label_2221a8;
        case 0x2221f4u: goto label_2221f4;
        case 0x222208u: goto label_222208;
        case 0x222228u: goto label_222228;
        case 0x22225cu: goto label_22225c;
        case 0x222270u: goto label_222270;
        case 0x222290u: goto label_222290;
        case 0x2222c4u: goto label_2222c4;
        case 0x2222d8u: goto label_2222d8;
        case 0x2222f8u: goto label_2222f8;
        case 0x22232cu: goto label_22232c;
        case 0x222340u: goto label_222340;
        case 0x222360u: goto label_222360;
        case 0x2223c0u: goto label_2223c0;
        case 0x2223d4u: goto label_2223d4;
        case 0x222438u: goto label_222438;
        case 0x22244cu: goto label_22244c;
        case 0x2224b0u: goto label_2224b0;
        case 0x2224c4u: goto label_2224c4;
        case 0x222528u: goto label_222528;
        case 0x22253cu: goto label_22253c;
        case 0x2225a4u: goto label_2225a4;
        case 0x2225d0u: goto label_2225d0;
        case 0x2225e8u: goto label_2225e8;
        case 0x222674u: goto label_222674;
        case 0x2226a0u: goto label_2226a0;
        case 0x2226b8u: goto label_2226b8;
        case 0x2226d0u: goto label_2226d0;
        case 0x2226e0u: goto label_2226e0;
        case 0x222774u: goto label_222774;
        case 0x222788u: goto label_222788;
        case 0x2227d0u: goto label_2227d0;
        case 0x2227f4u: goto label_2227f4;
        case 0x222858u: goto label_222858;
        case 0x22286cu: goto label_22286c;
        case 0x2228b8u: goto label_2228b8;
        case 0x2228dcu: goto label_2228dc;
        case 0x222948u: goto label_222948;
        case 0x222990u: goto label_222990;
        case 0x222a48u: goto label_222a48;
        case 0x222a60u: goto label_222a60;
        case 0x222aa4u: goto label_222aa4;
        case 0x222b2cu: goto label_222b2c;
        case 0x222b38u: goto label_222b38;
        case 0x222c20u: goto label_222c20;
        case 0x222cb0u: goto label_222cb0;
        case 0x222cf8u: goto label_222cf8;
        case 0x222d48u: goto label_222d48;
        case 0x222d54u: goto label_222d54;
        case 0x222d98u: goto label_222d98;
        case 0x222df0u: goto label_222df0;
        case 0x222e1cu: goto label_222e1c;
        case 0x222e60u: goto label_222e60;
        case 0x222eb8u: goto label_222eb8;
        case 0x222f38u: goto label_222f38;
        case 0x222fd0u: goto label_222fd0;
        case 0x223058u: goto label_223058;
        case 0x2230b4u: goto label_2230b4;
        case 0x2230dcu: goto label_2230dc;
        case 0x2230f0u: goto label_2230f0;
        case 0x223154u: goto label_223154;
        case 0x223168u: goto label_223168;
        case 0x2231e8u: goto label_2231e8;
        case 0x223298u: goto label_223298;
        case 0x2232f0u: goto label_2232f0;
        case 0x223334u: goto label_223334;
        case 0x223380u: goto label_223380;
        case 0x223388u: goto label_223388;
        case 0x2233f0u: goto label_2233f0;
        case 0x2233f8u: goto label_2233f8;
        case 0x223460u: goto label_223460;
        case 0x223470u: goto label_223470;
        case 0x223568u: goto label_223568;
        case 0x223574u: goto label_223574;
        case 0x2235b0u: goto label_2235b0;
        case 0x2236a0u: goto label_2236a0;
        case 0x223714u: goto label_223714;
        case 0x223784u: goto label_223784;
        case 0x2237b0u: goto label_2237b0;
        case 0x2237f0u: goto label_2237f0;
        case 0x223804u: goto label_223804;
        case 0x223824u: goto label_223824;
        case 0x223834u: goto label_223834;
        case 0x223878u: goto label_223878;
        case 0x223890u: goto label_223890;
        case 0x223910u: goto label_223910;
        case 0x223924u: goto label_223924;
        case 0x223980u: goto label_223980;
        case 0x223998u: goto label_223998;
        case 0x2239d8u: goto label_2239d8;
        case 0x223b10u: goto label_223b10;
        case 0x223c68u: goto label_223c68;
        case 0x223c70u: goto label_223c70;
        case 0x223cc0u: goto label_223cc0;
        case 0x223cf8u: goto label_223cf8;
        default: break;
    }

    ctx->pc = 0x221910u;

    // 0x221910: 0xc7819da8  lwc1        $f1, -0x6258($gp)
    ctx->pc = 0x221910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x221914: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x221914u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x221918: 0x27bdf410  addiu       $sp, $sp, -0xBF0
    ctx->pc = 0x221918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294964240));
    // 0x22191c: 0xc780808c  lwc1        $f0, -0x7F74($gp)
    ctx->pc = 0x22191cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x221920: 0xe7b50bc8  swc1        $f21, 0xBC8($sp)
    ctx->pc = 0x221920u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 3016), bits); }
    // 0x221924: 0xe7b70bd8  swc1        $f23, 0xBD8($sp)
    ctx->pc = 0x221924u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 3032), bits); }
    // 0x221928: 0x46000d42  mul.s       $f21, $f1, $f0
    ctx->pc = 0x221928u;
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x22192c: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x22192cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x221930: 0xffbf0bb0  sd          $ra, 0xBB0($sp)
    ctx->pc = 0x221930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2992), GPR_U64(ctx, 31));
    // 0x221934: 0x4617a832  c.eq.s      $f21, $f23
    ctx->pc = 0x221934u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x221938: 0xffbe0ba0  sd          $fp, 0xBA0($sp)
    ctx->pc = 0x221938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2976), GPR_U64(ctx, 30));
    // 0x22193c: 0xffb70b90  sd          $s7, 0xB90($sp)
    ctx->pc = 0x22193cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2960), GPR_U64(ctx, 23));
    // 0x221940: 0xffb60b80  sd          $s6, 0xB80($sp)
    ctx->pc = 0x221940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2944), GPR_U64(ctx, 22));
    // 0x221944: 0xffb50b70  sd          $s5, 0xB70($sp)
    ctx->pc = 0x221944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2928), GPR_U64(ctx, 21));
    // 0x221948: 0xffb40b60  sd          $s4, 0xB60($sp)
    ctx->pc = 0x221948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2912), GPR_U64(ctx, 20));
    // 0x22194c: 0xffb30b50  sd          $s3, 0xB50($sp)
    ctx->pc = 0x22194cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2896), GPR_U64(ctx, 19));
    // 0x221950: 0xffb20b40  sd          $s2, 0xB40($sp)
    ctx->pc = 0x221950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2880), GPR_U64(ctx, 18));
    // 0x221954: 0xffb10b30  sd          $s1, 0xB30($sp)
    ctx->pc = 0x221954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2864), GPR_U64(ctx, 17));
    // 0x221958: 0xffb00b20  sd          $s0, 0xB20($sp)
    ctx->pc = 0x221958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2848), GPR_U64(ctx, 16));
    // 0x22195c: 0xe7b90be8  swc1        $f25, 0xBE8($sp)
    ctx->pc = 0x22195cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 3048), bits); }
    // 0x221960: 0xe7b80be0  swc1        $f24, 0xBE0($sp)
    ctx->pc = 0x221960u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 3040), bits); }
    // 0x221964: 0xe7b60bd0  swc1        $f22, 0xBD0($sp)
    ctx->pc = 0x221964u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 3024), bits); }
    // 0x221968: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x221968u;
    {
        const bool branch_taken_0x221968 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22196Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221968u;
        // 0x22196c: 0xe7b40bc0  swc1        $f20, 0xBC0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 3008), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x221968) {
            ctx->pc = 0x221974u;
            goto label_221974;
        }
    }
    ctx->pc = 0x221970u;
    // 0x221970: 0xc7958090  lwc1        $f21, -0x7F70($gp)
    ctx->pc = 0x221970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_221974:
    // 0x221974: 0x3c170033  lui         $s7, 0x33
    ctx->pc = 0x221974u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)51 << 16));
    // 0x221978: 0x26e3c4a8  addiu       $v1, $s7, -0x3B58
    ctx->pc = 0x221978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
    // 0x22197c: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x22197cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x32C4F0u));
    // 0x221980: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x221980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x221984: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x221984u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x221988: 0x14400903  bnez        $v0, . + 4 + (0x903 << 2)
    ctx->pc = 0x221988u;
    {
        const bool branch_taken_0x221988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22198Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221988u;
        // 0x22198c: 0xdfbf0bb0  ld          $ra, 0xBB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 2992)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221988) {
            ctx->pc = 0x223D98u;
            goto label_223d98;
        }
    }
    ctx->pc = 0x221990u;
    // 0x221990: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x221990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x221994: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x221994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x221998: 0x54400900  bnel        $v0, $zero, . + 4 + (0x900 << 2)
    ctx->pc = 0x221998u;
    {
        const bool branch_taken_0x221998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x221998) {
            ctx->pc = 0x22199Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x221998u;
            // 0x22199c: 0xdfbe0ba0  ld          $fp, 0xBA0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 2976)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x223D9Cu;
            goto label_223d9c;
        }
    }
    ctx->pc = 0x2219A0u;
    // 0x2219a0: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x2219a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2219a4: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x2219A4u;
    {
        const bool branch_taken_0x2219a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2219A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2219A4u;
        // 0x2219a8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2219a4) {
            ctx->pc = 0x221B40u;
            goto label_221b40;
        }
    }
    ctx->pc = 0x2219ACu;
    // 0x2219ac: 0x0  nop
    ctx->pc = 0x2219acu;
    // NOP
label_2219b0:
    // 0x2219b0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2219B0u;
    {
        const bool branch_taken_0x2219b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2219B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2219B0u;
        // 0x2219b4: 0x26130001  addiu       $s3, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2219b0) {
            ctx->pc = 0x2219E4u;
            goto label_2219e4;
        }
    }
    ctx->pc = 0x2219B8u;
label_2219b8:
    // 0x2219b8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2219b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2219bc: 0xc089008  jal         func_224020
    ctx->pc = 0x2219BCu;
    SET_GPR_U32(ctx, 31, 0x2219C4u);
    ctx->pc = 0x2219C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2219BCu;
    // 0x2219c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224020u, 0x2219BCu, 0x2219C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2219C4u;
label_2219c4:
    // 0x2219c4: 0x0  nop
    ctx->pc = 0x2219c4u;
    // NOP
    // 0x2219c8: 0x0  nop
    ctx->pc = 0x2219c8u;
    // NOP
    // 0x2219cc: 0x46150303  div.s       $f12, $f0, $f21
    ctx->pc = 0x2219ccu;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[21];
    // 0x2219d0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2219d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2219d4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2219d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2219d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2219d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2219dc: 0xc089094  jal         func_224250
    ctx->pc = 0x2219DCu;
    SET_GPR_U32(ctx, 31, 0x2219E4u);
    ctx->pc = 0x2219E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2219DCu;
    // 0x2219e0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224250u, 0x2219DCu, 0x2219E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2219E4u;
label_2219e4:
    // 0x2219e4: 0x26e3c4a8  addiu       $v1, $s7, -0x3B58
    ctx->pc = 0x2219e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
    // 0x2219e8: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2219e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2219ec: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x2219ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x2219f0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2219f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2219f4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2219F4u;
    {
        const bool branch_taken_0x2219f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2219F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2219F4u;
        // 0x2219f8: 0x2a220004  slti        $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2219f4) {
            ctx->pc = 0x221A1Cu;
            goto label_221a1c;
        }
    }
    ctx->pc = 0x2219FCu;
    // 0x2219fc: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x2219fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x221a00: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x221a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x221a04: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x221A04u;
    {
        const bool branch_taken_0x221a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x221a04) {
            ctx->pc = 0x221A08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x221A04u;
            // 0x221a08: 0x2a220004  slti        $v0, $s1, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x221A1Cu;
            goto label_221a1c;
        }
    }
    ctx->pc = 0x221A0Cu;
    // 0x221a0c: 0x8f829f74  lw          $v0, -0x608C($gp)
    ctx->pc = 0x221a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x221a10: 0x8f83b59c  lw          $v1, -0x4A64($gp)
    ctx->pc = 0x221a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x221a14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x221a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x221a18: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x221a18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_221a1c:
    // 0x221a1c: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x221A1Cu;
    {
        const bool branch_taken_0x221a1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x221A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221A1Cu;
        // 0x221a20: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221a1c) {
            ctx->pc = 0x2219B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2219b8;
        }
    }
    ctx->pc = 0x221A24u;
    // 0x221a24: 0x2404002f  addiu       $a0, $zero, 0x2F
    ctx->pc = 0x221a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x221a28: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x221a28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x221a2c: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x221A2Cu;
    SET_GPR_U32(ctx, 31, 0x221A34u);
    ctx->pc = 0x221A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221A2Cu;
    // 0x221a30: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x221A2Cu, 0x221A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221A34u;
label_221a34:
    // 0x221a34: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x221a34u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x221a38: 0x0  nop
    ctx->pc = 0x221a38u;
    // NOP
    // 0x221a3c: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
    ctx->pc = 0x221A3Cu;
    {
        const bool branch_taken_0x221a3c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x221A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221A3Cu;
        // 0x221a40: 0x24040031  addiu       $a0, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221a3c) {
            ctx->pc = 0x221AB4u;
            goto label_221ab4;
        }
    }
    ctx->pc = 0x221A44u;
    // 0x221a44: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x221a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x221a48: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x221A48u;
    SET_GPR_U32(ctx, 31, 0x221A50u);
    ctx->pc = 0x221A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221A48u;
    // 0x221a4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x221A48u, 0x221A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221A50u;
label_221a50:
    // 0x221a50: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x221a50u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x221a54: 0x2404002f  addiu       $a0, $zero, 0x2F
    ctx->pc = 0x221a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x221a58: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x221A58u;
    SET_GPR_U32(ctx, 31, 0x221A60u);
    ctx->pc = 0x221A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221A58u;
    // 0x221a5c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x221A58u, 0x221A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221A60u;
label_221a60:
    // 0x221a60: 0x0  nop
    ctx->pc = 0x221a60u;
    // NOP
    // 0x221a64: 0x0  nop
    ctx->pc = 0x221a64u;
    // NOP
    // 0x221a68: 0x4600a303  div.s       $f12, $f20, $f0
    ctx->pc = 0x221a68u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[12] = ctx->f[20] / ctx->f[0];
    // 0x221a6c: 0x24040031  addiu       $a0, $zero, 0x31
    ctx->pc = 0x221a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x221a70: 0xc088f78  jal         func_223DE0
    ctx->pc = 0x221A70u;
    SET_GPR_U32(ctx, 31, 0x221A78u);
    ctx->pc = 0x221A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221A70u;
    // 0x221a74: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223DE0u, 0x221A70u, 0x221A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221A78u;
label_221a78:
    // 0x221a78: 0x24040032  addiu       $a0, $zero, 0x32
    ctx->pc = 0x221a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x221a7c: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x221A7Cu;
    SET_GPR_U32(ctx, 31, 0x221A84u);
    ctx->pc = 0x221A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221A7Cu;
    // 0x221a80: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x221A7Cu, 0x221A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221A84u;
label_221a84:
    // 0x221a84: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x221a84u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x221a88: 0x2404002f  addiu       $a0, $zero, 0x2F
    ctx->pc = 0x221a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x221a8c: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x221A8Cu;
    SET_GPR_U32(ctx, 31, 0x221A94u);
    ctx->pc = 0x221A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221A8Cu;
    // 0x221a90: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x221A8Cu, 0x221A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221A94u;
label_221a94:
    // 0x221a94: 0x0  nop
    ctx->pc = 0x221a94u;
    // NOP
    // 0x221a98: 0x0  nop
    ctx->pc = 0x221a98u;
    // NOP
    // 0x221a9c: 0x4600a303  div.s       $f12, $f20, $f0
    ctx->pc = 0x221a9cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[12] = ctx->f[20] / ctx->f[0];
    // 0x221aa0: 0x24040033  addiu       $a0, $zero, 0x33
    ctx->pc = 0x221aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x221aa4: 0xc088f78  jal         func_223DE0
    ctx->pc = 0x221AA4u;
    SET_GPR_U32(ctx, 31, 0x221AACu);
    ctx->pc = 0x221AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221AA4u;
    // 0x221aa8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223DE0u, 0x221AA4u, 0x221AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221AACu;
label_221aac:
    // 0x221aac: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x221AACu;
    {
        const bool branch_taken_0x221aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221AACu;
        // 0x221ab0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221aac) {
            ctx->pc = 0x221AD4u;
            goto label_221ad4;
        }
    }
    ctx->pc = 0x221AB4u;
label_221ab4:
    // 0x221ab4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x221ab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221ab8: 0xc088f78  jal         func_223DE0
    ctx->pc = 0x221AB8u;
    SET_GPR_U32(ctx, 31, 0x221AC0u);
    ctx->pc = 0x221ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221AB8u;
    // 0x221abc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x223DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223DE0u, 0x221AB8u, 0x221AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221AC0u;
label_221ac0:
    // 0x221ac0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x221ac0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x221ac4: 0x24040033  addiu       $a0, $zero, 0x33
    ctx->pc = 0x221ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x221ac8: 0xc088f78  jal         func_223DE0
    ctx->pc = 0x221AC8u;
    SET_GPR_U32(ctx, 31, 0x221AD0u);
    ctx->pc = 0x221ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221AC8u;
    // 0x221acc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223DE0u, 0x221AC8u, 0x221AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221AD0u;
label_221ad0:
    // 0x221ad0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x221ad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_221ad4:
    // 0x221ad4: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x221AD4u;
    SET_GPR_U32(ctx, 31, 0x221ADCu);
    ctx->pc = 0x221AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221AD4u;
    // 0x221ad8: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x221AD4u, 0x221ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221ADCu;
label_221adc:
    // 0x221adc: 0x0  nop
    ctx->pc = 0x221adcu;
    // NOP
    // 0x221ae0: 0x0  nop
    ctx->pc = 0x221ae0u;
    // NOP
    // 0x221ae4: 0x46150303  div.s       $f12, $f0, $f21
    ctx->pc = 0x221ae4u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[21];
    // 0x221ae8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x221ae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221aec: 0xc088f78  jal         func_223DE0
    ctx->pc = 0x221AECu;
    SET_GPR_U32(ctx, 31, 0x221AF4u);
    ctx->pc = 0x221AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221AECu;
    // 0x221af0: 0x24040035  addiu       $a0, $zero, 0x35 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223DE0u, 0x221AECu, 0x221AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221AF4u;
label_221af4:
    // 0x221af4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x221af4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221af8: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x221AF8u;
    SET_GPR_U32(ctx, 31, 0x221B00u);
    ctx->pc = 0x221AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221AF8u;
    // 0x221afc: 0x24040036  addiu       $a0, $zero, 0x36 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x221AF8u, 0x221B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221B00u;
label_221b00:
    // 0x221b00: 0x0  nop
    ctx->pc = 0x221b00u;
    // NOP
    // 0x221b04: 0x0  nop
    ctx->pc = 0x221b04u;
    // NOP
    // 0x221b08: 0x46150303  div.s       $f12, $f0, $f21
    ctx->pc = 0x221b08u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[21];
    // 0x221b0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x221b0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221b10: 0xc088f78  jal         func_223DE0
    ctx->pc = 0x221B10u;
    SET_GPR_U32(ctx, 31, 0x221B18u);
    ctx->pc = 0x221B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221B10u;
    // 0x221b14: 0x24040037  addiu       $a0, $zero, 0x37 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223DE0u, 0x221B10u, 0x221B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221B18u;
label_221b18:
    // 0x221b18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x221b18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221b1c: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x221B1Cu;
    SET_GPR_U32(ctx, 31, 0x221B24u);
    ctx->pc = 0x221B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221B1Cu;
    // 0x221b20: 0x24040038  addiu       $a0, $zero, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x221B1Cu, 0x221B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221B24u;
label_221b24:
    // 0x221b24: 0x0  nop
    ctx->pc = 0x221b24u;
    // NOP
    // 0x221b28: 0x0  nop
    ctx->pc = 0x221b28u;
    // NOP
    // 0x221b2c: 0x46150303  div.s       $f12, $f0, $f21
    ctx->pc = 0x221b2cu;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[21];
    // 0x221b30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x221b30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221b34: 0x24040039  addiu       $a0, $zero, 0x39
    ctx->pc = 0x221b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x221b38: 0xc088f78  jal         func_223DE0
    ctx->pc = 0x221B38u;
    SET_GPR_U32(ctx, 31, 0x221B40u);
    ctx->pc = 0x221B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221B38u;
    // 0x221b3c: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223DE0u, 0x221B38u, 0x221B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221B40u;
label_221b40:
    // 0x221b40: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x221b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x221b44: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x221b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x221b48: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x221b48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x221b4c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x221B4Cu;
    {
        const bool branch_taken_0x221b4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x221B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221B4Cu;
        // 0x221b50: 0x2a020004  slti        $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x221b4c) {
            ctx->pc = 0x221B74u;
            goto label_221b74;
        }
    }
    ctx->pc = 0x221B54u;
    // 0x221b54: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x221b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x221b58: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x221b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x221b5c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x221B5Cu;
    {
        const bool branch_taken_0x221b5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x221b5c) {
            ctx->pc = 0x221B60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x221B5Cu;
            // 0x221b60: 0x2a020004  slti        $v0, $s0, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x221B74u;
            goto label_221b74;
        }
    }
    ctx->pc = 0x221B64u;
    // 0x221b64: 0x8f869f74  lw          $a2, -0x608C($gp)
    ctx->pc = 0x221b64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x221b68: 0x8f82b59c  lw          $v0, -0x4A64($gp)
    ctx->pc = 0x221b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x221b6c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x221b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x221b70: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x221b70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_221b74:
    // 0x221b74: 0x1440ff8e  bnez        $v0, . + 4 + (-0x72 << 2)
    ctx->pc = 0x221B74u;
    {
        const bool branch_taken_0x221b74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x221B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221B74u;
        // 0x221b78: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221b74) {
            ctx->pc = 0x2219B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2219b0;
        }
    }
    ctx->pc = 0x221B7Cu;
    // 0x221b7c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x221b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x221b80: 0x2456c4a8  addiu       $s6, $v0, -0x3B58
    ctx->pc = 0x221b80u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952104));
    // 0x221b84: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x221B84u;
    {
        const bool branch_taken_0x221b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221B84u;
        // 0x221b88: 0x3c1e0037  lui         $fp, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221b84) {
            ctx->pc = 0x221C20u;
            goto label_221c20;
        }
    }
    ctx->pc = 0x221B8Cu;
    // 0x221b8c: 0x0  nop
    ctx->pc = 0x221b8cu;
    // NOP
label_221b90:
    // 0x221b90: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x221b90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x221b94: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x221b94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x221b98: 0x3b41021  addu        $v0, $sp, $s4
    ctx->pc = 0x221b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 20)));
    // 0x221b9c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x221b9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x221ba0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x221ba0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x221ba4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x221ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x221ba8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x221ba8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221bac: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x221bacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221bb0: 0x26350001  addiu       $s5, $s1, 0x1
    ctx->pc = 0x221bb0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x221bb4: 0x27d090f8  addiu       $s0, $fp, -0x6F08
    ctx->pc = 0x221bb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294938872));
label_221bb8:
    // 0x221bb8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x221bb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221bbc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x221bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x221bc0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x221bc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221bc4: 0xc088fde  jal         func_223F78
    ctx->pc = 0x221BC4u;
    SET_GPR_U32(ctx, 31, 0x221BCCu);
    ctx->pc = 0x221BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221BC4u;
    // 0x221bc8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223F78u, 0x221BC4u, 0x221BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221BCCu;
label_221bcc:
    // 0x221bcc: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x221bccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x221bd0: 0x0  nop
    ctx->pc = 0x221bd0u;
    // NOP
    // 0x221bd4: 0x0  nop
    ctx->pc = 0x221bd4u;
    // NOP
    // 0x221bd8: 0x46150003  div.s       $f0, $f0, $f21
    ctx->pc = 0x221bd8u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[21];
    // 0x221bdc: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x221bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x221be0: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x221be0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x221be4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x221be4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x221be8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x221be8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x221bec: 0x2a630021  slti        $v1, $s3, 0x21
    ctx->pc = 0x221becu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x221bf0: 0x0  nop
    ctx->pc = 0x221bf0u;
    // NOP
    // 0x221bf4: 0x0  nop
    ctx->pc = 0x221bf4u;
    // NOP
    // 0x221bf8: 0x46160843  div.s       $f1, $f1, $f22
    ctx->pc = 0x221bf8u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[22];
    // 0x221bfc: 0x4601a041  sub.s       $f1, $f20, $f1
    ctx->pc = 0x221bfcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x221c00: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x221c00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x221c04: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x221c04u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x221c08: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x221C08u;
    {
        const bool branch_taken_0x221c08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x221C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221C08u;
        // 0x221c0c: 0xe6420000  swc1        $f2, 0x0($s2) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x221c08) {
            ctx->pc = 0x221BB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_221bb8;
        }
    }
    ctx->pc = 0x221C10u;
    // 0x221c10: 0x3b41021  addu        $v0, $sp, $s4
    ctx->pc = 0x221c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 20)));
    // 0x221c14: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x221c14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221c18: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x221c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x221c1c: 0x4600bdc0  add.s       $f23, $f23, $f0
    ctx->pc = 0x221c1cu;
    ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
label_221c20:
    // 0x221c20: 0x8ec20048  lw          $v0, 0x48($s6)
    ctx->pc = 0x221c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 72)));
    // 0x221c24: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x221c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x221c28: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x221c28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x221c2c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x221C2Cu;
    {
        const bool branch_taken_0x221c2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x221C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221C2Cu;
        // 0x221c30: 0x2a220004  slti        $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x221c2c) {
            ctx->pc = 0x221C54u;
            goto label_221c54;
        }
    }
    ctx->pc = 0x221C34u;
    // 0x221c34: 0x8ec20050  lw          $v0, 0x50($s6)
    ctx->pc = 0x221c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 80)));
    // 0x221c38: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x221c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x221c3c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x221C3Cu;
    {
        const bool branch_taken_0x221c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x221c3c) {
            ctx->pc = 0x221C40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x221C3Cu;
            // 0x221c40: 0x2a220004  slti        $v0, $s1, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x221C54u;
            goto label_221c54;
        }
    }
    ctx->pc = 0x221C44u;
    // 0x221c44: 0x8f869f74  lw          $a2, -0x608C($gp)
    ctx->pc = 0x221c44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x221c48: 0x8f82b59c  lw          $v0, -0x4A64($gp)
    ctx->pc = 0x221c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x221c4c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x221c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x221c50: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x221c50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_221c54:
    // 0x221c54: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x221C54u;
    {
        const bool branch_taken_0x221c54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x221C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221C54u;
        // 0x221c58: 0x11a080  sll         $s4, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221c54) {
            ctx->pc = 0x221B90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_221b90;
        }
    }
    ctx->pc = 0x221C5Cu;
    // 0x221c5c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x221c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x221c60: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x221c60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x221c64: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x221c64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x221c68: 0x2452c4a8  addiu       $s2, $v0, -0x3B58
    ctx->pc = 0x221c68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952104));
    // 0x221c6c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x221c6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221c70: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x221C70u;
    {
        const bool branch_taken_0x221c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221C70u;
        // 0x221c74: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221c70) {
            ctx->pc = 0x221D00u;
            goto label_221d00;
        }
    }
    ctx->pc = 0x221C78u;
label_221c78:
    // 0x221c78: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x221c78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x221c7c: 0x460cb832  c.eq.s      $f23, $f12
    ctx->pc = 0x221c7cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[23], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x221c80: 0x0  nop
    ctx->pc = 0x221c80u;
    // NOP
    // 0x221c84: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x221C84u;
    {
        const bool branch_taken_0x221c84 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x221C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221C84u;
        // 0x221c88: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221c84) {
            ctx->pc = 0x221CF0u;
            goto label_221cf0;
        }
    }
    ctx->pc = 0x221C8Cu;
    // 0x221c8c: 0x26e3c4a8  addiu       $v1, $s7, -0x3B58
    ctx->pc = 0x221c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
    // 0x221c90: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x221c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x221c94: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x221c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x221c98: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x221c98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x221c9c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x221C9Cu;
    {
        const bool branch_taken_0x221c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x221CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221C9Cu;
        // 0x221ca0: 0xc60c0000  lwc1        $f12, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x221c9c) {
            ctx->pc = 0x221CDCu;
            goto label_221cdc;
        }
    }
    ctx->pc = 0x221CA4u;
    // 0x221ca4: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x221ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x221ca8: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x221ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x221cac: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x221CACu;
    {
        const bool branch_taken_0x221cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x221cac) {
            ctx->pc = 0x221CB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x221CACu;
            // 0x221cb0: 0x4614b802  mul.s       $f0, $f23, $f20 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x221CE0u;
            goto label_221ce0;
        }
    }
    ctx->pc = 0x221CB4u;
    // 0x221cb4: 0x8f829f74  lw          $v0, -0x608C($gp)
    ctx->pc = 0x221cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x221cb8: 0x8f83b59c  lw          $v1, -0x4A64($gp)
    ctx->pc = 0x221cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x221cbc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x221cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x221cc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x221cc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x221cc4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x221cc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x221cc8: 0x0  nop
    ctx->pc = 0x221cc8u;
    // NOP
    // 0x221ccc: 0x0  nop
    ctx->pc = 0x221cccu;
    // NOP
    // 0x221cd0: 0x4600b803  div.s       $f0, $f23, $f0
    ctx->pc = 0x221cd0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[23] * 0.0f); } else ctx->f[0] = ctx->f[23] / ctx->f[0];
    // 0x221cd4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x221CD4u;
    {
        const bool branch_taken_0x221cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x221cd4) {
            ctx->pc = 0x221CE0u;
            goto label_221ce0;
        }
    }
    ctx->pc = 0x221CDCu;
label_221cdc:
    // 0x221cdc: 0x4614b802  mul.s       $f0, $f23, $f20
    ctx->pc = 0x221cdcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[20]);
label_221ce0:
    // 0x221ce0: 0x0  nop
    ctx->pc = 0x221ce0u;
    // NOP
    // 0x221ce4: 0x0  nop
    ctx->pc = 0x221ce4u;
    // NOP
    // 0x221ce8: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x221ce8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[0];
    // 0x221cec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x221cecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_221cf0:
    // 0x221cf0: 0x2404002a  addiu       $a0, $zero, 0x2A
    ctx->pc = 0x221cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x221cf4: 0xc088f78  jal         func_223DE0
    ctx->pc = 0x221CF4u;
    SET_GPR_U32(ctx, 31, 0x221CFCu);
    ctx->pc = 0x221CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221CF4u;
    // 0x221cf8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223DE0u, 0x221CF4u, 0x221CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221CFCu;
label_221cfc:
    // 0x221cfc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x221cfcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_221d00:
    // 0x221d00: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x221d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x221d04: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x221d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x221d08: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x221d08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x221d0c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x221D0Cu;
    {
        const bool branch_taken_0x221d0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x221D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221D0Cu;
        // 0x221d10: 0x2a220004  slti        $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x221d0c) {
            ctx->pc = 0x221D34u;
            goto label_221d34;
        }
    }
    ctx->pc = 0x221D14u;
    // 0x221d14: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x221d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x221d18: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x221d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x221d1c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x221D1Cu;
    {
        const bool branch_taken_0x221d1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x221d1c) {
            ctx->pc = 0x221D20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x221D1Cu;
            // 0x221d20: 0x2a220004  slti        $v0, $s1, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x221D34u;
            goto label_221d34;
        }
    }
    ctx->pc = 0x221D24u;
    // 0x221d24: 0x8f869f74  lw          $a2, -0x608C($gp)
    ctx->pc = 0x221d24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x221d28: 0x8f82b59c  lw          $v0, -0x4A64($gp)
    ctx->pc = 0x221d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x221d2c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x221d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x221d30: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x221d30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_221d34:
    // 0x221d34: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x221D34u;
    {
        const bool branch_taken_0x221d34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x221D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221D34u;
        // 0x221d38: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221d34) {
            ctx->pc = 0x221C78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_221c78;
        }
    }
    ctx->pc = 0x221D3Cu;
    // 0x221d3c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x221d3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221d40: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x221D40u;
    {
        const bool branch_taken_0x221d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221D40u;
        // 0x221d44: 0x2451c4a8  addiu       $s1, $v0, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221d40) {
            ctx->pc = 0x221D58u;
            goto label_221d58;
        }
    }
    ctx->pc = 0x221D48u;
label_221d48:
    // 0x221d48: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x221d48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x221d4c: 0x2404003a  addiu       $a0, $zero, 0x3A
    ctx->pc = 0x221d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x221d50: 0xc088f78  jal         func_223DE0
    ctx->pc = 0x221D50u;
    SET_GPR_U32(ctx, 31, 0x221D58u);
    ctx->pc = 0x221D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221D50u;
    // 0x221d54: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223DE0u, 0x221D50u, 0x221D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221D58u;
label_221d58:
    // 0x221d58: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x221d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x221d5c: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x221d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x221d60: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x221d60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x221d64: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x221D64u;
    {
        const bool branch_taken_0x221d64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x221D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221D64u;
        // 0x221d68: 0x2a020004  slti        $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x221d64) {
            ctx->pc = 0x221D9Cu;
            goto label_221d9c;
        }
    }
    ctx->pc = 0x221D6Cu;
    // 0x221d6c: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x221d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x221d70: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x221d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x221d74: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x221D74u;
    {
        const bool branch_taken_0x221d74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x221D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221D74u;
        // 0x221d78: 0x2a020004  slti        $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x221d74) {
            ctx->pc = 0x221D9Cu;
            goto label_221d9c;
        }
    }
    ctx->pc = 0x221D7Cu;
    // 0x221d7c: 0x8f869f74  lw          $a2, -0x608C($gp)
    ctx->pc = 0x221d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x221d80: 0x8f82b59c  lw          $v0, -0x4A64($gp)
    ctx->pc = 0x221d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x221d84: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x221d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x221d88: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x221d88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x221d8c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x221D8Cu;
    {
        const bool branch_taken_0x221d8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x221D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221D8Cu;
        // 0x221d90: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221d8c) {
            ctx->pc = 0x221D48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_221d48;
        }
    }
    ctx->pc = 0x221D94u;
    // 0x221d94: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x221D94u;
    {
        const bool branch_taken_0x221d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221D94u;
        // 0x221d98: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221d94) {
            ctx->pc = 0x221DACu;
            goto label_221dac;
        }
    }
    ctx->pc = 0x221D9Cu;
label_221d9c:
    // 0x221d9c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x221D9Cu;
    {
        const bool branch_taken_0x221d9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x221DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221D9Cu;
        // 0x221da0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221d9c) {
            ctx->pc = 0x221D48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_221d48;
        }
    }
    ctx->pc = 0x221DA4u;
    // 0x221da4: 0x8f869f74  lw          $a2, -0x608C($gp)
    ctx->pc = 0x221da4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x221da8: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x221da8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_221dac:
    // 0x221dac: 0x18c00019  blez        $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x221DACu;
    {
        const bool branch_taken_0x221dac = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x221DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221DACu;
        // 0x221db0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221dac) {
            ctx->pc = 0x221E14u;
            goto label_221e14;
        }
    }
    ctx->pc = 0x221DB4u;
    // 0x221db4: 0x0  nop
    ctx->pc = 0x221db4u;
    // NOP
label_221db8:
    // 0x221db8: 0x18600011  blez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x221DB8u;
    {
        const bool branch_taken_0x221db8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x221DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221DB8u;
        // 0x221dbc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221db8) {
            ctx->pc = 0x221E00u;
            goto label_221e00;
        }
    }
    ctx->pc = 0x221DC0u;
    // 0x221dc0: 0x26130001  addiu       $s3, $s0, 0x1
    ctx->pc = 0x221dc0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x221dc4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x221dc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_221dc8:
    // 0x221dc8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x221dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x221dcc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x221dccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221dd0: 0xc089008  jal         func_224020
    ctx->pc = 0x221DD0u;
    SET_GPR_U32(ctx, 31, 0x221DD8u);
    ctx->pc = 0x221DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221DD0u;
    // 0x221dd4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224020u, 0x221DD0u, 0x221DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221DD8u;
label_221dd8:
    // 0x221dd8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x221dd8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x221ddc: 0x2404003a  addiu       $a0, $zero, 0x3A
    ctx->pc = 0x221ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x221de0: 0xc088f98  jal         func_223E60
    ctx->pc = 0x221DE0u;
    SET_GPR_U32(ctx, 31, 0x221DE8u);
    ctx->pc = 0x221DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221DE0u;
    // 0x221de4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E60u, 0x221DE0u, 0x221DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221DE8u;
label_221de8:
    // 0x221de8: 0x8f869f74  lw          $a2, -0x608C($gp)
    ctx->pc = 0x221de8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x221dec: 0x226102a  slt         $v0, $s1, $a2
    ctx->pc = 0x221decu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x221df0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x221DF0u;
    {
        const bool branch_taken_0x221df0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x221DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221DF0u;
        // 0x221df4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221df0) {
            ctx->pc = 0x221DC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_221dc8;
        }
    }
    ctx->pc = 0x221DF8u;
    // 0x221df8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x221DF8u;
    {
        const bool branch_taken_0x221df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221DF8u;
        // 0x221dfc: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221df8) {
            ctx->pc = 0x221E08u;
            goto label_221e08;
        }
    }
    ctx->pc = 0x221E00u;
label_221e00:
    // 0x221e00: 0x26130001  addiu       $s3, $s0, 0x1
    ctx->pc = 0x221e00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x221e04: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x221e04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_221e08:
    // 0x221e08: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x221e08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x221e0c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x221E0Cu;
    {
        const bool branch_taken_0x221e0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x221E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221E0Cu;
        // 0x221e10: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221e0c) {
            ctx->pc = 0x221DB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_221db8;
        }
    }
    ctx->pc = 0x221E14u;
label_221e14:
    // 0x221e14: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x221e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x221e18: 0x8f83b59c  lw          $v1, -0x4A64($gp)
    ctx->pc = 0x221e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x221e1c: 0x2444c4a8  addiu       $a0, $v0, -0x3B58
    ctx->pc = 0x221e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952104));
    // 0x221e20: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x221e20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221e24: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x221e24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x32C4F0u));
    // 0x221e28: 0xc33821  addu        $a3, $a2, $v1
    ctx->pc = 0x221e28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x221e2c: 0x240800c0  addiu       $t0, $zero, 0xC0
    ctx->pc = 0x221e2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x221e30: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x221e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x221e34: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x221E34u;
    {
        const bool branch_taken_0x221e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221E34u;
        // 0x221e38: 0x2c450002  sltiu       $a1, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x221e34) {
            ctx->pc = 0x221E70u;
            goto label_221e70;
        }
    }
    ctx->pc = 0x221E3Cu;
    // 0x221e3c: 0x0  nop
    ctx->pc = 0x221e3cu;
    // NOP
label_221e40:
    // 0x221e40: 0x26130001  addiu       $s3, $s0, 0x1
    ctx->pc = 0x221e40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x221e44: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x221e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x221e48: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x221e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x221e4c: 0x244200fc  addiu       $v0, $v0, 0xFC
    ctx->pc = 0x221e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 252));
label_221e50:
    // 0x221e50: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x221e50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x221e54: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x221e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x221e58: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x221e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x221e5c: 0x0  nop
    ctx->pc = 0x221e5cu;
    // NOP
    // 0x221e60: 0x0  nop
    ctx->pc = 0x221e60u;
    // NOP
    // 0x221e64: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x221E64u;
    {
        const bool branch_taken_0x221e64 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x221e64) {
            ctx->pc = 0x221E50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_221e50;
        }
    }
    ctx->pc = 0x221E6Cu;
    // 0x221e6c: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x221e6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_221e70:
    // 0x221e70: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x221E70u;
    {
        const bool branch_taken_0x221e70 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x221E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221E70u;
        // 0x221e74: 0x2a020004  slti        $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x221e70) {
            ctx->pc = 0x221E8Cu;
            goto label_221e8c;
        }
    }
    ctx->pc = 0x221E78u;
    // 0x221e78: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x221e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x221e7c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x221e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x221e80: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x221E80u;
    {
        const bool branch_taken_0x221e80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x221E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221E80u;
        // 0x221e84: 0x2a020004  slti        $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x221e80) {
            ctx->pc = 0x221E8Cu;
            goto label_221e8c;
        }
    }
    ctx->pc = 0x221E88u;
    // 0x221e88: 0x207102a  slt         $v0, $s0, $a3
    ctx->pc = 0x221e88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_221e8c:
    // 0x221e8c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x221E8Cu;
    {
        const bool branch_taken_0x221e8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x221E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221E8Cu;
        // 0x221e90: 0x2081818  mult        $v1, $s0, $t0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x221e8c) {
            ctx->pc = 0x221E40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_221e40;
        }
    }
    ctx->pc = 0x221E94u;
    // 0x221e94: 0x26e3c4a8  addiu       $v1, $s7, -0x3B58
    ctx->pc = 0x221e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
    // 0x221e98: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x221e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x221e9c: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x221e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x221ea0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x221ea0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x221ea4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x221EA4u;
    {
        const bool branch_taken_0x221ea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x221EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221EA4u;
        // 0x221ea8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221ea4) {
            ctx->pc = 0x221EC0u;
            goto label_221ec0;
        }
    }
    ctx->pc = 0x221EACu;
    // 0x221eac: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x221eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x221eb0: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x221eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x221eb4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x221EB4u;
    {
        const bool branch_taken_0x221eb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x221EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221EB4u;
        // 0x221eb8: 0x8f82b59c  lw          $v0, -0x4A64($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221eb4) {
            ctx->pc = 0x221EC0u;
            goto label_221ec0;
        }
    }
    ctx->pc = 0x221EBCu;
    // 0x221ebc: 0xc22821  addu        $a1, $a2, $v0
    ctx->pc = 0x221ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_221ec0:
    // 0x221ec0: 0xc0884a6  jal         func_221298
    ctx->pc = 0x221EC0u;
    SET_GPR_U32(ctx, 31, 0x221EC8u);
    ctx->pc = 0x221EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221EC0u;
    // 0x221ec4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221298u, 0x221EC0u, 0x221EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221EC8u;
label_221ec8:
    // 0x221ec8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x221ec8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221ecc: 0x600000e  bltz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x221ECCu;
    {
        const bool branch_taken_0x221ecc = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x221ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221ECCu;
        // 0x221ed0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221ecc) {
            ctx->pc = 0x221F08u;
            goto label_221f08;
        }
    }
    ctx->pc = 0x221ED4u;
    // 0x221ed4: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x221ED4u;
    SET_GPR_U32(ctx, 31, 0x221EDCu);
    ctx->pc = 0x221ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221ED4u;
    // 0x221ed8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x221ED4u, 0x221EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221EDCu;
label_221edc:
    // 0x221edc: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x221edcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x221ee0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x221ee0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x221ee4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x221ee4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x221ee8: 0x0  nop
    ctx->pc = 0x221ee8u;
    // NOP
    // 0x221eec: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x221EECu;
    {
        const bool branch_taken_0x221eec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x221EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221EECu;
        // 0x221ef0: 0x240200c0  addiu       $v0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221eec) {
            ctx->pc = 0x221F08u;
            goto label_221f08;
        }
    }
    ctx->pc = 0x221EF4u;
    // 0x221ef4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x221ef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x221ef8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x221ef8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x221efc: 0x2021818  mult        $v1, $s0, $v0
    ctx->pc = 0x221efcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x221f00: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x221f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x221f04: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x221f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
label_221f08:
    // 0x221f08: 0x26e3c4a8  addiu       $v1, $s7, -0x3B58
    ctx->pc = 0x221f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
    // 0x221f0c: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x221f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x221f10: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x221f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x221f14: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x221f14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x221f18: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x221F18u;
    {
        const bool branch_taken_0x221f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x221F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221F18u;
        // 0x221f1c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221f18) {
            ctx->pc = 0x221F38u;
            goto label_221f38;
        }
    }
    ctx->pc = 0x221F20u;
    // 0x221f20: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x221f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x221f24: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x221f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x221f28: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x221F28u;
    {
        const bool branch_taken_0x221f28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x221F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221F28u;
        // 0x221f2c: 0x8f839f74  lw          $v1, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221f28) {
            ctx->pc = 0x221F38u;
            goto label_221f38;
        }
    }
    ctx->pc = 0x221F30u;
    // 0x221f30: 0x8f82b59c  lw          $v0, -0x4A64($gp)
    ctx->pc = 0x221f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x221f34: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x221f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_221f38:
    // 0x221f38: 0xc0884a6  jal         func_221298
    ctx->pc = 0x221F38u;
    SET_GPR_U32(ctx, 31, 0x221F40u);
    ctx->pc = 0x221F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221F38u;
    // 0x221f3c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221298u, 0x221F38u, 0x221F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221F40u;
label_221f40:
    // 0x221f40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x221f40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221f44: 0x600000e  bltz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x221F44u;
    {
        const bool branch_taken_0x221f44 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x221F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221F44u;
        // 0x221f48: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221f44) {
            ctx->pc = 0x221F80u;
            goto label_221f80;
        }
    }
    ctx->pc = 0x221F4Cu;
    // 0x221f4c: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x221F4Cu;
    SET_GPR_U32(ctx, 31, 0x221F54u);
    ctx->pc = 0x221F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221F4Cu;
    // 0x221f50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x221F4Cu, 0x221F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221F54u;
label_221f54:
    // 0x221f54: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x221f54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x221f58: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x221f58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x221f5c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x221f5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x221f60: 0x0  nop
    ctx->pc = 0x221f60u;
    // NOP
    // 0x221f64: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x221F64u;
    {
        const bool branch_taken_0x221f64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x221F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221F64u;
        // 0x221f68: 0x240200c0  addiu       $v0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221f64) {
            ctx->pc = 0x221F80u;
            goto label_221f80;
        }
    }
    ctx->pc = 0x221F6Cu;
    // 0x221f6c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x221f6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x221f70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x221f70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x221f74: 0x2021818  mult        $v1, $s0, $v0
    ctx->pc = 0x221f74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x221f78: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x221f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x221f7c: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x221f7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
label_221f80:
    // 0x221f80: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x221f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x221f84: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x221f84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x221f88: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x221f88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x221f8c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x221f8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x221f90: 0x2452c4a8  addiu       $s2, $v0, -0x3B58
    ctx->pc = 0x221f90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952104));
    // 0x221f94: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x221f94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221f98: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x221F98u;
    {
        const bool branch_taken_0x221f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221F98u;
        // 0x221f9c: 0x27b100e0  addiu       $s1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221f98) {
            ctx->pc = 0x221FC0u;
            goto label_221fc0;
        }
    }
    ctx->pc = 0x221FA0u;
label_221fa0:
    // 0x221fa0: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x221FA0u;
    SET_GPR_U32(ctx, 31, 0x221FA8u);
    ctx->pc = 0x221FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221FA0u;
    // 0x221fa4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x221FA0u, 0x221FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221FA8u;
label_221fa8:
    // 0x221fa8: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x221fa8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x221fac: 0x0  nop
    ctx->pc = 0x221facu;
    // NOP
    // 0x221fb0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x221FB0u;
    {
        const bool branch_taken_0x221fb0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x221fb0) {
            ctx->pc = 0x221FB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x221FB0u;
            // 0x221fb4: 0xe6340000  swc1        $f20, 0x0($s1) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x221FB8u;
            goto label_221fb8;
        }
    }
    ctx->pc = 0x221FB8u;
label_221fb8:
    // 0x221fb8: 0x263100c0  addiu       $s1, $s1, 0xC0
    ctx->pc = 0x221fb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x221fbc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x221fbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_221fc0:
    // 0x221fc0: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x221fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x221fc4: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x221fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x221fc8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x221fc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x221fcc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x221FCCu;
    {
        const bool branch_taken_0x221fcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x221FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221FCCu;
        // 0x221fd0: 0x2a020004  slti        $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x221fcc) {
            ctx->pc = 0x221FF4u;
            goto label_221ff4;
        }
    }
    ctx->pc = 0x221FD4u;
    // 0x221fd4: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x221fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x221fd8: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x221fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x221fdc: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x221FDCu;
    {
        const bool branch_taken_0x221fdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x221fdc) {
            ctx->pc = 0x221FE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x221FDCu;
            // 0x221fe0: 0x2a020004  slti        $v0, $s0, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x221FF4u;
            goto label_221ff4;
        }
    }
    ctx->pc = 0x221FE4u;
    // 0x221fe4: 0x8f829f74  lw          $v0, -0x608C($gp)
    ctx->pc = 0x221fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x221fe8: 0x8f83b59c  lw          $v1, -0x4A64($gp)
    ctx->pc = 0x221fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x221fec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x221fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x221ff0: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x221ff0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_221ff4:
    // 0x221ff4: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x221FF4u;
    {
        const bool branch_taken_0x221ff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x221FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221FF4u;
        // 0x221ff8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221ff4) {
            ctx->pc = 0x221FA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_221fa0;
        }
    }
    ctx->pc = 0x221FFCu;
    // 0x221ffc: 0x8f859f74  lw          $a1, -0x608C($gp)
    ctx->pc = 0x221ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x222000: 0xc0884a6  jal         func_221298
    ctx->pc = 0x222000u;
    SET_GPR_U32(ctx, 31, 0x222008u);
    ctx->pc = 0x222004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222000u;
    // 0x222004: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221298u, 0x222000u, 0x222008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222008u;
label_222008:
    // 0x222008: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x222008u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22200c: 0x6000010  bltz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x22200Cu;
    {
        const bool branch_taken_0x22200c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x222010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22200Cu;
        // 0x222010: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22200c) {
            ctx->pc = 0x222050u;
            goto label_222050;
        }
    }
    ctx->pc = 0x222014u;
    // 0x222014: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x222014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x222018: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x222018u;
    SET_GPR_U32(ctx, 31, 0x222020u);
    ctx->pc = 0x22201Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222018u;
    // 0x22201c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x222018u, 0x222020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222020u;
label_222020:
    // 0x222020: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x222020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x222024: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x222024u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x222028: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x222028u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22202c: 0x0  nop
    ctx->pc = 0x22202cu;
    // NOP
    // 0x222030: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x222030u;
    {
        const bool branch_taken_0x222030 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x222034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222030u;
        // 0x222034: 0x240200c0  addiu       $v0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222030) {
            ctx->pc = 0x22204Cu;
            goto label_22204c;
        }
    }
    ctx->pc = 0x222038u;
    // 0x222038: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x222038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22203c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22203cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222040: 0x2021818  mult        $v1, $s0, $v0
    ctx->pc = 0x222040u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x222044: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x222044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x222048: 0xe4400048  swc1        $f0, 0x48($v0)
    ctx->pc = 0x222048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
label_22204c:
    // 0x22204c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x22204cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_222050:
    // 0x222050: 0x8f84b59c  lw          $a0, -0x4A64($gp)
    ctx->pc = 0x222050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x222054: 0x2447c4a8  addiu       $a3, $v0, -0x3B58
    ctx->pc = 0x222054u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952104));
    // 0x222058: 0x8f859f74  lw          $a1, -0x608C($gp)
    ctx->pc = 0x222058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x22205c: 0x8ce20048  lw          $v0, 0x48($a3)
    ctx->pc = 0x22205cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 72)));
    // 0x222060: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x222060u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x222064: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x222064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x222068: 0x2463e6a8  addiu       $v1, $v1, -0x1958
    ctx->pc = 0x222068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960808));
    // 0x22206c: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x22206cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x222070: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x222070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
    // 0x222074: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x222074u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x222078: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x222078u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22207c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22207cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x222080: 0x2c460002  sltiu       $a2, $v0, 0x2
    ctx->pc = 0x222080u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x222084: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x222084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x222088: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x222088u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22208c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x22208Cu;
    {
        const bool branch_taken_0x22208c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22208Cu;
        // 0x222090: 0x27a4004c  addiu       $a0, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22208c) {
            ctx->pc = 0x2220B4u;
            goto label_2220b4;
        }
    }
    ctx->pc = 0x222094u;
    // 0x222094: 0x0  nop
    ctx->pc = 0x222094u;
    // NOP
label_222098:
    // 0x222098: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x222098u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22209c: 0x0  nop
    ctx->pc = 0x22209cu;
    // NOP
    // 0x2220a0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2220A0u;
    {
        const bool branch_taken_0x2220a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2220a0) {
            ctx->pc = 0x2220A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2220A0u;
            // 0x2220a4: 0xe4810000  swc1        $f1, 0x0($a0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2220A8u;
            goto label_2220a8;
        }
    }
    ctx->pc = 0x2220A8u;
label_2220a8:
    // 0x2220a8: 0x248400c0  addiu       $a0, $a0, 0xC0
    ctx->pc = 0x2220a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    // 0x2220ac: 0x24630558  addiu       $v1, $v1, 0x558
    ctx->pc = 0x2220acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1368));
    // 0x2220b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2220b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2220b4:
    // 0x2220b4: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2220B4u;
    {
        const bool branch_taken_0x2220b4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2220B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2220B4u;
        // 0x2220b8: 0x2a020004  slti        $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2220b4) {
            ctx->pc = 0x2220D0u;
            goto label_2220d0;
        }
    }
    ctx->pc = 0x2220BCu;
    // 0x2220bc: 0x8ce20050  lw          $v0, 0x50($a3)
    ctx->pc = 0x2220bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x2220c0: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2220c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2220c4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2220C4u;
    {
        const bool branch_taken_0x2220c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2220C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2220C4u;
        // 0x2220c8: 0x2a020004  slti        $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2220c4) {
            ctx->pc = 0x2220D0u;
            goto label_2220d0;
        }
    }
    ctx->pc = 0x2220CCu;
    // 0x2220cc: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x2220ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_2220d0:
    // 0x2220d0: 0x5440fff1  bnel        $v0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x2220D0u;
    {
        const bool branch_taken_0x2220d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2220d0) {
            ctx->pc = 0x2220D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2220D0u;
            // 0x2220d4: 0xc4600000  lwc1        $f0, 0x0($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x222098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_222098;
        }
    }
    ctx->pc = 0x2220D8u;
    // 0x2220d8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2220d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x2220dc: 0x8f84b59c  lw          $a0, -0x4A64($gp)
    ctx->pc = 0x2220dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x2220e0: 0x2447c4a8  addiu       $a3, $v0, -0x3B58
    ctx->pc = 0x2220e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952104));
    // 0x2220e4: 0x8f859f74  lw          $a1, -0x608C($gp)
    ctx->pc = 0x2220e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x2220e8: 0x8ce20048  lw          $v0, 0x48($a3)
    ctx->pc = 0x2220e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x32C4F0u));
    // 0x2220ec: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x2220ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x2220f0: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x2220f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2220f4: 0x2463e6a8  addiu       $v1, $v1, -0x1958
    ctx->pc = 0x2220f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960808));
    // 0x2220f8: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x2220f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x2220fc: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2220fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x222100: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x222100u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x222104: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x222104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x222108: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x222108u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22210c: 0x2c460002  sltiu       $a2, $v0, 0x2
    ctx->pc = 0x22210cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x222110: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x222110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x222114: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x222114u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222118: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x222118u;
    {
        const bool branch_taken_0x222118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22211Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222118u;
        // 0x22211c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222118) {
            ctx->pc = 0x22213Cu;
            goto label_22213c;
        }
    }
    ctx->pc = 0x222120u;
label_222120:
    // 0x222120: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x222120u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222124: 0x0  nop
    ctx->pc = 0x222124u;
    // NOP
    // 0x222128: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x222128u;
    {
        const bool branch_taken_0x222128 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x222128) {
            ctx->pc = 0x22212Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x222128u;
            // 0x22212c: 0xe4810000  swc1        $f1, 0x0($a0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x222130u;
            goto label_222130;
        }
    }
    ctx->pc = 0x222130u;
label_222130:
    // 0x222130: 0x248400c0  addiu       $a0, $a0, 0xC0
    ctx->pc = 0x222130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    // 0x222134: 0x24630558  addiu       $v1, $v1, 0x558
    ctx->pc = 0x222134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1368));
    // 0x222138: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x222138u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_22213c:
    // 0x22213c: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x22213Cu;
    {
        const bool branch_taken_0x22213c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x222140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22213Cu;
        // 0x222140: 0x2a020004  slti        $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22213c) {
            ctx->pc = 0x222158u;
            goto label_222158;
        }
    }
    ctx->pc = 0x222144u;
    // 0x222144: 0x8ce20050  lw          $v0, 0x50($a3)
    ctx->pc = 0x222144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x222148: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x222148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x22214c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22214Cu;
    {
        const bool branch_taken_0x22214c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x222150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22214Cu;
        // 0x222150: 0x2a020004  slti        $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22214c) {
            ctx->pc = 0x222158u;
            goto label_222158;
        }
    }
    ctx->pc = 0x222154u;
    // 0x222154: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x222154u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_222158:
    // 0x222158: 0x5440fff1  bnel        $v0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x222158u;
    {
        const bool branch_taken_0x222158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x222158) {
            ctx->pc = 0x22215Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x222158u;
            // 0x22215c: 0xc4600000  lwc1        $f0, 0x0($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x222120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_222120;
        }
    }
    ctx->pc = 0x222160u;
    // 0x222160: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x222160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x222164: 0x8f84b59c  lw          $a0, -0x4A64($gp)
    ctx->pc = 0x222164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x222168: 0x2447c4a8  addiu       $a3, $v0, -0x3B58
    ctx->pc = 0x222168u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952104));
    // 0x22216c: 0x8f859f74  lw          $a1, -0x608C($gp)
    ctx->pc = 0x22216cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x222170: 0x8ce20048  lw          $v0, 0x48($a3)
    ctx->pc = 0x222170u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x32C4F0u));
    // 0x222174: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x222174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x222178: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x222178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x22217c: 0x2463e6a8  addiu       $v1, $v1, -0x1958
    ctx->pc = 0x22217cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960808));
    // 0x222180: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x222180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x222184: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x222184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x222188: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x222188u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x22218c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22218cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x222190: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x222190u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x222194: 0x2c460002  sltiu       $a2, $v0, 0x2
    ctx->pc = 0x222194u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x222198: 0x2463001c  addiu       $v1, $v1, 0x1C
    ctx->pc = 0x222198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
    // 0x22219c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x22219cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2221a0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2221A0u;
    {
        const bool branch_taken_0x2221a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2221A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2221A0u;
        // 0x2221a4: 0x27a40054  addiu       $a0, $sp, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2221a0) {
            ctx->pc = 0x2221C4u;
            goto label_2221c4;
        }
    }
    ctx->pc = 0x2221A8u;
label_2221a8:
    // 0x2221a8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2221a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2221ac: 0x0  nop
    ctx->pc = 0x2221acu;
    // NOP
    // 0x2221b0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2221B0u;
    {
        const bool branch_taken_0x2221b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2221b0) {
            ctx->pc = 0x2221B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2221B0u;
            // 0x2221b4: 0xe4810000  swc1        $f1, 0x0($a0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2221B8u;
            goto label_2221b8;
        }
    }
    ctx->pc = 0x2221B8u;
label_2221b8:
    // 0x2221b8: 0x248400c0  addiu       $a0, $a0, 0xC0
    ctx->pc = 0x2221b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    // 0x2221bc: 0x24630558  addiu       $v1, $v1, 0x558
    ctx->pc = 0x2221bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1368));
    // 0x2221c0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2221c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2221c4:
    // 0x2221c4: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2221C4u;
    {
        const bool branch_taken_0x2221c4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2221C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2221C4u;
        // 0x2221c8: 0x2a020004  slti        $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2221c4) {
            ctx->pc = 0x2221E0u;
            goto label_2221e0;
        }
    }
    ctx->pc = 0x2221CCu;
    // 0x2221cc: 0x8ce20050  lw          $v0, 0x50($a3)
    ctx->pc = 0x2221ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x2221d0: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2221d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2221d4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2221D4u;
    {
        const bool branch_taken_0x2221d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2221D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2221D4u;
        // 0x2221d8: 0x2a020004  slti        $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2221d4) {
            ctx->pc = 0x2221E0u;
            goto label_2221e0;
        }
    }
    ctx->pc = 0x2221DCu;
    // 0x2221dc: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x2221dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_2221e0:
    // 0x2221e0: 0x5440fff1  bnel        $v0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x2221E0u;
    {
        const bool branch_taken_0x2221e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2221e0) {
            ctx->pc = 0x2221E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2221E0u;
            // 0x2221e4: 0xc4600000  lwc1        $f0, 0x0($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2221A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2221a8;
        }
    }
    ctx->pc = 0x2221E8u;
    // 0x2221e8: 0x8f859f74  lw          $a1, -0x608C($gp)
    ctx->pc = 0x2221e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x2221ec: 0xc0884a6  jal         func_221298
    ctx->pc = 0x2221ECu;
    SET_GPR_U32(ctx, 31, 0x2221F4u);
    ctx->pc = 0x2221F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2221ECu;
    // 0x2221f0: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221298u, 0x2221ECu, 0x2221F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2221F4u;
label_2221f4:
    // 0x2221f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2221f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2221f8: 0x6000015  bltz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2221F8u;
    {
        const bool branch_taken_0x2221f8 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2221FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2221F8u;
        // 0x2221fc: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2221f8) {
            ctx->pc = 0x222250u;
            goto label_222250;
        }
    }
    ctx->pc = 0x222200u;
    // 0x222200: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x222200u;
    SET_GPR_U32(ctx, 31, 0x222208u);
    ctx->pc = 0x222204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222200u;
    // 0x222204: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x222200u, 0x222208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222208u;
label_222208:
    // 0x222208: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x222208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x22220c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22220cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x222210: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x222210u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222214: 0x0  nop
    ctx->pc = 0x222214u;
    // NOP
    // 0x222218: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x222218u;
    {
        const bool branch_taken_0x222218 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22221Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222218u;
        // 0x22221c: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222218) {
            ctx->pc = 0x222250u;
            goto label_222250;
        }
    }
    ctx->pc = 0x222220u;
    // 0x222220: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x222220u;
    SET_GPR_U32(ctx, 31, 0x222228u);
    ctx->pc = 0x222224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222220u;
    // 0x222224: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x222220u, 0x222228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222228u;
label_222228:
    // 0x222228: 0xc7818094  lwc1        $f1, -0x7F6C($gp)
    ctx->pc = 0x222228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22222c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22222cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222230: 0x0  nop
    ctx->pc = 0x222230u;
    // NOP
    // 0x222234: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x222234u;
    {
        const bool branch_taken_0x222234 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x222238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222234u;
        // 0x222238: 0x240200c0  addiu       $v0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222234) {
            ctx->pc = 0x222250u;
            goto label_222250;
        }
    }
    ctx->pc = 0x22223Cu;
    // 0x22223c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22223cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x222240: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x222240u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222244: 0x2021818  mult        $v1, $s0, $v0
    ctx->pc = 0x222244u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x222248: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x222248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x22224c: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x22224cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
label_222250:
    // 0x222250: 0x8f859f74  lw          $a1, -0x608C($gp)
    ctx->pc = 0x222250u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x222254: 0xc0884a6  jal         func_221298
    ctx->pc = 0x222254u;
    SET_GPR_U32(ctx, 31, 0x22225Cu);
    ctx->pc = 0x222258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222254u;
    // 0x222258: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221298u, 0x222254u, 0x22225Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22225Cu;
label_22225c:
    // 0x22225c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22225cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222260: 0x6000015  bltz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x222260u;
    {
        const bool branch_taken_0x222260 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x222264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222260u;
        // 0x222264: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222260) {
            ctx->pc = 0x2222B8u;
            goto label_2222b8;
        }
    }
    ctx->pc = 0x222268u;
    // 0x222268: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x222268u;
    SET_GPR_U32(ctx, 31, 0x222270u);
    ctx->pc = 0x22226Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222268u;
    // 0x22226c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x222268u, 0x222270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222270u;
label_222270:
    // 0x222270: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x222270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x222274: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x222274u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x222278: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x222278u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22227c: 0x0  nop
    ctx->pc = 0x22227cu;
    // NOP
    // 0x222280: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x222280u;
    {
        const bool branch_taken_0x222280 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x222284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222280u;
        // 0x222284: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222280) {
            ctx->pc = 0x2222B8u;
            goto label_2222b8;
        }
    }
    ctx->pc = 0x222288u;
    // 0x222288: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x222288u;
    SET_GPR_U32(ctx, 31, 0x222290u);
    ctx->pc = 0x22228Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222288u;
    // 0x22228c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x222288u, 0x222290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222290u;
label_222290:
    // 0x222290: 0xc7818098  lwc1        $f1, -0x7F68($gp)
    ctx->pc = 0x222290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x222294: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x222294u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222298: 0x0  nop
    ctx->pc = 0x222298u;
    // NOP
    // 0x22229c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x22229Cu;
    {
        const bool branch_taken_0x22229c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2222A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22229Cu;
        // 0x2222a0: 0x240200c0  addiu       $v0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22229c) {
            ctx->pc = 0x2222B8u;
            goto label_2222b8;
        }
    }
    ctx->pc = 0x2222A4u;
    // 0x2222a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2222a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2222a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2222a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2222ac: 0x2021818  mult        $v1, $s0, $v0
    ctx->pc = 0x2222acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2222b0: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x2222b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x2222b4: 0xe440005c  swc1        $f0, 0x5C($v0)
    ctx->pc = 0x2222b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 92), bits); }
label_2222b8:
    // 0x2222b8: 0x8f859f74  lw          $a1, -0x608C($gp)
    ctx->pc = 0x2222b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x2222bc: 0xc0884a6  jal         func_221298
    ctx->pc = 0x2222BCu;
    SET_GPR_U32(ctx, 31, 0x2222C4u);
    ctx->pc = 0x2222C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2222BCu;
    // 0x2222c0: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221298u, 0x2222BCu, 0x2222C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2222C4u;
label_2222c4:
    // 0x2222c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2222c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2222c8: 0x6000015  bltz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2222C8u;
    {
        const bool branch_taken_0x2222c8 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2222CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2222C8u;
        // 0x2222cc: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2222c8) {
            ctx->pc = 0x222320u;
            goto label_222320;
        }
    }
    ctx->pc = 0x2222D0u;
    // 0x2222d0: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x2222D0u;
    SET_GPR_U32(ctx, 31, 0x2222D8u);
    ctx->pc = 0x2222D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2222D0u;
    // 0x2222d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x2222D0u, 0x2222D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2222D8u;
label_2222d8:
    // 0x2222d8: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x2222d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x2222dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2222dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2222e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2222e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2222e4: 0x0  nop
    ctx->pc = 0x2222e4u;
    // NOP
    // 0x2222e8: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2222E8u;
    {
        const bool branch_taken_0x2222e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2222ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2222E8u;
        // 0x2222ec: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2222e8) {
            ctx->pc = 0x222320u;
            goto label_222320;
        }
    }
    ctx->pc = 0x2222F0u;
    // 0x2222f0: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x2222F0u;
    SET_GPR_U32(ctx, 31, 0x2222F8u);
    ctx->pc = 0x2222F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2222F0u;
    // 0x2222f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x2222F0u, 0x2222F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2222F8u;
label_2222f8:
    // 0x2222f8: 0xc781809c  lwc1        $f1, -0x7F64($gp)
    ctx->pc = 0x2222f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2222fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2222fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222300: 0x0  nop
    ctx->pc = 0x222300u;
    // NOP
    // 0x222304: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x222304u;
    {
        const bool branch_taken_0x222304 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x222308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222304u;
        // 0x222308: 0x240200c0  addiu       $v0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222304) {
            ctx->pc = 0x222320u;
            goto label_222320;
        }
    }
    ctx->pc = 0x22230Cu;
    // 0x22230c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22230cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x222310: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x222310u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222314: 0x2021818  mult        $v1, $s0, $v0
    ctx->pc = 0x222314u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x222318: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x222318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x22231c: 0xe4400060  swc1        $f0, 0x60($v0)
    ctx->pc = 0x22231cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
label_222320:
    // 0x222320: 0x8f859f74  lw          $a1, -0x608C($gp)
    ctx->pc = 0x222320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x222324: 0xc0884a6  jal         func_221298
    ctx->pc = 0x222324u;
    SET_GPR_U32(ctx, 31, 0x22232Cu);
    ctx->pc = 0x222328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222324u;
    // 0x222328: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221298u, 0x222324u, 0x22232Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22232Cu;
label_22232c:
    // 0x22232c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22232cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222330: 0x6000015  bltz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x222330u;
    {
        const bool branch_taken_0x222330 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x222334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222330u;
        // 0x222334: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222330) {
            ctx->pc = 0x222388u;
            goto label_222388;
        }
    }
    ctx->pc = 0x222338u;
    // 0x222338: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x222338u;
    SET_GPR_U32(ctx, 31, 0x222340u);
    ctx->pc = 0x22233Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222338u;
    // 0x22233c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x222338u, 0x222340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222340u;
label_222340:
    // 0x222340: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x222340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x222344: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x222344u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x222348: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x222348u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22234c: 0x0  nop
    ctx->pc = 0x22234cu;
    // NOP
    // 0x222350: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x222350u;
    {
        const bool branch_taken_0x222350 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x222354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222350u;
        // 0x222354: 0x24040012  addiu       $a0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222350) {
            ctx->pc = 0x222388u;
            goto label_222388;
        }
    }
    ctx->pc = 0x222358u;
    // 0x222358: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x222358u;
    SET_GPR_U32(ctx, 31, 0x222360u);
    ctx->pc = 0x22235Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222358u;
    // 0x22235c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x222358u, 0x222360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222360u;
label_222360:
    // 0x222360: 0xc78180a0  lwc1        $f1, -0x7F60($gp)
    ctx->pc = 0x222360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x222364: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x222364u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222368: 0x0  nop
    ctx->pc = 0x222368u;
    // NOP
    // 0x22236c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x22236Cu;
    {
        const bool branch_taken_0x22236c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x222370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22236Cu;
        // 0x222370: 0x240200c0  addiu       $v0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22236c) {
            ctx->pc = 0x222388u;
            goto label_222388;
        }
    }
    ctx->pc = 0x222374u;
    // 0x222374: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x222374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x222378: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x222378u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22237c: 0x2021818  mult        $v1, $s0, $v0
    ctx->pc = 0x22237cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x222380: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x222380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x222384: 0xe4400064  swc1        $f0, 0x64($v0)
    ctx->pc = 0x222384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 100), bits); }
label_222388:
    // 0x222388: 0x26e3c4a8  addiu       $v1, $s7, -0x3B58
    ctx->pc = 0x222388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
    // 0x22238c: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x22238cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x222390: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x222390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x222394: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x222394u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x222398: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x222398u;
    {
        const bool branch_taken_0x222398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22239Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222398u;
        // 0x22239c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222398) {
            ctx->pc = 0x2223B8u;
            goto label_2223b8;
        }
    }
    ctx->pc = 0x2223A0u;
    // 0x2223a0: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x2223a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x2223a4: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2223a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2223a8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2223A8u;
    {
        const bool branch_taken_0x2223a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2223ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2223A8u;
        // 0x2223ac: 0x8f839f74  lw          $v1, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2223a8) {
            ctx->pc = 0x2223B8u;
            goto label_2223b8;
        }
    }
    ctx->pc = 0x2223B0u;
    // 0x2223b0: 0x8f82b59c  lw          $v0, -0x4A64($gp)
    ctx->pc = 0x2223b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x2223b4: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x2223b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2223b8:
    // 0x2223b8: 0xc0884a6  jal         func_221298
    ctx->pc = 0x2223B8u;
    SET_GPR_U32(ctx, 31, 0x2223C0u);
    ctx->pc = 0x2223BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2223B8u;
    // 0x2223bc: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221298u, 0x2223B8u, 0x2223C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2223C0u;
label_2223c0:
    // 0x2223c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2223c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2223c4: 0x600000e  bltz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x2223C4u;
    {
        const bool branch_taken_0x2223c4 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2223C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2223C4u;
        // 0x2223c8: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2223c4) {
            ctx->pc = 0x222400u;
            goto label_222400;
        }
    }
    ctx->pc = 0x2223CCu;
    // 0x2223cc: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x2223CCu;
    SET_GPR_U32(ctx, 31, 0x2223D4u);
    ctx->pc = 0x2223D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2223CCu;
    // 0x2223d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x2223CCu, 0x2223D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2223D4u;
label_2223d4:
    // 0x2223d4: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x2223d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x2223d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2223d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2223dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2223dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2223e0: 0x0  nop
    ctx->pc = 0x2223e0u;
    // NOP
    // 0x2223e4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2223E4u;
    {
        const bool branch_taken_0x2223e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2223E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2223E4u;
        // 0x2223e8: 0x240200c0  addiu       $v0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2223e4) {
            ctx->pc = 0x222400u;
            goto label_222400;
        }
    }
    ctx->pc = 0x2223ECu;
    // 0x2223ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2223ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2223f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2223f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2223f4: 0x2021818  mult        $v1, $s0, $v0
    ctx->pc = 0x2223f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2223f8: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x2223f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x2223fc: 0xe4400068  swc1        $f0, 0x68($v0)
    ctx->pc = 0x2223fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
label_222400:
    // 0x222400: 0x26e3c4a8  addiu       $v1, $s7, -0x3B58
    ctx->pc = 0x222400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
    // 0x222404: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x222404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x222408: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x222408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x22240c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x22240cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x222410: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x222410u;
    {
        const bool branch_taken_0x222410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x222414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222410u;
        // 0x222414: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222410) {
            ctx->pc = 0x222430u;
            goto label_222430;
        }
    }
    ctx->pc = 0x222418u;
    // 0x222418: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x222418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x22241c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x22241cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x222420: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x222420u;
    {
        const bool branch_taken_0x222420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x222424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222420u;
        // 0x222424: 0x8f839f74  lw          $v1, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222420) {
            ctx->pc = 0x222430u;
            goto label_222430;
        }
    }
    ctx->pc = 0x222428u;
    // 0x222428: 0x8f82b59c  lw          $v0, -0x4A64($gp)
    ctx->pc = 0x222428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x22242c: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x22242cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_222430:
    // 0x222430: 0xc0884a6  jal         func_221298
    ctx->pc = 0x222430u;
    SET_GPR_U32(ctx, 31, 0x222438u);
    ctx->pc = 0x222434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222430u;
    // 0x222434: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221298u, 0x222430u, 0x222438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222438u;
label_222438:
    // 0x222438: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x222438u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22243c: 0x600000e  bltz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x22243Cu;
    {
        const bool branch_taken_0x22243c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x222440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22243Cu;
        // 0x222440: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22243c) {
            ctx->pc = 0x222478u;
            goto label_222478;
        }
    }
    ctx->pc = 0x222444u;
    // 0x222444: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x222444u;
    SET_GPR_U32(ctx, 31, 0x22244Cu);
    ctx->pc = 0x222448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222444u;
    // 0x222448: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x222444u, 0x22244Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22244Cu;
label_22244c:
    // 0x22244c: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x22244cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x222450: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x222450u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x222454: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x222454u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222458: 0x0  nop
    ctx->pc = 0x222458u;
    // NOP
    // 0x22245c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x22245Cu;
    {
        const bool branch_taken_0x22245c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x222460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22245Cu;
        // 0x222460: 0x240200c0  addiu       $v0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22245c) {
            ctx->pc = 0x222478u;
            goto label_222478;
        }
    }
    ctx->pc = 0x222464u;
    // 0x222464: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x222464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x222468: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x222468u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22246c: 0x2021818  mult        $v1, $s0, $v0
    ctx->pc = 0x22246cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x222470: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x222470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x222474: 0xe440006c  swc1        $f0, 0x6C($v0)
    ctx->pc = 0x222474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 108), bits); }
label_222478:
    // 0x222478: 0x26e3c4a8  addiu       $v1, $s7, -0x3B58
    ctx->pc = 0x222478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
    // 0x22247c: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x22247cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x222480: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x222480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x222484: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x222484u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x222488: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x222488u;
    {
        const bool branch_taken_0x222488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22248Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222488u;
        // 0x22248c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222488) {
            ctx->pc = 0x2224A8u;
            goto label_2224a8;
        }
    }
    ctx->pc = 0x222490u;
    // 0x222490: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x222490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x222494: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x222494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x222498: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x222498u;
    {
        const bool branch_taken_0x222498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22249Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222498u;
        // 0x22249c: 0x8f839f74  lw          $v1, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222498) {
            ctx->pc = 0x2224A8u;
            goto label_2224a8;
        }
    }
    ctx->pc = 0x2224A0u;
    // 0x2224a0: 0x8f82b59c  lw          $v0, -0x4A64($gp)
    ctx->pc = 0x2224a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x2224a4: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x2224a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2224a8:
    // 0x2224a8: 0xc0884a6  jal         func_221298
    ctx->pc = 0x2224A8u;
    SET_GPR_U32(ctx, 31, 0x2224B0u);
    ctx->pc = 0x2224ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2224A8u;
    // 0x2224ac: 0x24040017  addiu       $a0, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221298u, 0x2224A8u, 0x2224B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2224B0u;
label_2224b0:
    // 0x2224b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2224b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2224b4: 0x600000e  bltz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x2224B4u;
    {
        const bool branch_taken_0x2224b4 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2224B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2224B4u;
        // 0x2224b8: 0x24040017  addiu       $a0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2224b4) {
            ctx->pc = 0x2224F0u;
            goto label_2224f0;
        }
    }
    ctx->pc = 0x2224BCu;
    // 0x2224bc: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x2224BCu;
    SET_GPR_U32(ctx, 31, 0x2224C4u);
    ctx->pc = 0x2224C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2224BCu;
    // 0x2224c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x2224BCu, 0x2224C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2224C4u;
label_2224c4:
    // 0x2224c4: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x2224c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x2224c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2224c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2224cc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2224ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2224d0: 0x0  nop
    ctx->pc = 0x2224d0u;
    // NOP
    // 0x2224d4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2224D4u;
    {
        const bool branch_taken_0x2224d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2224D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2224D4u;
        // 0x2224d8: 0x240200c0  addiu       $v0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2224d4) {
            ctx->pc = 0x2224F0u;
            goto label_2224f0;
        }
    }
    ctx->pc = 0x2224DCu;
    // 0x2224dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2224dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2224e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2224e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2224e4: 0x2021818  mult        $v1, $s0, $v0
    ctx->pc = 0x2224e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2224e8: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x2224e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x2224ec: 0xe4400070  swc1        $f0, 0x70($v0)
    ctx->pc = 0x2224ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
label_2224f0:
    // 0x2224f0: 0x26e3c4a8  addiu       $v1, $s7, -0x3B58
    ctx->pc = 0x2224f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
    // 0x2224f4: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2224f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2224f8: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x2224f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x2224fc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2224fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x222500: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x222500u;
    {
        const bool branch_taken_0x222500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x222504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222500u;
        // 0x222504: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222500) {
            ctx->pc = 0x222520u;
            goto label_222520;
        }
    }
    ctx->pc = 0x222508u;
    // 0x222508: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x222508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x22250c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x22250cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x222510: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x222510u;
    {
        const bool branch_taken_0x222510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x222514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222510u;
        // 0x222514: 0x8f839f74  lw          $v1, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222510) {
            ctx->pc = 0x222520u;
            goto label_222520;
        }
    }
    ctx->pc = 0x222518u;
    // 0x222518: 0x8f82b59c  lw          $v0, -0x4A64($gp)
    ctx->pc = 0x222518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x22251c: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x22251cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_222520:
    // 0x222520: 0xc0884a6  jal         func_221298
    ctx->pc = 0x222520u;
    SET_GPR_U32(ctx, 31, 0x222528u);
    ctx->pc = 0x222524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222520u;
    // 0x222524: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221298u, 0x222520u, 0x222528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222528u;
label_222528:
    // 0x222528: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x222528u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22252c: 0x600000e  bltz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x22252Cu;
    {
        const bool branch_taken_0x22252c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x222530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22252Cu;
        // 0x222530: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22252c) {
            ctx->pc = 0x222568u;
            goto label_222568;
        }
    }
    ctx->pc = 0x222534u;
    // 0x222534: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x222534u;
    SET_GPR_U32(ctx, 31, 0x22253Cu);
    ctx->pc = 0x222538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222534u;
    // 0x222538: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x222534u, 0x22253Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22253Cu;
label_22253c:
    // 0x22253c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x22253cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x222540: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x222540u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x222544: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x222544u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222548: 0x0  nop
    ctx->pc = 0x222548u;
    // NOP
    // 0x22254c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x22254Cu;
    {
        const bool branch_taken_0x22254c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x222550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22254Cu;
        // 0x222550: 0x240200c0  addiu       $v0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22254c) {
            ctx->pc = 0x222568u;
            goto label_222568;
        }
    }
    ctx->pc = 0x222554u;
    // 0x222554: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x222554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x222558: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x222558u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22255c: 0x2021818  mult        $v1, $s0, $v0
    ctx->pc = 0x22255cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x222560: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x222560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x222564: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x222564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
label_222568:
    // 0x222568: 0x26e3c4a8  addiu       $v1, $s7, -0x3B58
    ctx->pc = 0x222568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
    // 0x22256c: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x22256cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x222570: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x222570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x222574: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x222574u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x222578: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x222578u;
    {
        const bool branch_taken_0x222578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22257Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222578u;
        // 0x22257c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222578) {
            ctx->pc = 0x222598u;
            goto label_222598;
        }
    }
    ctx->pc = 0x222580u;
    // 0x222580: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x222580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x222584: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x222584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x222588: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x222588u;
    {
        const bool branch_taken_0x222588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22258Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222588u;
        // 0x22258c: 0x8f839f74  lw          $v1, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222588) {
            ctx->pc = 0x222598u;
            goto label_222598;
        }
    }
    ctx->pc = 0x222590u;
    // 0x222590: 0x8f82b59c  lw          $v0, -0x4A64($gp)
    ctx->pc = 0x222590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x222594: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x222594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_222598:
    // 0x222598: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x222598u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x22259c: 0xc0884f6  jal         func_2213D8
    ctx->pc = 0x22259Cu;
    SET_GPR_U32(ctx, 31, 0x2225A4u);
    ctx->pc = 0x2225A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22259Cu;
    // 0x2225a0: 0x24040019  addiu       $a0, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x22259Cu, 0x2225A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2225A4u;
label_2225a4:
    // 0x2225a4: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x2225a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x2225a8: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2225a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2225ac: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2225acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x2225b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2225b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2225b4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2225b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2225b8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2225b8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2225bc: 0x2452c4a8  addiu       $s2, $v0, -0x3B58
    ctx->pc = 0x2225bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952104));
    // 0x2225c0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2225c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2225c4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2225C4u;
    {
        const bool branch_taken_0x2225c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2225C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2225C4u;
        // 0x2225c8: 0x27b10078  addiu       $s1, $sp, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2225c4) {
            ctx->pc = 0x222600u;
            goto label_222600;
        }
    }
    ctx->pc = 0x2225CCu;
    // 0x2225cc: 0x0  nop
    ctx->pc = 0x2225ccu;
    // NOP
label_2225d0:
    // 0x2225d0: 0x4614b834  c.lt.s      $f23, $f20
    ctx->pc = 0x2225d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2225d4: 0x0  nop
    ctx->pc = 0x2225d4u;
    // NOP
    // 0x2225d8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2225D8u;
    {
        const bool branch_taken_0x2225d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2225DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2225D8u;
        // 0x2225dc: 0x24040019  addiu       $a0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2225d8) {
            ctx->pc = 0x2225F8u;
            goto label_2225f8;
        }
    }
    ctx->pc = 0x2225E0u;
    // 0x2225e0: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x2225E0u;
    SET_GPR_U32(ctx, 31, 0x2225E8u);
    ctx->pc = 0x2225E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2225E0u;
    // 0x2225e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x2225E0u, 0x2225E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2225E8u;
label_2225e8:
    // 0x2225e8: 0x4600b036  c.le.s      $f22, $f0
    ctx->pc = 0x2225e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2225ec: 0x0  nop
    ctx->pc = 0x2225ecu;
    // NOP
    // 0x2225f0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2225F0u;
    {
        const bool branch_taken_0x2225f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2225f0) {
            ctx->pc = 0x2225F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2225F0u;
            // 0x2225f4: 0xe6350000  swc1        $f21, 0x0($s1) (Delay Slot)
            { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2225F8u;
            goto label_2225f8;
        }
    }
    ctx->pc = 0x2225F8u;
label_2225f8:
    // 0x2225f8: 0x263100c0  addiu       $s1, $s1, 0xC0
    ctx->pc = 0x2225f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x2225fc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2225fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_222600:
    // 0x222600: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x222600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x222604: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x222604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x222608: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x222608u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x22260c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x22260Cu;
    {
        const bool branch_taken_0x22260c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x222610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22260Cu;
        // 0x222610: 0x2a020004  slti        $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22260c) {
            ctx->pc = 0x222634u;
            goto label_222634;
        }
    }
    ctx->pc = 0x222614u;
    // 0x222614: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x222614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x222618: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x222618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x22261c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x22261Cu;
    {
        const bool branch_taken_0x22261c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22261c) {
            ctx->pc = 0x222620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22261Cu;
            // 0x222620: 0x2a020004  slti        $v0, $s0, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x222634u;
            goto label_222634;
        }
    }
    ctx->pc = 0x222624u;
    // 0x222624: 0x8f829f74  lw          $v0, -0x608C($gp)
    ctx->pc = 0x222624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x222628: 0x8f83b59c  lw          $v1, -0x4A64($gp)
    ctx->pc = 0x222628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x22262c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22262cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x222630: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x222630u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_222634:
    // 0x222634: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x222634u;
    {
        const bool branch_taken_0x222634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x222638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222634u;
        // 0x222638: 0x26e3c4a8  addiu       $v1, $s7, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222634) {
            ctx->pc = 0x2225D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2225d0;
        }
    }
    ctx->pc = 0x22263Cu;
    // 0x22263c: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x22263cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x222640: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x222640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x222644: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x222644u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x222648: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x222648u;
    {
        const bool branch_taken_0x222648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22264Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222648u;
        // 0x22264c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222648) {
            ctx->pc = 0x222668u;
            goto label_222668;
        }
    }
    ctx->pc = 0x222650u;
    // 0x222650: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x222650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x222654: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x222654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x222658: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x222658u;
    {
        const bool branch_taken_0x222658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22265Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222658u;
        // 0x22265c: 0x8f839f74  lw          $v1, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222658) {
            ctx->pc = 0x222668u;
            goto label_222668;
        }
    }
    ctx->pc = 0x222660u;
    // 0x222660: 0x8f82b59c  lw          $v0, -0x4A64($gp)
    ctx->pc = 0x222660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x222664: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x222664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_222668:
    // 0x222668: 0x4480c800  mtc1        $zero, $f25
    ctx->pc = 0x222668u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x22266c: 0xc0884f6  jal         func_2213D8
    ctx->pc = 0x22266Cu;
    SET_GPR_U32(ctx, 31, 0x222674u);
    ctx->pc = 0x222670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22266Cu;
    // 0x222670: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x22266Cu, 0x222674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222674u;
label_222674:
    // 0x222674: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x222674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x222678: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x222678u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x22267c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x22267cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x222680: 0xc79780a4  lwc1        $f23, -0x7F5C($gp)
    ctx->pc = 0x222680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x222684: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x222684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x222688: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x222688u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x22268c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x22268cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x222690: 0x2452c4a8  addiu       $s2, $v0, -0x3B58
    ctx->pc = 0x222690u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952104));
    // 0x222694: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x222694u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222698: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x222698u;
    {
        const bool branch_taken_0x222698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22269Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222698u;
        // 0x22269c: 0x27b1007c  addiu       $s1, $sp, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222698) {
            ctx->pc = 0x222704u;
            goto label_222704;
        }
    }
    ctx->pc = 0x2226A0u;
label_2226a0:
    // 0x2226a0: 0x4615c834  c.lt.s      $f25, $f21
    ctx->pc = 0x2226a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[25], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2226a4: 0x0  nop
    ctx->pc = 0x2226a4u;
    // NOP
    // 0x2226a8: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x2226A8u;
    {
        const bool branch_taken_0x2226a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2226ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2226A8u;
        // 0x2226ac: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2226a8) {
            ctx->pc = 0x2226FCu;
            goto label_2226fc;
        }
    }
    ctx->pc = 0x2226B0u;
    // 0x2226b0: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x2226B0u;
    SET_GPR_U32(ctx, 31, 0x2226B8u);
    ctx->pc = 0x2226B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2226B0u;
    // 0x2226b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x2226B0u, 0x2226B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2226B8u;
label_2226b8:
    // 0x2226b8: 0x4600c036  c.le.s      $f24, $f0
    ctx->pc = 0x2226b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[24], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2226bc: 0x0  nop
    ctx->pc = 0x2226bcu;
    // NOP
    // 0x2226c0: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x2226C0u;
    {
        const bool branch_taken_0x2226c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2226C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2226C0u;
        // 0x2226c4: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2226c0) {
            ctx->pc = 0x2226FCu;
            goto label_2226fc;
        }
    }
    ctx->pc = 0x2226C8u;
    // 0x2226c8: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x2226C8u;
    SET_GPR_U32(ctx, 31, 0x2226D0u);
    ctx->pc = 0x2226CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2226C8u;
    // 0x2226cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x2226C8u, 0x2226D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2226D0u;
label_2226d0:
    // 0x2226d0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2226d0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2226d4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2226d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2226d8: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x2226D8u;
    SET_GPR_U32(ctx, 31, 0x2226E0u);
    ctx->pc = 0x2226DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2226D8u;
    // 0x2226dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x2226D8u, 0x2226E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2226E0u;
label_2226e0:
    // 0x2226e0: 0x0  nop
    ctx->pc = 0x2226e0u;
    // NOP
    // 0x2226e4: 0x0  nop
    ctx->pc = 0x2226e4u;
    // NOP
    // 0x2226e8: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x2226e8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[0];
    // 0x2226ec: 0x4614b836  c.le.s      $f23, $f20
    ctx->pc = 0x2226ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[23], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2226f0: 0x0  nop
    ctx->pc = 0x2226f0u;
    // NOP
    // 0x2226f4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2226F4u;
    {
        const bool branch_taken_0x2226f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2226f4) {
            ctx->pc = 0x2226F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2226F4u;
            // 0x2226f8: 0xe6360000  swc1        $f22, 0x0($s1) (Delay Slot)
            { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2226FCu;
            goto label_2226fc;
        }
    }
    ctx->pc = 0x2226FCu;
label_2226fc:
    // 0x2226fc: 0x263100c0  addiu       $s1, $s1, 0xC0
    ctx->pc = 0x2226fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x222700: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x222700u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_222704:
    // 0x222704: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x222704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x222708: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x222708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x22270c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x22270cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x222710: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x222710u;
    {
        const bool branch_taken_0x222710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x222714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222710u;
        // 0x222714: 0x2a020004  slti        $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x222710) {
            ctx->pc = 0x222738u;
            goto label_222738;
        }
    }
    ctx->pc = 0x222718u;
    // 0x222718: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x222718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x22271c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x22271cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x222720: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x222720u;
    {
        const bool branch_taken_0x222720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x222720) {
            ctx->pc = 0x222724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x222720u;
            // 0x222724: 0x2a020004  slti        $v0, $s0, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x222738u;
            goto label_222738;
        }
    }
    ctx->pc = 0x222728u;
    // 0x222728: 0x8f829f74  lw          $v0, -0x608C($gp)
    ctx->pc = 0x222728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x22272c: 0x8f83b59c  lw          $v1, -0x4A64($gp)
    ctx->pc = 0x22272cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x222730: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x222730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x222734: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x222734u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_222738:
    // 0x222738: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x222738u;
    {
        const bool branch_taken_0x222738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22273Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222738u;
        // 0x22273c: 0x26e3c4a8  addiu       $v1, $s7, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222738) {
            ctx->pc = 0x2226A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2226a0;
        }
    }
    ctx->pc = 0x222740u;
    // 0x222740: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x222740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x222744: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x222744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x222748: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x222748u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x22274c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22274Cu;
    {
        const bool branch_taken_0x22274c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x222750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22274Cu;
        // 0x222750: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22274c) {
            ctx->pc = 0x22276Cu;
            goto label_22276c;
        }
    }
    ctx->pc = 0x222754u;
    // 0x222754: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x222754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x222758: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x222758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x22275c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22275Cu;
    {
        const bool branch_taken_0x22275c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x222760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22275Cu;
        // 0x222760: 0x8f839f74  lw          $v1, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22275c) {
            ctx->pc = 0x22276Cu;
            goto label_22276c;
        }
    }
    ctx->pc = 0x222764u;
    // 0x222764: 0x8f82b59c  lw          $v0, -0x4A64($gp)
    ctx->pc = 0x222764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x222768: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x222768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_22276c:
    // 0x22276c: 0xc0884a6  jal         func_221298
    ctx->pc = 0x22276Cu;
    SET_GPR_U32(ctx, 31, 0x222774u);
    ctx->pc = 0x222770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22276Cu;
    // 0x222770: 0x24040021  addiu       $a0, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221298u, 0x22276Cu, 0x222774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222774u;
label_222774:
    // 0x222774: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x222774u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222778: 0x6000029  bltz        $s0, . + 4 + (0x29 << 2)
    ctx->pc = 0x222778u;
    {
        const bool branch_taken_0x222778 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x22277Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222778u;
        // 0x22277c: 0x24040021  addiu       $a0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222778) {
            ctx->pc = 0x222820u;
            goto label_222820;
        }
    }
    ctx->pc = 0x222780u;
    // 0x222780: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x222780u;
    SET_GPR_U32(ctx, 31, 0x222788u);
    ctx->pc = 0x222784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222780u;
    // 0x222784: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x222780u, 0x222788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222788u;
label_222788:
    // 0x222788: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x222788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x22278c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22278cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x222790: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x222790u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222794: 0x0  nop
    ctx->pc = 0x222794u;
    // NOP
    // 0x222798: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x222798u;
    {
        const bool branch_taken_0x222798 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22279Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222798u;
        // 0x22279c: 0x240200c0  addiu       $v0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222798) {
            ctx->pc = 0x222820u;
            goto label_222820;
        }
    }
    ctx->pc = 0x2227A0u;
    // 0x2227a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2227a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2227a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2227a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2227a8: 0x2021818  mult        $v1, $s0, $v0
    ctx->pc = 0x2227a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2227ac: 0x8f869f74  lw          $a2, -0x608C($gp)
    ctx->pc = 0x2227acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x2227b0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2227b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2227b4: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x2227b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x2227b8: 0x18c00019  blez        $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x2227B8u;
    {
        const bool branch_taken_0x2227b8 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2227BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2227B8u;
        // 0x2227bc: 0xe4400080  swc1        $f0, 0x80($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2227b8) {
            ctx->pc = 0x222820u;
            goto label_222820;
        }
    }
    ctx->pc = 0x2227C0u;
    // 0x2227c0: 0xc79580a8  lwc1        $f21, -0x7F58($gp)
    ctx->pc = 0x2227c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2227c4: 0x27b10088  addiu       $s1, $sp, 0x88
    ctx->pc = 0x2227c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x2227c8: 0x3c0142f0  lui         $at, 0x42F0
    ctx->pc = 0x2227c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17136 << 16));
    // 0x2227cc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2227ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2227d0:
    // 0x2227d0: 0xc7809da8  lwc1        $f0, -0x6258($gp)
    ctx->pc = 0x2227d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2227d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2227d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2227d8: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2227d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2227dc: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2227dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2227e0: 0x0  nop
    ctx->pc = 0x2227e0u;
    // NOP
    // 0x2227e4: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2227E4u;
    {
        const bool branch_taken_0x2227e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2227E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2227E4u;
        // 0x2227e8: 0x24040021  addiu       $a0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2227e4) {
            ctx->pc = 0x222810u;
            goto label_222810;
        }
    }
    ctx->pc = 0x2227ECu;
    // 0x2227ec: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x2227ECu;
    SET_GPR_U32(ctx, 31, 0x2227F4u);
    ctx->pc = 0x2227F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2227ECu;
    // 0x2227f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x2227ECu, 0x2227F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2227F4u;
label_2227f4:
    // 0x2227f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2227f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2227f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2227f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2227fc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2227fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222800: 0x0  nop
    ctx->pc = 0x222800u;
    // NOP
    // 0x222804: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x222804u;
    {
        const bool branch_taken_0x222804 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x222804) {
            ctx->pc = 0x222808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x222804u;
            // 0x222808: 0xe6210000  swc1        $f1, 0x0($s1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x22280Cu;
            goto label_22280c;
        }
    }
    ctx->pc = 0x22280Cu;
label_22280c:
    // 0x22280c: 0x8f869f74  lw          $a2, -0x608C($gp)
    ctx->pc = 0x22280cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
label_222810:
    // 0x222810: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x222810u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x222814: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x222814u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x222818: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x222818u;
    {
        const bool branch_taken_0x222818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22281Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222818u;
        // 0x22281c: 0x263100c0  addiu       $s1, $s1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222818) {
            ctx->pc = 0x2227D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2227d0;
        }
    }
    ctx->pc = 0x222820u;
label_222820:
    // 0x222820: 0x26e3c4a8  addiu       $v1, $s7, -0x3B58
    ctx->pc = 0x222820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
    // 0x222824: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x222824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x222828: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x222828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x22282c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x22282cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x222830: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x222830u;
    {
        const bool branch_taken_0x222830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x222834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222830u;
        // 0x222834: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222830) {
            ctx->pc = 0x222850u;
            goto label_222850;
        }
    }
    ctx->pc = 0x222838u;
    // 0x222838: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x222838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x22283c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x22283cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x222840: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x222840u;
    {
        const bool branch_taken_0x222840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x222844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222840u;
        // 0x222844: 0x8f839f74  lw          $v1, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222840) {
            ctx->pc = 0x222850u;
            goto label_222850;
        }
    }
    ctx->pc = 0x222848u;
    // 0x222848: 0x8f82b59c  lw          $v0, -0x4A64($gp)
    ctx->pc = 0x222848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x22284c: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x22284cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_222850:
    // 0x222850: 0xc0884a6  jal         func_221298
    ctx->pc = 0x222850u;
    SET_GPR_U32(ctx, 31, 0x222858u);
    ctx->pc = 0x222854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222850u;
    // 0x222854: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221298u, 0x222850u, 0x222858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222858u;
label_222858:
    // 0x222858: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x222858u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22285c: 0x600002a  bltz        $s0, . + 4 + (0x2A << 2)
    ctx->pc = 0x22285Cu;
    {
        const bool branch_taken_0x22285c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x222860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22285Cu;
        // 0x222860: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22285c) {
            ctx->pc = 0x222908u;
            goto label_222908;
        }
    }
    ctx->pc = 0x222864u;
    // 0x222864: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x222864u;
    SET_GPR_U32(ctx, 31, 0x22286Cu);
    ctx->pc = 0x222868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222864u;
    // 0x222868: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x222864u, 0x22286Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22286Cu;
label_22286c:
    // 0x22286c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x22286cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x222870: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x222870u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x222874: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x222874u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222878: 0x0  nop
    ctx->pc = 0x222878u;
    // NOP
    // 0x22287c: 0x45000022  bc1f        . + 4 + (0x22 << 2)
    ctx->pc = 0x22287Cu;
    {
        const bool branch_taken_0x22287c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x222880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22287Cu;
        // 0x222880: 0x240200c0  addiu       $v0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22287c) {
            ctx->pc = 0x222908u;
            goto label_222908;
        }
    }
    ctx->pc = 0x222884u;
    // 0x222884: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x222884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x222888: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x222888u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22288c: 0x2021818  mult        $v1, $s0, $v0
    ctx->pc = 0x22288cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x222890: 0x8f869f74  lw          $a2, -0x608C($gp)
    ctx->pc = 0x222890u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x222894: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x222894u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222898: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x222898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x22289c: 0x18c0001a  blez        $a2, . + 4 + (0x1A << 2)
    ctx->pc = 0x22289Cu;
    {
        const bool branch_taken_0x22289c = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2228A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22289Cu;
        // 0x2228a0: 0xe4400084  swc1        $f0, 0x84($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22289c) {
            ctx->pc = 0x222908u;
            goto label_222908;
        }
    }
    ctx->pc = 0x2228A4u;
    // 0x2228a4: 0xc79580ac  lwc1        $f21, -0x7F54($gp)
    ctx->pc = 0x2228a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2228a8: 0x27b1008c  addiu       $s1, $sp, 0x8C
    ctx->pc = 0x2228a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x2228ac: 0x3c0142f0  lui         $at, 0x42F0
    ctx->pc = 0x2228acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17136 << 16));
    // 0x2228b0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2228b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2228b4: 0x0  nop
    ctx->pc = 0x2228b4u;
    // NOP
label_2228b8:
    // 0x2228b8: 0xc7809da8  lwc1        $f0, -0x6258($gp)
    ctx->pc = 0x2228b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2228bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2228bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2228c0: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2228c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2228c4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2228c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2228c8: 0x0  nop
    ctx->pc = 0x2228c8u;
    // NOP
    // 0x2228cc: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2228CCu;
    {
        const bool branch_taken_0x2228cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2228D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2228CCu;
        // 0x2228d0: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2228cc) {
            ctx->pc = 0x2228F8u;
            goto label_2228f8;
        }
    }
    ctx->pc = 0x2228D4u;
    // 0x2228d4: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x2228D4u;
    SET_GPR_U32(ctx, 31, 0x2228DCu);
    ctx->pc = 0x2228D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2228D4u;
    // 0x2228d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x2228D4u, 0x2228DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2228DCu;
label_2228dc:
    // 0x2228dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2228dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2228e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2228e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2228e4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2228e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2228e8: 0x0  nop
    ctx->pc = 0x2228e8u;
    // NOP
    // 0x2228ec: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2228ECu;
    {
        const bool branch_taken_0x2228ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2228ec) {
            ctx->pc = 0x2228F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2228ECu;
            // 0x2228f0: 0xe6210000  swc1        $f1, 0x0($s1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2228F4u;
            goto label_2228f4;
        }
    }
    ctx->pc = 0x2228F4u;
label_2228f4:
    // 0x2228f4: 0x8f869f74  lw          $a2, -0x608C($gp)
    ctx->pc = 0x2228f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
label_2228f8:
    // 0x2228f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2228f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2228fc: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x2228fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x222900: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x222900u;
    {
        const bool branch_taken_0x222900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x222904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222900u;
        // 0x222904: 0x263100c0  addiu       $s1, $s1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222900) {
            ctx->pc = 0x2228B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2228b8;
        }
    }
    ctx->pc = 0x222908u;
label_222908:
    // 0x222908: 0x26e3c4a8  addiu       $v1, $s7, -0x3B58
    ctx->pc = 0x222908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
    // 0x22290c: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x22290cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x222910: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x222910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x222914: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x222914u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x222918: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x222918u;
    {
        const bool branch_taken_0x222918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22291Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222918u;
        // 0x22291c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222918) {
            ctx->pc = 0x22293Cu;
            goto label_22293c;
        }
    }
    ctx->pc = 0x222920u;
    // 0x222920: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x222920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x222924: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x222924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x222928: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x222928u;
    {
        const bool branch_taken_0x222928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x222928) {
            ctx->pc = 0x22292Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x222928u;
            // 0x22292c: 0x2404002e  addiu       $a0, $zero, 0x2E (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
            ctx->in_delay_slot = false;
            ctx->pc = 0x222940u;
            goto label_222940;
        }
    }
    ctx->pc = 0x222930u;
    // 0x222930: 0x8f839f74  lw          $v1, -0x608C($gp)
    ctx->pc = 0x222930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x222934: 0x8f82b59c  lw          $v0, -0x4A64($gp)
    ctx->pc = 0x222934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x222938: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x222938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_22293c:
    // 0x22293c: 0x2404002e  addiu       $a0, $zero, 0x2E
    ctx->pc = 0x22293cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_222940:
    // 0x222940: 0xc0884f6  jal         func_2213D8
    ctx->pc = 0x222940u;
    SET_GPR_U32(ctx, 31, 0x222948u);
    ctx->pc = 0x222944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222940u;
    // 0x222944: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x222940u, 0x222948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222948u;
label_222948:
    // 0x222948: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x222948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x22294c: 0x8f84b59c  lw          $a0, -0x4A64($gp)
    ctx->pc = 0x22294cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x222950: 0x2447c4a8  addiu       $a3, $v0, -0x3B58
    ctx->pc = 0x222950u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952104));
    // 0x222954: 0x8f859f74  lw          $a1, -0x608C($gp)
    ctx->pc = 0x222954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x222958: 0x8ce30048  lw          $v1, 0x48($a3)
    ctx->pc = 0x222958u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x32C4F0u));
    // 0x22295c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x22295cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x222960: 0x2442e6a8  addiu       $v0, $v0, -0x1958
    ctx->pc = 0x222960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960808));
    // 0x222964: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x222964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x222968: 0x2463fffa  addiu       $v1, $v1, -0x6
    ctx->pc = 0x222968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x22296c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22296cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x222970: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x222970u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x222974: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x222974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x222978: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x222978u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x22297c: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x22297cu;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x222980: 0x244600b8  addiu       $a2, $v0, 0xB8
    ctx->pc = 0x222980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
    // 0x222984: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x222984u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x222988: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x222988u;
    {
        const bool branch_taken_0x222988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22298Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222988u;
        // 0x22298c: 0x27a40094  addiu       $a0, $sp, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222988) {
            ctx->pc = 0x2229E0u;
            goto label_2229e0;
        }
    }
    ctx->pc = 0x222990u;
label_222990:
    // 0x222990: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x222990u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222994: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x222994u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222998: 0x0  nop
    ctx->pc = 0x222998u;
    // NOP
    // 0x22299c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x22299Cu;
    {
        const bool branch_taken_0x22299c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2229A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22299Cu;
        // 0x2229a0: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22299c) {
            ctx->pc = 0x2229B0u;
            goto label_2229b0;
        }
    }
    ctx->pc = 0x2229A4u;
    // 0x2229a4: 0x0  nop
    ctx->pc = 0x2229a4u;
    // NOP
    // 0x2229a8: 0x0  nop
    ctx->pc = 0x2229a8u;
    // NOP
    // 0x2229ac: 0x46030803  div.s       $f0, $f1, $f3
    ctx->pc = 0x2229acu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[3];
label_2229b0:
    // 0x2229b0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2229b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2229b4: 0x0  nop
    ctx->pc = 0x2229b4u;
    // NOP
    // 0x2229b8: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x2229B8u;
    {
        const bool branch_taken_0x2229b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2229b8) {
            ctx->pc = 0x2229BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2229B8u;
            // 0x2229bc: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2229D8u;
            goto label_2229d8;
        }
    }
    ctx->pc = 0x2229C0u;
    // 0x2229c0: 0x0  nop
    ctx->pc = 0x2229c0u;
    // NOP
    // 0x2229c4: 0x0  nop
    ctx->pc = 0x2229c4u;
    // NOP
    // 0x2229c8: 0x46002803  div.s       $f0, $f5, $f0
    ctx->pc = 0x2229c8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[5] * 0.0f); } else ctx->f[0] = ctx->f[5] / ctx->f[0];
    // 0x2229cc: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2229ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2229d0: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2229d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2229d4: 0x248400c0  addiu       $a0, $a0, 0xC0
    ctx->pc = 0x2229d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
label_2229d8:
    // 0x2229d8: 0x24c60558  addiu       $a2, $a2, 0x558
    ctx->pc = 0x2229d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1368));
    // 0x2229dc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2229dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2229e0:
    // 0x2229e0: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2229E0u;
    {
        const bool branch_taken_0x2229e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2229E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2229E0u;
        // 0x2229e4: 0x2a020004  slti        $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2229e0) {
            ctx->pc = 0x2229FCu;
            goto label_2229fc;
        }
    }
    ctx->pc = 0x2229E8u;
    // 0x2229e8: 0x8ce20050  lw          $v0, 0x50($a3)
    ctx->pc = 0x2229e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x2229ec: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2229ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2229f0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2229F0u;
    {
        const bool branch_taken_0x2229f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2229F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2229F0u;
        // 0x2229f4: 0x2a020004  slti        $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2229f0) {
            ctx->pc = 0x2229FCu;
            goto label_2229fc;
        }
    }
    ctx->pc = 0x2229F8u;
    // 0x2229f8: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x2229f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_2229fc:
    // 0x2229fc: 0x5440ffe4  bnel        $v0, $zero, . + 4 + (-0x1C << 2)
    ctx->pc = 0x2229FCu;
    {
        const bool branch_taken_0x2229fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2229fc) {
            ctx->pc = 0x222A00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2229FCu;
            // 0x222a00: 0xc4c10000  lwc1        $f1, 0x0($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x222990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_222990;
        }
    }
    ctx->pc = 0x222A04u;
    // 0x222a04: 0x26e3c4a8  addiu       $v1, $s7, -0x3B58
    ctx->pc = 0x222a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
    // 0x222a08: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x222a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x222a0c: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x222a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x222a10: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x222a10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x222a14: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x222A14u;
    {
        const bool branch_taken_0x222a14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x222A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222A14u;
        // 0x222a18: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222a14) {
            ctx->pc = 0x222A3Cu;
            goto label_222a3c;
        }
    }
    ctx->pc = 0x222A1Cu;
    // 0x222a1c: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x222a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x222a20: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x222a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x222a24: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x222A24u;
    {
        const bool branch_taken_0x222a24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x222A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222A24u;
        // 0x222a28: 0x2404002e  addiu       $a0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222a24) {
            ctx->pc = 0x222A40u;
            goto label_222a40;
        }
    }
    ctx->pc = 0x222A2Cu;
    // 0x222a2c: 0x8f839f74  lw          $v1, -0x608C($gp)
    ctx->pc = 0x222a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x222a30: 0x8f82b59c  lw          $v0, -0x4A64($gp)
    ctx->pc = 0x222a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x222a34: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x222A34u;
    {
        const bool branch_taken_0x222a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222A34u;
        // 0x222a38: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222a34) {
            ctx->pc = 0x222A40u;
            goto label_222a40;
        }
    }
    ctx->pc = 0x222A3Cu;
label_222a3c:
    // 0x222a3c: 0x2404002e  addiu       $a0, $zero, 0x2E
    ctx->pc = 0x222a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_222a40:
    // 0x222a40: 0xc0884f6  jal         func_2213D8
    ctx->pc = 0x222A40u;
    SET_GPR_U32(ctx, 31, 0x222A48u);
    ctx->pc = 0x222A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222A40u;
    // 0x222a44: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x222A40u, 0x222A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222A48u;
label_222a48:
    // 0x222a48: 0x8f869f74  lw          $a2, -0x608C($gp)
    ctx->pc = 0x222a48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x222a4c: 0x18c00027  blez        $a2, . + 4 + (0x27 << 2)
    ctx->pc = 0x222A4Cu;
    {
        const bool branch_taken_0x222a4c = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x222A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222A4Cu;
        // 0x222a50: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x222a4c) {
            ctx->pc = 0x222AECu;
            goto label_222aec;
        }
    }
    ctx->pc = 0x222A54u;
    // 0x222a54: 0x3c120033  lui         $s2, 0x33
    ctx->pc = 0x222a54u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
    // 0x222a58: 0x24030558  addiu       $v1, $zero, 0x558
    ctx->pc = 0x222a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1368));
    // 0x222a5c: 0x0  nop
    ctx->pc = 0x222a5cu;
    // NOP
label_222a60:
    // 0x222a60: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x222a60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x222a64: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x222a64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x222a68: 0x2642e6a8  addiu       $v0, $s2, -0x1958
    ctx->pc = 0x222a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294960808));
    // 0x222a6c: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x222a6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222a70: 0x4600a046  mov.s       $f1, $f20
    ctx->pc = 0x222a70u;
    ctx->f[1] = FPU_MOV_S(ctx->f[20]);
    // 0x222a74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x222a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x222a78: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x222A78u;
    {
        const bool branch_taken_0x222a78 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x222A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222A78u;
        // 0x222a7c: 0xc44000b8  lwc1        $f0, 0xB8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x222a78) {
            ctx->pc = 0x222A8Cu;
            goto label_222a8c;
        }
    }
    ctx->pc = 0x222A80u;
    // 0x222a80: 0x0  nop
    ctx->pc = 0x222a80u;
    // NOP
    // 0x222a84: 0x0  nop
    ctx->pc = 0x222a84u;
    // NOP
    // 0x222a88: 0x46150503  div.s       $f20, $f0, $f21
    ctx->pc = 0x222a88u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[20] = ctx->f[0] / ctx->f[21];
label_222a8c:
    // 0x222a8c: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x222a8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222a90: 0x0  nop
    ctx->pc = 0x222a90u;
    // NOP
    // 0x222a94: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x222A94u;
    {
        const bool branch_taken_0x222a94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x222A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222A94u;
        // 0x222a98: 0x2404003b  addiu       $a0, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222a94) {
            ctx->pc = 0x222ADCu;
            goto label_222adc;
        }
    }
    ctx->pc = 0x222A9Cu;
    // 0x222a9c: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x222A9Cu;
    SET_GPR_U32(ctx, 31, 0x222AA4u);
    ctx->pc = 0x222AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222A9Cu;
    // 0x222aa0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x222A9Cu, 0x222AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222AA4u;
label_222aa4:
    // 0x222aa4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x222aa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x222aa8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x222aa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x222aac: 0x240200c0  addiu       $v0, $zero, 0xC0
    ctx->pc = 0x222aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x222ab0: 0x3c014282  lui         $at, 0x4282
    ctx->pc = 0x222ab0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17026 << 16));
    // 0x222ab4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x222ab4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x222ab8: 0x2021818  mult        $v1, $s0, $v0
    ctx->pc = 0x222ab8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x222abc: 0x0  nop
    ctx->pc = 0x222abcu;
    // NOP
    // 0x222ac0: 0x0  nop
    ctx->pc = 0x222ac0u;
    // NOP
    // 0x222ac4: 0x46140843  div.s       $f1, $f1, $f20
    ctx->pc = 0x222ac4u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[20];
    // 0x222ac8: 0x8f869f74  lw          $a2, -0x608C($gp)
    ctx->pc = 0x222ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x222acc: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x222accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x222ad0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x222ad0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x222ad4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x222ad4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x222ad8: 0xe4410090  swc1        $f1, 0x90($v0)
    ctx->pc = 0x222ad8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
label_222adc:
    // 0x222adc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x222adcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x222ae0: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x222ae0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x222ae4: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x222AE4u;
    {
        const bool branch_taken_0x222ae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x222AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222AE4u;
        // 0x222ae8: 0x24030558  addiu       $v1, $zero, 0x558 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222ae4) {
            ctx->pc = 0x222A60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_222a60;
        }
    }
    ctx->pc = 0x222AECu;
label_222aec:
    // 0x222aec: 0x26e3c4a8  addiu       $v1, $s7, -0x3B58
    ctx->pc = 0x222aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
    // 0x222af0: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x222af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x222af4: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x222af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x222af8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x222af8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x222afc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x222AFCu;
    {
        const bool branch_taken_0x222afc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x222B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222AFCu;
        // 0x222b00: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222afc) {
            ctx->pc = 0x222B20u;
            goto label_222b20;
        }
    }
    ctx->pc = 0x222B04u;
    // 0x222b04: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x222b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x222b08: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x222b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x222b0c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x222B0Cu;
    {
        const bool branch_taken_0x222b0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x222B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222B0Cu;
        // 0x222b10: 0x2404002e  addiu       $a0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222b0c) {
            ctx->pc = 0x222B24u;
            goto label_222b24;
        }
    }
    ctx->pc = 0x222B14u;
    // 0x222b14: 0x8f82b59c  lw          $v0, -0x4A64($gp)
    ctx->pc = 0x222b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x222b18: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x222B18u;
    {
        const bool branch_taken_0x222b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222B18u;
        // 0x222b1c: 0xc22821  addu        $a1, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222b18) {
            ctx->pc = 0x222B24u;
            goto label_222b24;
        }
    }
    ctx->pc = 0x222B20u;
label_222b20:
    // 0x222b20: 0x2404002e  addiu       $a0, $zero, 0x2E
    ctx->pc = 0x222b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_222b24:
    // 0x222b24: 0xc0884f6  jal         func_2213D8
    ctx->pc = 0x222B24u;
    SET_GPR_U32(ctx, 31, 0x222B2Cu);
    ctx->pc = 0x222B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222B24u;
    // 0x222b28: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x222B24u, 0x222B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222B2Cu;
label_222b2c:
    // 0x222b2c: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x222b2cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x222b30: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x222B30u;
    {
        const bool branch_taken_0x222b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222B30u;
        // 0x222b34: 0x8f869f74  lw          $a2, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222b30) {
            ctx->pc = 0x222B54u;
            goto label_222b54;
        }
    }
    ctx->pc = 0x222B38u;
label_222b38:
    // 0x222b38: 0x3c120033  lui         $s2, 0x33
    ctx->pc = 0x222b38u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
    // 0x222b3c: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x222b3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x222b40: 0x2642e6a8  addiu       $v0, $s2, -0x1958
    ctx->pc = 0x222b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294960808));
    // 0x222b44: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x222b44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x222b48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x222b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x222b4c: 0xc44000b8  lwc1        $f0, 0xB8($v0)
    ctx->pc = 0x222b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x222b50: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x222b50u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_222b54:
    // 0x222b54: 0x26e3c4a8  addiu       $v1, $s7, -0x3B58
    ctx->pc = 0x222b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
    // 0x222b58: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x222b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x222b5c: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x222b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x222b60: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x222b60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x222b64: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x222B64u;
    {
        const bool branch_taken_0x222b64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x222B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222B64u;
        // 0x222b68: 0x2a020004  slti        $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x222b64) {
            ctx->pc = 0x222B88u;
            goto label_222b88;
        }
    }
    ctx->pc = 0x222B6Cu;
    // 0x222b6c: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x222b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x222b70: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x222b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x222b74: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x222B74u;
    {
        const bool branch_taken_0x222b74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x222b74) {
            ctx->pc = 0x222B78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x222B74u;
            // 0x222b78: 0x2a020004  slti        $v0, $s0, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x222B88u;
            goto label_222b88;
        }
    }
    ctx->pc = 0x222B7Cu;
    // 0x222b7c: 0x8f82b59c  lw          $v0, -0x4A64($gp)
    ctx->pc = 0x222b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x222b80: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x222b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x222b84: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x222b84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_222b88:
    // 0x222b88: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x222B88u;
    {
        const bool branch_taken_0x222b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x222B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222B88u;
        // 0x222b8c: 0x24030558  addiu       $v1, $zero, 0x558 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222b88) {
            ctx->pc = 0x222B38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_222b38;
        }
    }
    ctx->pc = 0x222B90u;
    // 0x222b90: 0x26e3c4a8  addiu       $v1, $s7, -0x3B58
    ctx->pc = 0x222b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
    // 0x222b94: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x222b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x222b98: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x222b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x222b9c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x222b9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x222ba0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x222BA0u;
    {
        const bool branch_taken_0x222ba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x222ba0) {
            ctx->pc = 0x222BD8u;
            goto label_222bd8;
        }
    }
    ctx->pc = 0x222BA8u;
    // 0x222ba8: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x222ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x222bac: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x222bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x222bb0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x222BB0u;
    {
        const bool branch_taken_0x222bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x222BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222BB0u;
        // 0x222bb4: 0x8f82b59c  lw          $v0, -0x4A64($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222bb0) {
            ctx->pc = 0x222BD8u;
            goto label_222bd8;
        }
    }
    ctx->pc = 0x222BB8u;
    // 0x222bb8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x222bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x222bbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x222bbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222bc0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x222bc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x222bc4: 0x0  nop
    ctx->pc = 0x222bc4u;
    // NOP
    // 0x222bc8: 0x0  nop
    ctx->pc = 0x222bc8u;
    // NOP
    // 0x222bcc: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x222bccu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[0];
    // 0x222bd0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x222BD0u;
    {
        const bool branch_taken_0x222bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222BD0u;
        // 0x222bd4: 0x3c030033  lui         $v1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222bd0) {
            ctx->pc = 0x222BE8u;
            goto label_222be8;
        }
    }
    ctx->pc = 0x222BD8u;
label_222bd8:
    // 0x222bd8: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x222bd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x222bdc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x222bdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222be0: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x222be0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x222be4: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x222be4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_222be8:
    // 0x222be8: 0x8f84b59c  lw          $a0, -0x4A64($gp)
    ctx->pc = 0x222be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x222bec: 0x2467c4a8  addiu       $a3, $v1, -0x3B58
    ctx->pc = 0x222becu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952104));
    // 0x222bf0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x222bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x222bf4: 0x8ce30048  lw          $v1, 0x48($a3)
    ctx->pc = 0x222bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 72)));
    // 0x222bf8: 0xc44021  addu        $t0, $a2, $a0
    ctx->pc = 0x222bf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x222bfc: 0x2442e6a8  addiu       $v0, $v0, -0x1958
    ctx->pc = 0x222bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960808));
    // 0x222c00: 0xc78380b0  lwc1        $f3, -0x7F50($gp)
    ctx->pc = 0x222c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x222c04: 0x2463fffa  addiu       $v1, $v1, -0x6
    ctx->pc = 0x222c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x222c08: 0x244500b8  addiu       $a1, $v0, 0xB8
    ctx->pc = 0x222c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
    // 0x222c0c: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x222c0cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x222c10: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x222c10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222c14: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x222C14u;
    {
        const bool branch_taken_0x222c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222C14u;
        // 0x222c18: 0x27a400e8  addiu       $a0, $sp, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222c14) {
            ctx->pc = 0x222C58u;
            goto label_222c58;
        }
    }
    ctx->pc = 0x222C1Cu;
    // 0x222c1c: 0x0  nop
    ctx->pc = 0x222c1cu;
    // NOP
label_222c20:
    // 0x222c20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x222c20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222c24: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x222c24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222c28: 0x0  nop
    ctx->pc = 0x222c28u;
    // NOP
    // 0x222c2c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x222C2Cu;
    {
        const bool branch_taken_0x222c2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x222C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222C2Cu;
        // 0x222c30: 0xc4a10000  lwc1        $f1, 0x0($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x222c2c) {
            ctx->pc = 0x222C40u;
            goto label_222c40;
        }
    }
    ctx->pc = 0x222C34u;
    // 0x222c34: 0x0  nop
    ctx->pc = 0x222c34u;
    // NOP
    // 0x222c38: 0x0  nop
    ctx->pc = 0x222c38u;
    // NOP
    // 0x222c3c: 0x46020803  div.s       $f0, $f1, $f2
    ctx->pc = 0x222c3cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[2];
label_222c40:
    // 0x222c40: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x222c40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x222c44: 0x24a50558  addiu       $a1, $a1, 0x558
    ctx->pc = 0x222c44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1368));
    // 0x222c48: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x222c48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x222c4c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x222c4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x222c50: 0xe480ffb0  swc1        $f0, -0x50($a0)
    ctx->pc = 0x222c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294967216), bits); }
    // 0x222c54: 0x248400c0  addiu       $a0, $a0, 0xC0
    ctx->pc = 0x222c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
label_222c58:
    // 0x222c58: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x222C58u;
    {
        const bool branch_taken_0x222c58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x222C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222C58u;
        // 0x222c5c: 0x2a020004  slti        $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x222c58) {
            ctx->pc = 0x222C74u;
            goto label_222c74;
        }
    }
    ctx->pc = 0x222C60u;
    // 0x222c60: 0x8ce20050  lw          $v0, 0x50($a3)
    ctx->pc = 0x222c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x222c64: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x222c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x222c68: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x222C68u;
    {
        const bool branch_taken_0x222c68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x222C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222C68u;
        // 0x222c6c: 0x2a020004  slti        $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x222c68) {
            ctx->pc = 0x222C74u;
            goto label_222c74;
        }
    }
    ctx->pc = 0x222C70u;
    // 0x222c70: 0x208102a  slt         $v0, $s0, $t0
    ctx->pc = 0x222c70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_222c74:
    // 0x222c74: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x222C74u;
    {
        const bool branch_taken_0x222c74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x222C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222C74u;
        // 0x222c78: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222c74) {
            ctx->pc = 0x222C20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_222c20;
        }
    }
    ctx->pc = 0x222C7Cu;
    // 0x222c7c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x222c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x222c80: 0x8f84b59c  lw          $a0, -0x4A64($gp)
    ctx->pc = 0x222c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x222c84: 0x2467c4a8  addiu       $a3, $v1, -0x3B58
    ctx->pc = 0x222c84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952104));
    // 0x222c88: 0x8ce30048  lw          $v1, 0x48($a3)
    ctx->pc = 0x222c88u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x32C4F0u));
    // 0x222c8c: 0xc44021  addu        $t0, $a2, $a0
    ctx->pc = 0x222c8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x222c90: 0x2442e6a8  addiu       $v0, $v0, -0x1958
    ctx->pc = 0x222c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960808));
    // 0x222c94: 0xc78180b4  lwc1        $f1, -0x7F4C($gp)
    ctx->pc = 0x222c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x222c98: 0x2463fffa  addiu       $v1, $v1, -0x6
    ctx->pc = 0x222c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x222c9c: 0x244500c4  addiu       $a1, $v0, 0xC4
    ctx->pc = 0x222c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 196));
    // 0x222ca0: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x222ca0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x222ca4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x222ca4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222ca8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x222CA8u;
    {
        const bool branch_taken_0x222ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222CA8u;
        // 0x222cac: 0x27a4009c  addiu       $a0, $sp, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222ca8) {
            ctx->pc = 0x222CC4u;
            goto label_222cc4;
        }
    }
    ctx->pc = 0x222CB0u;
label_222cb0:
    // 0x222cb0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x222cb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x222cb4: 0x24a50558  addiu       $a1, $a1, 0x558
    ctx->pc = 0x222cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1368));
    // 0x222cb8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x222cb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x222cbc: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x222cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x222cc0: 0x248400c0  addiu       $a0, $a0, 0xC0
    ctx->pc = 0x222cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
label_222cc4:
    // 0x222cc4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x222CC4u;
    {
        const bool branch_taken_0x222cc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x222CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222CC4u;
        // 0x222cc8: 0x2a020004  slti        $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x222cc4) {
            ctx->pc = 0x222CE0u;
            goto label_222ce0;
        }
    }
    ctx->pc = 0x222CCCu;
    // 0x222ccc: 0x8ce20050  lw          $v0, 0x50($a3)
    ctx->pc = 0x222cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x222cd0: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x222cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x222cd4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x222CD4u;
    {
        const bool branch_taken_0x222cd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x222CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222CD4u;
        // 0x222cd8: 0x2a020004  slti        $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x222cd4) {
            ctx->pc = 0x222CE0u;
            goto label_222ce0;
        }
    }
    ctx->pc = 0x222CDCu;
    // 0x222cdc: 0x208102a  slt         $v0, $s0, $t0
    ctx->pc = 0x222cdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_222ce0:
    // 0x222ce0: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x222CE0u;
    {
        const bool branch_taken_0x222ce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x222ce0) {
            ctx->pc = 0x222CE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x222CE0u;
            // 0x222ce4: 0xc4a00000  lwc1        $f0, 0x0($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x222CB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_222cb0;
        }
    }
    ctx->pc = 0x222CE8u;
    // 0x222ce8: 0x18c00011  blez        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x222CE8u;
    {
        const bool branch_taken_0x222ce8 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x222CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222CE8u;
        // 0x222cec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222ce8) {
            ctx->pc = 0x222D30u;
            goto label_222d30;
        }
    }
    ctx->pc = 0x222CF0u;
    // 0x222cf0: 0x3c120033  lui         $s2, 0x33
    ctx->pc = 0x222cf0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
    // 0x222cf4: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x222cf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_222cf8:
    // 0x222cf8: 0x24020558  addiu       $v0, $zero, 0x558
    ctx->pc = 0x222cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1368));
    // 0x222cfc: 0x2643e6a8  addiu       $v1, $s2, -0x1958
    ctx->pc = 0x222cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294960808));
    // 0x222d00: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x222d00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x222d04: 0x240400c0  addiu       $a0, $zero, 0xC0
    ctx->pc = 0x222d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x222d08: 0x2042818  mult        $a1, $s0, $a0
    ctx->pc = 0x222d08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x222d0c: 0xc78180b8  lwc1        $f1, -0x7F48($gp)
    ctx->pc = 0x222d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x222d10: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x222d10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x222d14: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x222d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x222d18: 0xc46000cc  lwc1        $f0, 0xCC($v1)
    ctx->pc = 0x222d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x222d1c: 0xa72021  addu        $a0, $a1, $a3
    ctx->pc = 0x222d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x222d20: 0x206282a  slt         $a1, $s0, $a2
    ctx->pc = 0x222d20u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x222d24: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x222d24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x222d28: 0x14a0fff3  bnez        $a1, . + 4 + (-0xD << 2)
    ctx->pc = 0x222D28u;
    {
        const bool branch_taken_0x222d28 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x222D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222D28u;
        // 0x222d2c: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x222d28) {
            ctx->pc = 0x222CF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_222cf8;
        }
    }
    ctx->pc = 0x222D30u;
label_222d30:
    // 0x222d30: 0x18c00011  blez        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x222D30u;
    {
        const bool branch_taken_0x222d30 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x222D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222D30u;
        // 0x222d34: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222d30) {
            ctx->pc = 0x222D78u;
            goto label_222d78;
        }
    }
    ctx->pc = 0x222D38u;
    // 0x222d38: 0xc79580bc  lwc1        $f21, -0x7F44($gp)
    ctx->pc = 0x222d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x222d3c: 0x27b100a4  addiu       $s1, $sp, 0xA4
    ctx->pc = 0x222d3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x222d40: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x222d40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x222d44: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x222d44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_222d48:
    // 0x222d48: 0x24040035  addiu       $a0, $zero, 0x35
    ctx->pc = 0x222d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x222d4c: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x222D4Cu;
    SET_GPR_U32(ctx, 31, 0x222D54u);
    ctx->pc = 0x222D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222D4Cu;
    // 0x222d50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x222D4Cu, 0x222D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222D54u;
label_222d54:
    // 0x222d54: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x222d54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222d58: 0x0  nop
    ctx->pc = 0x222d58u;
    // NOP
    // 0x222d5c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x222D5Cu;
    {
        const bool branch_taken_0x222d5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x222d5c) {
            ctx->pc = 0x222D60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x222D5Cu;
            // 0x222d60: 0xe6340000  swc1        $f20, 0x0($s1) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x222D64u;
            goto label_222d64;
        }
    }
    ctx->pc = 0x222D64u;
label_222d64:
    // 0x222d64: 0x8f869f74  lw          $a2, -0x608C($gp)
    ctx->pc = 0x222d64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x222d68: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x222d68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x222d6c: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x222d6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x222d70: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x222D70u;
    {
        const bool branch_taken_0x222d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x222D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222D70u;
        // 0x222d74: 0x263100c0  addiu       $s1, $s1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222d70) {
            ctx->pc = 0x222D48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_222d48;
        }
    }
    ctx->pc = 0x222D78u;
label_222d78:
    // 0x222d78: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x222d78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x222d7c: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x222D7Cu;
    {
        const bool branch_taken_0x222d7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x222d7c) {
            ctx->pc = 0x222DDCu;
            goto label_222ddc;
        }
    }
    ctx->pc = 0x222D84u;
    // 0x222d84: 0x18c00015  blez        $a2, . + 4 + (0x15 << 2)
    ctx->pc = 0x222D84u;
    {
        const bool branch_taken_0x222d84 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x222D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222D84u;
        // 0x222d88: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222d84) {
            ctx->pc = 0x222DDCu;
            goto label_222ddc;
        }
    }
    ctx->pc = 0x222D8Cu;
    // 0x222d8c: 0x3c120033  lui         $s2, 0x33
    ctx->pc = 0x222d8cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
    // 0x222d90: 0x27b100ac  addiu       $s1, $sp, 0xAC
    ctx->pc = 0x222d90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x222d94: 0x0  nop
    ctx->pc = 0x222d94u;
    // NOP
label_222d98:
    // 0x222d98: 0x24020558  addiu       $v0, $zero, 0x558
    ctx->pc = 0x222d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1368));
    // 0x222d9c: 0x2643e6a8  addiu       $v1, $s2, -0x1958
    ctx->pc = 0x222d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294960808));
    // 0x222da0: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x222da0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x222da4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x222da4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x222da8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x222da8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x222dac: 0x240400c0  addiu       $a0, $zero, 0xC0
    ctx->pc = 0x222dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x222db0: 0xc78280c0  lwc1        $f2, -0x7F40($gp)
    ctx->pc = 0x222db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x222db4: 0x2042818  mult        $a1, $s0, $a0
    ctx->pc = 0x222db4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x222db8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x222db8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x222dbc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x222dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x222dc0: 0xc46000e8  lwc1        $f0, 0xE8($v1)
    ctx->pc = 0x222dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x222dc4: 0xb12021  addu        $a0, $a1, $s1
    ctx->pc = 0x222dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x222dc8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x222dc8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x222dcc: 0x206282a  slt         $a1, $s0, $a2
    ctx->pc = 0x222dccu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x222dd0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x222dd0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x222dd4: 0x14a0fff0  bnez        $a1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x222DD4u;
    {
        const bool branch_taken_0x222dd4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x222DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222DD4u;
        // 0x222dd8: 0xe4810000  swc1        $f1, 0x0($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x222dd4) {
            ctx->pc = 0x222D98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_222d98;
        }
    }
    ctx->pc = 0x222DDCu;
label_222ddc:
    // 0x222ddc: 0x18c00032  blez        $a2, . + 4 + (0x32 << 2)
    ctx->pc = 0x222DDCu;
    {
        const bool branch_taken_0x222ddc = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x222DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222DDCu;
        // 0x222de0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222ddc) {
            ctx->pc = 0x222EA8u;
            goto label_222ea8;
        }
    }
    ctx->pc = 0x222DE4u;
    // 0x222de4: 0x27b100ac  addiu       $s1, $sp, 0xAC
    ctx->pc = 0x222de4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x222de8: 0x240200c0  addiu       $v0, $zero, 0xC0
    ctx->pc = 0x222de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x222dec: 0x0  nop
    ctx->pc = 0x222decu;
    // NOP
label_222df0:
    // 0x222df0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x222df0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x222df4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x222df4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x222df8: 0x2021818  mult        $v1, $s0, $v0
    ctx->pc = 0x222df8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x222dfc: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x222dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x222e00: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x222e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x222e04: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x222e04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222e08: 0x0  nop
    ctx->pc = 0x222e08u;
    // NOP
    // 0x222e0c: 0x45000022  bc1f        . + 4 + (0x22 << 2)
    ctx->pc = 0x222E0Cu;
    {
        const bool branch_taken_0x222e0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x222E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222E0Cu;
        // 0x222e10: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222e0c) {
            ctx->pc = 0x222E98u;
            goto label_222e98;
        }
    }
    ctx->pc = 0x222E14u;
    // 0x222e14: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x222E14u;
    SET_GPR_U32(ctx, 31, 0x222E1Cu);
    ctx->pc = 0x222E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222E14u;
    // 0x222e18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x222E14u, 0x222E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222E1Cu;
label_222e1c:
    // 0x222e1c: 0x26e3c4a8  addiu       $v1, $s7, -0x3B58
    ctx->pc = 0x222e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
    // 0x222e20: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x222e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x222e24: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x222e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x222e28: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x222e28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x222e2c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x222E2Cu;
    {
        const bool branch_taken_0x222e2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x222E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222E2Cu;
        // 0x222e30: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x222e2c) {
            ctx->pc = 0x222E54u;
            goto label_222e54;
        }
    }
    ctx->pc = 0x222E34u;
    // 0x222e34: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x222e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x222e38: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x222e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x222e3c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x222E3Cu;
    {
        const bool branch_taken_0x222e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x222E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222E3Cu;
        // 0x222e40: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222e3c) {
            ctx->pc = 0x222E58u;
            goto label_222e58;
        }
    }
    ctx->pc = 0x222E44u;
    // 0x222e44: 0x8f839f74  lw          $v1, -0x608C($gp)
    ctx->pc = 0x222e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x222e48: 0x8f82b59c  lw          $v0, -0x4A64($gp)
    ctx->pc = 0x222e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x222e4c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x222E4Cu;
    {
        const bool branch_taken_0x222e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222E4Cu;
        // 0x222e50: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222e4c) {
            ctx->pc = 0x222E58u;
            goto label_222e58;
        }
    }
    ctx->pc = 0x222E54u;
label_222e54:
    // 0x222e54: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x222e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_222e58:
    // 0x222e58: 0xc0884f6  jal         func_2213D8
    ctx->pc = 0x222E58u;
    SET_GPR_U32(ctx, 31, 0x222E60u);
    ctx->pc = 0x222E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222E58u;
    // 0x222e5c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x222E58u, 0x222E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222E60u;
label_222e60:
    // 0x222e60: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x222e60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222e64: 0x0  nop
    ctx->pc = 0x222e64u;
    // NOP
    // 0x222e68: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x222E68u;
    {
        const bool branch_taken_0x222e68 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x222E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222E68u;
        // 0x222e6c: 0x240200c0  addiu       $v0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222e68) {
            ctx->pc = 0x222E94u;
            goto label_222e94;
        }
    }
    ctx->pc = 0x222E70u;
    // 0x222e70: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x222e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x222e74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x222e74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222e78: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x222e78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x222e7c: 0x8f869f74  lw          $a2, -0x608C($gp)
    ctx->pc = 0x222e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x222e80: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x222e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x222e84: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x222e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222e88: 0xe46000a8  swc1        $f0, 0xA8($v1)
    ctx->pc = 0x222e88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 168), bits); }
    // 0x222e8c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x222E8Cu;
    {
        const bool branch_taken_0x222e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222E8Cu;
        // 0x222e90: 0xe48000e4  swc1        $f0, 0xE4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 228), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x222e8c) {
            ctx->pc = 0x222E98u;
            goto label_222e98;
        }
    }
    ctx->pc = 0x222E94u;
label_222e94:
    // 0x222e94: 0x8f869f74  lw          $a2, -0x608C($gp)
    ctx->pc = 0x222e94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
label_222e98:
    // 0x222e98: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x222e98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x222e9c: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x222e9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x222ea0: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x222EA0u;
    {
        const bool branch_taken_0x222ea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x222EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222EA0u;
        // 0x222ea4: 0x240200c0  addiu       $v0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222ea0) {
            ctx->pc = 0x222DF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_222df0;
        }
    }
    ctx->pc = 0x222EA8u;
label_222ea8:
    // 0x222ea8: 0x18c00012  blez        $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x222EA8u;
    {
        const bool branch_taken_0x222ea8 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x222EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222EA8u;
        // 0x222eac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222ea8) {
            ctx->pc = 0x222EF4u;
            goto label_222ef4;
        }
    }
    ctx->pc = 0x222EB0u;
    // 0x222eb0: 0x3c120033  lui         $s2, 0x33
    ctx->pc = 0x222eb0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
    // 0x222eb4: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x222eb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_222eb8:
    // 0x222eb8: 0x24020558  addiu       $v0, $zero, 0x558
    ctx->pc = 0x222eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1368));
    // 0x222ebc: 0x2643e6a8  addiu       $v1, $s2, -0x1958
    ctx->pc = 0x222ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294960808));
    // 0x222ec0: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x222ec0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x222ec4: 0x240400c0  addiu       $a0, $zero, 0xC0
    ctx->pc = 0x222ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x222ec8: 0x2042818  mult        $a1, $s0, $a0
    ctx->pc = 0x222ec8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x222ecc: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x222eccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x222ed0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x222ed0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x222ed4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x222ed4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x222ed8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x222ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x222edc: 0xc46000dc  lwc1        $f0, 0xDC($v1)
    ctx->pc = 0x222edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x222ee0: 0xa72021  addu        $a0, $a1, $a3
    ctx->pc = 0x222ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x222ee4: 0x206282a  slt         $a1, $s0, $a2
    ctx->pc = 0x222ee4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x222ee8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x222ee8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x222eec: 0x14a0fff2  bnez        $a1, . + 4 + (-0xE << 2)
    ctx->pc = 0x222EECu;
    {
        const bool branch_taken_0x222eec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x222EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222EECu;
        // 0x222ef0: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x222eec) {
            ctx->pc = 0x222EB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_222eb8;
        }
    }
    ctx->pc = 0x222EF4u;
label_222ef4:
    // 0x222ef4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x222ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x222ef8: 0x8f84b59c  lw          $a0, -0x4A64($gp)
    ctx->pc = 0x222ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x222efc: 0x2447c4a8  addiu       $a3, $v0, -0x3B58
    ctx->pc = 0x222efcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952104));
    // 0x222f00: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x222f00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x222f04: 0x8ce20048  lw          $v0, 0x48($a3)
    ctx->pc = 0x222f04u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x32C4F0u));
    // 0x222f08: 0xc44021  addu        $t0, $a2, $a0
    ctx->pc = 0x222f08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x222f0c: 0x2463e6a8  addiu       $v1, $v1, -0x1958
    ctx->pc = 0x222f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960808));
    // 0x222f10: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x222f10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x222f14: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x222f14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x222f18: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x222f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x222f1c: 0xc78280c4  lwc1        $f2, -0x7F3C($gp)
    ctx->pc = 0x222f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x222f20: 0x2c450002  sltiu       $a1, $v0, 0x2
    ctx->pc = 0x222f20u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x222f24: 0x246300a8  addiu       $v1, $v1, 0xA8
    ctx->pc = 0x222f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 168));
    // 0x222f28: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x222f28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222f2c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x222F2Cu;
    {
        const bool branch_taken_0x222f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222F2Cu;
        // 0x222f30: 0x27a400d4  addiu       $a0, $sp, 0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222f2c) {
            ctx->pc = 0x222F60u;
            goto label_222f60;
        }
    }
    ctx->pc = 0x222F34u;
    // 0x222f34: 0x0  nop
    ctx->pc = 0x222f34u;
    // NOP
label_222f38:
    // 0x222f38: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x222f38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x222f3c: 0x24630558  addiu       $v1, $v1, 0x558
    ctx->pc = 0x222f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1368));
    // 0x222f40: 0x0  nop
    ctx->pc = 0x222f40u;
    // NOP
    // 0x222f44: 0x0  nop
    ctx->pc = 0x222f44u;
    // NOP
    // 0x222f48: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x222f48u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x222f4c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x222f4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x222f50: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x222f50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x222f54: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x222f54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x222f58: 0xe480ffe0  swc1        $f0, -0x20($a0)
    ctx->pc = 0x222f58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294967264), bits); }
    // 0x222f5c: 0x248400c0  addiu       $a0, $a0, 0xC0
    ctx->pc = 0x222f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
label_222f60:
    // 0x222f60: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x222F60u;
    {
        const bool branch_taken_0x222f60 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x222F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222F60u;
        // 0x222f64: 0x2a020004  slti        $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x222f60) {
            ctx->pc = 0x222F7Cu;
            goto label_222f7c;
        }
    }
    ctx->pc = 0x222F68u;
    // 0x222f68: 0x8ce20050  lw          $v0, 0x50($a3)
    ctx->pc = 0x222f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x222f6c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x222f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x222f70: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x222F70u;
    {
        const bool branch_taken_0x222f70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x222F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222F70u;
        // 0x222f74: 0x2a020004  slti        $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x222f70) {
            ctx->pc = 0x222F7Cu;
            goto label_222f7c;
        }
    }
    ctx->pc = 0x222F78u;
    // 0x222f78: 0x208102a  slt         $v0, $s0, $t0
    ctx->pc = 0x222f78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_222f7c:
    // 0x222f7c: 0x5440ffee  bnel        $v0, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x222F7Cu;
    {
        const bool branch_taken_0x222f7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x222f7c) {
            ctx->pc = 0x222F80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x222F7Cu;
            // 0x222f80: 0xc4600000  lwc1        $f0, 0x0($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x222F38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_222f38;
        }
    }
    ctx->pc = 0x222F84u;
    // 0x222f84: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x222f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x222f88: 0x8f84b59c  lw          $a0, -0x4A64($gp)
    ctx->pc = 0x222f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x222f8c: 0x2447c4a8  addiu       $a3, $v0, -0x3B58
    ctx->pc = 0x222f8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952104));
    // 0x222f90: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x222f90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x222f94: 0x8ce20048  lw          $v0, 0x48($a3)
    ctx->pc = 0x222f94u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x32C4F0u));
    // 0x222f98: 0xc44021  addu        $t0, $a2, $a0
    ctx->pc = 0x222f98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x222f9c: 0x2463e6a8  addiu       $v1, $v1, -0x1958
    ctx->pc = 0x222f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960808));
    // 0x222fa0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x222fa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x222fa4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x222fa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x222fa8: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x222fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x222fac: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x222facu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x222fb0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x222fb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x222fb4: 0xc78180c8  lwc1        $f1, -0x7F38($gp)
    ctx->pc = 0x222fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x222fb8: 0x2c450002  sltiu       $a1, $v0, 0x2
    ctx->pc = 0x222fb8u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x222fbc: 0x246300a8  addiu       $v1, $v1, 0xA8
    ctx->pc = 0x222fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 168));
    // 0x222fc0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x222fc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222fc4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x222FC4u;
    {
        const bool branch_taken_0x222fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222FC4u;
        // 0x222fc8: 0x27a400b8  addiu       $a0, $sp, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222fc4) {
            ctx->pc = 0x222FECu;
            goto label_222fec;
        }
    }
    ctx->pc = 0x222FCCu;
    // 0x222fcc: 0x0  nop
    ctx->pc = 0x222fccu;
    // NOP
label_222fd0:
    // 0x222fd0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x222fd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x222fd4: 0x24630558  addiu       $v1, $v1, 0x558
    ctx->pc = 0x222fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1368));
    // 0x222fd8: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x222fd8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x222fdc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x222fdcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x222fe0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x222fe0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x222fe4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x222fe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x222fe8: 0x248400c0  addiu       $a0, $a0, 0xC0
    ctx->pc = 0x222fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
label_222fec:
    // 0x222fec: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x222FECu;
    {
        const bool branch_taken_0x222fec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x222FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222FECu;
        // 0x222ff0: 0x2a020004  slti        $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x222fec) {
            ctx->pc = 0x223008u;
            goto label_223008;
        }
    }
    ctx->pc = 0x222FF4u;
    // 0x222ff4: 0x8ce20050  lw          $v0, 0x50($a3)
    ctx->pc = 0x222ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x222ff8: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x222ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x222ffc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x222FFCu;
    {
        const bool branch_taken_0x222ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x223000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222FFCu;
        // 0x223000: 0x2a020004  slti        $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x222ffc) {
            ctx->pc = 0x223008u;
            goto label_223008;
        }
    }
    ctx->pc = 0x223004u;
    // 0x223004: 0x208102a  slt         $v0, $s0, $t0
    ctx->pc = 0x223004u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_223008:
    // 0x223008: 0x5440fff1  bnel        $v0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x223008u;
    {
        const bool branch_taken_0x223008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x223008) {
            ctx->pc = 0x22300Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x223008u;
            // 0x22300c: 0xc4600000  lwc1        $f0, 0x0($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x222FD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_222fd0;
        }
    }
    ctx->pc = 0x223010u;
    // 0x223010: 0x26e3c4a8  addiu       $v1, $s7, -0x3B58
    ctx->pc = 0x223010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
    // 0x223014: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x223014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x223018: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x223018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22301c: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x22301Cu;
    {
        const bool branch_taken_0x22301c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x223020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22301Cu;
        // 0x223020: 0x8f859f74  lw          $a1, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22301c) {
            ctx->pc = 0x2230D4u;
            goto label_2230d4;
        }
    }
    ctx->pc = 0x223024u;
    // 0x223024: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x223024u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223028: 0x8f82b59c  lw          $v0, -0x4A64($gp)
    ctx->pc = 0x223028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x22302c: 0x8ce30048  lw          $v1, 0x48($a3)
    ctx->pc = 0x22302cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 72)));
    // 0x223030: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x223030u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x223034: 0x2484e6a8  addiu       $a0, $a0, -0x1958
    ctx->pc = 0x223034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960808));
    // 0x223038: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x223038u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22303c: 0x2463fffa  addiu       $v1, $v1, -0x6
    ctx->pc = 0x22303cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x223040: 0xc22821  addu        $a1, $a2, $v0
    ctx->pc = 0x223040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x223044: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x223044u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x223048: 0x248400a0  addiu       $a0, $a0, 0xA0
    ctx->pc = 0x223048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x22304c: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x22304cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x223050: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x223050u;
    {
        const bool branch_taken_0x223050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223050u;
        // 0x223054: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223050) {
            ctx->pc = 0x223074u;
            goto label_223074;
        }
    }
    ctx->pc = 0x223058u;
label_223058:
    // 0x223058: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x223058u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22305c: 0x0  nop
    ctx->pc = 0x22305cu;
    // NOP
    // 0x223060: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x223060u;
    {
        const bool branch_taken_0x223060 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x223064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223060u;
        // 0x223064: 0x24840558  addiu       $a0, $a0, 0x558 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223060) {
            ctx->pc = 0x223070u;
            goto label_223070;
        }
    }
    ctx->pc = 0x223068u;
    // 0x223068: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x223068u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x22306c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x22306cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_223070:
    // 0x223070: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x223070u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_223074:
    // 0x223074: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x223074u;
    {
        const bool branch_taken_0x223074 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x223078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223074u;
        // 0x223078: 0x2a020004  slti        $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x223074) {
            ctx->pc = 0x223090u;
            goto label_223090;
        }
    }
    ctx->pc = 0x22307Cu;
    // 0x22307c: 0x8ce20050  lw          $v0, 0x50($a3)
    ctx->pc = 0x22307cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x223080: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x223080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x223084: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x223084u;
    {
        const bool branch_taken_0x223084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x223088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223084u;
        // 0x223088: 0x2a020004  slti        $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x223084) {
            ctx->pc = 0x223090u;
            goto label_223090;
        }
    }
    ctx->pc = 0x22308Cu;
    // 0x22308c: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x22308cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_223090:
    // 0x223090: 0x5440fff1  bnel        $v0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x223090u;
    {
        const bool branch_taken_0x223090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x223090) {
            ctx->pc = 0x223094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x223090u;
            // 0x223094: 0xc4800000  lwc1        $f0, 0x0($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x223058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_223058;
        }
    }
    ctx->pc = 0x223098u;
    // 0x223098: 0x620000d  bltz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x223098u;
    {
        const bool branch_taken_0x223098 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x22309Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223098u;
        // 0x22309c: 0x24021210  addiu       $v0, $zero, 0x1210 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223098) {
            ctx->pc = 0x2230D0u;
            goto label_2230d0;
        }
    }
    ctx->pc = 0x2230A0u;
    // 0x2230a0: 0x8f83b238  lw          $v1, -0x4DC8($gp)
    ctx->pc = 0x2230a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x2230a4: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x2230a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2230a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2230a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2230ac: 0xc0878c8  jal         func_21E320
    ctx->pc = 0x2230ACu;
    SET_GPR_U32(ctx, 31, 0x2230B4u);
    ctx->pc = 0x2230B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2230ACu;
    // 0x2230b0: 0x8c440018  lw          $a0, 0x18($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E320u, 0x2230ACu, 0x2230B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2230B4u;
label_2230b4:
    // 0x2230b4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2230B4u;
    {
        const bool branch_taken_0x2230b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2230B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2230B4u;
        // 0x2230b8: 0x240200c0  addiu       $v0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2230b4) {
            ctx->pc = 0x2230D0u;
            goto label_2230d0;
        }
    }
    ctx->pc = 0x2230BCu;
    // 0x2230bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2230bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2230c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2230c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2230c4: 0x2221818  mult        $v1, $s1, $v0
    ctx->pc = 0x2230c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2230c8: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x2230c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x2230cc: 0xe44000bc  swc1        $f0, 0xBC($v0)
    ctx->pc = 0x2230ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 188), bits); }
label_2230d0:
    // 0x2230d0: 0x8f859f74  lw          $a1, -0x608C($gp)
    ctx->pc = 0x2230d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
label_2230d4:
    // 0x2230d4: 0xc0884a6  jal         func_221298
    ctx->pc = 0x2230D4u;
    SET_GPR_U32(ctx, 31, 0x2230DCu);
    ctx->pc = 0x2230D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2230D4u;
    // 0x2230d8: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221298u, 0x2230D4u, 0x2230DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2230DCu;
label_2230dc:
    // 0x2230dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2230dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2230e0: 0x600000e  bltz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x2230E0u;
    {
        const bool branch_taken_0x2230e0 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2230E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2230E0u;
        // 0x2230e4: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2230e0) {
            ctx->pc = 0x22311Cu;
            goto label_22311c;
        }
    }
    ctx->pc = 0x2230E8u;
    // 0x2230e8: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x2230E8u;
    SET_GPR_U32(ctx, 31, 0x2230F0u);
    ctx->pc = 0x2230ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2230E8u;
    // 0x2230ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x2230E8u, 0x2230F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2230F0u;
label_2230f0:
    // 0x2230f0: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x2230f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x2230f4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2230f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2230f8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2230f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2230fc: 0x0  nop
    ctx->pc = 0x2230fcu;
    // NOP
    // 0x223100: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x223100u;
    {
        const bool branch_taken_0x223100 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x223104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223100u;
        // 0x223104: 0x240200c0  addiu       $v0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223100) {
            ctx->pc = 0x22311Cu;
            goto label_22311c;
        }
    }
    ctx->pc = 0x223108u;
    // 0x223108: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x223108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22310c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22310cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223110: 0x2021818  mult        $v1, $s0, $v0
    ctx->pc = 0x223110u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x223114: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x223114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x223118: 0xe44000c0  swc1        $f0, 0xC0($v0)
    ctx->pc = 0x223118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 192), bits); }
label_22311c:
    // 0x22311c: 0x26e4c4a8  addiu       $a0, $s7, -0x3B58
    ctx->pc = 0x22311cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
    // 0x223120: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x223120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x223124: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x223124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x223128: 0x1443001b  bne         $v0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x223128u;
    {
        const bool branch_taken_0x223128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x22312Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223128u;
        // 0x22312c: 0x26e6c4a8  addiu       $a2, $s7, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223128) {
            ctx->pc = 0x223198u;
            goto label_223198;
        }
    }
    ctx->pc = 0x223130u;
    // 0x223130: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x223130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x223134: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x223134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x223138: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x223138u;
    {
        const bool branch_taken_0x223138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22313Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223138u;
        // 0x22313c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223138) {
            ctx->pc = 0x22314Cu;
            goto label_22314c;
        }
    }
    ctx->pc = 0x223140u;
    // 0x223140: 0x8f839f74  lw          $v1, -0x608C($gp)
    ctx->pc = 0x223140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x223144: 0x8f82b59c  lw          $v0, -0x4A64($gp)
    ctx->pc = 0x223144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x223148: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x223148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_22314c:
    // 0x22314c: 0xc0884a6  jal         func_221298
    ctx->pc = 0x22314Cu;
    SET_GPR_U32(ctx, 31, 0x223154u);
    ctx->pc = 0x223150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22314Cu;
    // 0x223150: 0x24040026  addiu       $a0, $zero, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221298u, 0x22314Cu, 0x223154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223154u;
label_223154:
    // 0x223154: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x223154u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223158: 0x600000e  bltz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x223158u;
    {
        const bool branch_taken_0x223158 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x22315Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223158u;
        // 0x22315c: 0x24040026  addiu       $a0, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223158) {
            ctx->pc = 0x223194u;
            goto label_223194;
        }
    }
    ctx->pc = 0x223160u;
    // 0x223160: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x223160u;
    SET_GPR_U32(ctx, 31, 0x223168u);
    ctx->pc = 0x223164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223160u;
    // 0x223164: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x223160u, 0x223168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223168u;
label_223168:
    // 0x223168: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x223168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x22316c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22316cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x223170: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x223170u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x223174: 0x0  nop
    ctx->pc = 0x223174u;
    // NOP
    // 0x223178: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x223178u;
    {
        const bool branch_taken_0x223178 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22317Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223178u;
        // 0x22317c: 0x240200c0  addiu       $v0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223178) {
            ctx->pc = 0x223194u;
            goto label_223194;
        }
    }
    ctx->pc = 0x223180u;
    // 0x223180: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x223180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x223184: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x223184u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223188: 0x2021818  mult        $v1, $s0, $v0
    ctx->pc = 0x223188u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x22318c: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x22318cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x223190: 0xe44000c4  swc1        $f0, 0xC4($v0)
    ctx->pc = 0x223190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 196), bits); }
label_223194:
    // 0x223194: 0x26e6c4a8  addiu       $a2, $s7, -0x3B58
    ctx->pc = 0x223194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
label_223198:
    // 0x223198: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x223198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x22319c: 0x8cc30048  lw          $v1, 0x48($a2)
    ctx->pc = 0x22319cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 72)));
    // 0x2231a0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2231A0u;
    {
        const bool branch_taken_0x2231a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2231A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2231A0u;
        // 0x2231a4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2231a0) {
            ctx->pc = 0x2231B0u;
            goto label_2231b0;
        }
    }
    ctx->pc = 0x2231A8u;
    // 0x2231a8: 0x1462006c  bne         $v1, $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x2231A8u;
    {
        const bool branch_taken_0x2231a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2231ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2231A8u;
        // 0x2231ac: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2231a8) {
            ctx->pc = 0x22335Cu;
            goto label_22335c;
        }
    }
    ctx->pc = 0x2231B0u;
label_2231b0:
    // 0x2231b0: 0x8f84b59c  lw          $a0, -0x4A64($gp)
    ctx->pc = 0x2231b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x2231b4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2231b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x2231b8: 0x8f859f74  lw          $a1, -0x608C($gp)
    ctx->pc = 0x2231b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x2231bc: 0x2463fffa  addiu       $v1, $v1, -0x6
    ctx->pc = 0x2231bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x2231c0: 0x2442e6a8  addiu       $v0, $v0, -0x1958
    ctx->pc = 0x2231c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960808));
    // 0x2231c4: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x2231c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2231c8: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x2231c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2231cc: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x2231ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2231d0: 0x2444009c  addiu       $a0, $v0, 0x9C
    ctx->pc = 0x2231d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 156));
    // 0x2231d4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2231d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2231d8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2231d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2231dc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2231DCu;
    {
        const bool branch_taken_0x2231dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2231E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2231DCu;
        // 0x2231e0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2231dc) {
            ctx->pc = 0x223210u;
            goto label_223210;
        }
    }
    ctx->pc = 0x2231E4u;
    // 0x2231e4: 0x0  nop
    ctx->pc = 0x2231e4u;
    // NOP
label_2231e8:
    // 0x2231e8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2231e8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2231ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2231ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2231f0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2231f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2231f4: 0x0  nop
    ctx->pc = 0x2231f4u;
    // NOP
    // 0x2231f8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2231F8u;
    {
        const bool branch_taken_0x2231f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2231FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2231F8u;
        // 0x2231fc: 0x24840558  addiu       $a0, $a0, 0x558 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2231f8) {
            ctx->pc = 0x22320Cu;
            goto label_22320c;
        }
    }
    ctx->pc = 0x223200u;
    // 0x223200: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x223200u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x223204: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x223204u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x223208: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x223208u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22320c:
    // 0x22320c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x22320cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_223210:
    // 0x223210: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x223210u;
    {
        const bool branch_taken_0x223210 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x223214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223210u;
        // 0x223214: 0x2a020004  slti        $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x223210) {
            ctx->pc = 0x22322Cu;
            goto label_22322c;
        }
    }
    ctx->pc = 0x223218u;
    // 0x223218: 0x8d020050  lw          $v0, 0x50($t0)
    ctx->pc = 0x223218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 80)));
    // 0x22321c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x22321cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x223220: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x223220u;
    {
        const bool branch_taken_0x223220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x223224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223220u;
        // 0x223224: 0x2a020004  slti        $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x223220) {
            ctx->pc = 0x22322Cu;
            goto label_22322c;
        }
    }
    ctx->pc = 0x223228u;
    // 0x223228: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x223228u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_22322c:
    // 0x22322c: 0x5440ffee  bnel        $v0, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x22322Cu;
    {
        const bool branch_taken_0x22322c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22322c) {
            ctx->pc = 0x223230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22322Cu;
            // 0x223230: 0xc4810000  lwc1        $f1, 0x0($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2231E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2231e8;
        }
    }
    ctx->pc = 0x223234u;
    // 0x223234: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x223234u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x223238: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x223238u;
    {
        const bool branch_taken_0x223238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22323Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223238u;
        // 0x22323c: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223238) {
            ctx->pc = 0x22325Cu;
            goto label_22325c;
        }
    }
    ctx->pc = 0x223240u;
    // 0x223240: 0x240200c0  addiu       $v0, $zero, 0xC0
    ctx->pc = 0x223240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x223244: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x223244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x223248: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x223248u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22324c: 0xe21818  mult        $v1, $a3, $v0
    ctx->pc = 0x22324cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x223250: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x223250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x223254: 0xe44000c8  swc1        $f0, 0xC8($v0)
    ctx->pc = 0x223254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 200), bits); }
    // 0x223258: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x223258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_22325c:
    // 0x22325c: 0x8f84b59c  lw          $a0, -0x4A64($gp)
    ctx->pc = 0x22325cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x223260: 0x8f859f74  lw          $a1, -0x608C($gp)
    ctx->pc = 0x223260u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x223264: 0x2447c4a8  addiu       $a3, $v0, -0x3B58
    ctx->pc = 0x223264u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952104));
    // 0x223268: 0x8ce20048  lw          $v0, 0x48($a3)
    ctx->pc = 0x223268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 72)));
    // 0x22326c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x22326cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x223270: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x223270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x223274: 0x2463e6a8  addiu       $v1, $v1, -0x1958
    ctx->pc = 0x223274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960808));
    // 0x223278: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x223278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x22327c: 0x3c04000f  lui         $a0, 0xF
    ctx->pc = 0x22327cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15 << 16));
    // 0x223280: 0x2c460002  sltiu       $a2, $v0, 0x2
    ctx->pc = 0x223280u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x223284: 0x2463009c  addiu       $v1, $v1, 0x9C
    ctx->pc = 0x223284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 156));
    // 0x223288: 0x3484423f  ori         $a0, $a0, 0x423F
    ctx->pc = 0x223288u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16959);
    // 0x22328c: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x22328cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x223290: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x223290u;
    {
        const bool branch_taken_0x223290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223290u;
        // 0x223294: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223290) {
            ctx->pc = 0x2232C0u;
            goto label_2232c0;
        }
    }
    ctx->pc = 0x223298u;
label_223298:
    // 0x223298: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x223298u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22329c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22329cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2232a0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2232a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2232a4: 0x0  nop
    ctx->pc = 0x2232a4u;
    // NOP
    // 0x2232a8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2232A8u;
    {
        const bool branch_taken_0x2232a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2232ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2232A8u;
        // 0x2232ac: 0x24630558  addiu       $v1, $v1, 0x558 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2232a8) {
            ctx->pc = 0x2232BCu;
            goto label_2232bc;
        }
    }
    ctx->pc = 0x2232B0u;
    // 0x2232b0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2232b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2232b4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2232b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2232b8: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x2232b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2232bc:
    // 0x2232bc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2232bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2232c0:
    // 0x2232c0: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2232C0u;
    {
        const bool branch_taken_0x2232c0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2232C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2232C0u;
        // 0x2232c4: 0x2a020004  slti        $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2232c0) {
            ctx->pc = 0x2232DCu;
            goto label_2232dc;
        }
    }
    ctx->pc = 0x2232C8u;
    // 0x2232c8: 0x8ce20050  lw          $v0, 0x50($a3)
    ctx->pc = 0x2232c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x2232cc: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2232ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2232d0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2232D0u;
    {
        const bool branch_taken_0x2232d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2232D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2232D0u;
        // 0x2232d4: 0x2a020004  slti        $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2232d0) {
            ctx->pc = 0x2232DCu;
            goto label_2232dc;
        }
    }
    ctx->pc = 0x2232D8u;
    // 0x2232d8: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x2232d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_2232dc:
    // 0x2232dc: 0x5440ffee  bnel        $v0, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2232DCu;
    {
        const bool branch_taken_0x2232dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2232dc) {
            ctx->pc = 0x2232E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2232DCu;
            // 0x2232e0: 0xc4610000  lwc1        $f1, 0x0($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x223298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_223298;
        }
    }
    ctx->pc = 0x2232E4u;
    // 0x2232e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2232e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2232e8: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x2232E8u;
    SET_GPR_U32(ctx, 31, 0x2232F0u);
    ctx->pc = 0x2232ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2232E8u;
    // 0x2232ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x2232E8u, 0x2232F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2232F0u;
label_2232f0:
    // 0x2232f0: 0x26e3c4a8  addiu       $v1, $s7, -0x3B58
    ctx->pc = 0x2232f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
    // 0x2232f4: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2232f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2232f8: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x2232f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x2232fc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2232fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x223300: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x223300u;
    {
        const bool branch_taken_0x223300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x223304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223300u;
        // 0x223304: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x223300) {
            ctx->pc = 0x223328u;
            goto label_223328;
        }
    }
    ctx->pc = 0x223308u;
    // 0x223308: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x223308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x22330c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x22330cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x223310: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x223310u;
    {
        const bool branch_taken_0x223310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x223314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223310u;
        // 0x223314: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223310) {
            ctx->pc = 0x22332Cu;
            goto label_22332c;
        }
    }
    ctx->pc = 0x223318u;
    // 0x223318: 0x8f839f74  lw          $v1, -0x608C($gp)
    ctx->pc = 0x223318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x22331c: 0x8f82b59c  lw          $v0, -0x4A64($gp)
    ctx->pc = 0x22331cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x223320: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x223320u;
    {
        const bool branch_taken_0x223320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223320u;
        // 0x223324: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223320) {
            ctx->pc = 0x22332Cu;
            goto label_22332c;
        }
    }
    ctx->pc = 0x223328u;
label_223328:
    // 0x223328: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x223328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_22332c:
    // 0x22332c: 0xc0884f6  jal         func_2213D8
    ctx->pc = 0x22332Cu;
    SET_GPR_U32(ctx, 31, 0x223334u);
    ctx->pc = 0x223330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22332Cu;
    // 0x223330: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x22332Cu, 0x223334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223334u;
label_223334:
    // 0x223334: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x223334u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x223338: 0x0  nop
    ctx->pc = 0x223338u;
    // NOP
    // 0x22333c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x22333Cu;
    {
        const bool branch_taken_0x22333c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x223340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22333Cu;
        // 0x223340: 0x240200c0  addiu       $v0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22333c) {
            ctx->pc = 0x223358u;
            goto label_223358;
        }
    }
    ctx->pc = 0x223344u;
    // 0x223344: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x223344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x223348: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x223348u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22334c: 0x2221818  mult        $v1, $s1, $v0
    ctx->pc = 0x22334cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x223350: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x223350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x223354: 0xe44000cc  swc1        $f0, 0xCC($v0)
    ctx->pc = 0x223354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 204), bits); }
label_223358:
    // 0x223358: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x223358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_22335c:
    // 0x22335c: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x22335cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x223360: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x223360u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x223364: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x223364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x223368: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x223368u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22336c: 0x2452c4a8  addiu       $s2, $v0, -0x3B58
    ctx->pc = 0x22336cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952104));
    // 0x223370: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x223370u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223374: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x223374u;
    {
        const bool branch_taken_0x223374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223374u;
        // 0x223378: 0x27b100d0  addiu       $s1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223374) {
            ctx->pc = 0x2233A0u;
            goto label_2233a0;
        }
    }
    ctx->pc = 0x22337Cu;
    // 0x22337c: 0x0  nop
    ctx->pc = 0x22337cu;
    // NOP
label_223380:
    // 0x223380: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x223380u;
    SET_GPR_U32(ctx, 31, 0x223388u);
    ctx->pc = 0x223384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223380u;
    // 0x223384: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x223380u, 0x223388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223388u;
label_223388:
    // 0x223388: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x223388u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22338c: 0x0  nop
    ctx->pc = 0x22338cu;
    // NOP
    // 0x223390: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x223390u;
    {
        const bool branch_taken_0x223390 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x223390) {
            ctx->pc = 0x223394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x223390u;
            // 0x223394: 0xe6340000  swc1        $f20, 0x0($s1) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x223398u;
            goto label_223398;
        }
    }
    ctx->pc = 0x223398u;
label_223398:
    // 0x223398: 0x263100c0  addiu       $s1, $s1, 0xC0
    ctx->pc = 0x223398u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x22339c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x22339cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2233a0:
    // 0x2233a0: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x2233a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x2233a4: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x2233a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x2233a8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2233a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2233ac: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2233ACu;
    {
        const bool branch_taken_0x2233ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2233B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2233ACu;
        // 0x2233b0: 0x2a020004  slti        $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2233ac) {
            ctx->pc = 0x2233D4u;
            goto label_2233d4;
        }
    }
    ctx->pc = 0x2233B4u;
    // 0x2233b4: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x2233b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x2233b8: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2233b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2233bc: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2233BCu;
    {
        const bool branch_taken_0x2233bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2233bc) {
            ctx->pc = 0x2233C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2233BCu;
            // 0x2233c0: 0x2a020004  slti        $v0, $s0, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2233D4u;
            goto label_2233d4;
        }
    }
    ctx->pc = 0x2233C4u;
    // 0x2233c4: 0x8f829f74  lw          $v0, -0x608C($gp)
    ctx->pc = 0x2233c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x2233c8: 0x8f83b59c  lw          $v1, -0x4A64($gp)
    ctx->pc = 0x2233c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x2233cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2233ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2233d0: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2233d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2233d4:
    // 0x2233d4: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2233D4u;
    {
        const bool branch_taken_0x2233d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2233D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2233D4u;
        // 0x2233d8: 0x2404003d  addiu       $a0, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2233d4) {
            ctx->pc = 0x223380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_223380;
        }
    }
    ctx->pc = 0x2233DCu;
    // 0x2233dc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2233dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x2233e0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2233e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2233e4: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x2233E4u;
    {
        const bool branch_taken_0x2233e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2233E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2233E4u;
        // 0x2233e8: 0x245ec4a8  addiu       $fp, $v0, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2233e4) {
            ctx->pc = 0x223634u;
            goto label_223634;
        }
    }
    ctx->pc = 0x2233ECu;
    // 0x2233ec: 0x0  nop
    ctx->pc = 0x2233ecu;
    // NOP
label_2233f0:
    // 0x2233f0: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x2233F0u;
    SET_GPR_U32(ctx, 31, 0x2233F8u);
    ctx->pc = 0x2233F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2233F0u;
    // 0x2233f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x2233F0u, 0x2233F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2233F8u;
label_2233f8:
    // 0x2233f8: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x2233f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x2233fc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2233fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x223400: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x223400u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x223404: 0x0  nop
    ctx->pc = 0x223404u;
    // NOP
    // 0x223408: 0x45000088  bc1f        . + 4 + (0x88 << 2)
    ctx->pc = 0x223408u;
    {
        const bool branch_taken_0x223408 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22340Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223408u;
        // 0x22340c: 0x26e3c4a8  addiu       $v1, $s7, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223408) {
            ctx->pc = 0x22362Cu;
            goto label_22362c;
        }
    }
    ctx->pc = 0x223410u;
    // 0x223410: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x223410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x223414: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x223414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x223418: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x223418u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x22341c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x22341Cu;
    {
        const bool branch_taken_0x22341c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x223420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22341Cu;
        // 0x223420: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22341c) {
            ctx->pc = 0x223450u;
            goto label_223450;
        }
    }
    ctx->pc = 0x223424u;
    // 0x223424: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x223424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x223428: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x223428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x22342c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x22342Cu;
    {
        const bool branch_taken_0x22342c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x223430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22342Cu;
        // 0x223430: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22342c) {
            ctx->pc = 0x223458u;
            goto label_223458;
        }
    }
    ctx->pc = 0x223434u;
    // 0x223434: 0x8f829f74  lw          $v0, -0x608C($gp)
    ctx->pc = 0x223434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x223438: 0x8f83b59c  lw          $v1, -0x4A64($gp)
    ctx->pc = 0x223438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x22343c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22343cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x223440: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x223440u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x223444: 0x1440007a  bnez        $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x223444u;
    {
        const bool branch_taken_0x223444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x223448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223444u;
        // 0x223448: 0x26130001  addiu       $s3, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223444) {
            ctx->pc = 0x223630u;
            goto label_223630;
        }
    }
    ctx->pc = 0x22344Cu;
    // 0x22344c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x22344cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_223450:
    // 0x223450: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x223450u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223454: 0x0  nop
    ctx->pc = 0x223454u;
    // NOP
label_223458:
    // 0x223458: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x223458u;
    {
        const bool branch_taken_0x223458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22345Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223458u;
        // 0x22345c: 0x26130001  addiu       $s3, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223458) {
            ctx->pc = 0x223484u;
            goto label_223484;
        }
    }
    ctx->pc = 0x223460u;
label_223460:
    // 0x223460: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x223460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223464: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x223464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223468: 0xc089008  jal         func_224020
    ctx->pc = 0x223468u;
    SET_GPR_U32(ctx, 31, 0x223470u);
    ctx->pc = 0x22346Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223468u;
    // 0x22346c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224020u, 0x223468u, 0x223470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223470u;
label_223470:
    // 0x223470: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x223470u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x223474: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x223474u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x223478: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x223478u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22347c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22347cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x223480: 0x44120000  mfc1        $s2, $f0
    ctx->pc = 0x223480u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
label_223484:
    // 0x223484: 0x26e3c4a8  addiu       $v1, $s7, -0x3B58
    ctx->pc = 0x223484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
    // 0x223488: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x223488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x22348c: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x22348cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x223490: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x223490u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x223494: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x223494u;
    {
        const bool branch_taken_0x223494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x223498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223494u;
        // 0x223498: 0x2a220004  slti        $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x223494) {
            ctx->pc = 0x2234BCu;
            goto label_2234bc;
        }
    }
    ctx->pc = 0x22349Cu;
    // 0x22349c: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x22349cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x2234a0: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2234a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2234a4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2234A4u;
    {
        const bool branch_taken_0x2234a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2234a4) {
            ctx->pc = 0x2234A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2234A4u;
            // 0x2234a8: 0x2a220004  slti        $v0, $s1, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2234BCu;
            goto label_2234bc;
        }
    }
    ctx->pc = 0x2234ACu;
    // 0x2234ac: 0x8f829f74  lw          $v0, -0x608C($gp)
    ctx->pc = 0x2234acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x2234b0: 0x8f83b59c  lw          $v1, -0x4A64($gp)
    ctx->pc = 0x2234b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x2234b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2234b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2234b8: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2234b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2234bc:
    // 0x2234bc: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x2234BCu;
    {
        const bool branch_taken_0x2234bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2234C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2234BCu;
        // 0x2234c0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2234bc) {
            ctx->pc = 0x223460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_223460;
        }
    }
    ctx->pc = 0x2234C4u;
    // 0x2234c4: 0x26e3c4a8  addiu       $v1, $s7, -0x3B58
    ctx->pc = 0x2234c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
    // 0x2234c8: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2234c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2234cc: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x2234ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x2234d0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2234d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2234d4: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2234D4u;
    {
        const bool branch_taken_0x2234d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2234d4) {
            ctx->pc = 0x2234D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2234D4u;
            // 0x2234d8: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x223514u;
            goto label_223514;
        }
    }
    ctx->pc = 0x2234DCu;
    // 0x2234dc: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x2234dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x2234e0: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2234e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2234e4: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2234E4u;
    {
        const bool branch_taken_0x2234e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2234E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2234E4u;
        // 0x2234e8: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2234e4) {
            ctx->pc = 0x223514u;
            goto label_223514;
        }
    }
    ctx->pc = 0x2234ECu;
    // 0x2234ec: 0x8f829f74  lw          $v0, -0x608C($gp)
    ctx->pc = 0x2234ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x2234f0: 0x8f83b59c  lw          $v1, -0x4A64($gp)
    ctx->pc = 0x2234f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x2234f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2234f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2234f8: 0x242001a  div         $zero, $s2, $v0
    ctx->pc = 0x2234f8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2234fc: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2234FCu;
    {
        const bool branch_taken_0x2234fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2234fc) {
            ctx->pc = 0x223500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2234FCu;
            // 0x223500: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x223504u;
            goto label_223504;
        }
    }
    ctx->pc = 0x223504u;
label_223504:
    // 0x223504: 0x2012  mflo        $a0
    ctx->pc = 0x223504u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x223508: 0x4484a800  mtc1        $a0, $f21
    ctx->pc = 0x223508u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x22350c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x22350Cu;
    {
        const bool branch_taken_0x22350c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22350Cu;
        // 0x223510: 0x4680ad60  cvt.s.w     $f21, $f21 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[21], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22350c) {
            ctx->pc = 0x22352Cu;
            goto label_22352c;
        }
    }
    ctx->pc = 0x223514u;
label_223514:
    // 0x223514: 0x26420003  addiu       $v0, $s2, 0x3
    ctx->pc = 0x223514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
    // 0x223518: 0x72182a  slt         $v1, $v1, $s2
    ctx->pc = 0x223518u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x22351c: 0x243100b  movn        $v0, $s2, $v1
    ctx->pc = 0x22351cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 18));
    // 0x223520: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x223520u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x223524: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x223524u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x223528: 0x4680ad60  cvt.s.w     $f21, $f21
    ctx->pc = 0x223528u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[21], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
label_22352c:
    // 0x22352c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22352cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223530: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x223530u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x223534: 0x0  nop
    ctx->pc = 0x223534u;
    // NOP
    // 0x223538: 0x4500003d  bc1f        . + 4 + (0x3D << 2)
    ctx->pc = 0x223538u;
    {
        const bool branch_taken_0x223538 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22353Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223538u;
        // 0x22353c: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223538) {
            ctx->pc = 0x223630u;
            goto label_223630;
        }
    }
    ctx->pc = 0x223540u;
    // 0x223540: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x223540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x223544: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x223544u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x223548: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x223548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x22354c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x22354cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x223550: 0x2454c4a8  addiu       $s4, $v0, -0x3B58
    ctx->pc = 0x223550u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952104));
    // 0x223554: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x223554u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223558: 0x27b600dc  addiu       $s6, $sp, 0xDC
    ctx->pc = 0x223558u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    // 0x22355c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x22355Cu;
    {
        const bool branch_taken_0x22355c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22355Cu;
        // 0x223560: 0x27b500d8  addiu       $s5, $sp, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22355c) {
            ctx->pc = 0x2235D8u;
            goto label_2235d8;
        }
    }
    ctx->pc = 0x223564u;
    // 0x223564: 0x0  nop
    ctx->pc = 0x223564u;
    // NOP
label_223568:
    // 0x223568: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x223568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22356c: 0xc089008  jal         func_224020
    ctx->pc = 0x22356Cu;
    SET_GPR_U32(ctx, 31, 0x223574u);
    ctx->pc = 0x223570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22356Cu;
    // 0x223570: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224020u, 0x22356Cu, 0x223574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223574u;
label_223574:
    // 0x223574: 0x0  nop
    ctx->pc = 0x223574u;
    // NOP
    // 0x223578: 0x0  nop
    ctx->pc = 0x223578u;
    // NOP
    // 0x22357c: 0x46150003  div.s       $f0, $f0, $f21
    ctx->pc = 0x22357cu;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[21];
    // 0x223580: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x223580u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x223584: 0x0  nop
    ctx->pc = 0x223584u;
    // NOP
    // 0x223588: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x223588u;
    {
        const bool branch_taken_0x223588 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22358Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223588u;
        // 0x22358c: 0x241200c0  addiu       $s2, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223588) {
            ctx->pc = 0x2235D4u;
            goto label_2235d4;
        }
    }
    ctx->pc = 0x223590u;
    // 0x223590: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x223590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x223594: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x223594u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x223598: 0x2121818  mult        $v1, $s0, $s2
    ctx->pc = 0x223598u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x22359c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x22359cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2235a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2235a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2235a4: 0x761021  addu        $v0, $v1, $s6
    ctx->pc = 0x2235a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x2235a8: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x2235A8u;
    SET_GPR_U32(ctx, 31, 0x2235B0u);
    ctx->pc = 0x2235ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2235A8u;
    // 0x2235ac: 0xe4540000  swc1        $f20, 0x0($v0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x2235A8u, 0x2235B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2235B0u;
label_2235b0:
    // 0x2235b0: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x2235b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2235b4: 0x0  nop
    ctx->pc = 0x2235b4u;
    // NOP
    // 0x2235b8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2235B8u;
    {
        const bool branch_taken_0x2235b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2235BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2235B8u;
        // 0x2235bc: 0x8f829f74  lw          $v0, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2235b8) {
            ctx->pc = 0x2235D4u;
            goto label_2235d4;
        }
    }
    ctx->pc = 0x2235C0u;
    // 0x2235c0: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2235c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2235c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2235C4u;
    {
        const bool branch_taken_0x2235c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2235C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2235C4u;
        // 0x2235c8: 0x2321818  mult        $v1, $s1, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2235c4) {
            ctx->pc = 0x2235D4u;
            goto label_2235d4;
        }
    }
    ctx->pc = 0x2235CCu;
    // 0x2235cc: 0x751021  addu        $v0, $v1, $s5
    ctx->pc = 0x2235ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x2235d0: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x2235d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2235d4:
    // 0x2235d4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2235d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2235d8:
    // 0x2235d8: 0x8e820048  lw          $v0, 0x48($s4)
    ctx->pc = 0x2235d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
    // 0x2235dc: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x2235dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x2235e0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2235e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2235e4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2235E4u;
    {
        const bool branch_taken_0x2235e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2235E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2235E4u;
        // 0x2235e8: 0x2a220004  slti        $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2235e4) {
            ctx->pc = 0x22361Cu;
            goto label_22361c;
        }
    }
    ctx->pc = 0x2235ECu;
    // 0x2235ec: 0x8e820050  lw          $v0, 0x50($s4)
    ctx->pc = 0x2235ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
    // 0x2235f0: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2235f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2235f4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2235F4u;
    {
        const bool branch_taken_0x2235f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2235F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2235F4u;
        // 0x2235f8: 0x2a220004  slti        $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2235f4) {
            ctx->pc = 0x22361Cu;
            goto label_22361c;
        }
    }
    ctx->pc = 0x2235FCu;
    // 0x2235fc: 0x8f829f74  lw          $v0, -0x608C($gp)
    ctx->pc = 0x2235fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x223600: 0x8f83b59c  lw          $v1, -0x4A64($gp)
    ctx->pc = 0x223600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x223604: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x223604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x223608: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x223608u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x22360c: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x22360Cu;
    {
        const bool branch_taken_0x22360c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x223610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22360Cu;
        // 0x223610: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22360c) {
            ctx->pc = 0x223568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_223568;
        }
    }
    ctx->pc = 0x223614u;
    // 0x223614: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x223614u;
    {
        const bool branch_taken_0x223614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223614u;
        // 0x223618: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223614) {
            ctx->pc = 0x223634u;
            goto label_223634;
        }
    }
    ctx->pc = 0x22361Cu;
label_22361c:
    // 0x22361c: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x22361Cu;
    {
        const bool branch_taken_0x22361c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x223620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22361Cu;
        // 0x223620: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22361c) {
            ctx->pc = 0x223568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_223568;
        }
    }
    ctx->pc = 0x223624u;
    // 0x223624: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x223624u;
    {
        const bool branch_taken_0x223624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223624u;
        // 0x223628: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223624) {
            ctx->pc = 0x223634u;
            goto label_223634;
        }
    }
    ctx->pc = 0x22362Cu;
label_22362c:
    // 0x22362c: 0x26130001  addiu       $s3, $s0, 0x1
    ctx->pc = 0x22362cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_223630:
    // 0x223630: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x223630u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_223634:
    // 0x223634: 0x8fc20048  lw          $v0, 0x48($fp)
    ctx->pc = 0x223634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 72)));
    // 0x223638: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x223638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x22363c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x22363cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x223640: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x223640u;
    {
        const bool branch_taken_0x223640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x223644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223640u;
        // 0x223644: 0x2a020004  slti        $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x223640) {
            ctx->pc = 0x223668u;
            goto label_223668;
        }
    }
    ctx->pc = 0x223648u;
    // 0x223648: 0x8fc20050  lw          $v0, 0x50($fp)
    ctx->pc = 0x223648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 80)));
    // 0x22364c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x22364cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x223650: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x223650u;
    {
        const bool branch_taken_0x223650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x223650) {
            ctx->pc = 0x223654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x223650u;
            // 0x223654: 0x2a020004  slti        $v0, $s0, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x223668u;
            goto label_223668;
        }
    }
    ctx->pc = 0x223658u;
    // 0x223658: 0x8f829f74  lw          $v0, -0x608C($gp)
    ctx->pc = 0x223658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x22365c: 0x8f83b59c  lw          $v1, -0x4A64($gp)
    ctx->pc = 0x22365cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x223660: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x223660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x223664: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x223664u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_223668:
    // 0x223668: 0x1440ff61  bnez        $v0, . + 4 + (-0x9F << 2)
    ctx->pc = 0x223668u;
    {
        const bool branch_taken_0x223668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22366Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223668u;
        // 0x22366c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223668) {
            ctx->pc = 0x2233F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2233f0;
        }
    }
    ctx->pc = 0x223670u;
    // 0x223670: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x223670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x223674: 0x8f83b59c  lw          $v1, -0x4A64($gp)
    ctx->pc = 0x223674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x223678: 0x2446c4a8  addiu       $a2, $v0, -0x3B58
    ctx->pc = 0x223678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952104));
    // 0x22367c: 0x8f849f74  lw          $a0, -0x608C($gp)
    ctx->pc = 0x22367cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x223680: 0x8cc20048  lw          $v0, 0x48($a2)
    ctx->pc = 0x223680u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x32C4F0u));
    // 0x223684: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x223684u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223688: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x223688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x22368c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x22368cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x223690: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x223690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x223694: 0x27a300d8  addiu       $v1, $sp, 0xD8
    ctx->pc = 0x223694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x223698: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x223698u;
    {
        const bool branch_taken_0x223698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22369Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223698u;
        // 0x22369c: 0x2c450002  sltiu       $a1, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x223698) {
            ctx->pc = 0x2236B8u;
            goto label_2236b8;
        }
    }
    ctx->pc = 0x2236A0u;
label_2236a0:
    // 0x2236a0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2236a0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2236a4: 0x0  nop
    ctx->pc = 0x2236a4u;
    // NOP
    // 0x2236a8: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2236A8u;
    {
        const bool branch_taken_0x2236a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2236a8) {
            ctx->pc = 0x2236ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2236A8u;
            // 0x2236ac: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2236B0u;
            goto label_2236b0;
        }
    }
    ctx->pc = 0x2236B0u;
label_2236b0:
    // 0x2236b0: 0x246300c0  addiu       $v1, $v1, 0xC0
    ctx->pc = 0x2236b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x2236b4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2236b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2236b8:
    // 0x2236b8: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2236B8u;
    {
        const bool branch_taken_0x2236b8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2236BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2236B8u;
        // 0x2236bc: 0x2a020004  slti        $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2236b8) {
            ctx->pc = 0x2236D4u;
            goto label_2236d4;
        }
    }
    ctx->pc = 0x2236C0u;
    // 0x2236c0: 0x8cc20050  lw          $v0, 0x50($a2)
    ctx->pc = 0x2236c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x2236c4: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2236c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2236c8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2236C8u;
    {
        const bool branch_taken_0x2236c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2236CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2236C8u;
        // 0x2236cc: 0x2a020004  slti        $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2236c8) {
            ctx->pc = 0x2236D4u;
            goto label_2236d4;
        }
    }
    ctx->pc = 0x2236D0u;
    // 0x2236d0: 0x204102a  slt         $v0, $s0, $a0
    ctx->pc = 0x2236d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_2236d4:
    // 0x2236d4: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x2236D4u;
    {
        const bool branch_taken_0x2236d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2236d4) {
            ctx->pc = 0x2236D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2236D4u;
            // 0x2236d8: 0xc4600004  lwc1        $f0, 0x4($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2236A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2236a0;
        }
    }
    ctx->pc = 0x2236DCu;
    // 0x2236dc: 0x26e3c4a8  addiu       $v1, $s7, -0x3B58
    ctx->pc = 0x2236dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
    // 0x2236e0: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2236e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2236e4: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x2236e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x2236e8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2236e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2236ec: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2236ECu;
    {
        const bool branch_taken_0x2236ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2236F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2236ECu;
        // 0x2236f0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2236ec) {
            ctx->pc = 0x22370Cu;
            goto label_22370c;
        }
    }
    ctx->pc = 0x2236F4u;
    // 0x2236f4: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x2236f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x2236f8: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2236f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2236fc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2236FCu;
    {
        const bool branch_taken_0x2236fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x223700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2236FCu;
        // 0x223700: 0x8f839f74  lw          $v1, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2236fc) {
            ctx->pc = 0x22370Cu;
            goto label_22370c;
        }
    }
    ctx->pc = 0x223704u;
    // 0x223704: 0x8f82b59c  lw          $v0, -0x4A64($gp)
    ctx->pc = 0x223704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x223708: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x223708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_22370c:
    // 0x22370c: 0xc0884ce  jal         func_221338
    ctx->pc = 0x22370Cu;
    SET_GPR_U32(ctx, 31, 0x223714u);
    ctx->pc = 0x223710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22370Cu;
    // 0x223710: 0x24040042  addiu       $a0, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221338u, 0x22370Cu, 0x223714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223714u;
label_223714:
    // 0x223714: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x223714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223718: 0x480000c  bltz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x223718u;
    {
        const bool branch_taken_0x223718 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x22371Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223718u;
        // 0x22371c: 0x8f829f74  lw          $v0, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223718) {
            ctx->pc = 0x22374Cu;
            goto label_22374c;
        }
    }
    ctx->pc = 0x223720u;
    // 0x223720: 0x8f83b59c  lw          $v1, -0x4A64($gp)
    ctx->pc = 0x223720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x223724: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x223724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x223728: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x223728u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x22372c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22372Cu;
    {
        const bool branch_taken_0x22372c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x223730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22372Cu;
        // 0x223730: 0x26e3c4a8  addiu       $v1, $s7, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22372c) {
            ctx->pc = 0x223750u;
            goto label_223750;
        }
    }
    ctx->pc = 0x223734u;
    // 0x223734: 0x240200c0  addiu       $v0, $zero, 0xC0
    ctx->pc = 0x223734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x223738: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x223738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22373c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22373cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223740: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x223740u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x223744: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x223744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x223748: 0xe44000f0  swc1        $f0, 0xF0($v0)
    ctx->pc = 0x223748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 240), bits); }
label_22374c:
    // 0x22374c: 0x26e3c4a8  addiu       $v1, $s7, -0x3B58
    ctx->pc = 0x22374cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
label_223750:
    // 0x223750: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x223750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x223754: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x223754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x223758: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x223758u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x22375c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22375Cu;
    {
        const bool branch_taken_0x22375c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x223760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22375Cu;
        // 0x223760: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22375c) {
            ctx->pc = 0x22377Cu;
            goto label_22377c;
        }
    }
    ctx->pc = 0x223764u;
    // 0x223764: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x223764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x223768: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x223768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x22376c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22376Cu;
    {
        const bool branch_taken_0x22376c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x223770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22376Cu;
        // 0x223770: 0x8f839f74  lw          $v1, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22376c) {
            ctx->pc = 0x22377Cu;
            goto label_22377c;
        }
    }
    ctx->pc = 0x223774u;
    // 0x223774: 0x8f82b59c  lw          $v0, -0x4A64($gp)
    ctx->pc = 0x223774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x223778: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x223778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_22377c:
    // 0x22377c: 0xc0884a6  jal         func_221298
    ctx->pc = 0x22377Cu;
    SET_GPR_U32(ctx, 31, 0x223784u);
    ctx->pc = 0x223780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22377Cu;
    // 0x223780: 0x24040043  addiu       $a0, $zero, 0x43 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221298u, 0x22377Cu, 0x223784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223784u;
label_223784:
    // 0x223784: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x223784u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223788: 0x6000016  bltz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x223788u;
    {
        const bool branch_taken_0x223788 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x22378Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223788u;
        // 0x22378c: 0x8f829f74  lw          $v0, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223788) {
            ctx->pc = 0x2237E4u;
            goto label_2237e4;
        }
    }
    ctx->pc = 0x223790u;
    // 0x223790: 0x8f83b59c  lw          $v1, -0x4A64($gp)
    ctx->pc = 0x223790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x223794: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x223794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x223798: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x223798u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x22379c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x22379Cu;
    {
        const bool branch_taken_0x22379c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2237A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22379Cu;
        // 0x2237a0: 0x8f859f74  lw          $a1, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22379c) {
            ctx->pc = 0x2237E8u;
            goto label_2237e8;
        }
    }
    ctx->pc = 0x2237A4u;
    // 0x2237a4: 0x24040043  addiu       $a0, $zero, 0x43
    ctx->pc = 0x2237a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x2237a8: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x2237A8u;
    SET_GPR_U32(ctx, 31, 0x2237B0u);
    ctx->pc = 0x2237ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2237A8u;
    // 0x2237ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x2237A8u, 0x2237B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2237B0u;
label_2237b0:
    // 0x2237b0: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x2237b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x2237b4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2237b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2237b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2237b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2237bc: 0x0  nop
    ctx->pc = 0x2237bcu;
    // NOP
    // 0x2237c0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2237C0u;
    {
        const bool branch_taken_0x2237c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2237C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2237C0u;
        // 0x2237c4: 0x240200c0  addiu       $v0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2237c0) {
            ctx->pc = 0x2237E4u;
            goto label_2237e4;
        }
    }
    ctx->pc = 0x2237C8u;
    // 0x2237c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2237c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2237cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2237ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2237d0: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x2237d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2237d4: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x2237d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2237d8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2237d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2237dc: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2237dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2237e0: 0xe48000f8  swc1        $f0, 0xF8($a0)
    ctx->pc = 0x2237e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 248), bits); }
label_2237e4:
    // 0x2237e4: 0x8f859f74  lw          $a1, -0x608C($gp)
    ctx->pc = 0x2237e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
label_2237e8:
    // 0x2237e8: 0xc0884a6  jal         func_221298
    ctx->pc = 0x2237E8u;
    SET_GPR_U32(ctx, 31, 0x2237F0u);
    ctx->pc = 0x2237ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2237E8u;
    // 0x2237ec: 0x24040044  addiu       $a0, $zero, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221298u, 0x2237E8u, 0x2237F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2237F0u;
label_2237f0:
    // 0x2237f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2237f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2237f4: 0x600001c  bltz        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2237F4u;
    {
        const bool branch_taken_0x2237f4 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2237F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2237F4u;
        // 0x2237f8: 0x24040044  addiu       $a0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2237f4) {
            ctx->pc = 0x223868u;
            goto label_223868;
        }
    }
    ctx->pc = 0x2237FCu;
    // 0x2237fc: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x2237FCu;
    SET_GPR_U32(ctx, 31, 0x223804u);
    ctx->pc = 0x223800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2237FCu;
    // 0x223800: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x2237FCu, 0x223804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223804u;
label_223804:
    // 0x223804: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x223804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x223808: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x223808u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22380c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22380cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x223810: 0x0  nop
    ctx->pc = 0x223810u;
    // NOP
    // 0x223814: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x223814u;
    {
        const bool branch_taken_0x223814 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x223818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223814u;
        // 0x223818: 0x24040044  addiu       $a0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223814) {
            ctx->pc = 0x223868u;
            goto label_223868;
        }
    }
    ctx->pc = 0x22381Cu;
    // 0x22381c: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x22381Cu;
    SET_GPR_U32(ctx, 31, 0x223824u);
    ctx->pc = 0x223820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22381Cu;
    // 0x223820: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x22381Cu, 0x223824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223824u;
label_223824:
    // 0x223824: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x223824u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x223828: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x223828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22382c: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x22382Cu;
    SET_GPR_U32(ctx, 31, 0x223834u);
    ctx->pc = 0x223830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22382Cu;
    // 0x223830: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x22382Cu, 0x223834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223834u;
label_223834:
    // 0x223834: 0x0  nop
    ctx->pc = 0x223834u;
    // NOP
    // 0x223838: 0x0  nop
    ctx->pc = 0x223838u;
    // NOP
    // 0x22383c: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x22383cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[0];
    // 0x223840: 0xc78080cc  lwc1        $f0, -0x7F34($gp)
    ctx->pc = 0x223840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223844: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x223844u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x223848: 0x0  nop
    ctx->pc = 0x223848u;
    // NOP
    // 0x22384c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x22384Cu;
    {
        const bool branch_taken_0x22384c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x223850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22384Cu;
        // 0x223850: 0x240200c0  addiu       $v0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22384c) {
            ctx->pc = 0x223868u;
            goto label_223868;
        }
    }
    ctx->pc = 0x223854u;
    // 0x223854: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x223854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x223858: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x223858u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22385c: 0x2021818  mult        $v1, $s0, $v0
    ctx->pc = 0x22385cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x223860: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x223860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x223864: 0xe44000fc  swc1        $f0, 0xFC($v0)
    ctx->pc = 0x223864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 252), bits); }
label_223868:
    // 0x223868: 0x8f869f74  lw          $a2, -0x608C($gp)
    ctx->pc = 0x223868u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x22386c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22386cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223870: 0x3c0141c0  lui         $at, 0x41C0
    ctx->pc = 0x223870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16832 << 16));
    // 0x223874: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x223874u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_223878:
    // 0x223878: 0x18c000f1  blez        $a2, . + 4 + (0xF1 << 2)
    ctx->pc = 0x223878u;
    {
        const bool branch_taken_0x223878 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x22387Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223878u;
        // 0x22387c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223878) {
            ctx->pc = 0x223C40u;
            goto label_223c40;
        }
    }
    ctx->pc = 0x223880u;
    // 0x223880: 0x26240001  addiu       $a0, $s1, 0x1
    ctx->pc = 0x223880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x223884: 0x11b880  sll         $s7, $s1, 2
    ctx->pc = 0x223884u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x223888: 0xafa40ac0  sw          $a0, 0xAC0($sp)
    ctx->pc = 0x223888u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2752), GPR_U32(ctx, 4));
    // 0x22388c: 0x0  nop
    ctx->pc = 0x22388cu;
    // NOP
label_223890:
    // 0x223890: 0xc7809da8  lwc1        $f0, -0x6258($gp)
    ctx->pc = 0x223890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223894: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x223894u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x223898: 0xc78180d0  lwc1        $f1, -0x7F30($gp)
    ctx->pc = 0x223898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22389c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x22389cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2238a0: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x2238a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x2238a4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2238a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2238a8: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x2238a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2238ac: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x2238acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x2238b0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2238b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2238b4: 0x248431a8  addiu       $a0, $a0, 0x31A8
    ctx->pc = 0x2238b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12712));
    // 0x2238b8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2238b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2238bc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2238bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2238c0: 0x771021  addu        $v0, $v1, $s7
    ctx->pc = 0x2238c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x2238c4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2238c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2238c8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2238c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2238cc: 0x45000086  bc1f        . + 4 + (0x86 << 2)
    ctx->pc = 0x2238CCu;
    {
        const bool branch_taken_0x2238cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2238D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2238CCu;
        // 0x2238d0: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2238cc) {
            ctx->pc = 0x223AE8u;
            goto label_223ae8;
        }
    }
    ctx->pc = 0x2238D4u;
    // 0x2238d4: 0x2414000c  addiu       $s4, $zero, 0xC
    ctx->pc = 0x2238d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2238d8: 0x240200c0  addiu       $v0, $zero, 0xC0
    ctx->pc = 0x2238d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x2238dc: 0x2142018  mult        $a0, $s0, $s4
    ctx->pc = 0x2238dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2238e0: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x2238e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x2238e4: 0x247531a8  addiu       $s5, $v1, 0x31A8
    ctx->pc = 0x2238e4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 12712));
    // 0x2238e8: 0x7202c818  mult1       $t9, $s0, $v0
    ctx->pc = 0x2238e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
    // 0x2238ec: 0x26130001  addiu       $s3, $s0, 0x1
    ctx->pc = 0x2238ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2238f0: 0x27af0040  addiu       $t7, $sp, 0x40
    ctx->pc = 0x2238f0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2238f4: 0x241e0030  addiu       $fp, $zero, 0x30
    ctx->pc = 0x2238f4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2238f8: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x2238f8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2238fc: 0x957021  addu        $t6, $a0, $s5
    ctx->pc = 0x2238fcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x223900: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x223900u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x223904: 0x2e42021  addu        $a0, $s7, $a0
    ctx->pc = 0x223904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
    // 0x223908: 0x956821  addu        $t5, $a0, $s5
    ctx->pc = 0x223908u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x22390c: 0x7fac0ad0  sq          $t4, 0xAD0($sp)
    ctx->pc = 0x22390cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2768), GPR_VEC(ctx, 12));
label_223910:
    // 0x223910: 0x7fad0ae0  sq          $t5, 0xAE0($sp)
    ctx->pc = 0x223910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2784), GPR_VEC(ctx, 13));
    // 0x223914: 0x7fae0af0  sq          $t6, 0xAF0($sp)
    ctx->pc = 0x223914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2800), GPR_VEC(ctx, 14));
    // 0x223918: 0x7faf0b00  sq          $t7, 0xB00($sp)
    ctx->pc = 0x223918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2816), GPR_VEC(ctx, 15));
    // 0x22391c: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x22391Cu;
    SET_GPR_U32(ctx, 31, 0x223924u);
    ctx->pc = 0x223920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22391Cu;
    // 0x223920: 0x7fb90b10  sq          $t9, 0xB10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 2832), GPR_VEC(ctx, 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x22391Cu, 0x223924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223924u;
label_223924:
    // 0x223924: 0x5e001b  divu        $zero, $v0, $fp
    ctx->pc = 0x223924u;
    { uint32_t divisor = GPR_U32(ctx, 30); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x223928: 0x53c00001  beql        $fp, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x223928u;
    {
        const bool branch_taken_0x223928 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x223928) {
            ctx->pc = 0x22392Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x223928u;
            // 0x22392c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x223930u;
            goto label_223930;
        }
    }
    ctx->pc = 0x223930u;
label_223930:
    // 0x223930: 0x7bb90b10  lq          $t9, 0xB10($sp)
    ctx->pc = 0x223930u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 2832)));
    // 0x223934: 0x7baf0b00  lq          $t7, 0xB00($sp)
    ctx->pc = 0x223934u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 2816)));
    // 0x223938: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x223938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22393c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22393cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x223940: 0x7bac0ad0  lq          $t4, 0xAD0($sp)
    ctx->pc = 0x223940u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 2768)));
    // 0x223944: 0x7bad0ae0  lq          $t5, 0xAE0($sp)
    ctx->pc = 0x223944u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 2784)));
    // 0x223948: 0x4810  mfhi        $t1
    ctx->pc = 0x223948u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x22394c: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x22394cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x223950: 0x591021  addu        $v0, $v0, $t9
    ctx->pc = 0x223950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 25)));
    // 0x223954: 0x1e21021  addu        $v0, $t7, $v0
    ctx->pc = 0x223954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x223958: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x223958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22395c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22395cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x223960: 0x0  nop
    ctx->pc = 0x223960u;
    // NOP
    // 0x223964: 0x45000054  bc1f        . + 4 + (0x54 << 2)
    ctx->pc = 0x223964u;
    {
        const bool branch_taken_0x223964 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x223968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223964u;
        // 0x223968: 0x7bae0af0  lq          $t6, 0xAF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 2800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223964) {
            ctx->pc = 0x223AB8u;
            goto label_223ab8;
        }
    }
    ctx->pc = 0x22396Cu;
    // 0x22396c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x22396cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223970: 0x620002d  bltz        $s1, . + 4 + (0x2D << 2)
    ctx->pc = 0x223970u;
    {
        const bool branch_taken_0x223970 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x223974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223970u;
        // 0x223974: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223970) {
            ctx->pc = 0x223A28u;
            goto label_223a28;
        }
    }
    ctx->pc = 0x223978u;
    // 0x223978: 0x264b0001  addiu       $t3, $s2, 0x1
    ctx->pc = 0x223978u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x22397c: 0x0  nop
    ctx->pc = 0x22397cu;
    // NOP
label_223980:
    // 0x223980: 0x14710010  bne         $v1, $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x223980u;
    {
        const bool branch_taken_0x223980 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x223984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223980u;
        // 0x223984: 0x8f869f74  lw          $a2, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223980) {
            ctx->pc = 0x2239C4u;
            goto label_2239c4;
        }
    }
    ctx->pc = 0x223988u;
    // 0x223988: 0x1a00001e  blez        $s0, . + 4 + (0x1E << 2)
    ctx->pc = 0x223988u;
    {
        const bool branch_taken_0x223988 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x22398Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223988u;
        // 0x22398c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223988) {
            ctx->pc = 0x223A04u;
            goto label_223a04;
        }
    }
    ctx->pc = 0x223990u;
    // 0x223990: 0x113080  sll         $a2, $s1, 2
    ctx->pc = 0x223990u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x223994: 0x26270001  addiu       $a3, $s1, 0x1
    ctx->pc = 0x223994u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_223998:
    // 0x223998: 0xb41818  mult        $v1, $a1, $s4
    ctx->pc = 0x223998u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x22399c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x22399cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2239a0: 0xb0202a  slt         $a0, $a1, $s0
    ctx->pc = 0x2239a0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2239a4: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x2239a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2239a8: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x2239a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x2239ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2239acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2239b0: 0x691826  xor         $v1, $v1, $t1
    ctx->pc = 0x2239b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 9));
    // 0x2239b4: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2239B4u;
    {
        const bool branch_taken_0x2239b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2239B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2239B4u;
        // 0x2239b8: 0x2c3500a  movz        $t2, $s6, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2239b4) {
            ctx->pc = 0x223998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_223998;
        }
    }
    ctx->pc = 0x2239BCu;
    // 0x2239bc: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2239BCu;
    {
        const bool branch_taken_0x2239bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2239C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2239BCu;
        // 0x2239c0: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2239bc) {
            ctx->pc = 0x223A14u;
            goto label_223a14;
        }
    }
    ctx->pc = 0x2239C4u;
label_2239c4:
    // 0x2239c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2239c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2239c8: 0x18c00010  blez        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x2239C8u;
    {
        const bool branch_taken_0x2239c8 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2239CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2239C8u;
        // 0x2239cc: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2239c8) {
            ctx->pc = 0x223A0Cu;
            goto label_223a0c;
        }
    }
    ctx->pc = 0x2239D0u;
    // 0x2239d0: 0x24670001  addiu       $a3, $v1, 0x1
    ctx->pc = 0x2239d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2239d4: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x2239d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2239d8:
    // 0x2239d8: 0xb41818  mult        $v1, $a1, $s4
    ctx->pc = 0x2239d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2239dc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2239dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2239e0: 0xa8202a  slt         $a0, $a1, $t0
    ctx->pc = 0x2239e0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2239e4: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x2239e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2239e8: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x2239e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x2239ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2239ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2239f0: 0x691826  xor         $v1, $v1, $t1
    ctx->pc = 0x2239f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 9));
    // 0x2239f4: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2239F4u;
    {
        const bool branch_taken_0x2239f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2239F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2239F4u;
        // 0x2239f8: 0x2c3500a  movz        $t2, $s6, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2239f4) {
            ctx->pc = 0x2239D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2239d8;
        }
    }
    ctx->pc = 0x2239FCu;
    // 0x2239fc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2239FCu;
    {
        const bool branch_taken_0x2239fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2239FCu;
        // 0x223a00: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2239fc) {
            ctx->pc = 0x223A14u;
            goto label_223a14;
        }
    }
    ctx->pc = 0x223A04u;
label_223a04:
    // 0x223a04: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x223A04u;
    {
        const bool branch_taken_0x223a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223A04u;
        // 0x223a08: 0x26270001  addiu       $a3, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223a04) {
            ctx->pc = 0x223A10u;
            goto label_223a10;
        }
    }
    ctx->pc = 0x223A0Cu;
label_223a0c:
    // 0x223a0c: 0x24670001  addiu       $a3, $v1, 0x1
    ctx->pc = 0x223a0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_223a10:
    // 0x223a10: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x223a10u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_223a14:
    // 0x223a14: 0x223102a  slt         $v0, $s1, $v1
    ctx->pc = 0x223a14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x223a18: 0x1040ffd9  beqz        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x223A18u;
    {
        const bool branch_taken_0x223a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x223a18) {
            ctx->pc = 0x223980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_223980;
        }
    }
    ctx->pc = 0x223A20u;
    // 0x223a20: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x223A20u;
    {
        const bool branch_taken_0x223a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x223a20) {
            ctx->pc = 0x223A2Cu;
            goto label_223a2c;
        }
    }
    ctx->pc = 0x223A28u;
label_223a28:
    // 0x223a28: 0x264b0001  addiu       $t3, $s2, 0x1
    ctx->pc = 0x223a28u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_223a2c:
    // 0x223a2c: 0x55400024  bnel        $t2, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x223A2Cu;
    {
        const bool branch_taken_0x223a2c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x223a2c) {
            ctx->pc = 0x223A30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x223A2Cu;
            // 0x223a30: 0x8da20000  lw          $v0, 0x0($t5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x223AC0u;
            goto label_223ac0;
        }
    }
    ctx->pc = 0x223A34u;
    // 0x223a34: 0x1236000b  beq         $s1, $s6, . + 4 + (0xB << 2)
    ctx->pc = 0x223A34u;
    {
        const bool branch_taken_0x223a34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 22));
        ctx->pc = 0x223A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223A34u;
        // 0x223a38: 0x2a220002  slti        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x223a34) {
            ctx->pc = 0x223A64u;
            goto label_223a64;
        }
    }
    ctx->pc = 0x223A3Cu;
    // 0x223a3c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x223A3Cu;
    {
        const bool branch_taken_0x223a3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223A3Cu;
        // 0x223a40: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223a3c) {
            ctx->pc = 0x223A54u;
            goto label_223a54;
        }
    }
    ctx->pc = 0x223A44u;
    // 0x223a44: 0x5220001d  beql        $s1, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x223A44u;
    {
        const bool branch_taken_0x223a44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x223a44) {
            ctx->pc = 0x223A48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x223A44u;
            // 0x223a48: 0xadc90000  sw          $t1, 0x0($t6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x223ABCu;
            goto label_223abc;
        }
    }
    ctx->pc = 0x223A4Cu;
    // 0x223a4c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x223A4Cu;
    {
        const bool branch_taken_0x223a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223A4Cu;
        // 0x223a50: 0x8da20000  lw          $v0, 0x0($t5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223a4c) {
            ctx->pc = 0x223AC0u;
            goto label_223ac0;
        }
    }
    ctx->pc = 0x223A54u;
label_223a54:
    // 0x223a54: 0x1222000c  beq         $s1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x223A54u;
    {
        const bool branch_taken_0x223a54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x223A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223A54u;
        // 0x223a58: 0x2142018  mult        $a0, $s0, $s4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x223a54) {
            ctx->pc = 0x223A88u;
            goto label_223a88;
        }
    }
    ctx->pc = 0x223A5Cu;
    // 0x223a5c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x223A5Cu;
    {
        const bool branch_taken_0x223a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223A5Cu;
        // 0x223a60: 0x8da20000  lw          $v0, 0x0($t5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223a5c) {
            ctx->pc = 0x223AC0u;
            goto label_223ac0;
        }
    }
    ctx->pc = 0x223A64u;
label_223a64:
    // 0x223a64: 0x2142018  mult        $a0, $s0, $s4
    ctx->pc = 0x223a64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x223a68: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x223a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x223a6c: 0x244531a8  addiu       $a1, $v0, 0x31A8
    ctx->pc = 0x223a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12712));
    // 0x223a70: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x223a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x223a74: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x223a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x223a78: 0x546c0010  bnel        $v1, $t4, . + 4 + (0x10 << 2)
    ctx->pc = 0x223A78u;
    {
        const bool branch_taken_0x223a78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 12));
        if (branch_taken_0x223a78) {
            ctx->pc = 0x223A7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x223A78u;
            // 0x223a7c: 0xac490004  sw          $t1, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x223ABCu;
            goto label_223abc;
        }
    }
    ctx->pc = 0x223A80u;
    // 0x223a80: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x223A80u;
    {
        const bool branch_taken_0x223a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223A80u;
        // 0x223a84: 0x8da20000  lw          $v0, 0x0($t5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223a80) {
            ctx->pc = 0x223AC0u;
            goto label_223ac0;
        }
    }
    ctx->pc = 0x223A88u;
label_223a88:
    // 0x223a88: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x223a88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x223a8c: 0x246531a8  addiu       $a1, $v1, 0x31A8
    ctx->pc = 0x223a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 12712));
    // 0x223a90: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x223a90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x223a94: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x223a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x223a98: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x223a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x223a9c: 0x10660007  beq         $v1, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x223A9Cu;
    {
        const bool branch_taken_0x223a9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x223AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223A9Cu;
        // 0x223aa0: 0xa41021  addu        $v0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223a9c) {
            ctx->pc = 0x223ABCu;
            goto label_223abc;
        }
    }
    ctx->pc = 0x223AA4u;
    // 0x223aa4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x223aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x223aa8: 0x10660004  beq         $v1, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x223AA8u;
    {
        const bool branch_taken_0x223aa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x223AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223AA8u;
        // 0x223aac: 0x851021  addu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223aa8) {
            ctx->pc = 0x223ABCu;
            goto label_223abc;
        }
    }
    ctx->pc = 0x223AB0u;
    // 0x223ab0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x223AB0u;
    {
        const bool branch_taken_0x223ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223AB0u;
        // 0x223ab4: 0xac490008  sw          $t1, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223ab0) {
            ctx->pc = 0x223ABCu;
            goto label_223abc;
        }
    }
    ctx->pc = 0x223AB8u;
label_223ab8:
    // 0x223ab8: 0x264b0001  addiu       $t3, $s2, 0x1
    ctx->pc = 0x223ab8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_223abc:
    // 0x223abc: 0x8da20000  lw          $v0, 0x0($t5)
    ctx->pc = 0x223abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
label_223ac0:
    // 0x223ac0: 0x144c000b  bne         $v0, $t4, . + 4 + (0xB << 2)
    ctx->pc = 0x223AC0u;
    {
        const bool branch_taken_0x223ac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 12));
        ctx->pc = 0x223AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223AC0u;
        // 0x223ac4: 0x160902d  daddu       $s2, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223ac0) {
            ctx->pc = 0x223AF0u;
            goto label_223af0;
        }
    }
    ctx->pc = 0x223AC8u;
    // 0x223ac8: 0x448b0000  mtc1        $t3, $f0
    ctx->pc = 0x223ac8u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223acc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x223accu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x223ad0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x223ad0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x223ad4: 0x0  nop
    ctx->pc = 0x223ad4u;
    // NOP
    // 0x223ad8: 0x4503ff8d  bc1tl       . + 4 + (-0x73 << 2)
    ctx->pc = 0x223AD8u;
    {
        const bool branch_taken_0x223ad8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x223ad8) {
            ctx->pc = 0x223ADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x223AD8u;
            // 0x223adc: 0x7fac0ad0  sq          $t4, 0xAD0($sp) (Delay Slot)
            WRITE128(ADD32(GPR_U32(ctx, 29), 2768), GPR_VEC(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x223910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_223910;
        }
    }
    ctx->pc = 0x223AE0u;
    // 0x223ae0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x223AE0u;
    {
        const bool branch_taken_0x223ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223AE0u;
        // 0x223ae4: 0x8f869f74  lw          $a2, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223ae0) {
            ctx->pc = 0x223AF4u;
            goto label_223af4;
        }
    }
    ctx->pc = 0x223AE8u;
label_223ae8:
    // 0x223ae8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x223AE8u;
    {
        const bool branch_taken_0x223ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223AE8u;
        // 0x223aec: 0x26130001  addiu       $s3, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223ae8) {
            ctx->pc = 0x223AF4u;
            goto label_223af4;
        }
    }
    ctx->pc = 0x223AF0u;
label_223af0:
    // 0x223af0: 0x8f869f74  lw          $a2, -0x608C($gp)
    ctx->pc = 0x223af0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
label_223af4:
    // 0x223af4: 0x8f82b59c  lw          $v0, -0x4A64($gp)
    ctx->pc = 0x223af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x223af8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x223af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x223afc: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x223afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x223b00: 0x1443001e  bne         $v0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x223B00u;
    {
        const bool branch_taken_0x223b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x223B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223B00u;
        // 0x223b04: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223b00) {
            ctx->pc = 0x223B7Cu;
            goto label_223b7c;
        }
    }
    ctx->pc = 0x223B08u;
    // 0x223b08: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x223B08u;
    SET_GPR_U32(ctx, 31, 0x223B10u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x223B08u, 0x223B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223B10u;
label_223b10:
    // 0x223b10: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x223b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x223b14: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x223b14u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x223b18: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x223B18u;
    {
        const bool branch_taken_0x223b18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x223b18) {
            ctx->pc = 0x223B1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x223B18u;
            // 0x223b1c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x223B20u;
            goto label_223b20;
        }
    }
    ctx->pc = 0x223B20u;
label_223b20:
    // 0x223b20: 0x2010  mfhi        $a0
    ctx->pc = 0x223b20u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x223b24: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x223B24u;
    {
        const bool branch_taken_0x223b24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x223B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223B24u;
        // 0x223b28: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223b24) {
            ctx->pc = 0x223B58u;
            goto label_223b58;
        }
    }
    ctx->pc = 0x223B2Cu;
    // 0x223b2c: 0x1620000b  bnez        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x223B2Cu;
    {
        const bool branch_taken_0x223b2c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x223B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223B2Cu;
        // 0x223b30: 0x3c040033  lui         $a0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223b2c) {
            ctx->pc = 0x223B5Cu;
            goto label_223b5c;
        }
    }
    ctx->pc = 0x223B34u;
    // 0x223b34: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x223b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x223b38: 0x8f869f74  lw          $a2, -0x608C($gp)
    ctx->pc = 0x223b38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x223b3c: 0x244231a8  addiu       $v0, $v0, 0x31A8
    ctx->pc = 0x223b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12712));
    // 0x223b40: 0x400013  mtlo        $v0
    ctx->pc = 0x223b40u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x223b44: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x223b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x223b48: 0x72021800  madd        $v1, $s0, $v0
    ctx->pc = 0x223b48u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x223b4c: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x223b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x223b50: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x223B50u;
    {
        const bool branch_taken_0x223b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223B50u;
        // 0x223b54: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223b50) {
            ctx->pc = 0x223B78u;
            goto label_223b78;
        }
    }
    ctx->pc = 0x223B58u;
label_223b58:
    // 0x223b58: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x223b58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
label_223b5c:
    // 0x223b5c: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x223b5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x223b60: 0x248431a8  addiu       $a0, $a0, 0x31A8
    ctx->pc = 0x223b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12712));
    // 0x223b64: 0x8f869f74  lw          $a2, -0x608C($gp)
    ctx->pc = 0x223b64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x223b68: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x223b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x223b6c: 0x771021  addu        $v0, $v1, $s7
    ctx->pc = 0x223b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x223b70: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x223b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x223b74: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x223b74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_223b78:
    // 0x223b78: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x223b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_223b7c:
    // 0x223b7c: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x223b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x223b80: 0x2021818  mult        $v1, $s0, $v0
    ctx->pc = 0x223b80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x223b84: 0x248431a8  addiu       $a0, $a0, 0x31A8
    ctx->pc = 0x223b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12712));
    // 0x223b88: 0x2e32821  addu        $a1, $s7, $v1
    ctx->pc = 0x223b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x223b8c: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x223b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x223b90: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x223b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x223b94: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x223b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x223b98: 0x14440012  bne         $v0, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x223B98u;
    {
        const bool branch_taken_0x223b98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x223B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223B98u;
        // 0x223b9c: 0x22040  sll         $a0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223b98) {
            ctx->pc = 0x223BE4u;
            goto label_223be4;
        }
    }
    ctx->pc = 0x223BA0u;
    // 0x223ba0: 0x1620000c  bnez        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x223BA0u;
    {
        const bool branch_taken_0x223ba0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x223BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223BA0u;
        // 0x223ba4: 0x3c040033  lui         $a0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223ba0) {
            ctx->pc = 0x223BD4u;
            goto label_223bd4;
        }
    }
    ctx->pc = 0x223BA8u;
    // 0x223ba8: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x223ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x223bac: 0x24843178  addiu       $a0, $a0, 0x3178
    ctx->pc = 0x223bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12664));
    // 0x223bb0: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x223bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x223bb4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x223bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x223bb8: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x223bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x223bbc: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x223bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x223bc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x223bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x223bc4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x223bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x223bc8: 0x8c640c08  lw          $a0, 0xC08($v1)
    ctx->pc = 0x223bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3080)));
    // 0x223bcc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x223BCCu;
    {
        const bool branch_taken_0x223bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223BCCu;
        // 0x223bd0: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223bcc) {
            ctx->pc = 0x223C28u;
            goto label_223c28;
        }
    }
    ctx->pc = 0x223BD4u;
label_223bd4:
    // 0x223bd4: 0x24843178  addiu       $a0, $a0, 0x3178
    ctx->pc = 0x223bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12664));
    // 0x223bd8: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x223bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x223bdc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x223BDCu;
    {
        const bool branch_taken_0x223bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223BDCu;
        // 0x223be0: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223bdc) {
            ctx->pc = 0x223C28u;
            goto label_223c28;
        }
    }
    ctx->pc = 0x223BE4u;
label_223be4:
    // 0x223be4: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x223be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x223be8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x223be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x223bec: 0x2442e648  addiu       $v0, $v0, -0x19B8
    ctx->pc = 0x223becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960712));
    // 0x223bf0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x223bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x223bf4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x223bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x223bf8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x223bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x223bfc: 0x24423178  addiu       $v0, $v0, 0x3178
    ctx->pc = 0x223bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12664));
    // 0x223c00: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x223c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x223c04: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x223c04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x223c08: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x223c08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
    // 0x223c0c: 0x24842c18  addiu       $a0, $a0, 0x2C18
    ctx->pc = 0x223c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11288));
    // 0x223c10: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x223c10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x223c14: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x223c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x223c18: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x223c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x223c1c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x223c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x223c20: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x223c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x223c24: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x223c24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_223c28:
    // 0x223c28: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x223c28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223c2c: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x223c2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x223c30: 0x1440ff17  bnez        $v0, . + 4 + (-0xE9 << 2)
    ctx->pc = 0x223C30u;
    {
        const bool branch_taken_0x223c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x223c30) {
            ctx->pc = 0x223890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_223890;
        }
    }
    ctx->pc = 0x223C38u;
    // 0x223c38: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x223C38u;
    {
        const bool branch_taken_0x223c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223C38u;
        // 0x223c3c: 0x8fb10ac0  lw          $s1, 0xAC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2752)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223c38) {
            ctx->pc = 0x223C4Cu;
            goto label_223c4c;
        }
    }
    ctx->pc = 0x223C40u;
label_223c40:
    // 0x223c40: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x223c40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x223c44: 0xafb10ac0  sw          $s1, 0xAC0($sp)
    ctx->pc = 0x223c44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2752), GPR_U32(ctx, 17));
    // 0x223c48: 0x8fb10ac0  lw          $s1, 0xAC0($sp)
    ctx->pc = 0x223c48u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2752)));
label_223c4c:
    // 0x223c4c: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x223c4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x223c50: 0x1440ff09  bnez        $v0, . + 4 + (-0xF7 << 2)
    ctx->pc = 0x223C50u;
    {
        const bool branch_taken_0x223c50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x223c50) {
            ctx->pc = 0x223878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_223878;
        }
    }
    ctx->pc = 0x223C58u;
    // 0x223c58: 0x18c00010  blez        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x223C58u;
    {
        const bool branch_taken_0x223c58 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x223C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223C58u;
        // 0x223c5c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223c58) {
            ctx->pc = 0x223C9Cu;
            goto label_223c9c;
        }
    }
    ctx->pc = 0x223C60u;
    // 0x223c60: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x223c60u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223c64: 0x26130001  addiu       $s3, $s0, 0x1
    ctx->pc = 0x223c64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_223c68:
    // 0x223c68: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x223c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x223c6c: 0x0  nop
    ctx->pc = 0x223c6cu;
    // NOP
label_223c70:
    // 0x223c70: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x223c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x223c74: 0x0  nop
    ctx->pc = 0x223c74u;
    // NOP
    // 0x223c78: 0x0  nop
    ctx->pc = 0x223c78u;
    // NOP
    // 0x223c7c: 0x0  nop
    ctx->pc = 0x223c7cu;
    // NOP
    // 0x223c80: 0x0  nop
    ctx->pc = 0x223c80u;
    // NOP
    // 0x223c84: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x223C84u;
    {
        const bool branch_taken_0x223c84 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x223c84) {
            ctx->pc = 0x223C70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_223c70;
        }
    }
    ctx->pc = 0x223C8Cu;
    // 0x223c8c: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x223c8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223c90: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x223c90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x223c94: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x223C94u;
    {
        const bool branch_taken_0x223c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x223C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223C94u;
        // 0x223c98: 0x26130001  addiu       $s3, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223c94) {
            ctx->pc = 0x223C68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_223c68;
        }
    }
    ctx->pc = 0x223C9Cu;
label_223c9c:
    // 0x223c9c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x223c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x223ca0: 0x8f83b59c  lw          $v1, -0x4A64($gp)
    ctx->pc = 0x223ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x223ca4: 0x2444c4a8  addiu       $a0, $v0, -0x3B58
    ctx->pc = 0x223ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952104));
    // 0x223ca8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x223ca8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223cac: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x223cacu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x32C4F0u));
    // 0x223cb0: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x223cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x223cb4: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x223cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x223cb8: 0x2c430002  sltiu       $v1, $v0, 0x2
    ctx->pc = 0x223cb8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x223cbc: 0x0  nop
    ctx->pc = 0x223cbcu;
    // NOP
label_223cc0:
    // 0x223cc0: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x223CC0u;
    {
        const bool branch_taken_0x223cc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x223CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223CC0u;
        // 0x223cc4: 0x2a020004  slti        $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x223cc0) {
            ctx->pc = 0x223CDCu;
            goto label_223cdc;
        }
    }
    ctx->pc = 0x223CC8u;
    // 0x223cc8: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x223cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x223ccc: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x223cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x223cd0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x223CD0u;
    {
        const bool branch_taken_0x223cd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x223CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223CD0u;
        // 0x223cd4: 0x2a020004  slti        $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x223cd0) {
            ctx->pc = 0x223CDCu;
            goto label_223cdc;
        }
    }
    ctx->pc = 0x223CD8u;
    // 0x223cd8: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x223cd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_223cdc:
    // 0x223cdc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x223CDCu;
    {
        const bool branch_taken_0x223cdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x223CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223CDCu;
        // 0x223ce0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223cdc) {
            ctx->pc = 0x223CC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_223cc0;
        }
    }
    ctx->pc = 0x223CE4u;
    // 0x223ce4: 0x18c0002b  blez        $a2, . + 4 + (0x2B << 2)
    ctx->pc = 0x223CE4u;
    {
        const bool branch_taken_0x223ce4 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x223CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223CE4u;
        // 0x223ce8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223ce4) {
            ctx->pc = 0x223D94u;
            goto label_223d94;
        }
    }
    ctx->pc = 0x223CECu;
    // 0x223cec: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x223cecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x223cf0: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x223cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x223cf4: 0x0  nop
    ctx->pc = 0x223cf4u;
    // NOP
label_223cf8:
    // 0x223cf8: 0x24e43178  addiu       $a0, $a3, 0x3178
    ctx->pc = 0x223cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 12664));
    // 0x223cfc: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x223cfcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x223d00: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x223d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x223d04: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x223d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x223d08: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x223d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x223d0c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x223d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x223d10: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x223d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x223d14: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x223D14u;
    {
        const bool branch_taken_0x223d14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x223d14) {
            ctx->pc = 0x223D18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x223D14u;
            // 0x223d18: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x223D2Cu;
            goto label_223d2c;
        }
    }
    ctx->pc = 0x223D1Cu;
    // 0x223d1c: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x223D1Cu;
    {
        const bool branch_taken_0x223d1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x223d1c) {
            ctx->pc = 0x223D20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x223D1Cu;
            // 0x223d20: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x223D24u;
            goto label_223d24;
        }
    }
    ctx->pc = 0x223D24u;
label_223d24:
    // 0x223d24: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x223d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x223d28: 0x24e43178  addiu       $a0, $a3, 0x3178
    ctx->pc = 0x223d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 12664));
label_223d2c:
    // 0x223d2c: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x223d2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x223d30: 0x24820008  addiu       $v0, $a0, 0x8
    ctx->pc = 0x223d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x223d34: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x223d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x223d38: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x223d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x223d3c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x223d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x223d40: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x223d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x223d44: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x223D44u;
    {
        const bool branch_taken_0x223d44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x223d44) {
            ctx->pc = 0x223D48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x223D44u;
            // 0x223d48: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x223D58u;
            goto label_223d58;
        }
    }
    ctx->pc = 0x223D4Cu;
    // 0x223d4c: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x223D4Cu;
    {
        const bool branch_taken_0x223d4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x223d4c) {
            ctx->pc = 0x223D50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x223D4Cu;
            // 0x223d50: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x223D54u;
            goto label_223d54;
        }
    }
    ctx->pc = 0x223D54u;
label_223d54:
    // 0x223d54: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x223d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_223d58:
    // 0x223d58: 0x24e43178  addiu       $a0, $a3, 0x3178
    ctx->pc = 0x223d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 12664));
    // 0x223d5c: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x223d5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x223d60: 0x24820008  addiu       $v0, $a0, 0x8
    ctx->pc = 0x223d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x223d64: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x223d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x223d68: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x223d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x223d6c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x223d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x223d70: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x223d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x223d74: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x223D74u;
    {
        const bool branch_taken_0x223d74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x223d74) {
            ctx->pc = 0x223D78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x223D74u;
            // 0x223d78: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x223D88u;
            goto label_223d88;
        }
    }
    ctx->pc = 0x223D7Cu;
    // 0x223d7c: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x223D7Cu;
    {
        const bool branch_taken_0x223d7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x223d7c) {
            ctx->pc = 0x223D80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x223D7Cu;
            // 0x223d80: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x223D84u;
            goto label_223d84;
        }
    }
    ctx->pc = 0x223D84u;
label_223d84:
    // 0x223d84: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x223d84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_223d88:
    // 0x223d88: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x223d88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x223d8c: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x223D8Cu;
    {
        const bool branch_taken_0x223d8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x223D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223D8Cu;
        // 0x223d90: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223d8c) {
            ctx->pc = 0x223CF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_223cf8;
        }
    }
    ctx->pc = 0x223D94u;
label_223d94:
    // 0x223d94: 0xdfbf0bb0  ld          $ra, 0xBB0($sp)
    ctx->pc = 0x223d94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 2992)));
label_223d98:
    // 0x223d98: 0xdfbe0ba0  ld          $fp, 0xBA0($sp)
    ctx->pc = 0x223d98u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 2976)));
label_223d9c:
    // 0x223d9c: 0xdfb70b90  ld          $s7, 0xB90($sp)
    ctx->pc = 0x223d9cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 2960)));
    // 0x223da0: 0xdfb60b80  ld          $s6, 0xB80($sp)
    ctx->pc = 0x223da0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 2944)));
    // 0x223da4: 0xdfb50b70  ld          $s5, 0xB70($sp)
    ctx->pc = 0x223da4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 2928)));
    // 0x223da8: 0xdfb40b60  ld          $s4, 0xB60($sp)
    ctx->pc = 0x223da8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 2912)));
    // 0x223dac: 0xdfb30b50  ld          $s3, 0xB50($sp)
    ctx->pc = 0x223dacu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 2896)));
    // 0x223db0: 0xdfb20b40  ld          $s2, 0xB40($sp)
    ctx->pc = 0x223db0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 2880)));
    // 0x223db4: 0xdfb10b30  ld          $s1, 0xB30($sp)
    ctx->pc = 0x223db4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 2864)));
    // 0x223db8: 0xdfb00b20  ld          $s0, 0xB20($sp)
    ctx->pc = 0x223db8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 2848)));
    // 0x223dbc: 0xc7b90be8  lwc1        $f25, 0xBE8($sp)
    ctx->pc = 0x223dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 3048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x223dc0: 0xc7b80be0  lwc1        $f24, 0xBE0($sp)
    ctx->pc = 0x223dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 3040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x223dc4: 0xc7b70bd8  lwc1        $f23, 0xBD8($sp)
    ctx->pc = 0x223dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 3032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x223dc8: 0xc7b60bd0  lwc1        $f22, 0xBD0($sp)
    ctx->pc = 0x223dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 3024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x223dcc: 0xc7b50bc8  lwc1        $f21, 0xBC8($sp)
    ctx->pc = 0x223dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 3016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x223dd0: 0xc7b40bc0  lwc1        $f20, 0xBC0($sp)
    ctx->pc = 0x223dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 3008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x223dd4: 0x3e00008  jr          $ra
    ctx->pc = 0x223DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223DD4u;
        // 0x223dd8: 0x27bd0bf0  addiu       $sp, $sp, 0xBF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 3056));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223DD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223DDCu;
}
