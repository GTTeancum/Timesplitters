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

// Function: gameEndLevelSound
// Address: 0x21d098 - 0x21d320
void gameEndLevelSound_0x21d098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gameEndLevelSound_0x21d098");
#endif

    switch (ctx->pc) {
        case 0x21d2ecu: goto label_21d2ec;
        default: break;
    }

    ctx->pc = 0x21d098u;

    // 0x21d098: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21d098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21d09c: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x21d09cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x21d0a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21d0a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21d0a4: 0x24a4c4a8  addiu       $a0, $a1, -0x3B58
    ctx->pc = 0x21d0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952104));
    // 0x21d0a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21d0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21d0ac: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x21d0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x21d0b0: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x21d0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x32C4F0u));
    // 0x21d0b4: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x21D0B4u;
    {
        const bool branch_taken_0x21d0b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21D0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D0B4u;
        // 0x21d0b8: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d0b4) {
            ctx->pc = 0x21D0E0u;
            goto label_21d0e0;
        }
    }
    ctx->pc = 0x21D0BCu;
    // 0x21d0bc: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x21d0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x21d0c0: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x21d0c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x21d0c4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21D0C4u;
    {
        const bool branch_taken_0x21d0c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D0C4u;
        // 0x21d0c8: 0x8f829f70  lw          $v0, -0x6090($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d0c4) {
            ctx->pc = 0x21D0E4u;
            goto label_21d0e4;
        }
    }
    ctx->pc = 0x21D0CCu;
    // 0x21d0cc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x21d0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21d0d0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21D0D0u;
    {
        const bool branch_taken_0x21d0d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21D0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D0D0u;
        // 0x21d0d4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d0d0) {
            ctx->pc = 0x21D0E0u;
            goto label_21d0e0;
        }
    }
    ctx->pc = 0x21D0D8u;
    // 0x21d0d8: 0x1462007f  bne         $v1, $v0, . + 4 + (0x7F << 2)
    ctx->pc = 0x21D0D8u;
    {
        const bool branch_taken_0x21d0d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21d0d8) {
            ctx->pc = 0x21D2D8u;
            goto label_21d2d8;
        }
    }
    ctx->pc = 0x21D0E0u;
label_21d0e0:
    // 0x21d0e0: 0x8f829f70  lw          $v0, -0x6090($gp)
    ctx->pc = 0x21d0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
label_21d0e4:
    // 0x21d0e4: 0x2444fffe  addiu       $a0, $v0, -0x2
    ctx->pc = 0x21d0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x21d0e8: 0x2c83001a  sltiu       $v1, $a0, 0x1A
    ctx->pc = 0x21d0e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x21d0ec: 0x1060007a  beqz        $v1, . + 4 + (0x7A << 2)
    ctx->pc = 0x21D0ECu;
    {
        const bool branch_taken_0x21d0ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D0ECu;
        // 0x21d0f0: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d0ec) {
            ctx->pc = 0x21D2D8u;
            goto label_21d2d8;
        }
    }
    ctx->pc = 0x21D0F4u;
    // 0x21d0f4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x21d0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x21d0f8: 0x24420810  addiu       $v0, $v0, 0x810
    ctx->pc = 0x21d0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2064));
    // 0x21d0fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21d0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21d100: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x21d100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21d104: 0x800008  jr          $a0
    ctx->pc = 0x21D104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21D10Cu: goto label_21d10c;
            case 0x21D124u: goto label_21d124;
            case 0x21D13Cu: goto label_21d13c;
            case 0x21D154u: goto label_21d154;
            case 0x21D16Cu: goto label_21d16c;
            case 0x21D184u: goto label_21d184;
            case 0x21D19Cu: goto label_21d19c;
            case 0x21D1B4u: goto label_21d1b4;
            case 0x21D1CCu: goto label_21d1cc;
            case 0x21D1E4u: goto label_21d1e4;
            case 0x21D1FCu: goto label_21d1fc;
            case 0x21D214u: goto label_21d214;
            case 0x21D22Cu: goto label_21d22c;
            case 0x21D244u: goto label_21d244;
            case 0x21D25Cu: goto label_21d25c;
            case 0x21D274u: goto label_21d274;
            case 0x21D28Cu: goto label_21d28c;
            case 0x21D2A4u: goto label_21d2a4;
            case 0x21D2BCu: goto label_21d2bc;
            case 0x21D2D8u: goto label_21d2d8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D104u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x21D10Cu;
