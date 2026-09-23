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

// Function: unlockedEx
// Address: 0x2251a8 - 0x225508
void unlockedEx_0x2251a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("unlockedEx_0x2251a8");
#endif

    switch (ctx->pc) {
        case 0x2251a8u: goto label_2251a8;
        case 0x2251acu: goto label_2251ac;
        case 0x2251b0u: goto label_2251b0;
        case 0x2251b4u: goto label_2251b4;
        case 0x2251b8u: goto label_2251b8;
        case 0x2251bcu: goto label_2251bc;
        case 0x2251c0u: goto label_2251c0;
        case 0x2251c4u: goto label_2251c4;
        case 0x2251c8u: goto label_2251c8;
        case 0x2251ccu: goto label_2251cc;
        case 0x2251d0u: goto label_2251d0;
        case 0x2251d4u: goto label_2251d4;
        case 0x2251d8u: goto label_2251d8;
        case 0x2251dcu: goto label_2251dc;
        case 0x2251e0u: goto label_2251e0;
        case 0x2251e4u: goto label_2251e4;
        case 0x2251e8u: goto label_2251e8;
        case 0x2251ecu: goto label_2251ec;
        case 0x2251f0u: goto label_2251f0;
        case 0x2251f4u: goto label_2251f4;
        case 0x2251f8u: goto label_2251f8;
        case 0x2251fcu: goto label_2251fc;
        case 0x225200u: goto label_225200;
        case 0x225204u: goto label_225204;
        case 0x225208u: goto label_225208;
        case 0x22520cu: goto label_22520c;
        case 0x225210u: goto label_225210;
        case 0x225214u: goto label_225214;
        case 0x225218u: goto label_225218;
        case 0x22521cu: goto label_22521c;
        case 0x225220u: goto label_225220;
        case 0x225224u: goto label_225224;
        case 0x225228u: goto label_225228;
        case 0x22522cu: goto label_22522c;
        case 0x225230u: goto label_225230;
        case 0x225234u: goto label_225234;
        case 0x225238u: goto label_225238;
        case 0x22523cu: goto label_22523c;
        case 0x225240u: goto label_225240;
        case 0x225244u: goto label_225244;
        case 0x225248u: goto label_225248;
        case 0x22524cu: goto label_22524c;
        case 0x225250u: goto label_225250;
        case 0x225254u: goto label_225254;
        case 0x225258u: goto label_225258;
        case 0x22525cu: goto label_22525c;
        case 0x225260u: goto label_225260;
        case 0x225264u: goto label_225264;
        case 0x225268u: goto label_225268;
        case 0x22526cu: goto label_22526c;
        case 0x225270u: goto label_225270;
        case 0x225274u: goto label_225274;
        case 0x225278u: goto label_225278;
        case 0x22527cu: goto label_22527c;
        case 0x225280u: goto label_225280;
        case 0x225284u: goto label_225284;
        case 0x225288u: goto label_225288;
        case 0x22528cu: goto label_22528c;
        case 0x225290u: goto label_225290;
        case 0x225294u: goto label_225294;
        case 0x225298u: goto label_225298;
        case 0x22529cu: goto label_22529c;
        case 0x2252a0u: goto label_2252a0;
        case 0x2252a4u: goto label_2252a4;
        case 0x2252a8u: goto label_2252a8;
        case 0x2252acu: goto label_2252ac;
        case 0x2252b0u: goto label_2252b0;
        case 0x2252b4u: goto label_2252b4;
        case 0x2252b8u: goto label_2252b8;
        case 0x2252bcu: goto label_2252bc;
        case 0x2252c0u: goto label_2252c0;
        case 0x2252c4u: goto label_2252c4;
        case 0x2252c8u: goto label_2252c8;
        case 0x2252ccu: goto label_2252cc;
        case 0x2252d0u: goto label_2252d0;
        case 0x2252d4u: goto label_2252d4;
        case 0x2252d8u: goto label_2252d8;
        case 0x2252dcu: goto label_2252dc;
        case 0x2252e0u: goto label_2252e0;
        case 0x2252e4u: goto label_2252e4;
        case 0x2252e8u: goto label_2252e8;
        case 0x2252ecu: goto label_2252ec;
        case 0x2252f0u: goto label_2252f0;
        case 0x2252f4u: goto label_2252f4;
        case 0x2252f8u: goto label_2252f8;
        case 0x2252fcu: goto label_2252fc;
        case 0x225300u: goto label_225300;
        case 0x225304u: goto label_225304;
        case 0x225308u: goto label_225308;
        case 0x22530cu: goto label_22530c;
        case 0x225310u: goto label_225310;
        case 0x225314u: goto label_225314;
        case 0x225318u: goto label_225318;
        case 0x22531cu: goto label_22531c;
        case 0x225320u: goto label_225320;
        case 0x225324u: goto label_225324;
        case 0x225328u: goto label_225328;
        case 0x22532cu: goto label_22532c;
        case 0x225330u: goto label_225330;
        case 0x225334u: goto label_225334;
        case 0x225338u: goto label_225338;
        case 0x22533cu: goto label_22533c;
        case 0x225340u: goto label_225340;
        case 0x225344u: goto label_225344;
        case 0x225348u: goto label_225348;
        case 0x22534cu: goto label_22534c;
        case 0x225350u: goto label_225350;
        case 0x225354u: goto label_225354;
        case 0x225358u: goto label_225358;
        case 0x22535cu: goto label_22535c;
        case 0x225360u: goto label_225360;
        case 0x225364u: goto label_225364;
        case 0x225368u: goto label_225368;
        case 0x22536cu: goto label_22536c;
        case 0x225370u: goto label_225370;
        case 0x225374u: goto label_225374;
        case 0x225378u: goto label_225378;
        case 0x22537cu: goto label_22537c;
        case 0x225380u: goto label_225380;
        case 0x225384u: goto label_225384;
        case 0x225388u: goto label_225388;
        case 0x22538cu: goto label_22538c;
        case 0x225390u: goto label_225390;
        case 0x225394u: goto label_225394;
        case 0x225398u: goto label_225398;
        case 0x22539cu: goto label_22539c;
        case 0x2253a0u: goto label_2253a0;
        case 0x2253a4u: goto label_2253a4;
        case 0x2253a8u: goto label_2253a8;
        case 0x2253acu: goto label_2253ac;
        case 0x2253b0u: goto label_2253b0;
        case 0x2253b4u: goto label_2253b4;
        case 0x2253b8u: goto label_2253b8;
        case 0x2253bcu: goto label_2253bc;
        case 0x2253c0u: goto label_2253c0;
        case 0x2253c4u: goto label_2253c4;
        case 0x2253c8u: goto label_2253c8;
        case 0x2253ccu: goto label_2253cc;
        case 0x2253d0u: goto label_2253d0;
        case 0x2253d4u: goto label_2253d4;
        case 0x2253d8u: goto label_2253d8;
        case 0x2253dcu: goto label_2253dc;
        case 0x2253e0u: goto label_2253e0;
        case 0x2253e4u: goto label_2253e4;
        case 0x2253e8u: goto label_2253e8;
        case 0x2253ecu: goto label_2253ec;
        case 0x2253f0u: goto label_2253f0;
        case 0x2253f4u: goto label_2253f4;
        case 0x2253f8u: goto label_2253f8;
        case 0x2253fcu: goto label_2253fc;
        case 0x225400u: goto label_225400;
        case 0x225404u: goto label_225404;
        case 0x225408u: goto label_225408;
        case 0x22540cu: goto label_22540c;
        case 0x225410u: goto label_225410;
        case 0x225414u: goto label_225414;
        case 0x225418u: goto label_225418;
        case 0x22541cu: goto label_22541c;
        case 0x225420u: goto label_225420;
        case 0x225424u: goto label_225424;
        case 0x225428u: goto label_225428;
        case 0x22542cu: goto label_22542c;
        case 0x225430u: goto label_225430;
        case 0x225434u: goto label_225434;
        case 0x225438u: goto label_225438;
        case 0x22543cu: goto label_22543c;
        case 0x225440u: goto label_225440;
        case 0x225444u: goto label_225444;
        case 0x225448u: goto label_225448;
        case 0x22544cu: goto label_22544c;
        case 0x225450u: goto label_225450;
        case 0x225454u: goto label_225454;
        case 0x225458u: goto label_225458;
        case 0x22545cu: goto label_22545c;
        case 0x225460u: goto label_225460;
        case 0x225464u: goto label_225464;
        case 0x225468u: goto label_225468;
        case 0x22546cu: goto label_22546c;
        case 0x225470u: goto label_225470;
        case 0x225474u: goto label_225474;
        case 0x225478u: goto label_225478;
        case 0x22547cu: goto label_22547c;
        case 0x225480u: goto label_225480;
        case 0x225484u: goto label_225484;
        case 0x225488u: goto label_225488;
        case 0x22548cu: goto label_22548c;
        case 0x225490u: goto label_225490;
        case 0x225494u: goto label_225494;
        case 0x225498u: goto label_225498;
        case 0x22549cu: goto label_22549c;
        case 0x2254a0u: goto label_2254a0;
        case 0x2254a4u: goto label_2254a4;
        case 0x2254a8u: goto label_2254a8;
        case 0x2254acu: goto label_2254ac;
        case 0x2254b0u: goto label_2254b0;
        case 0x2254b4u: goto label_2254b4;
        case 0x2254b8u: goto label_2254b8;
        case 0x2254bcu: goto label_2254bc;
        case 0x2254c0u: goto label_2254c0;
        case 0x2254c4u: goto label_2254c4;
        case 0x2254c8u: goto label_2254c8;
        case 0x2254ccu: goto label_2254cc;
        case 0x2254d0u: goto label_2254d0;
        case 0x2254d4u: goto label_2254d4;
        case 0x2254d8u: goto label_2254d8;
        case 0x2254dcu: goto label_2254dc;
        case 0x2254e0u: goto label_2254e0;
        case 0x2254e4u: goto label_2254e4;
        case 0x2254e8u: goto label_2254e8;
        case 0x2254ecu: goto label_2254ec;
        case 0x2254f0u: goto label_2254f0;
        case 0x2254f4u: goto label_2254f4;
        case 0x2254f8u: goto label_2254f8;
        case 0x2254fcu: goto label_2254fc;
        case 0x225500u: goto label_225500;
        case 0x225504u: goto label_225504;
        default: break;
    }

    ctx->pc = 0x2251a8u;

