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

// Function: splitpageTick
// Address: 0x2310d0 - 0x2311a4
void splitpageTick_0x2310d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("splitpageTick_0x2310d0");
#endif

    switch (ctx->pc) {
        case 0x2310d0u: goto label_2310d0;
        case 0x2310d4u: goto label_2310d4;
        case 0x2310d8u: goto label_2310d8;
        case 0x2310dcu: goto label_2310dc;
        case 0x2310e0u: goto label_2310e0;
        case 0x2310e4u: goto label_2310e4;
        case 0x2310e8u: goto label_2310e8;
        case 0x2310ecu: goto label_2310ec;
        case 0x2310f0u: goto label_2310f0;
        case 0x2310f4u: goto label_2310f4;
        case 0x2310f8u: goto label_2310f8;
        case 0x2310fcu: goto label_2310fc;
        case 0x231100u: goto label_231100;
        case 0x231104u: goto label_231104;
        case 0x231108u: goto label_231108;
        case 0x23110cu: goto label_23110c;
        case 0x231110u: goto label_231110;
        case 0x231114u: goto label_231114;
        case 0x231118u: goto label_231118;
        case 0x23111cu: goto label_23111c;
        case 0x231120u: goto label_231120;
        case 0x231124u: goto label_231124;
        case 0x231128u: goto label_231128;
        case 0x23112cu: goto label_23112c;
        case 0x231130u: goto label_231130;
        case 0x231134u: goto label_231134;
        case 0x231138u: goto label_231138;
        case 0x23113cu: goto label_23113c;
        case 0x231140u: goto label_231140;
        case 0x231144u: goto label_231144;
        case 0x231148u: goto label_231148;
        case 0x23114cu: goto label_23114c;
        case 0x231150u: goto label_231150;
        case 0x231154u: goto label_231154;
        case 0x231158u: goto label_231158;
        case 0x23115cu: goto label_23115c;
        case 0x231160u: goto label_231160;
        case 0x231164u: goto label_231164;
        case 0x231168u: goto label_231168;
        case 0x23116cu: goto label_23116c;
        case 0x231170u: goto label_231170;
        case 0x231174u: goto label_231174;
        case 0x231178u: goto label_231178;
        case 0x23117cu: goto label_23117c;
        case 0x231180u: goto label_231180;
        case 0x231184u: goto label_231184;
        case 0x231188u: goto label_231188;
        case 0x23118cu: goto label_23118c;
        case 0x231190u: goto label_231190;
        case 0x231194u: goto label_231194;
        case 0x231198u: goto label_231198;
        case 0x23119cu: goto label_23119c;
        case 0x2311a0u: goto label_2311a0;
        default: break;
    }

    ctx->pc = 0x2310d0u;

label_2310d0:
    // 0x2310d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2310d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2310d4:
    // 0x2310d4: 0x3c0601fc  lui         $a2, 0x1FC
    ctx->pc = 0x2310d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)508 << 16));
label_2310d8:
    // 0x2310d8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2310d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2310dc:
    // 0x2310dc: 0x24c811f8  addiu       $t0, $a2, 0x11F8
    ctx->pc = 0x2310dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 4600));
label_2310e0:
    // 0x2310e0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2310e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2310e4:
    // 0x2310e4: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x2310e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
label_2310e8:
    // 0x2310e8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2310e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2310ec:
    // 0x2310ec: 0x24421308  addiu       $v0, $v0, 0x1308
    ctx->pc = 0x2310ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4872));
label_2310f0:
    // 0x2310f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2310f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2310f4:
    // 0x2310f4: 0x2406feff  addiu       $a2, $zero, -0x101
    ctx->pc = 0x2310f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
label_2310f8:
    // 0x2310f8: 0x8f83b73c  lw          $v1, -0x48C4($gp)
    ctx->pc = 0x2310f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948668)));
label_2310fc:
    // 0x2310fc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2310fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_231100:
    // 0x231100: 0x8d070004  lw          $a3, 0x4($t0)
    ctx->pc = 0x231100u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_231104:
    // 0x231104: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x231104u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_231108:
    // 0x231108: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x231108u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_23110c:
    // 0x23110c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23110cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_231110:
    // 0x231110: 0xe63824  and         $a3, $a3, $a2
    ctx->pc = 0x231110u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
label_231114:
    // 0x231114: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x231114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_231118:
    // 0x231118: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_23111c:
    if (ctx->pc == 0x23111Cu) {
        ctx->pc = 0x23111Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231118u;
        // 0x23111c: 0xad070004  sw          $a3, 0x4($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231120u;
        goto label_231120;
    }
    ctx->pc = 0x231118u;
    {
        const bool branch_taken_0x231118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23111Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231118u;
        // 0x23111c: 0xad070004  sw          $a3, 0x4($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231118) {
            ctx->pc = 0x231128u;
            goto label_231128;
        }
    }
    ctx->pc = 0x231120u;
label_231120:
    // 0x231120: 0x34e20100  ori         $v0, $a3, 0x100
    ctx->pc = 0x231120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)256);
label_231124:
    // 0x231124: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x231124u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
label_231128:
    // 0x231128: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x231128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23112c:
    // 0x23112c: 0xc08b2c8  jal         func_22CB20
