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

// Function: main_pageGfx
// Address: 0x2120b8 - 0x2122bc
void main_pageGfx_0x2120b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("main_pageGfx_0x2120b8");
#endif

    switch (ctx->pc) {
        case 0x2120b8u: goto label_2120b8;
        case 0x2120bcu: goto label_2120bc;
        case 0x2120c0u: goto label_2120c0;
        case 0x2120c4u: goto label_2120c4;
        case 0x2120c8u: goto label_2120c8;
        case 0x2120ccu: goto label_2120cc;
        case 0x2120d0u: goto label_2120d0;
        case 0x2120d4u: goto label_2120d4;
        case 0x2120d8u: goto label_2120d8;
        case 0x2120dcu: goto label_2120dc;
        case 0x2120e0u: goto label_2120e0;
        case 0x2120e4u: goto label_2120e4;
        case 0x2120e8u: goto label_2120e8;
        case 0x2120ecu: goto label_2120ec;
        case 0x2120f0u: goto label_2120f0;
        case 0x2120f4u: goto label_2120f4;
        case 0x2120f8u: goto label_2120f8;
        case 0x2120fcu: goto label_2120fc;
        case 0x212100u: goto label_212100;
        case 0x212104u: goto label_212104;
        case 0x212108u: goto label_212108;
        case 0x21210cu: goto label_21210c;
        case 0x212110u: goto label_212110;
        case 0x212114u: goto label_212114;
        case 0x212118u: goto label_212118;
        case 0x21211cu: goto label_21211c;
        case 0x212120u: goto label_212120;
        case 0x212124u: goto label_212124;
        case 0x212128u: goto label_212128;
        case 0x21212cu: goto label_21212c;
        case 0x212130u: goto label_212130;
        case 0x212134u: goto label_212134;
        case 0x212138u: goto label_212138;
        case 0x21213cu: goto label_21213c;
        case 0x212140u: goto label_212140;
        case 0x212144u: goto label_212144;
        case 0x212148u: goto label_212148;
        case 0x21214cu: goto label_21214c;
        case 0x212150u: goto label_212150;
        case 0x212154u: goto label_212154;
        case 0x212158u: goto label_212158;
        case 0x21215cu: goto label_21215c;
        case 0x212160u: goto label_212160;
        case 0x212164u: goto label_212164;
        case 0x212168u: goto label_212168;
        case 0x21216cu: goto label_21216c;
        case 0x212170u: goto label_212170;
        case 0x212174u: goto label_212174;
        case 0x212178u: goto label_212178;
        case 0x21217cu: goto label_21217c;
        case 0x212180u: goto label_212180;
        case 0x212184u: goto label_212184;
        case 0x212188u: goto label_212188;
        case 0x21218cu: goto label_21218c;
        case 0x212190u: goto label_212190;
        case 0x212194u: goto label_212194;
        case 0x212198u: goto label_212198;
        case 0x21219cu: goto label_21219c;
        case 0x2121a0u: goto label_2121a0;
        case 0x2121a4u: goto label_2121a4;
        case 0x2121a8u: goto label_2121a8;
        case 0x2121acu: goto label_2121ac;
        case 0x2121b0u: goto label_2121b0;
        case 0x2121b4u: goto label_2121b4;
        case 0x2121b8u: goto label_2121b8;
        case 0x2121bcu: goto label_2121bc;
        case 0x2121c0u: goto label_2121c0;
        case 0x2121c4u: goto label_2121c4;
        case 0x2121c8u: goto label_2121c8;
        case 0x2121ccu: goto label_2121cc;
        case 0x2121d0u: goto label_2121d0;
        case 0x2121d4u: goto label_2121d4;
        case 0x2121d8u: goto label_2121d8;
        case 0x2121dcu: goto label_2121dc;
        case 0x2121e0u: goto label_2121e0;
        case 0x2121e4u: goto label_2121e4;
        case 0x2121e8u: goto label_2121e8;
        case 0x2121ecu: goto label_2121ec;
        case 0x2121f0u: goto label_2121f0;
        case 0x2121f4u: goto label_2121f4;
        case 0x2121f8u: goto label_2121f8;
        case 0x2121fcu: goto label_2121fc;
        case 0x212200u: goto label_212200;
        case 0x212204u: goto label_212204;
        case 0x212208u: goto label_212208;
        case 0x21220cu: goto label_21220c;
        case 0x212210u: goto label_212210;
        case 0x212214u: goto label_212214;
        case 0x212218u: goto label_212218;
        case 0x21221cu: goto label_21221c;
        case 0x212220u: goto label_212220;
        case 0x212224u: goto label_212224;
        case 0x212228u: goto label_212228;
        case 0x21222cu: goto label_21222c;
        case 0x212230u: goto label_212230;
        case 0x212234u: goto label_212234;
        case 0x212238u: goto label_212238;
        case 0x21223cu: goto label_21223c;
        case 0x212240u: goto label_212240;
        case 0x212244u: goto label_212244;
        case 0x212248u: goto label_212248;
        case 0x21224cu: goto label_21224c;
        case 0x212250u: goto label_212250;
        case 0x212254u: goto label_212254;
        case 0x212258u: goto label_212258;
        case 0x21225cu: goto label_21225c;
        case 0x212260u: goto label_212260;
        case 0x212264u: goto label_212264;
        case 0x212268u: goto label_212268;
        case 0x21226cu: goto label_21226c;
        case 0x212270u: goto label_212270;
        case 0x212274u: goto label_212274;
        case 0x212278u: goto label_212278;
        case 0x21227cu: goto label_21227c;
        case 0x212280u: goto label_212280;
        case 0x212284u: goto label_212284;
        case 0x212288u: goto label_212288;
        case 0x21228cu: goto label_21228c;
        case 0x212290u: goto label_212290;
        case 0x212294u: goto label_212294;
        case 0x212298u: goto label_212298;
        case 0x21229cu: goto label_21229c;
        case 0x2122a0u: goto label_2122a0;
        case 0x2122a4u: goto label_2122a4;
        case 0x2122a8u: goto label_2122a8;
        case 0x2122acu: goto label_2122ac;
        case 0x2122b0u: goto label_2122b0;
        case 0x2122b4u: goto label_2122b4;
        case 0x2122b8u: goto label_2122b8;
        default: break;
    }

    ctx->pc = 0x2120b8u;