label_2251a8:
    // 0x2251a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2251a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2251ac:
    // 0x2251ac: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2251acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_2251b0:
    // 0x2251b0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2251b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2251b4:
    // 0x2251b4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2251b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2251b8:
    // 0x2251b8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2251b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2251bc:
    // 0x2251bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2251bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2251c0:
    // 0x2251c0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2251c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2251c4:
    // 0x2251c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2251c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2251c8:
    // 0x2251c8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2251c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2251cc:
    // 0x2251cc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2251d0:
    if (ctx->pc == 0x2251D0u) {
        ctx->pc = 0x2251D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2251CCu;
        // 0x2251d0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2251D4u;
        goto label_2251d4;
    }
    ctx->pc = 0x2251CCu;
    {
        const bool branch_taken_0x2251cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2251D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2251CCu;
        // 0x2251d0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2251cc) {
            ctx->pc = 0x2251E0u;
            goto label_2251e0;
        }
    }
    ctx->pc = 0x2251D4u;
label_2251d4:
    // 0x2251d4: 0x8f829af0  lw          $v0, -0x6510($gp)
    ctx->pc = 0x2251d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941424)));
label_2251d8:
    // 0x2251d8: 0x144000c4  bnez        $v0, . + 4 + (0xC4 << 2)
label_2251dc:
    if (ctx->pc == 0x2251DCu) {
        ctx->pc = 0x2251DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2251D8u;
        // 0x2251dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2251E0u;
        goto label_2251e0;
    }
    ctx->pc = 0x2251D8u;
    {
        const bool branch_taken_0x2251d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2251DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2251D8u;
        // 0x2251dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2251d8) {
            ctx->pc = 0x2254ECu;
            goto label_2254ec;
        }
    }
    ctx->pc = 0x2251E0u;