label_231130:
    if (ctx->pc == 0x231130u) {
        ctx->pc = 0x231130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23112Cu;
        // 0x231130: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231134u;
        goto label_231134;
    }
    ctx->pc = 0x23112Cu;
    SET_GPR_U32(ctx, 31, 0x231134u);
    ctx->pc = 0x231130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23112Cu;
    // 0x231130: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CB20u, 0x23112Cu, 0x231134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231134u;
label_231134:
    // 0x231134: 0x8f85b730  lw          $a1, -0x48D0($gp)
    ctx->pc = 0x231134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948656)));
label_231138:
    // 0x231138: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x231138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23113c:
    // 0x23113c: 0xc08c32a  jal         func_230CA8
label_231140:
    if (ctx->pc == 0x231140u) {
        ctx->pc = 0x231140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23113Cu;
        // 0x231140: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231144u;
        goto label_231144;
    }
    ctx->pc = 0x23113Cu;
    SET_GPR_U32(ctx, 31, 0x231144u);
    ctx->pc = 0x231140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23113Cu;
    // 0x231140: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230CA8u, 0x23113Cu, 0x231144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231144u;
label_231144:
    // 0x231144: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x231144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_231148:
    // 0x231148: 0x60f809  jalr        $v1
label_23114c:
    if (ctx->pc == 0x23114Cu) {
        ctx->pc = 0x23114Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231148u;
        // 0x23114c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231150u;
        goto label_231150;
    }
    ctx->pc = 0x231148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x231150u);
        ctx->pc = 0x23114Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231148u;
        // 0x23114c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231148u, 0x231150u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x231150u;
label_231150:
    // 0x231150: 0x1000000b  b           . + 4 + (0xB << 2)
label_231154:
    if (ctx->pc == 0x231154u) {
        ctx->pc = 0x231154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231150u;
        // 0x231154: 0x8f82b730  lw          $v0, -0x48D0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948656)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231158u;
        goto label_231158;
    }
    ctx->pc = 0x231150u;
    {
        const bool branch_taken_0x231150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231150u;
        // 0x231154: 0x8f82b730  lw          $v0, -0x48D0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231150) {
            ctx->pc = 0x231180u;
            goto label_231180;
        }
    }
    ctx->pc = 0x231158u;
label_231158:
    // 0x231158: 0xc08b2c8  jal         func_22CB20
label_23115c:
    if (ctx->pc == 0x23115Cu) {
        ctx->pc = 0x23115Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231158u;
        // 0x23115c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231160u;
        goto label_231160;
    }
    ctx->pc = 0x231158u;
    SET_GPR_U32(ctx, 31, 0x231160u);
    ctx->pc = 0x23115Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231158u;
    // 0x23115c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CB20u, 0x231158u, 0x231160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231160u;
label_231160:
    // 0x231160: 0x8f85b730  lw          $a1, -0x48D0($gp)
    ctx->pc = 0x231160u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948656)));
label_231164:
    // 0x231164: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x231164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_231168:
    // 0x231168: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x231168u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23116c:
    // 0x23116c: 0xc08c32a  jal         func_230CA8
label_231170:
    if (ctx->pc == 0x231170u) {
        ctx->pc = 0x231170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23116Cu;
        // 0x231170: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231174u;
        goto label_231174;
    }
    ctx->pc = 0x23116Cu;
    SET_GPR_U32(ctx, 31, 0x231174u);
    ctx->pc = 0x231170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23116Cu;
    // 0x231170: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230CA8u, 0x23116Cu, 0x231174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231174u;
label_231174:
    // 0x231174: 0xc08b2d6  jal         func_22CB58
label_231178:
    if (ctx->pc == 0x231178u) {
        ctx->pc = 0x23117Cu;
        goto label_23117c;
    }
    ctx->pc = 0x231174u;
    SET_GPR_U32(ctx, 31, 0x23117Cu);
    ctx->pc = 0x22CB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CB58u, 0x231174u, 0x23117Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23117Cu;
label_23117c:
    // 0x23117c: 0x8f82b730  lw          $v0, -0x48D0($gp)
    ctx->pc = 0x23117cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948656)));
label_231180:
    // 0x231180: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x231180u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_231184:
    // 0x231184: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_231188:
    if (ctx->pc == 0x231188u) {
        ctx->pc = 0x231188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231184u;
        // 0x231188: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23118Cu;
        goto label_23118c;
    }
    ctx->pc = 0x231184u;
    {
        const bool branch_taken_0x231184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x231188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231184u;
        // 0x231188: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231184) {
            ctx->pc = 0x231158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_231158;
        }
    }
    ctx->pc = 0x23118Cu;
label_23118c:
    // 0x23118c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x23118cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_231190:
    // 0x231190: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x231190u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_231194:
    // 0x231194: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x231194u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_231198:
    // 0x231198: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x231198u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23119c:
    // 0x23119c: 0x808b2c8  j           func_22CB20
label_2311a0:
    if (ctx->pc == 0x2311A0u) {
        ctx->pc = 0x2311A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23119Cu;
        // 0x2311a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2311A4u;
        goto label_fallthrough_0x23119c;
    }
    ctx->pc = 0x23119Cu;
    ctx->pc = 0x2311A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23119Cu;
    // 0x2311a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CB20u;
    frontSet_0x22cb20(rdram, ctx, runtime); return;
label_fallthrough_0x23119c:
    ctx->pc = 0x2311A4u;
}
