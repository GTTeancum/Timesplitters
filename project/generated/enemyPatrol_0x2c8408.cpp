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

// Function: enemyPatrol
// Address: 0x2c8408 - 0x2c86c4
void enemyPatrol_0x2c8408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("enemyPatrol_0x2c8408");
#endif

    switch (ctx->pc) {
        case 0x2c84bcu: goto label_2c84bc;
        case 0x2c84fcu: goto label_2c84fc;
        case 0x2c8514u: goto label_2c8514;
        case 0x2c8534u: goto label_2c8534;
        case 0x2c8570u: goto label_2c8570;
        case 0x2c8594u: goto label_2c8594;
        case 0x2c8610u: goto label_2c8610;
        case 0x2c861cu: goto label_2c861c;
        default: break;
    }

    ctx->pc = 0x2c8408u;

    // 0x2c8408: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2c8408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2c840c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2c840cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c8410: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2c8410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2c8414: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2c8414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c8418: 0x3c140033  lui         $s4, 0x33
    ctx->pc = 0x2c8418u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)51 << 16));
    // 0x2c841c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2c841cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2c8420: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c8420u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8424: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2c8424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2c8428: 0x2682c4a8  addiu       $v0, $s4, -0x3B58
    ctx->pc = 0x2c8428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294952104));
    // 0x2c842c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2c842cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2c8430: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2c8430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c8434: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c8434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c8438: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x2c8438u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x32C4F0u));
    // 0x2c843c: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C843Cu;
    {
        const bool branch_taken_0x2c843c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C8440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C843Cu;
        // 0x2c8440: 0x8e300160  lw          $s0, 0x160($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c843c) {
            ctx->pc = 0x2C8454u;
            goto label_2c8454;
        }
    }
    ctx->pc = 0x2C8444u;
    // 0x2c8444: 0x8f82b4fc  lw          $v0, -0x4B04($gp)
    ctx->pc = 0x2c8444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948092)));
    // 0x2c8448: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x2c8448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2c844c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2C844Cu;
    {
        const bool branch_taken_0x2c844c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C844Cu;
        // 0x2c8450: 0x8c720000  lw          $s2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c844c) {
            ctx->pc = 0x2C84B0u;
            goto label_2c84b0;
        }
    }
    ctx->pc = 0x2C8454u;
label_2c8454:
    // 0x2c8454: 0x8e020a90  lw          $v0, 0xA90($s0)
    ctx->pc = 0x2c8454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2704)));
    // 0x2c8458: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2c8458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x2c845c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C845Cu;
    {
        const bool branch_taken_0x2c845c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C845Cu;
        // 0x2c8460: 0x8f82b4fc  lw          $v0, -0x4B04($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948092)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c845c) {
            ctx->pc = 0x2C847Cu;
            goto label_2c847c;
        }
    }
    ctx->pc = 0x2C8464u;
    // 0x2c8464: 0x8e030aa8  lw          $v1, 0xAA8($s0)
    ctx->pc = 0x2c8464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2728)));
    // 0x2c8468: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x2c8468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2c846c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2c846cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2c8470: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c8470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c8474: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2C8474u;
    {
        const bool branch_taken_0x2c8474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8474u;
        // 0x2c8478: 0x8c720000  lw          $s2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8474) {
            ctx->pc = 0x2C84B0u;
            goto label_2c84b0;
        }
    }
    ctx->pc = 0x2C847Cu;
label_2c847c:
    // 0x2c847c: 0x8f829f74  lw          $v0, -0x608C($gp)
    ctx->pc = 0x2c847cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x2c8480: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x2c8480u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2c8484: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2c8484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c8488: 0x8f85b4fc  lw          $a1, -0x4B04($gp)
    ctx->pc = 0x2c8488u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948092)));
    // 0x2c848c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2c848cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c8490: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x2c8490u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2c8494: 0x8ca40028  lw          $a0, 0x28($a1)
    ctx->pc = 0x2c8494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x2c8498: 0x8ca60030  lw          $a2, 0x30($a1)
    ctx->pc = 0x2c8498u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x2c849c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c849cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c84a0: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2c84a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2c84a4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2c84a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2c84a8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2c84a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2c84ac: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x2c84acu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c84b0:
    // 0x2c84b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c84b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c84b4: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C84B4u;
    SET_GPR_U32(ctx, 31, 0x2C84BCu);
    ctx->pc = 0x2C84B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C84B4u;
    // 0x2c84b8: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C84B4u, 0x2C84BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C84BCu;