label_2251e0:
    // 0x2251e0: 0x2c820007  sltiu       $v0, $a0, 0x7
    ctx->pc = 0x2251e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_2251e4:
    // 0x2251e4: 0x104000c0  beqz        $v0, . + 4 + (0xC0 << 2)
label_2251e8:
    if (ctx->pc == 0x2251E8u) {
        ctx->pc = 0x2251E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2251E4u;
        // 0x2251e8: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2251ECu;
        goto label_2251ec;
    }
    ctx->pc = 0x2251E4u;
    {
        const bool branch_taken_0x2251e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2251E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2251E4u;
        // 0x2251e8: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2251e4) {
            ctx->pc = 0x2254E8u;
            goto label_2254e8;
        }
    }
    ctx->pc = 0x2251ECu;
label_2251ec:
    // 0x2251ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2251ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2251f0:
    // 0x2251f0: 0x24420d60  addiu       $v0, $v0, 0xD60
    ctx->pc = 0x2251f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3424));
label_2251f4:
    // 0x2251f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2251f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2251f8:
    // 0x2251f8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2251f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2251fc:
    // 0x2251fc: 0x800008  jr          $a0
label_225200:
    if (ctx->pc == 0x225200u) {
        ctx->pc = 0x225204u;
        goto label_225204;
    }
    ctx->pc = 0x2251FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2251FCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x225204u;
label_225204:
    // 0x225204: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x225204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_225208:
    // 0x225208: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x225208u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22520c:
    // 0x22520c: 0x2442c338  addiu       $v0, $v0, -0x3CC8
    ctx->pc = 0x22520cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951736));
label_225210:
    // 0x225210: 0x24120024  addiu       $s2, $zero, 0x24
    ctx->pc = 0x225210u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_225214:
    // 0x225214: 0x24500002  addiu       $s0, $v0, 0x2
    ctx->pc = 0x225214u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_225218:
    // 0x225218: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
label_22521c:
    if (ctx->pc == 0x22521Cu) {
        ctx->pc = 0x225220u;
        goto label_225220;
    }
    ctx->pc = 0x225218u;
    {
        const bool branch_taken_0x225218 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x225218) {
            ctx->pc = 0x22523Cu;
            goto label_22523c;
        }
    }
    ctx->pc = 0x225220u;
label_225220:
    // 0x225220: 0xc087fec  jal         func_21FFB0
label_225224:
    if (ctx->pc == 0x225224u) {
        ctx->pc = 0x225228u;
        goto label_225228;
    }
    ctx->pc = 0x225220u;
    SET_GPR_U32(ctx, 31, 0x225228u);
    ctx->pc = 0x21FFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FFB0u, 0x225220u, 0x225228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225228u;
label_225228:
    // 0x225228: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x225228u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_22522c:
    // 0x22522c: 0x721818  mult        $v1, $v1, $s2
    ctx->pc = 0x22522cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_225230:
    // 0x225230: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x225230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_225234:
    // 0x225234: 0x10000007  b           . + 4 + (0x7 << 2)
label_225238:
    if (ctx->pc == 0x225238u) {
        ctx->pc = 0x225238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225234u;
        // 0x225238: 0x24630154  addiu       $v1, $v1, 0x154 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 340));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22523Cu;
        goto label_22523c;
    }
    ctx->pc = 0x225234u;
    {
        const bool branch_taken_0x225234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225234u;
        // 0x225238: 0x24630154  addiu       $v1, $v1, 0x154 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 340));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225234) {
            ctx->pc = 0x225254u;
            goto label_225254;
        }
    }
    ctx->pc = 0x22523Cu;
label_22523c:
    // 0x22523c: 0xc087fec  jal         func_21FFB0
label_225240:
    if (ctx->pc == 0x225240u) {
        ctx->pc = 0x225244u;
        goto label_225244;
    }
    ctx->pc = 0x22523Cu;
    SET_GPR_U32(ctx, 31, 0x225244u);
    ctx->pc = 0x21FFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FFB0u, 0x22523Cu, 0x225244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225244u;
label_225244:
    // 0x225244: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x225244u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_225248:
    // 0x225248: 0x721818  mult        $v1, $v1, $s2
    ctx->pc = 0x225248u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_22524c:
    // 0x22524c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22524cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_225250:
    // 0x225250: 0x24630148  addiu       $v1, $v1, 0x148
    ctx->pc = 0x225250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 328));
label_225254:
    // 0x225254: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x225254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_225258:
    // 0x225258: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_22525c:
    if (ctx->pc == 0x22525Cu) {
        ctx->pc = 0x22525Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225258u;
        // 0x22525c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225260u;
        goto label_225260;
    }
    ctx->pc = 0x225258u;
    {
        const bool branch_taken_0x225258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x225258) {
            ctx->pc = 0x22525Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x225258u;
            // 0x22525c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22527Cu;
            goto label_22527c;
        }
    }
    ctx->pc = 0x225260u;
label_225260:
    // 0x225260: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x225260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_225264:
    // 0x225264: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_225268:
    if (ctx->pc == 0x225268u) {
        ctx->pc = 0x225268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225264u;
        // 0x225268: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22526Cu;
        goto label_22526c;
    }
    ctx->pc = 0x225264u;
    {
        const bool branch_taken_0x225264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x225264) {
            ctx->pc = 0x225268u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x225264u;
            // 0x225268: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22527Cu;
            goto label_22527c;
        }
    }
    ctx->pc = 0x22526Cu;
