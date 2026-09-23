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

// Function: gameStatusUpdated
// Address: 0x21ccd8 - 0x21d094
void gameStatusUpdated_0x21ccd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gameStatusUpdated_0x21ccd8");
#endif

    switch (ctx->pc) {
        case 0x21cd04u: goto label_21cd04;
        case 0x21cd0cu: goto label_21cd0c;
        case 0x21cd78u: goto label_21cd78;
        case 0x21cd80u: goto label_21cd80;
        case 0x21cdc0u: goto label_21cdc0;
        case 0x21ce18u: goto label_21ce18;
        case 0x21ce34u: goto label_21ce34;
        case 0x21cebcu: goto label_21cebc;
        case 0x21cee4u: goto label_21cee4;
        case 0x21cefcu: goto label_21cefc;
        case 0x21cf20u: goto label_21cf20;
        case 0x21cf48u: goto label_21cf48;
        case 0x21cf90u: goto label_21cf90;
        case 0x21cfa4u: goto label_21cfa4;
        case 0x21cfb8u: goto label_21cfb8;
        case 0x21cfd0u: goto label_21cfd0;
        case 0x21cfe4u: goto label_21cfe4;
        case 0x21cff0u: goto label_21cff0;
        case 0x21d000u: goto label_21d000;
        case 0x21d028u: goto label_21d028;
        case 0x21d03cu: goto label_21d03c;
        case 0x21d048u: goto label_21d048;
        case 0x21d068u: goto label_21d068;
        default: break;
    }

    ctx->pc = 0x21ccd8u;

    // 0x21ccd8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x21ccd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x21ccdc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21ccdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21cce0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x21cce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x21cce4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x21cce4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cce8: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x21cce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x21ccec: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x21ccecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x21ccf0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x21ccf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x21ccf4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x21ccf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x21ccf8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x21ccf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21ccfc: 0xc08851a  jal         func_221468
    ctx->pc = 0x21CCFCu;
    SET_GPR_U32(ctx, 31, 0x21CD04u);
    ctx->pc = 0x21CD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CCFCu;
    // 0x21cd00: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221468u, 0x21CCFCu, 0x21CD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CD04u;
label_21cd04:
    // 0x21cd04: 0xc088644  jal         func_221910
    ctx->pc = 0x21CD04u;
    SET_GPR_U32(ctx, 31, 0x21CD0Cu);
    ctx->pc = 0x221910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221910u, 0x21CD04u, 0x21CD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CD0Cu;