label_2c84bc:
    // 0x2c84bc: 0x8e020bd4  lw          $v0, 0xBD4($s0)
    ctx->pc = 0x2c84bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3028)));
    // 0x2c84c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c84c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c84c4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2c84c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2c84c8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2c84c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c84cc: 0x2883fffd  slti        $v1, $a0, -0x3
    ctx->pc = 0x2c84ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294967293) ? 1 : 0);
    // 0x2c84d0: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2C84D0u;
    {
        const bool branch_taken_0x2c84d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C84D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C84D0u;
        // 0x2c84d4: 0x261502a8  addiu       $s5, $s0, 0x2A8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 680));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c84d0) {
            ctx->pc = 0x2C850Cu;
            goto label_2c850c;
        }
    }
    ctx->pc = 0x2C84D8u;
    // 0x2c84d8: 0x2882ffff  slti        $v0, $a0, -0x1
    ctx->pc = 0x2c84d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x2c84dc: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2C84DCu;
    {
        const bool branch_taken_0x2c84dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C84E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C84DCu;
        // 0x2c84e0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c84dc) {
            ctx->pc = 0x2C850Cu;
            goto label_2c850c;
        }
    }
    ctx->pc = 0x2C84E4u;
    // 0x2c84e4: 0x14820009  bne         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C84E4u;
    {
        const bool branch_taken_0x2c84e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c84e4) {
            ctx->pc = 0x2C850Cu;
            goto label_2c850c;
        }
    }
    ctx->pc = 0x2C84ECu;
    // 0x2c84ec: 0xae000698  sw          $zero, 0x698($s0)
    ctx->pc = 0x2c84ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1688), GPR_U32(ctx, 0));
    // 0x2c84f0: 0xae000a84  sw          $zero, 0xA84($s0)
    ctx->pc = 0x2c84f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2692), GPR_U32(ctx, 0));
    // 0x2c84f4: 0xc099380  jal         func_264E00
    ctx->pc = 0x2C84F4u;
    SET_GPR_U32(ctx, 31, 0x2C84FCu);
    ctx->pc = 0x2C84F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C84F4u;
    // 0x2c84f8: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E00u, 0x2C84F4u, 0x2C84FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C84FCu;
label_2c84fc:
    // 0x2c84fc: 0xae0202ac  sw          $v0, 0x2AC($s0)
    ctx->pc = 0x2c84fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 684), GPR_U32(ctx, 2));
    // 0x2c8500: 0xae000bd4  sw          $zero, 0xBD4($s0)
    ctx->pc = 0x2c8500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3028), GPR_U32(ctx, 0));
    // 0x2c8504: 0xae000aa4  sw          $zero, 0xAA4($s0)
    ctx->pc = 0x2c8504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2724), GPR_U32(ctx, 0));
    // 0x2c8508: 0x261502a8  addiu       $s5, $s0, 0x2A8
    ctx->pc = 0x2c8508u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 680));
label_2c850c:
    // 0x2c850c: 0xc0afda0  jal         func_2BF680
    ctx->pc = 0x2C850Cu;
    SET_GPR_U32(ctx, 31, 0x2C8514u);
    ctx->pc = 0x2C8510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C850Cu;
    // 0x2c8510: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF680u, 0x2C850Cu, 0x2C8514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8514u;
label_2c8514:
    // 0x2c8514: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2c8514u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8518: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2c8518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c851c: 0x2682c4a8  addiu       $v0, $s4, -0x3B58
    ctx->pc = 0x2c851cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294952104));
    // 0x2c8520: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x2c8520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2c8524: 0x1083001c  beq         $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x2C8524u;
    {
        const bool branch_taken_0x2c8524 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C8528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8524u;
        // 0x2c8528: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8524) {
            ctx->pc = 0x2C8598u;
            goto label_2c8598;
        }
    }
    ctx->pc = 0x2C852Cu;
    // 0x2c852c: 0xc0b19a8  jal         func_2C66A0
    ctx->pc = 0x2C852Cu;
    SET_GPR_U32(ctx, 31, 0x2C8534u);
    ctx->pc = 0x2C8530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C852Cu;
    // 0x2c8530: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C66A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C66A0u, 0x2C852Cu, 0x2C8534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8534u;