label_22526c:
    // 0x22526c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x22526cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_225270:
    // 0x225270: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_225274:
    if (ctx->pc == 0x225274u) {
        ctx->pc = 0x225274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225270u;
        // 0x225274: 0x3a220003  xori        $v0, $s1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x225278u;
        goto label_225278;
    }
    ctx->pc = 0x225270u;
    {
        const bool branch_taken_0x225270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x225274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225270u;
        // 0x225274: 0x3a220003  xori        $v0, $s1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x225270) {
            ctx->pc = 0x22528Cu;
            goto label_22528c;
        }
    }
    ctx->pc = 0x225278u;
label_225278:
    // 0x225278: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x225278u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_22527c:
    // 0x22527c: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x22527cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
label_225280:
    // 0x225280: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
label_225284:
    if (ctx->pc == 0x225284u) {
        ctx->pc = 0x225284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225280u;
        // 0x225284: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225288u;
        goto label_225288;
    }
    ctx->pc = 0x225280u;
    {
        const bool branch_taken_0x225280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225280u;
        // 0x225284: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225280) {
            ctx->pc = 0x225218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_225218;
        }
    }
    ctx->pc = 0x225288u;
label_225288:
    // 0x225288: 0x3a220003  xori        $v0, $s1, 0x3
    ctx->pc = 0x225288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)3);
label_22528c:
    // 0x22528c: 0x10000097  b           . + 4 + (0x97 << 2)
label_225290:
    if (ctx->pc == 0x225290u) {
        ctx->pc = 0x225290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22528Cu;
        // 0x225290: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x225294u;
        goto label_225294;
    }
    ctx->pc = 0x22528Cu;
    {
        const bool branch_taken_0x22528c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22528Cu;
        // 0x225290: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22528c) {
            ctx->pc = 0x2254ECu;
            goto label_2254ec;
        }
    }
    ctx->pc = 0x225294u;
label_225294:
    // 0x225294: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x225294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_225298:
    // 0x225298: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x225298u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_22529c:
    // 0x22529c: 0x2442c338  addiu       $v0, $v0, -0x3CC8
    ctx->pc = 0x22529cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951736));
label_2252a0:
    // 0x2252a0: 0x24120024  addiu       $s2, $zero, 0x24
    ctx->pc = 0x2252a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_2252a4:
    // 0x2252a4: 0x2450001a  addiu       $s0, $v0, 0x1A
    ctx->pc = 0x2252a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 26));
label_2252a8:
    // 0x2252a8: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
label_2252ac:
    if (ctx->pc == 0x2252ACu) {
        ctx->pc = 0x2252B0u;
        goto label_2252b0;
    }
    ctx->pc = 0x2252A8u;
    {
        const bool branch_taken_0x2252a8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2252a8) {
            ctx->pc = 0x2252CCu;
            goto label_2252cc;
        }
    }
    ctx->pc = 0x2252B0u;
label_2252b0:
    // 0x2252b0: 0xc087fec  jal         func_21FFB0
label_2252b4:
    if (ctx->pc == 0x2252B4u) {
        ctx->pc = 0x2252B8u;
        goto label_2252b8;
    }
    ctx->pc = 0x2252B0u;
    SET_GPR_U32(ctx, 31, 0x2252B8u);
    ctx->pc = 0x21FFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FFB0u, 0x2252B0u, 0x2252B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2252B8u;
label_2252b8:
    // 0x2252b8: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x2252b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_2252bc:
    // 0x2252bc: 0x721818  mult        $v1, $v1, $s2
    ctx->pc = 0x2252bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2252c0:
    // 0x2252c0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2252c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2252c4:
    // 0x2252c4: 0x10000007  b           . + 4 + (0x7 << 2)
label_2252c8:
    if (ctx->pc == 0x2252C8u) {
        ctx->pc = 0x2252C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2252C4u;
        // 0x2252c8: 0x24630154  addiu       $v1, $v1, 0x154 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 340));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2252CCu;
        goto label_2252cc;
    }
    ctx->pc = 0x2252C4u;
    {
        const bool branch_taken_0x2252c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2252C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2252C4u;
        // 0x2252c8: 0x24630154  addiu       $v1, $v1, 0x154 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 340));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2252c4) {
            ctx->pc = 0x2252E4u;
            goto label_2252e4;
        }
    }
    ctx->pc = 0x2252CCu;
label_2252cc:
    // 0x2252cc: 0xc087fec  jal         func_21FFB0
label_2252d0:
    if (ctx->pc == 0x2252D0u) {
        ctx->pc = 0x2252D4u;
        goto label_2252d4;
    }
    ctx->pc = 0x2252CCu;
    SET_GPR_U32(ctx, 31, 0x2252D4u);
    ctx->pc = 0x21FFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FFB0u, 0x2252CCu, 0x2252D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2252D4u;
label_2252d4:
    // 0x2252d4: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x2252d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_2252d8:
    // 0x2252d8: 0x721818  mult        $v1, $v1, $s2
    ctx->pc = 0x2252d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2252dc:
    // 0x2252dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2252dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2252e0:
    // 0x2252e0: 0x24630148  addiu       $v1, $v1, 0x148
    ctx->pc = 0x2252e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 328));
label_2252e4:
    // 0x2252e4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2252e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2252e8:
    // 0x2252e8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_2252ec:
    if (ctx->pc == 0x2252ECu) {
        ctx->pc = 0x2252ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2252E8u;
        // 0x2252ec: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2252F0u;
        goto label_2252f0;
    }
    ctx->pc = 0x2252E8u;
    {
        const bool branch_taken_0x2252e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2252e8) {
            ctx->pc = 0x2252ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2252E8u;
            // 0x2252ec: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22530Cu;
            goto label_22530c;
        }
    }
    ctx->pc = 0x2252F0u;
label_2252f0:
    // 0x2252f0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2252f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2252f4:
    // 0x2252f4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_2252f8:
    if (ctx->pc == 0x2252F8u) {
        ctx->pc = 0x2252F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2252F4u;
        // 0x2252f8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2252FCu;
        goto label_2252fc;
    }
    ctx->pc = 0x2252F4u;
    {
        const bool branch_taken_0x2252f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2252f4) {
            ctx->pc = 0x2252F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2252F4u;
            // 0x2252f8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22530Cu;
            goto label_22530c;
        }
    }
    ctx->pc = 0x2252FCu;