label_21d10c:
    // 0x21d10c: 0x24a3c4a8  addiu       $v1, $a1, -0x3B58
    ctx->pc = 0x21d10cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952104));
    // 0x21d110: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x21d110u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x21d114: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x21d114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x21d118: 0x2410004e  addiu       $s0, $zero, 0x4E
    ctx->pc = 0x21d118u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x21d11c: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x21D11Cu;
    {
        const bool branch_taken_0x21d11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D11Cu;
        // 0x21d120: 0x2403004d  addiu       $v1, $zero, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d11c) {
            ctx->pc = 0x21D2D0u;
            goto label_21d2d0;
        }
    }
    ctx->pc = 0x21D124u;
label_21d124:
    // 0x21d124: 0x24a3c4a8  addiu       $v1, $a1, -0x3B58
    ctx->pc = 0x21d124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952104));
    // 0x21d128: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x21d128u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x21d12c: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x21d12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x21d130: 0x2410004a  addiu       $s0, $zero, 0x4A
    ctx->pc = 0x21d130u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x21d134: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x21D134u;
    {
        const bool branch_taken_0x21d134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D134u;
        // 0x21d138: 0x24030049  addiu       $v1, $zero, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d134) {
            ctx->pc = 0x21D2D0u;
            goto label_21d2d0;
        }
    }
    ctx->pc = 0x21D13Cu;
label_21d13c:
    // 0x21d13c: 0x24a3c4a8  addiu       $v1, $a1, -0x3B58
    ctx->pc = 0x21d13cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952104));
    // 0x21d140: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x21d140u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x21d144: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x21d144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x21d148: 0x24100040  addiu       $s0, $zero, 0x40
    ctx->pc = 0x21d148u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x21d14c: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x21D14Cu;
    {
        const bool branch_taken_0x21d14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D14Cu;
        // 0x21d150: 0x2403003f  addiu       $v1, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d14c) {
            ctx->pc = 0x21D2D0u;
            goto label_21d2d0;
        }
    }
    ctx->pc = 0x21D154u;
label_21d154:
    // 0x21d154: 0x24a3c4a8  addiu       $v1, $a1, -0x3B58
    ctx->pc = 0x21d154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952104));
    // 0x21d158: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x21d158u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x21d15c: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x21d15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x21d160: 0x24100030  addiu       $s0, $zero, 0x30
    ctx->pc = 0x21d160u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x21d164: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x21D164u;
    {
        const bool branch_taken_0x21d164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D164u;
        // 0x21d168: 0x2403002f  addiu       $v1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d164) {
            ctx->pc = 0x21D2D0u;
            goto label_21d2d0;
        }
    }
    ctx->pc = 0x21D16Cu;
label_21d16c:
    // 0x21d16c: 0x24a3c4a8  addiu       $v1, $a1, -0x3B58
    ctx->pc = 0x21d16cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952104));
    // 0x21d170: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x21d170u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x21d174: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x21d174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x21d178: 0x24100032  addiu       $s0, $zero, 0x32
    ctx->pc = 0x21d178u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x21d17c: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x21D17Cu;
    {
        const bool branch_taken_0x21d17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D17Cu;
        // 0x21d180: 0x24030031  addiu       $v1, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d17c) {
            ctx->pc = 0x21D2D0u;
            goto label_21d2d0;
        }
    }
    ctx->pc = 0x21D184u;
label_21d184:
    // 0x21d184: 0x24a3c4a8  addiu       $v1, $a1, -0x3B58
    ctx->pc = 0x21d184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952104));
    // 0x21d188: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x21d188u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x21d18c: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x21d18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x21d190: 0x24100036  addiu       $s0, $zero, 0x36
    ctx->pc = 0x21d190u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x21d194: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x21D194u;
    {
        const bool branch_taken_0x21d194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D194u;
        // 0x21d198: 0x24030035  addiu       $v1, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d194) {
            ctx->pc = 0x21D2D0u;
            goto label_21d2d0;
        }
    }
    ctx->pc = 0x21D19Cu;
label_21d19c:
    // 0x21d19c: 0x24a3c4a8  addiu       $v1, $a1, -0x3B58
    ctx->pc = 0x21d19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952104));
    // 0x21d1a0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x21d1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x21d1a4: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x21d1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x21d1a8: 0x24100034  addiu       $s0, $zero, 0x34
    ctx->pc = 0x21d1a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x21d1ac: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x21D1ACu;
    {
        const bool branch_taken_0x21d1ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D1ACu;
        // 0x21d1b0: 0x24030033  addiu       $v1, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d1ac) {
            ctx->pc = 0x21D2D0u;
            goto label_21d2d0;
        }
    }
    ctx->pc = 0x21D1B4u;