label_2c8534:
    // 0x2c8534: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c8534u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8538: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2c8538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c853c: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C853Cu;
    {
        const bool branch_taken_0x2c853c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c853c) {
            ctx->pc = 0x2C8540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C853Cu;
            // 0x2c8540: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8568u;
            goto label_2c8568;
        }
    }
    ctx->pc = 0x2C8544u;
    // 0x2c8544: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2C8544u;
    {
        const bool branch_taken_0x2c8544 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8544u;
        // 0x2c8548: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8544) {
            ctx->pc = 0x2C8594u;
            goto label_2c8594;
        }
    }
    ctx->pc = 0x2C854Cu;
    // 0x2c854c: 0x8e020a9c  lw          $v0, 0xA9C($s0)
    ctx->pc = 0x2c854cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2716)));
    // 0x2c8550: 0xc6000b28  lwc1        $f0, 0xB28($s0)
    ctx->pc = 0x2c8550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8554: 0xae030a9c  sw          $v1, 0xA9C($s0)
    ctx->pc = 0x2c8554u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2716), GPR_U32(ctx, 3));
    // 0x2c8558: 0xe6000b38  swc1        $f0, 0xB38($s0)
    ctx->pc = 0x2c8558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2872), bits); }
    // 0x2c855c: 0xae020aa0  sw          $v0, 0xAA0($s0)
    ctx->pc = 0x2c855cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2720), GPR_U32(ctx, 2));
    // 0x2c8560: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x2C8560u;
    {
        const bool branch_taken_0x2c8560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8560u;
        // 0x2c8564: 0xae000b4c  sw          $zero, 0xB4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2892), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8560) {
            ctx->pc = 0x2C86A0u;
            goto label_2c86a0;
        }
    }
    ctx->pc = 0x2C8568u;
label_2c8568:
    // 0x2c8568: 0xc085608  jal         func_215820
    ctx->pc = 0x2C8568u;
    SET_GPR_U32(ctx, 31, 0x2C8570u);
    ctx->pc = 0x2C856Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8568u;
    // 0x2c856c: 0x240501c2  addiu       $a1, $zero, 0x1C2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 450));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2C8568u, 0x2C8570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8570u;
label_2c8570:
    // 0x2c8570: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C8570u;
    {
        const bool branch_taken_0x2c8570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8570u;
        // 0x2c8574: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8570) {
            ctx->pc = 0x2C8598u;
            goto label_2c8598;
        }
    }
    ctx->pc = 0x2C8578u;
    // 0x2c8578: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2c8578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2c857c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c857cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c8580: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c8580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8584: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c8584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c8588: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2c8588u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2c858c: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2C858Cu;
    SET_GPR_U32(ctx, 31, 0x2C8594u);
    ctx->pc = 0x2C8590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C858Cu;
    // 0x2c8590: 0x240501c2  addiu       $a1, $zero, 0x1C2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 450));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2C858Cu, 0x2C8594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8594u;
label_2c8594:
    // 0x2c8594: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x2c8594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_2c8598:
    // 0x2c8598: 0x1662000c  bne         $s3, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2C8598u;
    {
        const bool branch_taken_0x2c8598 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C859Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8598u;
        // 0x2c859c: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8598) {
            ctx->pc = 0x2C85CCu;
            goto label_2c85cc;
        }
    }
    ctx->pc = 0x2C85A0u;
    // 0x2c85a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c85a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c85a4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2c85a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c85a8: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2c85a8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c85ac: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2c85acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c85b0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2c85b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c85b4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2c85b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c85b8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c85b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c85bc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2c85bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c85c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c85c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c85c4: 0x80b20be  j           func_2C82F8
    ctx->pc = 0x2C85C4u;
    ctx->pc = 0x2C85C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C85C4u;
    // 0x2c85c8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    enemySetMoveMode_0x2c82f8(rdram, ctx, runtime); return;
    ctx->pc = 0x2C85CCu;
label_2c85cc:
    // 0x2c85cc: 0x16740015  bne         $s3, $s4, . + 4 + (0x15 << 2)
    ctx->pc = 0x2C85CCu;
    {
        const bool branch_taken_0x2c85cc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 20));
        ctx->pc = 0x2C85D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C85CCu;
        // 0x2c85d0: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c85cc) {
            ctx->pc = 0x2C8624u;
            goto label_2c8624;
        }
    }
    ctx->pc = 0x2C85D4u;
    // 0x2c85d4: 0x8e020bd4  lw          $v0, 0xBD4($s0)
    ctx->pc = 0x2c85d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3028)));
    // 0x2c85d8: 0xae000698  sw          $zero, 0x698($s0)
    ctx->pc = 0x2c85d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1688), GPR_U32(ctx, 0));
    // 0x2c85dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2c85dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2c85e0: 0xae000a84  sw          $zero, 0xA84($s0)
    ctx->pc = 0x2c85e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2692), GPR_U32(ctx, 0));
    // 0x2c85e4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2c85e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c85e8: 0xae020bd4  sw          $v0, 0xBD4($s0)
    ctx->pc = 0x2c85e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3028), GPR_U32(ctx, 2));
    // 0x2c85ec: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x2c85ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2c85f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2c85f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c85f4: 0x50530001  beql        $v0, $s3, . + 4 + (0x1 << 2)
    ctx->pc = 0x2C85F4u;
    {
        const bool branch_taken_0x2c85f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x2c85f4) {
            ctx->pc = 0x2C85F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C85F4u;
            // 0x2c85f8: 0xae000bd4  sw          $zero, 0xBD4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 3028), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C85FCu;
            goto label_2c85fc;
        }
    }
    ctx->pc = 0x2C85FCu;