label_2252fc:
    // 0x2252fc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2252fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_225300:
    // 0x225300: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_225304:
    if (ctx->pc == 0x225304u) {
        ctx->pc = 0x225304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225300u;
        // 0x225304: 0x3a220006  xori        $v0, $s1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        ctx->pc = 0x225308u;
        goto label_225308;
    }
    ctx->pc = 0x225300u;
    {
        const bool branch_taken_0x225300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x225304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225300u;
        // 0x225304: 0x3a220006  xori        $v0, $s1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        if (branch_taken_0x225300) {
            ctx->pc = 0x22531Cu;
            goto label_22531c;
        }
    }
    ctx->pc = 0x225308u;
label_225308:
    // 0x225308: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x225308u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_22530c:
    // 0x22530c: 0x2a220006  slti        $v0, $s1, 0x6
    ctx->pc = 0x22530cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
label_225310:
    // 0x225310: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
label_225314:
    if (ctx->pc == 0x225314u) {
        ctx->pc = 0x225314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225310u;
        // 0x225314: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225318u;
        goto label_225318;
    }
    ctx->pc = 0x225310u;
    {
        const bool branch_taken_0x225310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225310u;
        // 0x225314: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225310) {
            ctx->pc = 0x2252A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2252a8;
        }
    }
    ctx->pc = 0x225318u;
label_225318:
    // 0x225318: 0x3a220006  xori        $v0, $s1, 0x6
    ctx->pc = 0x225318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)6);
label_22531c:
    // 0x22531c: 0x10000073  b           . + 4 + (0x73 << 2)
label_225320:
    if (ctx->pc == 0x225320u) {
        ctx->pc = 0x225320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22531Cu;
        // 0x225320: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x225324u;
        goto label_225324;
    }
    ctx->pc = 0x22531Cu;
    {
        const bool branch_taken_0x22531c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22531Cu;
        // 0x225320: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22531c) {
            ctx->pc = 0x2254ECu;
            goto label_2254ec;
        }
    }
    ctx->pc = 0x225324u;
label_225324:
    // 0x225324: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x225324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_225328:
    // 0x225328: 0x24110006  addiu       $s1, $zero, 0x6
    ctx->pc = 0x225328u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_22532c:
    // 0x22532c: 0x2442c338  addiu       $v0, $v0, -0x3CC8
    ctx->pc = 0x22532cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951736));
label_225330:
    // 0x225330: 0x24120024  addiu       $s2, $zero, 0x24
    ctx->pc = 0x225330u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_225334:
    // 0x225334: 0x24500032  addiu       $s0, $v0, 0x32
    ctx->pc = 0x225334u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
label_225338:
    // 0x225338: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
label_22533c:
    if (ctx->pc == 0x22533Cu) {
        ctx->pc = 0x225340u;
        goto label_225340;
    }
    ctx->pc = 0x225338u;
    {
        const bool branch_taken_0x225338 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x225338) {
            ctx->pc = 0x22535Cu;
            goto label_22535c;
        }
    }
    ctx->pc = 0x225340u;
label_225340:
    // 0x225340: 0xc087fec  jal         func_21FFB0
label_225344:
    if (ctx->pc == 0x225344u) {
        ctx->pc = 0x225348u;
        goto label_225348;
    }
    ctx->pc = 0x225340u;
    SET_GPR_U32(ctx, 31, 0x225348u);
    ctx->pc = 0x21FFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FFB0u, 0x225340u, 0x225348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225348u;
label_225348:
    // 0x225348: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x225348u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_22534c:
    // 0x22534c: 0x721818  mult        $v1, $v1, $s2
    ctx->pc = 0x22534cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_225350:
    // 0x225350: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x225350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_225354:
    // 0x225354: 0x10000007  b           . + 4 + (0x7 << 2)
label_225358:
    if (ctx->pc == 0x225358u) {
        ctx->pc = 0x225358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225354u;
        // 0x225358: 0x24630154  addiu       $v1, $v1, 0x154 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 340));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22535Cu;
        goto label_22535c;
    }
    ctx->pc = 0x225354u;
    {
        const bool branch_taken_0x225354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225354u;
        // 0x225358: 0x24630154  addiu       $v1, $v1, 0x154 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 340));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225354) {
            ctx->pc = 0x225374u;
            goto label_225374;
        }
    }
    ctx->pc = 0x22535Cu;
label_22535c:
    // 0x22535c: 0xc087fec  jal         func_21FFB0
label_225360:
    if (ctx->pc == 0x225360u) {
        ctx->pc = 0x225364u;
        goto label_225364;
    }
    ctx->pc = 0x22535Cu;
    SET_GPR_U32(ctx, 31, 0x225364u);
    ctx->pc = 0x21FFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FFB0u, 0x22535Cu, 0x225364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225364u;
label_225364:
    // 0x225364: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x225364u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_225368:
    // 0x225368: 0x721818  mult        $v1, $v1, $s2
    ctx->pc = 0x225368u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_22536c:
    // 0x22536c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22536cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_225370:
    // 0x225370: 0x24630148  addiu       $v1, $v1, 0x148
    ctx->pc = 0x225370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 328));
label_225374:
    // 0x225374: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x225374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_225378:
    // 0x225378: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_22537c:
    if (ctx->pc == 0x22537Cu) {
        ctx->pc = 0x22537Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225378u;
        // 0x22537c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225380u;
        goto label_225380;
    }
    ctx->pc = 0x225378u;
    {
        const bool branch_taken_0x225378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x225378) {
            ctx->pc = 0x22537Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x225378u;
            // 0x22537c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22539Cu;
            goto label_22539c;
        }
    }
    ctx->pc = 0x225380u;