label_21cd0c:
    // 0x21cd0c: 0x8f829f54  lw          $v0, -0x60AC($gp)
    ctx->pc = 0x21cd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942548)));
    // 0x21cd10: 0x8f839f50  lw          $v1, -0x60B0($gp)
    ctx->pc = 0x21cd10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942544)));
    // 0x21cd14: 0x8f849f4c  lw          $a0, -0x60B4($gp)
    ctx->pc = 0x21cd14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942540)));
    // 0x21cd18: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x21cd18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x21cd1c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x21cd1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x21cd20: 0x144000d2  bnez        $v0, . + 4 + (0xD2 << 2)
    ctx->pc = 0x21CD20u;
    {
        const bool branch_taken_0x21cd20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21CD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CD20u;
        // 0x21cd24: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cd20) {
            ctx->pc = 0x21D06Cu;
            goto label_21d06c;
        }
    }
    ctx->pc = 0x21CD28u;
    // 0x21cd28: 0x3c130033  lui         $s3, 0x33
    ctx->pc = 0x21cd28u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)51 << 16));
    // 0x21cd2c: 0x2664c4a8  addiu       $a0, $s3, -0x3B58
    ctx->pc = 0x21cd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294952104));
    // 0x21cd30: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x21cd30u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x32C4F8u));
    // 0x21cd34: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x21cd34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x21cd38: 0x144000cc  bnez        $v0, . + 4 + (0xCC << 2)
    ctx->pc = 0x21CD38u;
    {
        const bool branch_taken_0x21cd38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21CD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CD38u;
        // 0x21cd3c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cd38) {
            ctx->pc = 0x21D06Cu;
            goto label_21d06c;
        }
    }
    ctx->pc = 0x21CD40u;
    // 0x21cd40: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x21cd40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x21cd44: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x21cd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x21cd48: 0x14620056  bne         $v1, $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x21CD48u;
    {
        const bool branch_taken_0x21cd48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x21CD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CD48u;
        // 0x21cd4c: 0x2671c4a8  addiu       $s1, $s3, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294952104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cd48) {
            ctx->pc = 0x21CEA4u;
            goto label_21cea4;
        }
    }
    ctx->pc = 0x21CD50u;
    // 0x21cd50: 0x8f829f70  lw          $v0, -0x6090($gp)
    ctx->pc = 0x21cd50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x21cd54: 0x2c42001e  sltiu       $v0, $v0, 0x1E
    ctx->pc = 0x21cd54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
    // 0x21cd58: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x21CD58u;
    {
        const bool branch_taken_0x21cd58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CD58u;
        // 0x21cd5c: 0x8f889f74  lw          $t0, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cd58) {
            ctx->pc = 0x21CEA4u;
            goto label_21cea4;
        }
    }
    ctx->pc = 0x21CD60u;
    // 0x21cd60: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21cd60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cd64: 0x1900001e  blez        $t0, . + 4 + (0x1E << 2)
    ctx->pc = 0x21CD64u;
    {
        const bool branch_taken_0x21cd64 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x21CD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CD64u;
        // 0x21cd68: 0x8f929da8  lw          $s2, -0x6258($gp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cd64) {
            ctx->pc = 0x21CDE0u;
            goto label_21cde0;
        }
    }
    ctx->pc = 0x21CD6Cu;
    // 0x21cd6c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x21cd6cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cd70: 0x24140024  addiu       $s4, $zero, 0x24
    ctx->pc = 0x21cd70u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x21cd74: 0x3c101000  lui         $s0, 0x1000
    ctx->pc = 0x21cd74u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4096 << 16));
label_21cd78:
    // 0x21cd78: 0xc087fee  jal         func_21FFB8
    ctx->pc = 0x21CD78u;
    SET_GPR_U32(ctx, 31, 0x21CD80u);
    ctx->pc = 0x21CD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CD78u;
    // 0x21cd7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FFB8u, 0x21CD78u, 0x21CD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CD80u;
label_21cd80:
    // 0x21cd80: 0x8f839f70  lw          $v1, -0x6090($gp)
    ctx->pc = 0x21cd80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x21cd84: 0x741818  mult        $v1, $v1, $s4
    ctx->pc = 0x21cd84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x21cd88: 0x24630140  addiu       $v1, $v1, 0x140
    ctx->pc = 0x21cd88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 320));
    // 0x21cd8c: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x21cd8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21cd90: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x21cd90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x21cd94: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x21cd94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x21cd98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21cd98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21cd9c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x21cd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x21cda0: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x21cda0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x21cda4: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x21cda4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x21cda8: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x21cda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x21cdac: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x21cdacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x21cdb0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21CDB0u;
    {
        const bool branch_taken_0x21cdb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CDB0u;
        // 0x21cdb4: 0x8f889f74  lw          $t0, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cdb0) {
            ctx->pc = 0x21CDD0u;
            goto label_21cdd0;
        }
    }
    ctx->pc = 0x21CDB8u;
    // 0x21cdb8: 0xc087fee  jal         func_21FFB8
    ctx->pc = 0x21CDB8u;
    SET_GPR_U32(ctx, 31, 0x21CDC0u);
    ctx->pc = 0x21CDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CDB8u;
    // 0x21cdbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FFB8u, 0x21CDB8u, 0x21CDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CDC0u;
label_21cdc0:
    // 0x21cdc0: 0x8c4307a4  lw          $v1, 0x7A4($v0)
    ctx->pc = 0x21cdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1956)));
    // 0x21cdc4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x21cdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21cdc8: 0xac4307a4  sw          $v1, 0x7A4($v0)
    ctx->pc = 0x21cdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1956), GPR_U32(ctx, 3));
    // 0x21cdcc: 0x8f889f74  lw          $t0, -0x608C($gp)
    ctx->pc = 0x21cdccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