label_2120b8:
    // 0x2120b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2120b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2120bc:
    // 0x2120bc: 0x8f85b234  lw          $a1, -0x4DCC($gp)
    ctx->pc = 0x2120bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
label_2120c0:
    // 0x2120c0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2120c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2120c4:
    // 0x2120c4: 0x2406005c  addiu       $a2, $zero, 0x5C
    ctx->pc = 0x2120c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_2120c8:
    // 0x2120c8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2120c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2120cc:
    // 0x2120cc: 0x3c0301fb  lui         $v1, 0x1FB
    ctx->pc = 0x2120ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)507 << 16));
label_2120d0:
    // 0x2120d0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2120d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2120d4:
    // 0x2120d4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2120d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2120d8:
    // 0x2120d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2120d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2120dc:
    // 0x2120dc: 0x24633240  addiu       $v1, $v1, 0x3240
    ctx->pc = 0x2120dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12864));
label_2120e0:
    // 0x2120e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2120e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2120e4:
    // 0x2120e4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2120e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2120e8:
    // 0x2120e8: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x2120e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2120ec:
    // 0x2120ec: 0xc0adfaa  jal         func_2B7EA8
label_2120f0:
    if (ctx->pc == 0x2120F0u) {
        ctx->pc = 0x2120F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2120ECu;
        // 0x2120f0: 0x438821  addu        $s1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2120F4u;
        goto label_2120f4;
    }
    ctx->pc = 0x2120ECu;
    SET_GPR_U32(ctx, 31, 0x2120F4u);
    ctx->pc = 0x2120F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2120ECu;
    // 0x2120f0: 0x438821  addu        $s1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7EA8u, 0x2120ECu, 0x2120F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2120F4u;
label_2120f4:
    // 0x2120f4: 0xc08b79a  jal         func_22DE68