label_225380:
    // 0x225380: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x225380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_225384:
    // 0x225384: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_225388:
    if (ctx->pc == 0x225388u) {
        ctx->pc = 0x225388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225384u;
        // 0x225388: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22538Cu;
        goto label_22538c;
    }
    ctx->pc = 0x225384u;
    {
        const bool branch_taken_0x225384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x225384) {
            ctx->pc = 0x225388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x225384u;
            // 0x225388: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22539Cu;
            goto label_22539c;
        }
    }
    ctx->pc = 0x22538Cu;
label_22538c:
    // 0x22538c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x22538cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_225390:
    // 0x225390: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_225394:
    if (ctx->pc == 0x225394u) {
        ctx->pc = 0x225394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225390u;
        // 0x225394: 0x3a220009  xori        $v0, $s1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)9);
        ctx->in_delay_slot = false;
        ctx->pc = 0x225398u;
        goto label_225398;
    }
    ctx->pc = 0x225390u;
    {
        const bool branch_taken_0x225390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x225394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225390u;
        // 0x225394: 0x3a220009  xori        $v0, $s1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)9);
        ctx->in_delay_slot = false;
        if (branch_taken_0x225390) {
            ctx->pc = 0x2253ACu;
            goto label_2253ac;
        }
    }
    ctx->pc = 0x225398u;
label_225398:
    // 0x225398: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x225398u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_22539c:
    // 0x22539c: 0x2a220009  slti        $v0, $s1, 0x9
    ctx->pc = 0x22539cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)9) ? 1 : 0);
label_2253a0:
    // 0x2253a0: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
label_2253a4:
    if (ctx->pc == 0x2253A4u) {
        ctx->pc = 0x2253A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2253A0u;
        // 0x2253a4: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2253A8u;
        goto label_2253a8;
    }
    ctx->pc = 0x2253A0u;
    {
        const bool branch_taken_0x2253a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2253A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2253A0u;
        // 0x2253a4: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2253a0) {
            ctx->pc = 0x225338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_225338;
        }
    }
    ctx->pc = 0x2253A8u;
label_2253a8:
    // 0x2253a8: 0x3a220009  xori        $v0, $s1, 0x9
    ctx->pc = 0x2253a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)9);
label_2253ac:
    // 0x2253ac: 0x1000004f  b           . + 4 + (0x4F << 2)
label_2253b0:
    if (ctx->pc == 0x2253B0u) {
        ctx->pc = 0x2253B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2253ACu;
        // 0x2253b0: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2253B4u;
        goto label_2253b4;
    }
    ctx->pc = 0x2253ACu;
    {
        const bool branch_taken_0x2253ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2253B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2253ACu;
        // 0x2253b0: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2253ac) {
            ctx->pc = 0x2254ECu;
            goto label_2254ec;
        }
    }
    ctx->pc = 0x2253B4u;
label_2253b4:
    // 0x2253b4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2253b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2253b8:
    // 0x2253b8: 0x29403  sra         $s2, $v0, 16
    ctx->pc = 0x2253b8u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 16));
label_2253bc:
    // 0x2253bc: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
label_2253c0:
    if (ctx->pc == 0x2253C0u) {
        ctx->pc = 0x2253C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2253BCu;
        // 0x2253c0: 0x3050ffff  andi        $s0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2253C4u;
        goto label_2253c4;
    }
    ctx->pc = 0x2253BCu;
    {
        const bool branch_taken_0x2253bc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2253C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2253BCu;
        // 0x2253c0: 0x3050ffff  andi        $s0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2253bc) {
            ctx->pc = 0x2253E0u;
            goto label_2253e0;
        }
    }
    ctx->pc = 0x2253C4u;
label_2253c4:
    // 0x2253c4: 0xc087fec  jal         func_21FFB0
label_2253c8:
    if (ctx->pc == 0x2253C8u) {
        ctx->pc = 0x2253CCu;
        goto label_2253cc;
    }
    ctx->pc = 0x2253C4u;
    SET_GPR_U32(ctx, 31, 0x2253CCu);
    ctx->pc = 0x21FFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FFB0u, 0x2253C4u, 0x2253CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2253CCu;
label_2253cc:
    // 0x2253cc: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x2253ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_2253d0:
    // 0x2253d0: 0x2431818  mult        $v1, $s2, $v1
    ctx->pc = 0x2253d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2253d4:
    // 0x2253d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2253d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2253d8:
    // 0x2253d8: 0x10000007  b           . + 4 + (0x7 << 2)
label_2253dc:
    if (ctx->pc == 0x2253DCu) {
        ctx->pc = 0x2253DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2253D8u;
        // 0x2253dc: 0x24630154  addiu       $v1, $v1, 0x154 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 340));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2253E0u;
        goto label_2253e0;
    }
    ctx->pc = 0x2253D8u;
    {
        const bool branch_taken_0x2253d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2253DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2253D8u;
        // 0x2253dc: 0x24630154  addiu       $v1, $v1, 0x154 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 340));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2253d8) {
            ctx->pc = 0x2253F8u;
            goto label_2253f8;
        }
    }
    ctx->pc = 0x2253E0u;
label_2253e0:
    // 0x2253e0: 0xc087fec  jal         func_21FFB0
label_2253e4:
    if (ctx->pc == 0x2253E4u) {
        ctx->pc = 0x2253E8u;
        goto label_2253e8;
    }
    ctx->pc = 0x2253E0u;
    SET_GPR_U32(ctx, 31, 0x2253E8u);
    ctx->pc = 0x21FFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FFB0u, 0x2253E0u, 0x2253E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2253E8u;
label_2253e8:
    // 0x2253e8: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x2253e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_2253ec:
    // 0x2253ec: 0x2431818  mult        $v1, $s2, $v1
    ctx->pc = 0x2253ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2253f0:
    // 0x2253f0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2253f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2253f4:
    // 0x2253f4: 0x24630148  addiu       $v1, $v1, 0x148
    ctx->pc = 0x2253f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 328));