label_21d1b4:
    // 0x21d1b4: 0x24a3c4a8  addiu       $v1, $a1, -0x3B58
    ctx->pc = 0x21d1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952104));
    // 0x21d1b8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x21d1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x21d1bc: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x21d1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x21d1c0: 0x24100050  addiu       $s0, $zero, 0x50
    ctx->pc = 0x21d1c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x21d1c4: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x21D1C4u;
    {
        const bool branch_taken_0x21d1c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D1C4u;
        // 0x21d1c8: 0x2403004f  addiu       $v1, $zero, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d1c4) {
            ctx->pc = 0x21D2D0u;
            goto label_21d2d0;
        }
    }
    ctx->pc = 0x21D1CCu;
label_21d1cc:
    // 0x21d1cc: 0x24a3c4a8  addiu       $v1, $a1, -0x3B58
    ctx->pc = 0x21d1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952104));
    // 0x21d1d0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x21d1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x21d1d4: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x21d1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x21d1d8: 0x24100056  addiu       $s0, $zero, 0x56
    ctx->pc = 0x21d1d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x21d1dc: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x21D1DCu;
    {
        const bool branch_taken_0x21d1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D1DCu;
        // 0x21d1e0: 0x24030055  addiu       $v1, $zero, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d1dc) {
            ctx->pc = 0x21D2D0u;
            goto label_21d2d0;
        }
    }
    ctx->pc = 0x21D1E4u;
label_21d1e4:
    // 0x21d1e4: 0x24a3c4a8  addiu       $v1, $a1, -0x3B58
    ctx->pc = 0x21d1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952104));
    // 0x21d1e8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x21d1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x21d1ec: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x21d1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x21d1f0: 0x24100054  addiu       $s0, $zero, 0x54
    ctx->pc = 0x21d1f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x21d1f4: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x21D1F4u;
    {
        const bool branch_taken_0x21d1f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D1F4u;
        // 0x21d1f8: 0x24030053  addiu       $v1, $zero, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d1f4) {
            ctx->pc = 0x21D2D0u;
            goto label_21d2d0;
        }
    }
    ctx->pc = 0x21D1FCu;
label_21d1fc:
    // 0x21d1fc: 0x24a3c4a8  addiu       $v1, $a1, -0x3B58
    ctx->pc = 0x21d1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952104));
    // 0x21d200: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x21d200u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x21d204: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x21d204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x21d208: 0x24100044  addiu       $s0, $zero, 0x44
    ctx->pc = 0x21d208u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x21d20c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x21D20Cu;
    {
        const bool branch_taken_0x21d20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D20Cu;
        // 0x21d210: 0x24030043  addiu       $v1, $zero, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d20c) {
            ctx->pc = 0x21D2D0u;
            goto label_21d2d0;
        }
    }
    ctx->pc = 0x21D214u;
label_21d214:
    // 0x21d214: 0x24a3c4a8  addiu       $v1, $a1, -0x3B58
    ctx->pc = 0x21d214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952104));
    // 0x21d218: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x21d218u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x21d21c: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x21d21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x21d220: 0x2410003e  addiu       $s0, $zero, 0x3E
    ctx->pc = 0x21d220u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x21d224: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x21D224u;
    {
        const bool branch_taken_0x21d224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D224u;
        // 0x21d228: 0x2403003d  addiu       $v1, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d224) {
            ctx->pc = 0x21D2D0u;
            goto label_21d2d0;
        }
    }
    ctx->pc = 0x21D22Cu;
label_21d22c:
    // 0x21d22c: 0x24a3c4a8  addiu       $v1, $a1, -0x3B58
    ctx->pc = 0x21d22cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952104));
    // 0x21d230: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x21d230u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x21d234: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x21d234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x21d238: 0x2410003a  addiu       $s0, $zero, 0x3A
    ctx->pc = 0x21d238u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x21d23c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x21D23Cu;
    {
        const bool branch_taken_0x21d23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D23Cu;
        // 0x21d240: 0x24030039  addiu       $v1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d23c) {
            ctx->pc = 0x21D2D0u;
            goto label_21d2d0;
        }
    }
    ctx->pc = 0x21D244u;
label_21d244:
    // 0x21d244: 0x24a3c4a8  addiu       $v1, $a1, -0x3B58
    ctx->pc = 0x21d244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952104));
    // 0x21d248: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x21d248u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x21d24c: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x21d24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x21d250: 0x2410004c  addiu       $s0, $zero, 0x4C
    ctx->pc = 0x21d250u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x21d254: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x21D254u;
    {
        const bool branch_taken_0x21d254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D254u;
        // 0x21d258: 0x2403004b  addiu       $v1, $zero, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d254) {
            ctx->pc = 0x21D2D0u;
            goto label_21d2d0;
        }
    }
    ctx->pc = 0x21D25Cu;