label_2c85fc:
    // 0x2c85fc: 0x8e020bd4  lw          $v0, 0xBD4($s0)
    ctx->pc = 0x2c85fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3028)));
    // 0x2c8600: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c8600u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c8604: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2c8604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2c8608: 0xc099380  jal         func_264E00
    ctx->pc = 0x2C8608u;
    SET_GPR_U32(ctx, 31, 0x2C8610u);
    ctx->pc = 0x2C860Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8608u;
    // 0x2c860c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E00u, 0x2C8608u, 0x2C8610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8610u;
label_2c8610:
    // 0x2c8610: 0xae0202ac  sw          $v0, 0x2AC($s0)
    ctx->pc = 0x2c8610u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 684), GPR_U32(ctx, 2));
    // 0x2c8614: 0xc0afda0  jal         func_2BF680
    ctx->pc = 0x2C8614u;
    SET_GPR_U32(ctx, 31, 0x2C861Cu);
    ctx->pc = 0x2C8618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8614u;
    // 0x2c8618: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF680u, 0x2C8614u, 0x2C861Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C861Cu;
label_2c861c:
    // 0x2c861c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2C861Cu;
    {
        const bool branch_taken_0x2c861c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C861Cu;
        // 0x2c8620: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c861c) {
            ctx->pc = 0x2C86A4u;
            goto label_2c86a4;
        }
    }
    ctx->pc = 0x2C8624u;
label_2c8624:
    // 0x2c8624: 0xc78091e8  lwc1        $f0, -0x6E18($gp)
    ctx->pc = 0x2c8624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8628: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x2c8628u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c862c: 0x8f83a2ec  lw          $v1, -0x5D14($gp)
    ctx->pc = 0x2c862cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x2c8630: 0xe6000b38  swc1        $f0, 0xB38($s0)
    ctx->pc = 0x2c8630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2872), bits); }
    // 0x2c8634: 0xc78691ec  lwc1        $f6, -0x6E14($gp)
    ctx->pc = 0x2c8634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2c8638: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c8638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c863c: 0xc444000c  lwc1        $f4, 0xC($v0)
    ctx->pc = 0x2c863cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c8640: 0xe6040aec  swc1        $f4, 0xAEC($s0)
    ctx->pc = 0x2c8640u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2796), bits); }
    // 0x2c8644: 0xc4450010  lwc1        $f5, 0x10($v0)
    ctx->pc = 0x2c8644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2c8648: 0xe6050af0  swc1        $f5, 0xAF0($s0)
    ctx->pc = 0x2c8648u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2800), bits); }
    // 0x2c864c: 0xc4430014  lwc1        $f3, 0x14($v0)
    ctx->pc = 0x2c864cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c8650: 0xe6030af4  swc1        $f3, 0xAF4($s0)
    ctx->pc = 0x2c8650u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2804), bits); }
    // 0x2c8654: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x2c8654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8658: 0xc6220034  lwc1        $f2, 0x34($s1)
    ctx->pc = 0x2c8658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c865c: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x2c865cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x2c8660: 0xc6210038  lwc1        $f1, 0x38($s1)
    ctx->pc = 0x2c8660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8664: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x2c8664u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x2c8668: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2c8668u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2c866c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2c866cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2c8670: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2c8670u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2c8674: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2c8674u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2c8678: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c8678u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c867c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c867cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c8680: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x2c8680u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c8684: 0x0  nop
    ctx->pc = 0x2c8684u;
    // NOP
    // 0x2c8688: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2C8688u;
    {
        const bool branch_taken_0x2c8688 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C868Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8688u;
        // 0x2c868c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8688) {
            ctx->pc = 0x2C86A4u;
            goto label_2c86a4;
        }
    }
    ctx->pc = 0x2C8690u;
    // 0x2c8690: 0x8e020698  lw          $v0, 0x698($s0)
    ctx->pc = 0x2c8690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1688)));
    // 0x2c8694: 0xae1302a8  sw          $s3, 0x2A8($s0)
    ctx->pc = 0x2c8694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 680), GPR_U32(ctx, 19));
    // 0x2c8698: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2c8698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2c869c: 0xae020698  sw          $v0, 0x698($s0)
    ctx->pc = 0x2c869cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1688), GPR_U32(ctx, 2));
label_2c86a0:
    // 0x2c86a0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2c86a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2c86a4:
    // 0x2c86a4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2c86a4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c86a8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2c86a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c86ac: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2c86acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c86b0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c86b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c86b4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2c86b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c86b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c86b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c86bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2C86BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C86C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C86BCu;
        // 0x2c86c0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C86BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C86C4u;
}