label_2120f8:
    if (ctx->pc == 0x2120F8u) {
        ctx->pc = 0x2120F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2120F4u;
        // 0x2120f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2120FCu;
        goto label_2120fc;
    }
    ctx->pc = 0x2120F4u;
    SET_GPR_U32(ctx, 31, 0x2120FCu);
    ctx->pc = 0x2120F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2120F4u;
    // 0x2120f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DE68u, 0x2120F4u, 0x2120FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2120FCu;
label_2120fc:
    // 0x2120fc: 0x8f82b688  lw          $v0, -0x4978($gp)
    ctx->pc = 0x2120fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948488)));
label_212100:
    // 0x212100: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
label_212104:
    if (ctx->pc == 0x212104u) {
        ctx->pc = 0x212108u;
        goto label_212108;
    }
    ctx->pc = 0x212100u;
    {
        const bool branch_taken_0x212100 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x212100) {
            ctx->pc = 0x212118u;
            goto label_212118;
        }
    }
    ctx->pc = 0x212108u;
label_212108:
    // 0x212108: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x212108u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_21210c:
    // 0x21210c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x21210cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_212110:
    // 0x212110: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_212114:
    if (ctx->pc == 0x212114u) {
        ctx->pc = 0x212114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212110u;
        // 0x212114: 0x8f829dac  lw          $v0, -0x6254($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942124)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212118u;
        goto label_212118;
    }
    ctx->pc = 0x212110u;
    {
        const bool branch_taken_0x212110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212110u;
        // 0x212114: 0x8f829dac  lw          $v0, -0x6254($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212110) {
            ctx->pc = 0x212150u;
            goto label_212150;
        }
    }
    ctx->pc = 0x212118u;
label_212118:
    // 0x212118: 0xc0adf7c  jal         func_2B7DF0
label_21211c:
    if (ctx->pc == 0x21211Cu) {
        ctx->pc = 0x21211Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212118u;
        // 0x21211c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212120u;
        goto label_212120;
    }
    ctx->pc = 0x212118u;
    SET_GPR_U32(ctx, 31, 0x212120u);
    ctx->pc = 0x21211Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212118u;
    // 0x21211c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7DF0u, 0x212118u, 0x212120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212120u;
label_212120:
    // 0x212120: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x212120u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_212124:
    // 0x212124: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x212124u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_212128:
    // 0x212128: 0x246299f0  addiu       $v0, $v1, -0x6610
    ctx->pc = 0x212128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941168));
label_21212c:
    // 0x21212c: 0x8c6499f0  lw          $a0, -0x6610($v1)
    ctx->pc = 0x21212cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941168)));
label_212130:
    // 0x212130: 0x8c470018  lw          $a3, 0x18($v0)
    ctx->pc = 0x212130u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_212134:
    // 0x212134: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x212134u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_212138:
    // 0x212138: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x212138u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_21213c:
    // 0x21213c: 0xc0ae108  jal         func_2B8420
label_212140:
    if (ctx->pc == 0x212140u) {
        ctx->pc = 0x212140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21213Cu;
        // 0x212140: 0x8c460004  lw          $a2, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212144u;
        goto label_212144;
    }
    ctx->pc = 0x21213Cu;
    SET_GPR_U32(ctx, 31, 0x212144u);
    ctx->pc = 0x212140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21213Cu;
    // 0x212140: 0x8c460004  lw          $a2, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x21213Cu, 0x212144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212144u;
label_212144:
    // 0x212144: 0xc0adf7c  jal         func_2B7DF0
label_212148:
    if (ctx->pc == 0x212148u) {
        ctx->pc = 0x212148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212144u;
        // 0x212148: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21214Cu;
        goto label_21214c;
    }
    ctx->pc = 0x212144u;
    SET_GPR_U32(ctx, 31, 0x21214Cu);
    ctx->pc = 0x212148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212144u;
    // 0x212148: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7DF0u, 0x212144u, 0x21214Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21214Cu;
label_21214c:
    // 0x21214c: 0x8f829dac  lw          $v0, -0x6254($gp)
    ctx->pc = 0x21214cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942124)));