label_2253f8:
    // 0x2253f8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2253f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2253fc:
    // 0x2253fc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2253fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_225400:
    // 0x225400: 0x1482000d  bne         $a0, $v0, . + 4 + (0xD << 2)
label_225404:
    if (ctx->pc == 0x225404u) {
        ctx->pc = 0x225404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225400u;
        // 0x225404: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225408u;
        goto label_225408;
    }
    ctx->pc = 0x225400u;
    {
        const bool branch_taken_0x225400 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x225404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225400u;
        // 0x225404: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225400) {
            ctx->pc = 0x225438u;
            goto label_225438;
        }
    }
    ctx->pc = 0x225408u;
label_225408:
    // 0x225408: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x225408u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_22540c:
    // 0x22540c: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
label_225410:
    if (ctx->pc == 0x225410u) {
        ctx->pc = 0x225410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22540Cu;
        // 0x225410: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225414u;
        goto label_225414;
    }
    ctx->pc = 0x22540Cu;
    {
        const bool branch_taken_0x22540c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x225410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22540Cu;
        // 0x225410: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22540c) {
            ctx->pc = 0x2254E8u;
            goto label_2254e8;
        }
    }
    ctx->pc = 0x225414u;
label_225414:
    // 0x225414: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x225414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_225418:
    // 0x225418: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x225418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22541c:
    // 0x22541c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_225420:
    if (ctx->pc == 0x225420u) {
        ctx->pc = 0x225420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22541Cu;
        // 0x225420: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225424u;
        goto label_225424;
    }
    ctx->pc = 0x22541Cu;
    {
        const bool branch_taken_0x22541c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22541Cu;
        // 0x225420: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22541c) {
            ctx->pc = 0x225480u;
            goto label_225480;
        }
    }
    ctx->pc = 0x225424u;
label_225424:
    // 0x225424: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x225424u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_225428:
    // 0x225428: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_22542c:
    if (ctx->pc == 0x22542Cu) {
        ctx->pc = 0x22542Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225428u;
        // 0x22542c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225430u;
        goto label_225430;
    }
    ctx->pc = 0x225428u;
    {
        const bool branch_taken_0x225428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22542Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225428u;
        // 0x22542c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225428) {
            ctx->pc = 0x225418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_225418;
        }
    }
    ctx->pc = 0x225430u;
label_225430:
    // 0x225430: 0x1000002e  b           . + 4 + (0x2E << 2)
label_225434:
    if (ctx->pc == 0x225434u) {
        ctx->pc = 0x225434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225430u;
        // 0x225434: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225438u;
        goto label_225438;
    }
    ctx->pc = 0x225430u;
    {
        const bool branch_taken_0x225430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225430u;
        // 0x225434: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225430) {
            ctx->pc = 0x2254ECu;
            goto label_2254ec;
        }
    }
    ctx->pc = 0x225438u;
label_225438:
    // 0x225438: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x225438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22543c:
    // 0x22543c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22543cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_225440:
    // 0x225440: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
label_225444:
    if (ctx->pc == 0x225444u) {
        ctx->pc = 0x225444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225440u;
        // 0x225444: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225448u;
        goto label_225448;
    }
    ctx->pc = 0x225440u;
    {
        const bool branch_taken_0x225440 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x225444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225440u;
        // 0x225444: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225440) {
            ctx->pc = 0x2254ECu;
            goto label_2254ec;
        }
    }
    ctx->pc = 0x225448u;
label_225448:
    // 0x225448: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_22544c:
    if (ctx->pc == 0x22544Cu) {
        ctx->pc = 0x225450u;
        goto label_225450;
    }
    ctx->pc = 0x225448u;
    {
        const bool branch_taken_0x225448 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x225448) {
            ctx->pc = 0x225460u;
            goto label_225460;
        }
    }
    ctx->pc = 0x225450u;
label_225450:
    // 0x225450: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x225450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_225454:
    // 0x225454: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x225454u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_225458:
    // 0x225458: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_22545c:
    if (ctx->pc == 0x22545Cu) {
        ctx->pc = 0x22545Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225458u;
        // 0x22545c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225460u;
        goto label_225460;
    }
    ctx->pc = 0x225458u;
    {
        const bool branch_taken_0x225458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22545Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225458u;
        // 0x22545c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225458) {
            ctx->pc = 0x2254ECu;
            goto label_2254ec;
        }
    }
    ctx->pc = 0x225460u;
label_225460:
    // 0x225460: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
label_225464:
    if (ctx->pc == 0x225464u) {
        ctx->pc = 0x225464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225460u;
        // 0x225464: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225468u;
        goto label_225468;
    }
    ctx->pc = 0x225460u;
    {
        const bool branch_taken_0x225460 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x225464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225460u;
        // 0x225464: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225460) {
            ctx->pc = 0x2254E8u;
            goto label_2254e8;
        }
    }
    ctx->pc = 0x225468u;
label_225468:
    // 0x225468: 0x14820020  bne         $a0, $v0, . + 4 + (0x20 << 2)
label_22546c:
    if (ctx->pc == 0x22546Cu) {
        ctx->pc = 0x22546Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225468u;
        // 0x22546c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225470u;
        goto label_225470;
    }
    ctx->pc = 0x225468u;
    {
        const bool branch_taken_0x225468 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x22546Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225468u;
        // 0x22546c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225468) {
            ctx->pc = 0x2254ECu;
            goto label_2254ec;
        }
    }
    ctx->pc = 0x225470u;
label_225470:
    // 0x225470: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x225470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_225474:
    // 0x225474: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x225474u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_225478:
    // 0x225478: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_22547c:
    if (ctx->pc == 0x22547Cu) {
        ctx->pc = 0x22547Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225478u;
        // 0x22547c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225480u;
        goto label_225480;
    }
    ctx->pc = 0x225478u;
    {
        const bool branch_taken_0x225478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22547Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225478u;
        // 0x22547c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225478) {
            ctx->pc = 0x2254ECu;
            goto label_2254ec;
        }
    }
    ctx->pc = 0x225480u;