label_21cdd0:
    // 0x21cdd0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21cdd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x21cdd4: 0x228102a  slt         $v0, $s1, $t0
    ctx->pc = 0x21cdd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x21cdd8: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x21CDD8u;
    {
        const bool branch_taken_0x21cdd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21cdd8) {
            ctx->pc = 0x21CD78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21cd78;
        }
    }
    ctx->pc = 0x21CDE0u;
label_21cde0:
    // 0x21cde0: 0x2663c4a8  addiu       $v1, $s3, -0x3B58
    ctx->pc = 0x21cde0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294952104));
    // 0x21cde4: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x21cde4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x21cde8: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x21cde8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x21cdec: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x21cdecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x21cdf0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x21cdf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x21cdf4: 0x1444002b  bne         $v0, $a0, . + 4 + (0x2B << 2)
    ctx->pc = 0x21CDF4u;
    {
        const bool branch_taken_0x21cdf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x21CDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CDF4u;
        // 0x21cdf8: 0x2671c4a8  addiu       $s1, $s3, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294952104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cdf4) {
            ctx->pc = 0x21CEA4u;
            goto label_21cea4;
        }
    }
    ctx->pc = 0x21CDFCu;
    // 0x21cdfc: 0x19000028  blez        $t0, . + 4 + (0x28 << 2)
    ctx->pc = 0x21CDFCu;
    {
        const bool branch_taken_0x21cdfc = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x21CE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CDFCu;
        // 0x21ce00: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cdfc) {
            ctx->pc = 0x21CEA0u;
            goto label_21cea0;
        }
    }
    ctx->pc = 0x21CE04u;
    // 0x21ce04: 0x24160004  addiu       $s6, $zero, 0x4
    ctx->pc = 0x21ce04u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21ce08: 0x24150024  addiu       $s5, $zero, 0x24
    ctx->pc = 0x21ce08u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x21ce0c: 0x3c144000  lui         $s4, 0x4000
    ctx->pc = 0x21ce0cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)16384 << 16));
    // 0x21ce10: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x21ce10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ce14: 0x0  nop
    ctx->pc = 0x21ce14u;
    // NOP
label_21ce18:
    // 0x21ce18: 0x8f82b230  lw          $v0, -0x4DD0($gp)
    ctx->pc = 0x21ce18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x21ce1c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x21ce1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x21ce20: 0x8c430128  lw          $v1, 0x128($v0)
    ctx->pc = 0x21ce20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 296)));
    // 0x21ce24: 0x5076001b  beql        $v1, $s6, . + 4 + (0x1B << 2)
    ctx->pc = 0x21CE24u;
    {
        const bool branch_taken_0x21ce24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 22));
        if (branch_taken_0x21ce24) {
            ctx->pc = 0x21CE28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21CE24u;
            // 0x21ce28: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21CE94u;
            goto label_21ce94;
        }
    }
    ctx->pc = 0x21CE2Cu;
    // 0x21ce2c: 0xc087fee  jal         func_21FFB8
    ctx->pc = 0x21CE2Cu;
    SET_GPR_U32(ctx, 31, 0x21CE34u);
    ctx->pc = 0x21CE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CE2Cu;
    // 0x21ce30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FFB8u, 0x21CE2Cu, 0x21CE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CE34u;