label_212150:
    // 0x212150: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x212150u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
label_212154:
    // 0x212154: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
label_212158:
    if (ctx->pc == 0x212158u) {
        ctx->pc = 0x212158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212154u;
        // 0x212158: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21215Cu;
        goto label_21215c;
    }
    ctx->pc = 0x212154u;
    {
        const bool branch_taken_0x212154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212154u;
        // 0x212158: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212154) {
            ctx->pc = 0x2122A8u;
            goto label_2122a8;
        }
    }
    ctx->pc = 0x21215Cu;
label_21215c:
    // 0x21215c: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x21215cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_212160:
    // 0x212160: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x212160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_212164:
    // 0x212164: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_212168:
    if (ctx->pc == 0x212168u) {
        ctx->pc = 0x212168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212164u;
        // 0x212168: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21216Cu;
        goto label_21216c;
    }
    ctx->pc = 0x212164u;
    {
        const bool branch_taken_0x212164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212164u;
        // 0x212168: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212164) {
            ctx->pc = 0x2121FCu;
            goto label_2121fc;
        }
    }
    ctx->pc = 0x21216Cu;
label_21216c:
    // 0x21216c: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x21216cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
label_212170:
    // 0x212170: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x212170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
label_212174:
    // 0x212174: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x212174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_212178:
    // 0x212178: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x212178u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_21217c:
    // 0x21217c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21217cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_212180:
    // 0x212180: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x212180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_212184:
    // 0x212184: 0xc08089c  jal         func_202270
label_212188:
    if (ctx->pc == 0x212188u) {
        ctx->pc = 0x212188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212184u;
        // 0x212188: 0x8cb00698  lw          $s0, 0x698($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1688)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21218Cu;
        goto label_21218c;
    }
    ctx->pc = 0x212184u;
    SET_GPR_U32(ctx, 31, 0x21218Cu);
    ctx->pc = 0x212188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212184u;
    // 0x212188: 0x8cb00698  lw          $s0, 0x698($a1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1688)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x212184u, 0x21218Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21218Cu;
label_21218c:
    // 0x21218c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x21218cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_212190:
    // 0x212190: 0x8f82b688  lw          $v0, -0x4978($gp)
    ctx->pc = 0x212190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948488)));
label_212194:
    // 0x212194: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
label_212198:
    if (ctx->pc == 0x212198u) {
        ctx->pc = 0x21219Cu;
        goto label_21219c;
    }
    ctx->pc = 0x212194u;
    {
        const bool branch_taken_0x212194 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x212194) {
            ctx->pc = 0x2121A4u;
            goto label_2121a4;
        }
    }
    ctx->pc = 0x21219Cu;
label_21219c:
    // 0x21219c: 0xc084406  jal         func_211018
label_2121a0:
    if (ctx->pc == 0x2121A0u) {
        ctx->pc = 0x2121A4u;
        goto label_2121a4;
    }
    ctx->pc = 0x21219Cu;
    SET_GPR_U32(ctx, 31, 0x2121A4u);
    ctx->pc = 0x211018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211018u, 0x21219Cu, 0x2121A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2121A4u;
label_2121a4:
    // 0x2121a4: 0xc080a8e  jal         func_202A38
label_2121a8:
    if (ctx->pc == 0x2121A8u) {
        ctx->pc = 0x2121A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2121A4u;
        // 0x2121a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2121ACu;
        goto label_2121ac;
    }
    ctx->pc = 0x2121A4u;
    SET_GPR_U32(ctx, 31, 0x2121ACu);
    ctx->pc = 0x2121A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2121A4u;
    // 0x2121a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x2121A4u, 0x2121ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2121ACu;
label_2121ac:
    // 0x2121ac: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x2121acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_2121b0:
    // 0x2121b0: 0x24fc2  srl         $t1, $v0, 31
    ctx->pc = 0x2121b0u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_2121b4:
    // 0x2121b4: 0x246399f0  addiu       $v1, $v1, -0x6610
    ctx->pc = 0x2121b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941168));