label_225480:
    // 0x225480: 0x1000001a  b           . + 4 + (0x1A << 2)
label_225484:
    if (ctx->pc == 0x225484u) {
        ctx->pc = 0x225484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225480u;
        // 0x225484: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225488u;
        goto label_225488;
    }
    ctx->pc = 0x225480u;
    {
        const bool branch_taken_0x225480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225480u;
        // 0x225484: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225480) {
            ctx->pc = 0x2254ECu;
            goto label_2254ec;
        }
    }
    ctx->pc = 0x225488u;
label_225488:
    // 0x225488: 0xc087fec  jal         func_21FFB0
label_22548c:
    if (ctx->pc == 0x22548Cu) {
        ctx->pc = 0x22548Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225488u;
        // 0x22548c: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225490u;
        goto label_225490;
    }
    ctx->pc = 0x225488u;
    SET_GPR_U32(ctx, 31, 0x225490u);
    ctx->pc = 0x22548Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225488u;
    // 0x22548c: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FFB0u, 0x225488u, 0x225490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225490u;
label_225490:
    // 0x225490: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x225490u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_225494:
    // 0x225494: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x225494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_225498:
    // 0x225498: 0x8c45057c  lw          $a1, 0x57C($v0)
    ctx->pc = 0x225498u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1404)));
label_22549c:
    // 0x22549c: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
label_2254a0:
    if (ctx->pc == 0x2254A0u) {
        ctx->pc = 0x2254A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22549Cu;
        // 0x2254a0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2254A4u;
        goto label_2254a4;
    }
    ctx->pc = 0x22549Cu;
    {
        const bool branch_taken_0x22549c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2254A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22549Cu;
        // 0x2254a0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22549c) {
            ctx->pc = 0x2254E8u;
            goto label_2254e8;
        }
    }
    ctx->pc = 0x2254A4u;
label_2254a4:
    // 0x2254a4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2254a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2254a8:
    // 0x2254a8: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
label_2254ac:
    if (ctx->pc == 0x2254ACu) {
        ctx->pc = 0x2254ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2254A8u;
        // 0x2254ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2254B0u;
        goto label_2254b0;
    }
    ctx->pc = 0x2254A8u;
    {
        const bool branch_taken_0x2254a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2254ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2254A8u;
        // 0x2254ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2254a8) {
            ctx->pc = 0x2254ECu;
            goto label_2254ec;
        }
    }
    ctx->pc = 0x2254B0u;
label_2254b0:
    // 0x2254b0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_2254b4:
    if (ctx->pc == 0x2254B4u) {
        ctx->pc = 0x2254B8u;
        goto label_2254b8;
    }
    ctx->pc = 0x2254B0u;
    {
        const bool branch_taken_0x2254b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2254b0) {
            ctx->pc = 0x2254C8u;
            goto label_2254c8;
        }
    }
    ctx->pc = 0x2254B8u;
label_2254b8:
    // 0x2254b8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2254b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2254bc:
    // 0x2254bc: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x2254bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_2254c0:
    // 0x2254c0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2254c4:
    if (ctx->pc == 0x2254C4u) {
        ctx->pc = 0x2254C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2254C0u;
        // 0x2254c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2254C8u;
        goto label_2254c8;
    }
    ctx->pc = 0x2254C0u;
    {
        const bool branch_taken_0x2254c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2254C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2254C0u;
        // 0x2254c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2254c0) {
            ctx->pc = 0x2254ECu;
            goto label_2254ec;
        }
    }
    ctx->pc = 0x2254C8u;
label_2254c8:
    // 0x2254c8: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_2254cc:
    if (ctx->pc == 0x2254CCu) {
        ctx->pc = 0x2254CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2254C8u;
        // 0x2254cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2254D0u;
        goto label_2254d0;
    }
    ctx->pc = 0x2254C8u;
    {
        const bool branch_taken_0x2254c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2254CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2254C8u;
        // 0x2254cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2254c8) {
            ctx->pc = 0x2254E8u;
            goto label_2254e8;
        }
    }
    ctx->pc = 0x2254D0u;
label_2254d0:
    // 0x2254d0: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
label_2254d4:
    if (ctx->pc == 0x2254D4u) {
        ctx->pc = 0x2254D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2254D0u;
        // 0x2254d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2254D8u;
        goto label_2254d8;
    }
    ctx->pc = 0x2254D0u;
    {
        const bool branch_taken_0x2254d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2254d0) {
            ctx->pc = 0x2254D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2254D0u;
            // 0x2254d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2254ECu;
            goto label_2254ec;
        }
    }
    ctx->pc = 0x2254D8u;
label_2254d8:
    // 0x2254d8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2254d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2254dc:
    // 0x2254dc: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x2254dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2254e0:
    // 0x2254e0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2254e4:
    if (ctx->pc == 0x2254E4u) {
        ctx->pc = 0x2254E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2254E0u;
        // 0x2254e4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2254E8u;
        goto label_2254e8;
    }
    ctx->pc = 0x2254E0u;
    {
        const bool branch_taken_0x2254e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2254E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2254E0u;
        // 0x2254e4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2254e0) {
            ctx->pc = 0x2254F0u;
            goto label_2254f0;
        }
    }
    ctx->pc = 0x2254E8u;
label_2254e8:
    // 0x2254e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2254e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2254ec:
    // 0x2254ec: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2254ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2254f0:
    // 0x2254f0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2254f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2254f4:
    // 0x2254f4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2254f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2254f8:
    // 0x2254f8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2254f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2254fc:
    // 0x2254fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2254fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_225500:
    // 0x225500: 0x3e00008  jr          $ra
label_225504:
    if (ctx->pc == 0x225504u) {
        ctx->pc = 0x225504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225500u;
        // 0x225504: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225508u;
        goto label_fallthrough_0x225500;
    }
    ctx->pc = 0x225500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225500u;
        // 0x225504: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x225500:
    ctx->pc = 0x225508u;
}