label_21d25c:
    // 0x21d25c: 0x24a3c4a8  addiu       $v1, $a1, -0x3B58
    ctx->pc = 0x21d25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952104));
    // 0x21d260: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x21d260u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x21d264: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x21d264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x21d268: 0x24100042  addiu       $s0, $zero, 0x42
    ctx->pc = 0x21d268u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x21d26c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x21D26Cu;
    {
        const bool branch_taken_0x21d26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D26Cu;
        // 0x21d270: 0x24030041  addiu       $v1, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d26c) {
            ctx->pc = 0x21D2D0u;
            goto label_21d2d0;
        }
    }
    ctx->pc = 0x21D274u;
label_21d274:
    // 0x21d274: 0x24a3c4a8  addiu       $v1, $a1, -0x3B58
    ctx->pc = 0x21d274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952104));
    // 0x21d278: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x21d278u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x21d27c: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x21d27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x21d280: 0x24100046  addiu       $s0, $zero, 0x46
    ctx->pc = 0x21d280u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x21d284: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x21D284u;
    {
        const bool branch_taken_0x21d284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D284u;
        // 0x21d288: 0x24030045  addiu       $v1, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d284) {
            ctx->pc = 0x21D2D0u;
            goto label_21d2d0;
        }
    }
    ctx->pc = 0x21D28Cu;
label_21d28c:
    // 0x21d28c: 0x24a3c4a8  addiu       $v1, $a1, -0x3B58
    ctx->pc = 0x21d28cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952104));
    // 0x21d290: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x21d290u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x21d294: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x21d294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x21d298: 0x24100048  addiu       $s0, $zero, 0x48
    ctx->pc = 0x21d298u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x21d29c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x21D29Cu;
    {
        const bool branch_taken_0x21d29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D29Cu;
        // 0x21d2a0: 0x24030047  addiu       $v1, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d29c) {
            ctx->pc = 0x21D2D0u;
            goto label_21d2d0;
        }
    }
    ctx->pc = 0x21D2A4u;
label_21d2a4:
    // 0x21d2a4: 0x24a3c4a8  addiu       $v1, $a1, -0x3B58
    ctx->pc = 0x21d2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952104));
    // 0x21d2a8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x21d2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x21d2ac: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x21d2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x21d2b0: 0x24100038  addiu       $s0, $zero, 0x38
    ctx->pc = 0x21d2b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x21d2b4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x21D2B4u;
    {
        const bool branch_taken_0x21d2b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D2B4u;
        // 0x21d2b8: 0x24030037  addiu       $v1, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d2b4) {
            ctx->pc = 0x21D2D0u;
            goto label_21d2d0;
        }
    }
    ctx->pc = 0x21D2BCu;
label_21d2bc:
    // 0x21d2bc: 0x24a3c4a8  addiu       $v1, $a1, -0x3B58
    ctx->pc = 0x21d2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952104));
    // 0x21d2c0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x21d2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x21d2c4: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x21d2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x21d2c8: 0x2410003c  addiu       $s0, $zero, 0x3C
    ctx->pc = 0x21d2c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x21d2cc: 0x2403003b  addiu       $v1, $zero, 0x3B
    ctx->pc = 0x21d2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_21d2d0:
    // 0x21d2d0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x21d2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x21d2d4: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x21d2d4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_21d2d8:
    // 0x21d2d8: 0x600000c  bltz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x21D2D8u;
    {
        const bool branch_taken_0x21d2d8 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x21D2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D2D8u;
        // 0x21d2dc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d2d8) {
            ctx->pc = 0x21D30Cu;
            goto label_21d30c;
        }
    }
    ctx->pc = 0x21D2E0u;
    // 0x21d2e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21d2e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d2e4: 0xc0816f6  jal         func_205BD8
    ctx->pc = 0x21D2E4u;
    SET_GPR_U32(ctx, 31, 0x21D2ECu);
    ctx->pc = 0x21D2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D2E4u;
    // 0x21d2e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205BD8u, 0x21D2E4u, 0x21D2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D2ECu;
label_21d2ec:
    // 0x21d2ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21d2ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d2f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21d2f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21d2f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21d2f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d2f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21d2f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d2fc: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x21d2fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x21d300: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21d300u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d304: 0x8081602  j           func_205808
    ctx->pc = 0x21D304u;
    ctx->pc = 0x21D308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D304u;
    // 0x21d308: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205808u;
    soundDelayStartEx_0x205808(rdram, ctx, runtime); return;
    ctx->pc = 0x21D30Cu;
label_21d30c:
    // 0x21d30c: 0x240400de  addiu       $a0, $zero, 0xDE
    ctx->pc = 0x21d30cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 222));
    // 0x21d310: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21d310u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d314: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21d314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d318: 0x8081546  j           func_205518
    ctx->pc = 0x21D318u;
    ctx->pc = 0x21D31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D318u;
    // 0x21d31c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    soundStart_0x205518(rdram, ctx, runtime); return;
    ctx->pc = 0x21D320u;
}