label_2121b8:
    // 0x2121b8: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x2121b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_2121bc:
    // 0x2121bc: 0x8c650018  lw          $a1, 0x18($v1)
    ctx->pc = 0x2121bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_2121c0:
    // 0x2121c0: 0x94843  sra         $t1, $t1, 1
    ctx->pc = 0x2121c0u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 1));
label_2121c4:
    // 0x2121c4: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2121c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2121c8:
    // 0x2121c8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2121c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2121cc:
    // 0x2121cc: 0x8f87a01c  lw          $a3, -0x5FE4($gp)
    ctx->pc = 0x2121ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942748)));
label_2121d0:
    // 0x2121d0: 0x24a5ffe2  addiu       $a1, $a1, -0x1E
    ctx->pc = 0x2121d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967266));
label_2121d4:
    // 0x2121d4: 0x8f88a020  lw          $t0, -0x5FE0($gp)
    ctx->pc = 0x2121d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942752)));
label_2121d8:
    // 0x2121d8: 0xc0808ec  jal         func_2023B0
label_2121dc:
    if (ctx->pc == 0x2121DCu) {
        ctx->pc = 0x2121DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2121D8u;
        // 0x2121dc: 0x892023  subu        $a0, $a0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2121E0u;
        goto label_2121e0;
    }
    ctx->pc = 0x2121D8u;
    SET_GPR_U32(ctx, 31, 0x2121E0u);
    ctx->pc = 0x2121DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2121D8u;
    // 0x2121dc: 0x892023  subu        $a0, $a0, $t1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x2121D8u, 0x2121E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2121E0u;
label_2121e0:
    // 0x2121e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2121e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2121e4:
    // 0x2121e4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2121e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2121e8:
    // 0x2121e8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2121e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2121ec:
    // 0x2121ec: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2121ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2121f0:
    // 0x2121f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2121f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2121f4:
    // 0x2121f4: 0x808089c  j           func_202270
label_2121f8:
    if (ctx->pc == 0x2121F8u) {
        ctx->pc = 0x2121F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2121F4u;
        // 0x2121f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2121FCu;
        goto label_2121fc;
    }
    ctx->pc = 0x2121F4u;
    ctx->pc = 0x2121F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2121F4u;
    // 0x2121f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    textSelect_0x202270(rdram, ctx, runtime); return;
    ctx->pc = 0x2121FCu;
label_2121fc:
    // 0x2121fc: 0xc083756  jal         func_20DD58
label_212200:
    if (ctx->pc == 0x212200u) {
        ctx->pc = 0x212200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2121FCu;
        // 0x212200: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212204u;
        goto label_212204;
    }
    ctx->pc = 0x2121FCu;
    SET_GPR_U32(ctx, 31, 0x212204u);
    ctx->pc = 0x212200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2121FCu;
    // 0x212200: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DD58u, 0x2121FCu, 0x212204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212204u;
label_212204:
    // 0x212204: 0x96240004  lhu         $a0, 0x4($s1)
    ctx->pc = 0x212204u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_212208:
    // 0x212208: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x212208u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_21220c:
    // 0x21220c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_212210:
    if (ctx->pc == 0x212210u) {
        ctx->pc = 0x212210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21220Cu;
        // 0x212210: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212214u;
        goto label_212214;
    }
    ctx->pc = 0x21220Cu;
    {
        const bool branch_taken_0x21220c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21220c) {
            ctx->pc = 0x212210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21220Cu;
            // 0x212210: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21222Cu;
            goto label_21222c;
        }
    }
    ctx->pc = 0x212214u;
label_212214:
    // 0x212214: 0x14800011  bnez        $a0, . + 4 + (0x11 << 2)
label_212218:
    if (ctx->pc == 0x212218u) {
        ctx->pc = 0x21221Cu;
        goto label_21221c;
    }
    ctx->pc = 0x212214u;
    {
        const bool branch_taken_0x212214 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x212214) {
            ctx->pc = 0x21225Cu;
            goto label_21225c;
        }
    }
    ctx->pc = 0x21221Cu;