label_21ce34:
    // 0x21ce34: 0x8f839f70  lw          $v1, -0x6090($gp)
    ctx->pc = 0x21ce34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x21ce38: 0x2669c4a8  addiu       $t1, $s3, -0x3B58
    ctx->pc = 0x21ce38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 4294952104));
    // 0x21ce3c: 0x8f889f74  lw          $t0, -0x608C($gp)
    ctx->pc = 0x21ce3cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x21ce40: 0x751818  mult        $v1, $v1, $s5
    ctx->pc = 0x21ce40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x21ce44: 0x8d25004c  lw          $a1, 0x4C($t1)
    ctx->pc = 0x21ce44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 76)));
    // 0x21ce48: 0x39060001  xori        $a2, $t0, 0x1
    ctx->pc = 0x21ce48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)1);
    // 0x21ce4c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x21ce4cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x21ce50: 0x24630140  addiu       $v1, $v1, 0x140
    ctx->pc = 0x21ce50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 320));
    // 0x21ce54: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x21ce54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21ce58: 0x24e40008  addiu       $a0, $a3, 0x8
    ctx->pc = 0x21ce58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x21ce5c: 0x24e20014  addiu       $v0, $a3, 0x14
    ctx->pc = 0x21ce5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
    // 0x21ce60: 0x86100a  movz        $v0, $a0, $a2
    ctx->pc = 0x21ce60u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x21ce64: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x21ce64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x21ce68: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x21ce68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21ce6c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21CE6Cu;
    {
        const bool branch_taken_0x21ce6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CE6Cu;
        // 0x21ce70: 0x52102b  sltu        $v0, $v0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ce6c) {
            ctx->pc = 0x21CE7Cu;
            goto label_21ce7c;
        }
    }
    ctx->pc = 0x21CE74u;
    // 0x21ce74: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x21CE74u;
    {
        const bool branch_taken_0x21ce74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21ce74) {
            ctx->pc = 0x21CE78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21CE74u;
            // 0x21ce78: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21CE94u;
            goto label_21ce94;
        }
    }
    ctx->pc = 0x21CE7Cu;
label_21ce7c:
    // 0x21ce7c: 0x8d220050  lw          $v0, 0x50($t1)
    ctx->pc = 0x21ce7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 80)));
    // 0x21ce80: 0x2341804  sllv        $v1, $s4, $s1
    ctx->pc = 0x21ce80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), GPR_U32(ctx, 17) & 0x1F));
    // 0x21ce84: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x21ce84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x21ce88: 0xad220050  sw          $v0, 0x50($t1)
    ctx->pc = 0x21ce88u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 80), GPR_U32(ctx, 2));
    // 0x21ce8c: 0xac920000  sw          $s2, 0x0($a0)
    ctx->pc = 0x21ce8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 18));
    // 0x21ce90: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21ce90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_21ce94:
    // 0x21ce94: 0x228102a  slt         $v0, $s1, $t0
    ctx->pc = 0x21ce94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x21ce98: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x21CE98u;
    {
        const bool branch_taken_0x21ce98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21CE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CE98u;
        // 0x21ce9c: 0x2610071c  addiu       $s0, $s0, 0x71C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1820));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ce98) {
            ctx->pc = 0x21CE18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21ce18;
        }
    }
    ctx->pc = 0x21CEA0u;
label_21cea0:
    // 0x21cea0: 0x2671c4a8  addiu       $s1, $s3, -0x3B58
    ctx->pc = 0x21cea0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294952104));
label_21cea4:
    // 0x21cea4: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x21cea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x21cea8: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x21cea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x21ceac: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x21CEACu;
    {
        const bool branch_taken_0x21ceac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CEACu;
        // 0x21ceb0: 0x8f889f74  lw          $t0, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ceac) {
            ctx->pc = 0x21CF10u;
            goto label_21cf10;
        }
    }
    ctx->pc = 0x21CEB4u;
    // 0x21ceb4: 0xc087fee  jal         func_21FFB8
    ctx->pc = 0x21CEB4u;
    SET_GPR_U32(ctx, 31, 0x21CEBCu);
    ctx->pc = 0x21CEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CEB4u;
    // 0x21ceb8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FFB8u, 0x21CEB4u, 0x21CEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CEBCu;
label_21cebc:
    // 0x21cebc: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x21cebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x21cec0: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x21cec0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x21cec4: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x21cec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x21cec8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x21cec8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x21cecc: 0x24630578  addiu       $v1, $v1, 0x578
    ctx->pc = 0x21ceccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1400));
    // 0x21ced0: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x21ced0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x21ced4: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x21CED4u;
    {
        const bool branch_taken_0x21ced4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CED4u;
        // 0x21ced8: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ced4) {
            ctx->pc = 0x21CF0Cu;
            goto label_21cf0c;
        }
    }
    ctx->pc = 0x21CEDCu;
    // 0x21cedc: 0xc087c22  jal         func_21F088
    ctx->pc = 0x21CEDCu;
    SET_GPR_U32(ctx, 31, 0x21CEE4u);
    ctx->pc = 0x21F088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F088u, 0x21CEDCu, 0x21CEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CEE4u;
label_21cee4:
    // 0x21cee4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21CEE4u;
    {
        const bool branch_taken_0x21cee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CEE4u;
        // 0x21cee8: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cee4) {
            ctx->pc = 0x21CF00u;
            goto label_21cf00;
        }
    }
    ctx->pc = 0x21CEECu;
    // 0x21ceec: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x21ceecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x21cef0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x21cef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x21cef4: 0xc087c20  jal         func_21F080
    ctx->pc = 0x21CEF4u;
    SET_GPR_U32(ctx, 31, 0x21CEFCu);
    ctx->pc = 0x21CEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CEF4u;
    // 0x21cef8: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F080u, 0x21CEF4u, 0x21CEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CEFCu;
label_21cefc:
    // 0x21cefc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x21cefcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_21cf00:
    // 0x21cf00: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x21cf00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21cf04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21cf04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21cf08: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x21cf08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_21cf0c:
    // 0x21cf0c: 0x8f889f74  lw          $t0, -0x608C($gp)
    ctx->pc = 0x21cf0cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
label_21cf10:
    // 0x21cf10: 0x19000018  blez        $t0, . + 4 + (0x18 << 2)
    ctx->pc = 0x21CF10u;
    {
        const bool branch_taken_0x21cf10 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x21CF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CF10u;
        // 0x21cf14: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cf10) {
            ctx->pc = 0x21CF74u;
            goto label_21cf74;
        }
    }
    ctx->pc = 0x21CF18u;
    // 0x21cf18: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x21cf18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cf1c: 0x0  nop
    ctx->pc = 0x21cf1cu;
    // NOP
label_21cf20:
    // 0x21cf20: 0x8f82b230  lw          $v0, -0x4DD0($gp)
    ctx->pc = 0x21cf20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x21cf24: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x21cf24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x21cf28: 0x8c430180  lw          $v1, 0x180($v0)
    ctx->pc = 0x21cf28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 384)));
    // 0x21cf2c: 0x8c700160  lw          $s0, 0x160($v1)
    ctx->pc = 0x21cf2cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 352)));
    // 0x21cf30: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x21cf30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x21cf34: 0x2c420050  sltiu       $v0, $v0, 0x50
    ctx->pc = 0x21cf34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)80) ? 1 : 0);
    // 0x21cf38: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x21CF38u;
    {
        const bool branch_taken_0x21cf38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21cf38) {
            ctx->pc = 0x21CF3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21CF38u;
            // 0x21cf3c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21CF68u;
            goto label_21cf68;
        }
    }
    ctx->pc = 0x21CF40u;
    // 0x21cf40: 0xc087fee  jal         func_21FFB8
    ctx->pc = 0x21CF40u;
    SET_GPR_U32(ctx, 31, 0x21CF48u);
    ctx->pc = 0x21CF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CF40u;
    // 0x21cf44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FFB8u, 0x21CF40u, 0x21CF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CF48u;
label_21cf48:
    // 0x21cf48: 0x86030004  lh          $v1, 0x4($s0)
    ctx->pc = 0x21cf48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x21cf4c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21cf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21cf50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21cf50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21cf54: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x21cf54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21cf58: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x21cf58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x21cf5c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x21cf5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x21cf60: 0x8f889f74  lw          $t0, -0x608C($gp)
    ctx->pc = 0x21cf60u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x21cf64: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21cf64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_21cf68:
    // 0x21cf68: 0x228102a  slt         $v0, $s1, $t0
    ctx->pc = 0x21cf68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x21cf6c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x21CF6Cu;
    {
        const bool branch_taken_0x21cf6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21CF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CF6Cu;
        // 0x21cf70: 0x2652071c  addiu       $s2, $s2, 0x71C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1820));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cf6c) {
            ctx->pc = 0x21CF20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21cf20;
        }
    }
    ctx->pc = 0x21CF74u;