label_21221c:
    // 0x21221c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_212220:
    if (ctx->pc == 0x212220u) {
        ctx->pc = 0x212220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21221Cu;
        // 0x212220: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212224u;
        goto label_212224;
    }
    ctx->pc = 0x21221Cu;
    {
        const bool branch_taken_0x21221c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x212220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21221Cu;
        // 0x212220: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21221c) {
            ctx->pc = 0x21223Cu;
            goto label_21223c;
        }
    }
    ctx->pc = 0x212224u;
label_212224:
    // 0x212224: 0x10000012  b           . + 4 + (0x12 << 2)
label_212228:
    if (ctx->pc == 0x212228u) {
        ctx->pc = 0x212228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212224u;
        // 0x212228: 0x2221021  addu        $v0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21222Cu;
        goto label_21222c;
    }
    ctx->pc = 0x212224u;
    {
        const bool branch_taken_0x212224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212224u;
        // 0x212228: 0x2221021  addu        $v0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212224) {
            ctx->pc = 0x212270u;
            goto label_212270;
        }
    }
    ctx->pc = 0x21222Cu;
label_21222c:
    // 0x21222c: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
label_212230:
    if (ctx->pc == 0x212230u) {
        ctx->pc = 0x212230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21222Cu;
        // 0x212230: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212234u;
        goto label_212234;
    }
    ctx->pc = 0x21222Cu;
    {
        const bool branch_taken_0x21222c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x212230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21222Cu;
        // 0x212230: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21222c) {
            ctx->pc = 0x21224Cu;
            goto label_21224c;
        }
    }
    ctx->pc = 0x212234u;
label_212234:
    // 0x212234: 0x1000000e  b           . + 4 + (0xE << 2)
label_212238:
    if (ctx->pc == 0x212238u) {
        ctx->pc = 0x212238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212234u;
        // 0x212238: 0x2221021  addu        $v0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21223Cu;
        goto label_21223c;
    }
    ctx->pc = 0x212234u;
    {
        const bool branch_taken_0x212234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212234u;
        // 0x212238: 0x2221021  addu        $v0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212234) {
            ctx->pc = 0x212270u;
            goto label_212270;
        }
    }
    ctx->pc = 0x21223Cu;
label_21223c:
    // 0x21223c: 0xc083f28  jal         func_20FCA0
label_212240:
    if (ctx->pc == 0x212240u) {
        ctx->pc = 0x212244u;
        goto label_212244;
    }
    ctx->pc = 0x21223Cu;
    SET_GPR_U32(ctx, 31, 0x212244u);
    ctx->pc = 0x20FCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20FCA0u, 0x21223Cu, 0x212244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212244u;
label_212244:
    // 0x212244: 0x10000008  b           . + 4 + (0x8 << 2)
label_212248:
    if (ctx->pc == 0x212248u) {
        ctx->pc = 0x212248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212244u;
        // 0x212248: 0x96240004  lhu         $a0, 0x4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21224Cu;
        goto label_21224c;
    }
    ctx->pc = 0x212244u;
    {
        const bool branch_taken_0x212244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212244u;
        // 0x212248: 0x96240004  lhu         $a0, 0x4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212244) {
            ctx->pc = 0x212268u;
            goto label_212268;
        }
    }
    ctx->pc = 0x21224Cu;
label_21224c:
    // 0x21224c: 0xc0840fc  jal         func_2103F0
label_212250:
    if (ctx->pc == 0x212250u) {
        ctx->pc = 0x212254u;
        goto label_212254;
    }
    ctx->pc = 0x21224Cu;
    SET_GPR_U32(ctx, 31, 0x212254u);
    ctx->pc = 0x2103F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2103F0u, 0x21224Cu, 0x212254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212254u;
label_212254:
    // 0x212254: 0x10000004  b           . + 4 + (0x4 << 2)
label_212258:
    if (ctx->pc == 0x212258u) {
        ctx->pc = 0x212258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212254u;
        // 0x212258: 0x96240004  lhu         $a0, 0x4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21225Cu;
        goto label_21225c;
    }
    ctx->pc = 0x212254u;
    {
        const bool branch_taken_0x212254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212254u;
        // 0x212258: 0x96240004  lhu         $a0, 0x4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212254) {
            ctx->pc = 0x212268u;
            goto label_212268;
        }
    }
    ctx->pc = 0x21225Cu;