label_21cf74:
    // 0x21cf74: 0x19000039  blez        $t0, . + 4 + (0x39 << 2)
    ctx->pc = 0x21CF74u;
    {
        const bool branch_taken_0x21cf74 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x21CF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CF74u;
        // 0x21cf78: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cf74) {
            ctx->pc = 0x21D05Cu;
            goto label_21d05c;
        }
    }
    ctx->pc = 0x21CF7Cu;
    // 0x21cf7c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x21cf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x21cf80: 0x24120007  addiu       $s2, $zero, 0x7
    ctx->pc = 0x21cf80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x21cf84: 0x2450c4a8  addiu       $s0, $v0, -0x3B58
    ctx->pc = 0x21cf84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952104));
    // 0x21cf88: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x21cf88u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x32C4F8u));
    // 0x21cf8c: 0x0  nop
    ctx->pc = 0x21cf8cu;
    // NOP
label_21cf90:
    // 0x21cf90: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x21cf90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x21cf94: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x21CF94u;
    {
        const bool branch_taken_0x21cf94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21cf94) {
            ctx->pc = 0x21CF98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21CF94u;
            // 0x21cf98: 0x8e020048  lw          $v0, 0x48($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21CFC0u;
            goto label_21cfc0;
        }
    }
    ctx->pc = 0x21CF9Cu;
    // 0x21cf9c: 0xc087fee  jal         func_21FFB8
    ctx->pc = 0x21CF9Cu;
    SET_GPR_U32(ctx, 31, 0x21CFA4u);
    ctx->pc = 0x21CFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CF9Cu;
    // 0x21cfa0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FFB8u, 0x21CF9Cu, 0x21CFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CFA4u;
label_21cfa4:
    // 0x21cfa4: 0x8c430968  lw          $v1, 0x968($v0)
    ctx->pc = 0x21cfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2408)));
    // 0x21cfa8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21cfa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cfac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x21cfacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21cfb0: 0xc087fee  jal         func_21FFB8
    ctx->pc = 0x21CFB0u;
    SET_GPR_U32(ctx, 31, 0x21CFB8u);
    ctx->pc = 0x21CFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CFB0u;
    // 0x21cfb4: 0xac430968  sw          $v1, 0x968($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 2408), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FFB8u, 0x21CFB0u, 0x21CFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CFB8u;
label_21cfb8:
    // 0x21cfb8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x21CFB8u;
    {
        const bool branch_taken_0x21cfb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CFB8u;
        // 0x21cfbc: 0x24440968  addiu       $a0, $v0, 0x968 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2408));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cfb8) {
            ctx->pc = 0x21CFE8u;
            goto label_21cfe8;
        }
    }
    ctx->pc = 0x21CFC0u;
label_21cfc0:
    // 0x21cfc0: 0x1452000d  bne         $v0, $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x21CFC0u;
    {
        const bool branch_taken_0x21cfc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x21cfc0) {
            ctx->pc = 0x21CFF8u;
            goto label_21cff8;
        }
    }
    ctx->pc = 0x21CFC8u;
    // 0x21cfc8: 0xc087fee  jal         func_21FFB8
    ctx->pc = 0x21CFC8u;
    SET_GPR_U32(ctx, 31, 0x21CFD0u);
    ctx->pc = 0x21CFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CFC8u;
    // 0x21cfcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FFB8u, 0x21CFC8u, 0x21CFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CFD0u;
label_21cfd0:
    // 0x21cfd0: 0x8c430650  lw          $v1, 0x650($v0)
    ctx->pc = 0x21cfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1616)));
    // 0x21cfd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21cfd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cfd8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x21cfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21cfdc: 0xc087fee  jal         func_21FFB8
    ctx->pc = 0x21CFDCu;
    SET_GPR_U32(ctx, 31, 0x21CFE4u);
    ctx->pc = 0x21CFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CFDCu;
    // 0x21cfe0: 0xac430650  sw          $v1, 0x650($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 1616), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FFB8u, 0x21CFDCu, 0x21CFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CFE4u;
label_21cfe4:
    // 0x21cfe4: 0x24440650  addiu       $a0, $v0, 0x650
    ctx->pc = 0x21cfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1616));
label_21cfe8:
    // 0x21cfe8: 0xc089134  jal         func_2244D0
    ctx->pc = 0x21CFE8u;
    SET_GPR_U32(ctx, 31, 0x21CFF0u);
    ctx->pc = 0x21CFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CFE8u;
    // 0x21cfec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2244D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2244D0u, 0x21CFE8u, 0x21CFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CFF0u;