label_21225c:
    // 0x21225c: 0xc083968  jal         func_20E5A0
label_212260:
    if (ctx->pc == 0x212260u) {
        ctx->pc = 0x212264u;
        goto label_212264;
    }
    ctx->pc = 0x21225Cu;
    SET_GPR_U32(ctx, 31, 0x212264u);
    ctx->pc = 0x20E5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E5A0u, 0x21225Cu, 0x212264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212264u;
label_212264:
    // 0x212264: 0x96240004  lhu         $a0, 0x4($s1)
    ctx->pc = 0x212264u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_212268:
    // 0x212268: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x212268u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_21226c:
    // 0x21226c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x21226cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_212270:
    // 0x212270: 0x8c50000c  lw          $s0, 0xC($v0)
    ctx->pc = 0x212270u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_212274:
    // 0x212274: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_212278:
    if (ctx->pc == 0x212278u) {
        ctx->pc = 0x212278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212274u;
        // 0x212278: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21227Cu;
        goto label_21227c;
    }
    ctx->pc = 0x212274u;
    {
        const bool branch_taken_0x212274 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x212278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212274u;
        // 0x212278: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212274) {
            ctx->pc = 0x2122A8u;
            goto label_2122a8;
        }
    }
    ctx->pc = 0x21227Cu;
label_21227c:
    // 0x21227c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x21227cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_212280:
    // 0x212280: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_212284:
    if (ctx->pc == 0x212284u) {
        ctx->pc = 0x212284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212280u;
        // 0x212284: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212288u;
        goto label_212288;
    }
    ctx->pc = 0x212280u;
    {
        const bool branch_taken_0x212280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x212280) {
            ctx->pc = 0x212284u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x212280u;
            // 0x212284: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x212294u;
            goto label_212294;
        }
    }
    ctx->pc = 0x212288u;
label_212288:
    // 0x212288: 0x40f809  jalr        $v0
label_21228c:
    if (ctx->pc == 0x21228Cu) {
        ctx->pc = 0x21228Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212288u;
        // 0x21228c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212290u;
        goto label_212290;
    }
    ctx->pc = 0x212288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x212290u);
        ctx->pc = 0x21228Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212288u;
        // 0x21228c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212288u, 0x212290u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x212290u;
label_212290:
    // 0x212290: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x212290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_212294:
    // 0x212294: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_212298:
    if (ctx->pc == 0x212298u) {
        ctx->pc = 0x212298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212294u;
        // 0x212298: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21229Cu;
        goto label_21229c;
    }
    ctx->pc = 0x212294u;
    {
        const bool branch_taken_0x212294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212294u;
        // 0x212298: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212294) {
            ctx->pc = 0x2122A8u;
            goto label_2122a8;
        }
    }
    ctx->pc = 0x21229Cu;
label_21229c:
    // 0x21229c: 0x40f809  jalr        $v0
label_2122a0:
    if (ctx->pc == 0x2122A0u) {
        ctx->pc = 0x2122A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21229Cu;
        // 0x2122a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2122A4u;
        goto label_2122a4;
    }
    ctx->pc = 0x21229Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2122A4u);
        ctx->pc = 0x2122A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21229Cu;
        // 0x2122a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21229Cu, 0x2122A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2122A4u;
label_2122a4:
    // 0x2122a4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2122a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2122a8:
    // 0x2122a8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2122a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2122ac:
    // 0x2122ac: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2122acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2122b0:
    // 0x2122b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2122b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2122b4:
    // 0x2122b4: 0x3e00008  jr          $ra
label_2122b8:
    if (ctx->pc == 0x2122B8u) {
        ctx->pc = 0x2122B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2122B4u;
        // 0x2122b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2122BCu;
        goto label_fallthrough_0x2122b4;
    }
    ctx->pc = 0x2122B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2122B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2122B4u;
        // 0x2122b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2122B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2122b4:
    ctx->pc = 0x2122BCu;
}