label_21cff0:
    // 0x21cff0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x21CFF0u;
    {
        const bool branch_taken_0x21cff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CFF0u;
        // 0x21cff4: 0x8f829f74  lw          $v0, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cff0) {
            ctx->pc = 0x21D04Cu;
            goto label_21d04c;
        }
    }
    ctx->pc = 0x21CFF8u;
label_21cff8:
    // 0x21cff8: 0xc087fee  jal         func_21FFB8
    ctx->pc = 0x21CFF8u;
    SET_GPR_U32(ctx, 31, 0x21D000u);
    ctx->pc = 0x21CFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CFF8u;
    // 0x21cffc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FFB8u, 0x21CFF8u, 0x21D000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D000u;
label_21d000:
    // 0x21d000: 0x8f859f70  lw          $a1, -0x6090($gp)
    ctx->pc = 0x21d000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x21d004: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x21d004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x21d008: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21d008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d00c: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x21d00cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x21d010: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x21d010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x21d014: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x21d014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x21d018: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x21d018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x21d01c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x21d01cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21d020: 0xc087fee  jal         func_21FFB8
    ctx->pc = 0x21D020u;
    SET_GPR_U32(ctx, 31, 0x21D028u);
    ctx->pc = 0x21D024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D020u;
    // 0x21d024: 0xac430020  sw          $v1, 0x20($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FFB8u, 0x21D020u, 0x21D028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D028u;
label_21d028:
    // 0x21d028: 0x8c4307dc  lw          $v1, 0x7DC($v0)
    ctx->pc = 0x21d028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2012)));
    // 0x21d02c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21d02cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d030: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x21d030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21d034: 0xc087fee  jal         func_21FFB8
    ctx->pc = 0x21D034u;
    SET_GPR_U32(ctx, 31, 0x21D03Cu);
    ctx->pc = 0x21D038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D034u;
    // 0x21d038: 0xac4307dc  sw          $v1, 0x7DC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 2012), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FFB8u, 0x21D034u, 0x21D03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D03Cu;
label_21d03c:
    // 0x21d03c: 0x244407dc  addiu       $a0, $v0, 0x7DC
    ctx->pc = 0x21d03cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2012));
    // 0x21d040: 0xc089134  jal         func_2244D0
    ctx->pc = 0x21D040u;
    SET_GPR_U32(ctx, 31, 0x21D048u);
    ctx->pc = 0x21D044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D040u;
    // 0x21d044: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2244D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2244D0u, 0x21D040u, 0x21D048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D048u;
label_21d048:
    // 0x21d048: 0x8f829f74  lw          $v0, -0x608C($gp)
    ctx->pc = 0x21d048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
label_21d04c:
    // 0x21d04c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21d04cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x21d050: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x21d050u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x21d054: 0x5440ffce  bnel        $v0, $zero, . + 4 + (-0x32 << 2)
    ctx->pc = 0x21D054u;
    {
        const bool branch_taken_0x21d054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21d054) {
            ctx->pc = 0x21D058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21D054u;
            // 0x21d058: 0x8e020050  lw          $v0, 0x50($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21CF90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21cf90;
        }
    }
    ctx->pc = 0x21D05Cu;
label_21d05c:
    // 0x21d05c: 0x8f849f74  lw          $a0, -0x608C($gp)
    ctx->pc = 0x21d05cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x21d060: 0xc087f22  jal         func_21FC88
    ctx->pc = 0x21D060u;
    SET_GPR_U32(ctx, 31, 0x21D068u);
    ctx->pc = 0x21D064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D060u;
    // 0x21d064: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FC88u, 0x21D060u, 0x21D068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D068u;
label_21d068:
    // 0x21d068: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x21d068u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21d06c:
    // 0x21d06c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x21d06cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21d070: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x21d070u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21d074: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x21d074u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21d078: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x21d078u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21d07c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x21d07cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21d080: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21d080u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21d084: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x21d084u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21d088: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21d088u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d08c: 0x3e00008  jr          $ra
    ctx->pc = 0x21D08Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D08Cu;
        // 0x21d090: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D08Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D094u;
}
