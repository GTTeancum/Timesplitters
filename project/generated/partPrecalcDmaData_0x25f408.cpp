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

// Function: partPrecalcDmaData
// Address: 0x25f408 - 0x25fb84
void partPrecalcDmaData_0x25f408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("partPrecalcDmaData_0x25f408");
#endif

    switch (ctx->pc) {
        case 0x25f4e8u: goto label_25f4e8;
        case 0x25f534u: goto label_25f534;
        case 0x25f540u: goto label_25f540;
        case 0x25f550u: goto label_25f550;
        case 0x25f7f0u: goto label_25f7f0;
        case 0x25f820u: goto label_25f820;
        case 0x25f86cu: goto label_25f86c;
        case 0x25f878u: goto label_25f878;
        case 0x25f888u: goto label_25f888;
        case 0x25fb38u: goto label_25fb38;
        default: break;
    }

    ctx->pc = 0x25f408u;

    // 0x25f408: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x25f408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x25f40c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x25f40cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f410: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x25f410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x25f414: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x25f414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x25f418: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x25f418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x25f41c: 0xa32018  mult        $a0, $a1, $v1
    ctx->pc = 0x25f41cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x25f420: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x25f420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x25f424: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x25f424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x25f428: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x25f428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x25f42c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x25f42cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x25f430: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x25f430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x25f434: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x25f434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x25f438: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x25f438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25f43c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25f43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25f440: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x25f440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x25f444: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x25f444u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x25f448: 0x1021023  subu        $v0, $t0, $v0
    ctx->pc = 0x25f448u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x25f44c: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x25F44Cu;
    {
        const bool branch_taken_0x25f44c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F44Cu;
        // 0x25f450: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f44c) {
            ctx->pc = 0x25F45Cu;
            goto label_25f45c;
        }
    }
    ctx->pc = 0x25F454u;
    // 0x25f454: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25F454u;
    {
        const bool branch_taken_0x25f454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F454u;
        // 0x25f458: 0x8c90000c  lw          $s0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f454) {
            ctx->pc = 0x25F460u;
            goto label_25f460;
        }
    }
    ctx->pc = 0x25F45Cu;
label_25f45c:
    // 0x25f45c: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x25f45cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_25f460:
    // 0x25f460: 0x24910014  addiu       $s1, $a0, 0x14
    ctx->pc = 0x25f460u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x25f464: 0x2482002c  addiu       $v0, $a0, 0x2C
    ctx->pc = 0x25f464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
    // 0x25f468: 0x8d140010  lw          $s4, 0x10($t0)
    ctx->pc = 0x25f468u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x25f46c: 0x46880b  movn        $s1, $v0, $a2
    ctx->pc = 0x25f46cu;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x25f470: 0x16800002  bnez        $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x25F470u;
    {
        const bool branch_taken_0x25f470 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x25F474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F470u;
        // 0x25f474: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f470) {
            ctx->pc = 0x25F47Cu;
            goto label_25f47c;
        }
    }
    ctx->pc = 0x25F478u;
    // 0x25f478: 0x8d14000c  lw          $s4, 0xC($t0)
    ctx->pc = 0x25f478u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_25f47c:
    // 0x25f47c: 0x8f839f70  lw          $v1, -0x6090($gp)
    ctx->pc = 0x25f47cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x25f480: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x25f480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x25f484: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x25F484u;
    {
        const bool branch_taken_0x25f484 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x25F488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F484u;
        // 0x25f488: 0x6b880  sll         $s7, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f484) {
            ctx->pc = 0x25F4A8u;
            goto label_25f4a8;
        }
    }
    ctx->pc = 0x25F48Cu;
    // 0x25f48c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x25f48cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x25f490: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x25f490u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x25f494: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x25f494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x25f498: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x25f498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x25f49c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25f49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25f4a0: 0x100001ac  b           . + 4 + (0x1AC << 2)
    ctx->pc = 0x25F4A0u;
    {
        const bool branch_taken_0x25f4a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F4A0u;
        // 0x25f4a4: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f4a0) {
            ctx->pc = 0x25FB54u;
            goto label_25fb54;
        }
    }
    ctx->pc = 0x25F4A8u;
label_25f4a8:
    // 0x25f4a8: 0x5f080  sll         $fp, $a1, 2
    ctx->pc = 0x25f4a8u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x25f4ac: 0x1171821  addu        $v1, $t0, $s7
    ctx->pc = 0x25f4acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 23)));
    // 0x25f4b0: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x25f4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x25f4b4: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x25f4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x25f4b8: 0x120001a1  beqz        $s0, . + 4 + (0x1A1 << 2)
    ctx->pc = 0x25F4B8u;
    {
        const bool branch_taken_0x25f4b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F4B8u;
        // 0x25f4bc: 0x8c550000  lw          $s5, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f4b8) {
            ctx->pc = 0x25FB40u;
            goto label_25fb40;
        }
    }
    ctx->pc = 0x25F4C0u;
    // 0x25f4c0: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x25f4c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25f4c4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x25f4c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f4c8: 0x144000cb  bnez        $v0, . + 4 + (0xCB << 2)
    ctx->pc = 0x25F4C8u;
    {
        const bool branch_taken_0x25f4c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25F4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F4C8u;
        // 0x25f4cc: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f4c8) {
            ctx->pc = 0x25F7F8u;
            goto label_25f7f8;
        }
    }
    ctx->pc = 0x25F4D0u;
    // 0x25f4d0: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x25f4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x25f4d4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x25f4d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f4d8: 0x4a00011  bltz        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x25F4D8u;
    {
        const bool branch_taken_0x25f4d8 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x25F4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F4D8u;
        // 0x25f4dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f4d8) {
            ctx->pc = 0x25F520u;
            goto label_25f520;
        }
    }
    ctx->pc = 0x25F4E0u;
    // 0x25f4e0: 0x2512001c  addiu       $s2, $t0, 0x1C
    ctx->pc = 0x25f4e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 8), 28));
    // 0x25f4e4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x25f4e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_25f4e8:
    // 0x25f4e8: 0x24c60009  addiu       $a2, $a2, 0x9
    ctx->pc = 0x25f4e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9));
    // 0x25f4ec: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x25f4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x25f4f0: 0x38840003  xori        $a0, $a0, 0x3
    ctx->pc = 0x25f4f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)3);
    // 0x25f4f4: 0x24c20002  addiu       $v0, $a2, 0x2
    ctx->pc = 0x25f4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x25f4f8: 0x24e70018  addiu       $a3, $a3, 0x18
    ctx->pc = 0x25f4f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
    // 0x25f4fc: 0x44300a  movz        $a2, $v0, $a0
    ctx->pc = 0x25f4fcu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x25f500: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x25f500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x25f504: 0x28630000  slti        $v1, $v1, 0x0
    ctx->pc = 0x25f504u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x25f508: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x25f508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x25f50c: 0x43300a  movz        $a2, $v0, $v1
    ctx->pc = 0x25f50cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x25f510: 0x4a1fff5  bgez        $a1, . + 4 + (-0xB << 2)
    ctx->pc = 0x25F510u;
    {
        const bool branch_taken_0x25f510 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x25F514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F510u;
        // 0x25f514: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f510) {
            ctx->pc = 0x25F4E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25f4e8;
        }
    }
    ctx->pc = 0x25F518u;
    // 0x25f518: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25F518u;
    {
        const bool branch_taken_0x25f518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F518u;
        // 0x25f51c: 0x24c40001  addiu       $a0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f518) {
            ctx->pc = 0x25F528u;
            goto label_25f528;
        }
    }
    ctx->pc = 0x25F520u;
label_25f520:
    // 0x25f520: 0x2512001c  addiu       $s2, $t0, 0x1C
    ctx->pc = 0x25f520u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 8), 28));
    // 0x25f524: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x25f524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_25f528:
    // 0x25f528: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25f528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25f52c: 0xc08070e  jal         func_201C38
    ctx->pc = 0x25F52Cu;
    SET_GPR_U32(ctx, 31, 0x25F534u);
    ctx->pc = 0x25F530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F52Cu;
    // 0x25f530: 0x42100  sll         $a0, $a0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x25F52Cu, 0x25F534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F534u;
label_25f534:
    // 0x25f534: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x25f534u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f538: 0xc0ae406  jal         func_2B9018
    ctx->pc = 0x25F538u;
    SET_GPR_U32(ctx, 31, 0x25F540u);
    ctx->pc = 0x25F53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F538u;
    // 0x25f53c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9018u, 0x25F538u, 0x25F540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F540u;
label_25f540:
    // 0x25f540: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x25f540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x25f544: 0x44000a8  bltz        $v0, . + 4 + (0xA8 << 2)
    ctx->pc = 0x25F544u;
    {
        const bool branch_taken_0x25f544 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x25F548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F544u;
        // 0x25f548: 0x3c0d0038  lui         $t5, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f544) {
            ctx->pc = 0x25F7E8u;
            goto label_25f7e8;
        }
    }
    ctx->pc = 0x25F54Cu;
    // 0x25f54c: 0x0  nop
    ctx->pc = 0x25f54cu;
    // NOP
label_25f550:
    // 0x25f550: 0x8f8393a0  lw          $v1, -0x6C60($gp)
    ctx->pc = 0x25f550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x25f554: 0x24090030  addiu       $t1, $zero, 0x30
    ctx->pc = 0x25f554u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x25f558: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x25f558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x25f55c: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x25f55cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25f560: 0xa0690003  sb          $t1, 0x3($v1)
    ctx->pc = 0x25f560u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x25f564: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x25f564u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x25f568: 0x2621818  mult        $v1, $s3, $v0
    ctx->pc = 0x25f568u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x25f56c: 0x240b000c  addiu       $t3, $zero, 0xC
    ctx->pc = 0x25f56cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x25f570: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x25f570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x25f574: 0x3508fffc  ori         $t0, $t0, 0xFFFC
    ctx->pc = 0x25f574u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65532);
    // 0x25f578: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x25f578u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x25f57c: 0x240c0003  addiu       $t4, $zero, 0x3
    ctx->pc = 0x25f57cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25f580: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x25f580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x25f584: 0xa44a0000  sh          $t2, 0x0($v0)
    ctx->pc = 0x25f584u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x25f588: 0x753821  addu        $a3, $v1, $s5
    ctx->pc = 0x25f588u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x25f58c: 0xaf8593a0  sw          $a1, -0x6C60($gp)
    ctx->pc = 0x25f58cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 5));
    // 0x25f590: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x25f590u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
    // 0x25f594: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x25f594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x25f598: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x25f598u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x25f59c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x25f59cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x25f5a0: 0xa0a90003  sb          $t1, 0x3($a1)
    ctx->pc = 0x25f5a0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x25f5a4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x25f5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x25f5a8: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x25f5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x25f5ac: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x25f5acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x25f5b0: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x25f5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x25f5b4: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x25f5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x25f5b8: 0xaf8393a0  sw          $v1, -0x6C60($gp)
    ctx->pc = 0x25f5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 3));
    // 0x25f5bc: 0xa4460000  sh          $a2, 0x0($v0)
    ctx->pc = 0x25f5bcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x25f5c0: 0xa0690003  sb          $t1, 0x3($v1)
    ctx->pc = 0x25f5c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x25f5c4: 0x8f8493a0  lw          $a0, -0x6C60($gp)
    ctx->pc = 0x25f5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x25f5c8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x25f5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x25f5cc: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x25f5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x25f5d0: 0x24860010  addiu       $a2, $a0, 0x10
    ctx->pc = 0x25f5d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x25f5d4: 0xac870004  sw          $a3, 0x4($a0)
    ctx->pc = 0x25f5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
    // 0x25f5d8: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x25f5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x25f5dc: 0xa48a0000  sh          $t2, 0x0($a0)
    ctx->pc = 0x25f5dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x25f5e0: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x25f5e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x25f5e4: 0xaf8693a0  sw          $a2, -0x6C60($gp)
    ctx->pc = 0x25f5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 6));
    // 0x25f5e8: 0xab2818  mult        $a1, $a1, $t3
    ctx->pc = 0x25f5e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x25f5ec: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x25f5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x25f5f0: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x25f5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x25f5f4: 0xa0c90003  sb          $t1, 0x3($a2)
    ctx->pc = 0x25f5f4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x25f5f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25f5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25f5fc: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x25f5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x25f600: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x25f600u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x25f604: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x25f604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x25f608: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x25f608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x25f60c: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x25f60cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x25f610: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x25f610u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x25f614: 0xaf8493a0  sw          $a0, -0x6C60($gp)
    ctx->pc = 0x25f614u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 4));
    // 0x25f618: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x25f618u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x25f61c: 0xa0890003  sb          $t1, 0x3($a0)
    ctx->pc = 0x25f61cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x25f620: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x25f620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x25f624: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x25f624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x25f628: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x25f628u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
    // 0x25f62c: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x25f62cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x25f630: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x25f630u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x25f634: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x25f634u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x25f638: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x25f638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x25f63c: 0xa44a0000  sh          $t2, 0x0($v0)
    ctx->pc = 0x25f63cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x25f640: 0xaf8593a0  sw          $a1, -0x6C60($gp)
    ctx->pc = 0x25f640u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 5));
    // 0x25f644: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x25f644u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x25f648: 0xa0a90003  sb          $t1, 0x3($a1)
    ctx->pc = 0x25f648u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x25f64c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x25f64cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x25f650: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x25f650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x25f654: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x25f654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x25f658: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x25f658u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x25f65c: 0xaf8393a0  sw          $v1, -0x6C60($gp)
    ctx->pc = 0x25f65cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 3));
    // 0x25f660: 0xa4460000  sh          $a2, 0x0($v0)
    ctx->pc = 0x25f660u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x25f664: 0xa0690003  sb          $t1, 0x3($v1)
    ctx->pc = 0x25f664u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x25f668: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x25f668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x25f66c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x25f66cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x25f670: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x25f670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x25f674: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x25f674u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
    // 0x25f678: 0xa44a0000  sh          $t2, 0x0($v0)
    ctx->pc = 0x25f678u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x25f67c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x25f67cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25f680: 0xaf8593a0  sw          $a1, -0x6C60($gp)
    ctx->pc = 0x25f680u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 5));
    // 0x25f684: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x25f684u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x25f688: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x25f688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x25f68c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x25f68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x25f690: 0xa0a90003  sb          $t1, 0x3($a1)
    ctx->pc = 0x25f690u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x25f694: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x25f694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x25f698: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x25f698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x25f69c: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x25f69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x25f6a0: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x25f6a0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x25f6a4: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x25f6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x25f6a8: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x25f6a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x25f6ac: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x25f6acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x25f6b0: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x25f6b0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x25f6b4: 0x14ac0017  bne         $a1, $t4, . + 4 + (0x17 << 2)
    ctx->pc = 0x25F6B4u;
    {
        const bool branch_taken_0x25f6b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 12));
        ctx->pc = 0x25F6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F6B4u;
        // 0x25f6b8: 0xaf8693a0  sw          $a2, -0x6C60($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f6b4) {
            ctx->pc = 0x25F714u;
            goto label_25f714;
        }
    }
    ctx->pc = 0x25F6BCu;
    // 0x25f6bc: 0xa0c90003  sb          $t1, 0x3($a2)
    ctx->pc = 0x25f6bcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x25f6c0: 0x8f8393a0  lw          $v1, -0x6C60($gp)
    ctx->pc = 0x25f6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x25f6c4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x25f6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x25f6c8: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x25f6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x25f6cc: 0x24660010  addiu       $a2, $v1, 0x10
    ctx->pc = 0x25f6ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x25f6d0: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x25f6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x25f6d4: 0xac670004  sw          $a3, 0x4($v1)
    ctx->pc = 0x25f6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 7));
    // 0x25f6d8: 0xaf8693a0  sw          $a2, -0x6C60($gp)
    ctx->pc = 0x25f6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 6));
    // 0x25f6dc: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x25f6dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x25f6e0: 0xa46a0000  sh          $t2, 0x0($v1)
    ctx->pc = 0x25f6e0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x25f6e4: 0xab2818  mult        $a1, $a1, $t3
    ctx->pc = 0x25f6e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x25f6e8: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x25f6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x25f6ec: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x25f6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x25f6f0: 0xa0c90003  sb          $t1, 0x3($a2)
    ctx->pc = 0x25f6f0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x25f6f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25f6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25f6f8: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x25f6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x25f6fc: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x25f6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x25f700: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x25f700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x25f704: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x25f704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x25f708: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x25f708u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x25f70c: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x25f70cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x25f710: 0xaf8493a0  sw          $a0, -0x6C60($gp)
    ctx->pc = 0x25f710u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 4));
label_25f714:
    // 0x25f714: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x25f714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25f718: 0x4600014  bltz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x25F718u;
    {
        const bool branch_taken_0x25f718 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x25F71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F718u;
        // 0x25f71c: 0x31900  sll         $v1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f718) {
            ctx->pc = 0x25F76Cu;
            goto label_25f76c;
        }
    }
    ctx->pc = 0x25F720u;
    // 0x25f720: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x25f720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25f724: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x25f724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x25f728: 0x24070028  addiu       $a3, $zero, 0x28
    ctx->pc = 0x25f728u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x25f72c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x25f72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25f730: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x25f730u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x25f734: 0x8f85b498  lw          $a1, -0x4B68($gp)
    ctx->pc = 0x25f734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947992)));
    // 0x25f738: 0x82202a  slt         $a0, $a0, $v0
    ctx->pc = 0x25f738u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x25f73c: 0x8f8693a0  lw          $a2, -0x6C60($gp)
    ctx->pc = 0x25f73cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x25f740: 0x4100a  movz        $v0, $zero, $a0
    ctx->pc = 0x25f740u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x25f744: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x25f744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x25f748: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x25f748u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x25f74c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25f74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25f750: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x25f750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x25f754: 0xa0c90003  sb          $t1, 0x3($a2)
    ctx->pc = 0x25f754u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x25f758: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x25f758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x25f75c: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x25f75cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x25f760: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x25f760u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x25f764: 0xa4480000  sh          $t0, 0x0($v0)
    ctx->pc = 0x25f764u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x25f768: 0xaf8393a0  sw          $v1, -0x6C60($gp)
    ctx->pc = 0x25f768u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 3));
label_25f76c:
    // 0x25f76c: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x25f76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x25f770: 0x146c000d  bne         $v1, $t4, . + 4 + (0xD << 2)
    ctx->pc = 0x25F770u;
    {
        const bool branch_taken_0x25f770 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 12));
        ctx->pc = 0x25F774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F770u;
        // 0x25f774: 0x25a40460  addiu       $a0, $t5, 0x460 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), 1120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f770) {
            ctx->pc = 0x25F7A8u;
            goto label_25f7a8;
        }
    }
    ctx->pc = 0x25F778u;
    // 0x25f778: 0x8f82a2a4  lw          $v0, -0x5D5C($gp)
    ctx->pc = 0x25f778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943396)));
    // 0x25f77c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x25F77Cu;
    {
        const bool branch_taken_0x25f77c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25F780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F77Cu;
        // 0x25f780: 0x8f8593a0  lw          $a1, -0x6C60($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f77c) {
            ctx->pc = 0x25F7ACu;
            goto label_25f7ac;
        }
    }
    ctx->pc = 0x25F784u;
    // 0x25f784: 0x8f8393a0  lw          $v1, -0x6C60($gp)
    ctx->pc = 0x25f784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x25f788: 0x248400a0  addiu       $a0, $a0, 0xA0
    ctx->pc = 0x25f788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x25f78c: 0xa0690003  sb          $t1, 0x3($v1)
    ctx->pc = 0x25f78cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x25f790: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x25f790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x25f794: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x25f794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x25f798: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x25f798u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x25f79c: 0xa44a0000  sh          $t2, 0x0($v0)
    ctx->pc = 0x25f79cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x25f7a0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x25F7A0u;
    {
        const bool branch_taken_0x25f7a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F7A0u;
        // 0x25f7a4: 0xaf8393a0  sw          $v1, -0x6C60($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f7a0) {
            ctx->pc = 0x25F7D8u;
            goto label_25f7d8;
        }
    }
    ctx->pc = 0x25F7A8u;
label_25f7a8:
    // 0x25f7a8: 0x8f8593a0  lw          $a1, -0x6C60($gp)
    ctx->pc = 0x25f7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
label_25f7ac:
    // 0x25f7ac: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x25f7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x25f7b0: 0x25a20460  addiu       $v0, $t5, 0x460
    ctx->pc = 0x25f7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 1120));
    // 0x25f7b4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x25f7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x25f7b8: 0xa0a40003  sb          $a0, 0x3($a1)
    ctx->pc = 0x25f7b8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x25f7bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25f7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25f7c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25f7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25f7c4: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x25f7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x25f7c8: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x25f7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x25f7cc: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x25f7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x25f7d0: 0xa4450000  sh          $a1, 0x0($v0)
    ctx->pc = 0x25f7d0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x25f7d4: 0xaf8493a0  sw          $a0, -0x6C60($gp)
    ctx->pc = 0x25f7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 4));
label_25f7d8:
    // 0x25f7d8: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x25f7d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x25f7dc: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x25f7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x25f7e0: 0x441ff5b  bgez        $v0, . + 4 + (-0xA5 << 2)
    ctx->pc = 0x25F7E0u;
    {
        const bool branch_taken_0x25f7e0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x25F7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F7E0u;
        // 0x25f7e4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f7e0) {
            ctx->pc = 0x25F550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25f550;
        }
    }
    ctx->pc = 0x25F7E8u;
label_25f7e8:
    // 0x25f7e8: 0xc0ae40a  jal         func_2B9028
    ctx->pc = 0x25F7E8u;
    SET_GPR_U32(ctx, 31, 0x25F7F0u);
    ctx->pc = 0x2B9028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9028u, 0x25F7E8u, 0x25F7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F7F0u;
label_25f7f0:
    // 0x25f7f0: 0x100000d5  b           . + 4 + (0xD5 << 2)
    ctx->pc = 0x25F7F0u;
    {
        const bool branch_taken_0x25f7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F7F0u;
        // 0x25f7f4: 0x2571821  addu        $v1, $s2, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f7f0) {
            ctx->pc = 0x25FB48u;
            goto label_25fb48;
        }
    }
    ctx->pc = 0x25F7F8u;
label_25f7f8:
    // 0x25f7f8: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x25f7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x25f7fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25f7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25f800: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x25f800u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x25f804: 0x104000ce  beqz        $v0, . + 4 + (0xCE << 2)
    ctx->pc = 0x25F804u;
    {
        const bool branch_taken_0x25f804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F804u;
        // 0x25f808: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f804) {
            ctx->pc = 0x25FB40u;
            goto label_25fb40;
        }
    }
    ctx->pc = 0x25F80Cu;
    // 0x25f80c: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x25f80cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x25f810: 0x4a00011  bltz        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x25F810u;
    {
        const bool branch_taken_0x25f810 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x25F814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F810u;
        // 0x25f814: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f810) {
            ctx->pc = 0x25F858u;
            goto label_25f858;
        }
    }
    ctx->pc = 0x25F818u;
    // 0x25f818: 0x2512001c  addiu       $s2, $t0, 0x1C
    ctx->pc = 0x25f818u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 8), 28));
    // 0x25f81c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x25f81cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_25f820:
    // 0x25f820: 0x24c6000b  addiu       $a2, $a2, 0xB
    ctx->pc = 0x25f820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11));
    // 0x25f824: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x25f824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x25f828: 0x38840004  xori        $a0, $a0, 0x4
    ctx->pc = 0x25f828u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4);
    // 0x25f82c: 0x24c20002  addiu       $v0, $a2, 0x2
    ctx->pc = 0x25f82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x25f830: 0x24e70018  addiu       $a3, $a3, 0x18
    ctx->pc = 0x25f830u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
    // 0x25f834: 0x44300a  movz        $a2, $v0, $a0
    ctx->pc = 0x25f834u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x25f838: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x25f838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x25f83c: 0x28630000  slti        $v1, $v1, 0x0
    ctx->pc = 0x25f83cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x25f840: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x25f840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x25f844: 0x43300a  movz        $a2, $v0, $v1
    ctx->pc = 0x25f844u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x25f848: 0x4a1fff5  bgez        $a1, . + 4 + (-0xB << 2)
    ctx->pc = 0x25F848u;
    {
        const bool branch_taken_0x25f848 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x25F84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F848u;
        // 0x25f84c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f848) {
            ctx->pc = 0x25F820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25f820;
        }
    }
    ctx->pc = 0x25F850u;
    // 0x25f850: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25F850u;
    {
        const bool branch_taken_0x25f850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F850u;
        // 0x25f854: 0x24c40001  addiu       $a0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f850) {
            ctx->pc = 0x25F860u;
            goto label_25f860;
        }
    }
    ctx->pc = 0x25F858u;
label_25f858:
    // 0x25f858: 0x2512001c  addiu       $s2, $t0, 0x1C
    ctx->pc = 0x25f858u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 8), 28));
    // 0x25f85c: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x25f85cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_25f860:
    // 0x25f860: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25f860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25f864: 0xc08070e  jal         func_201C38
    ctx->pc = 0x25F864u;
    SET_GPR_U32(ctx, 31, 0x25F86Cu);
    ctx->pc = 0x25F868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F864u;
    // 0x25f868: 0x42100  sll         $a0, $a0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x25F864u, 0x25F86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F86Cu;
label_25f86c:
    // 0x25f86c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x25f86cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f870: 0xc0ae406  jal         func_2B9018
    ctx->pc = 0x25F870u;
    SET_GPR_U32(ctx, 31, 0x25F878u);
    ctx->pc = 0x25F874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F870u;
    // 0x25f874: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9018u, 0x25F870u, 0x25F878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F878u;
label_25f878:
    // 0x25f878: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x25f878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x25f87c: 0x44000ac  bltz        $v0, . + 4 + (0xAC << 2)
    ctx->pc = 0x25F87Cu;
    {
        const bool branch_taken_0x25f87c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x25F880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F87Cu;
        // 0x25f880: 0x3c0d0038  lui         $t5, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f87c) {
            ctx->pc = 0x25FB30u;
            goto label_25fb30;
        }
    }
    ctx->pc = 0x25F884u;
    // 0x25f884: 0x0  nop
    ctx->pc = 0x25f884u;
    // NOP
label_25f888:
    // 0x25f888: 0x8f8393a0  lw          $v1, -0x6C60($gp)
    ctx->pc = 0x25f888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x25f88c: 0x24090030  addiu       $t1, $zero, 0x30
    ctx->pc = 0x25f88cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x25f890: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x25f890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x25f894: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x25f894u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25f898: 0xa0690003  sb          $t1, 0x3($v1)
    ctx->pc = 0x25f898u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x25f89c: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x25f89cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x25f8a0: 0x2621818  mult        $v1, $s3, $v0
    ctx->pc = 0x25f8a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x25f8a4: 0x240c000c  addiu       $t4, $zero, 0xC
    ctx->pc = 0x25f8a4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x25f8a8: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x25f8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x25f8ac: 0x354afffc  ori         $t2, $t2, 0xFFFC
    ctx->pc = 0x25f8acu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65532);
    // 0x25f8b0: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x25f8b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x25f8b4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x25f8b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x25f8b8: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x25f8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x25f8bc: 0xa44b0000  sh          $t3, 0x0($v0)
    ctx->pc = 0x25f8bcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 11));
    // 0x25f8c0: 0x754021  addu        $t0, $v1, $s5
    ctx->pc = 0x25f8c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x25f8c4: 0xaf8593a0  sw          $a1, -0x6C60($gp)
    ctx->pc = 0x25f8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 5));
    // 0x25f8c8: 0xac480004  sw          $t0, 0x4($v0)
    ctx->pc = 0x25f8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
    // 0x25f8cc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x25f8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x25f8d0: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x25f8d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x25f8d4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x25f8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x25f8d8: 0xa0a90003  sb          $t1, 0x3($a1)
    ctx->pc = 0x25f8d8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x25f8dc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x25f8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x25f8e0: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x25f8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x25f8e4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x25f8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x25f8e8: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x25f8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x25f8ec: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x25f8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x25f8f0: 0xaf8393a0  sw          $v1, -0x6C60($gp)
    ctx->pc = 0x25f8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 3));
    // 0x25f8f4: 0xa4460000  sh          $a2, 0x0($v0)
    ctx->pc = 0x25f8f4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x25f8f8: 0xa0690003  sb          $t1, 0x3($v1)
    ctx->pc = 0x25f8f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x25f8fc: 0x8f8493a0  lw          $a0, -0x6C60($gp)
    ctx->pc = 0x25f8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x25f900: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x25f900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x25f904: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x25f904u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x25f908: 0x24860010  addiu       $a2, $a0, 0x10
    ctx->pc = 0x25f908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x25f90c: 0xac880004  sw          $t0, 0x4($a0)
    ctx->pc = 0x25f90cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 8));
    // 0x25f910: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x25f910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x25f914: 0xa48b0000  sh          $t3, 0x0($a0)
    ctx->pc = 0x25f914u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 11));
    // 0x25f918: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x25f918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x25f91c: 0xaf8693a0  sw          $a2, -0x6C60($gp)
    ctx->pc = 0x25f91cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 6));
    // 0x25f920: 0xac2818  mult        $a1, $a1, $t4
    ctx->pc = 0x25f920u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x25f924: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x25f924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x25f928: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x25f928u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x25f92c: 0xa0c90003  sb          $t1, 0x3($a2)
    ctx->pc = 0x25f92cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x25f930: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25f930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25f934: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x25f934u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x25f938: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x25f938u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x25f93c: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x25f93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x25f940: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x25f940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x25f944: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x25f944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x25f948: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x25f948u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x25f94c: 0xaf8493a0  sw          $a0, -0x6C60($gp)
    ctx->pc = 0x25f94cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 4));
    // 0x25f950: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x25f950u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x25f954: 0xa0890003  sb          $t1, 0x3($a0)
    ctx->pc = 0x25f954u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x25f958: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x25f958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x25f95c: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x25f95cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x25f960: 0xac480004  sw          $t0, 0x4($v0)
    ctx->pc = 0x25f960u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
    // 0x25f964: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x25f964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x25f968: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x25f968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x25f96c: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x25f96cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x25f970: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x25f970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x25f974: 0xa44b0000  sh          $t3, 0x0($v0)
    ctx->pc = 0x25f974u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 11));
    // 0x25f978: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x25f978u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x25f97c: 0xaf8693a0  sw          $a2, -0x6C60($gp)
    ctx->pc = 0x25f97cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 6));
    // 0x25f980: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x25f980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x25f984: 0xa0c90003  sb          $t1, 0x3($a2)
    ctx->pc = 0x25f984u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x25f988: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x25f988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x25f98c: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x25f98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x25f990: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x25f990u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x25f994: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x25f994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x25f998: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x25f998u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x25f99c: 0xaf8493a0  sw          $a0, -0x6C60($gp)
    ctx->pc = 0x25f99cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 4));
    // 0x25f9a0: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x25f9a0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x25f9a4: 0xa0890003  sb          $t1, 0x3($a0)
    ctx->pc = 0x25f9a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x25f9a8: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x25f9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x25f9ac: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x25f9acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x25f9b0: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x25f9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x25f9b4: 0xac480004  sw          $t0, 0x4($v0)
    ctx->pc = 0x25f9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
    // 0x25f9b8: 0xaf8593a0  sw          $a1, -0x6C60($gp)
    ctx->pc = 0x25f9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 5));
    // 0x25f9bc: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x25f9bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x25f9c0: 0xa44b0000  sh          $t3, 0x0($v0)
    ctx->pc = 0x25f9c0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 11));
    // 0x25f9c4: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x25f9c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x25f9c8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x25f9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x25f9cc: 0xa0a90003  sb          $t1, 0x3($a1)
    ctx->pc = 0x25f9ccu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x25f9d0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x25f9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x25f9d4: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x25f9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x25f9d8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x25f9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x25f9dc: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x25f9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x25f9e0: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x25f9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x25f9e4: 0xaf8393a0  sw          $v1, -0x6C60($gp)
    ctx->pc = 0x25f9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 3));
    // 0x25f9e8: 0xa4460000  sh          $a2, 0x0($v0)
    ctx->pc = 0x25f9e8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x25f9ec: 0xa0690003  sb          $t1, 0x3($v1)
    ctx->pc = 0x25f9ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x25f9f0: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x25f9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x25f9f4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x25f9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x25f9f8: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x25f9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x25f9fc: 0xac480004  sw          $t0, 0x4($v0)
    ctx->pc = 0x25f9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
    // 0x25fa00: 0xa44b0000  sh          $t3, 0x0($v0)
    ctx->pc = 0x25fa00u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 11));
    // 0x25fa04: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x25fa04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25fa08: 0xaf8593a0  sw          $a1, -0x6C60($gp)
    ctx->pc = 0x25fa08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 5));
    // 0x25fa0c: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x25fa0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x25fa10: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x25fa10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x25fa14: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x25fa14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x25fa18: 0xa0a90003  sb          $t1, 0x3($a1)
    ctx->pc = 0x25fa18u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x25fa1c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x25fa1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x25fa20: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x25fa20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x25fa24: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x25fa24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x25fa28: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x25fa28u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x25fa2c: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x25fa2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x25fa30: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x25fa30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x25fa34: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x25fa34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x25fa38: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x25fa38u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x25fa3c: 0x14a70017  bne         $a1, $a3, . + 4 + (0x17 << 2)
    ctx->pc = 0x25FA3Cu;
    {
        const bool branch_taken_0x25fa3c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        ctx->pc = 0x25FA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FA3Cu;
        // 0x25fa40: 0xaf8693a0  sw          $a2, -0x6C60($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fa3c) {
            ctx->pc = 0x25FA9Cu;
            goto label_25fa9c;
        }
    }
    ctx->pc = 0x25FA44u;
    // 0x25fa44: 0xa0c90003  sb          $t1, 0x3($a2)
    ctx->pc = 0x25fa44u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x25fa48: 0x8f8393a0  lw          $v1, -0x6C60($gp)
    ctx->pc = 0x25fa48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x25fa4c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x25fa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x25fa50: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x25fa50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x25fa54: 0x24660010  addiu       $a2, $v1, 0x10
    ctx->pc = 0x25fa54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x25fa58: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x25fa58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x25fa5c: 0xac680004  sw          $t0, 0x4($v1)
    ctx->pc = 0x25fa5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 8));
    // 0x25fa60: 0xaf8693a0  sw          $a2, -0x6C60($gp)
    ctx->pc = 0x25fa60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 6));
    // 0x25fa64: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x25fa64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x25fa68: 0xa46b0000  sh          $t3, 0x0($v1)
    ctx->pc = 0x25fa68u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 11));
    // 0x25fa6c: 0xac2818  mult        $a1, $a1, $t4
    ctx->pc = 0x25fa6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x25fa70: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x25fa70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x25fa74: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x25fa74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x25fa78: 0xa0c90003  sb          $t1, 0x3($a2)
    ctx->pc = 0x25fa78u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x25fa7c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25fa7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25fa80: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x25fa80u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x25fa84: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x25fa84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x25fa88: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x25fa88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x25fa8c: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x25fa8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x25fa90: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x25fa90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x25fa94: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x25fa94u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x25fa98: 0xaf8493a0  sw          $a0, -0x6C60($gp)
    ctx->pc = 0x25fa98u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 4));
label_25fa9c:
    // 0x25fa9c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x25fa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25faa0: 0x4600014  bltz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x25FAA0u;
    {
        const bool branch_taken_0x25faa0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x25FAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FAA0u;
        // 0x25faa4: 0x31900  sll         $v1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25faa0) {
            ctx->pc = 0x25FAF4u;
            goto label_25faf4;
        }
    }
    ctx->pc = 0x25FAA8u;
    // 0x25faa8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x25faa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25faac: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x25faacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x25fab0: 0x24070028  addiu       $a3, $zero, 0x28
    ctx->pc = 0x25fab0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x25fab4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x25fab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25fab8: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x25fab8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x25fabc: 0x8f85b498  lw          $a1, -0x4B68($gp)
    ctx->pc = 0x25fabcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947992)));
    // 0x25fac0: 0x82202a  slt         $a0, $a0, $v0
    ctx->pc = 0x25fac0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x25fac4: 0x8f8693a0  lw          $a2, -0x6C60($gp)
    ctx->pc = 0x25fac4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x25fac8: 0x4100a  movz        $v0, $zero, $a0
    ctx->pc = 0x25fac8u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x25facc: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x25faccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x25fad0: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x25fad0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x25fad4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25fad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25fad8: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x25fad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x25fadc: 0xa0c90003  sb          $t1, 0x3($a2)
    ctx->pc = 0x25fadcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x25fae0: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x25fae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x25fae4: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x25fae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x25fae8: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x25fae8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x25faec: 0xa4480000  sh          $t0, 0x0($v0)
    ctx->pc = 0x25faecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x25faf0: 0xaf8393a0  sw          $v1, -0x6C60($gp)
    ctx->pc = 0x25faf0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 3));
label_25faf4:
    // 0x25faf4: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x25faf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x25faf8: 0x25a40460  addiu       $a0, $t5, 0x460
    ctx->pc = 0x25faf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), 1120));
    // 0x25fafc: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x25fafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x25fb00: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x25fb00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x25fb04: 0xa0490003  sb          $t1, 0x3($v0)
    ctx->pc = 0x25fb04u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x25fb08: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x25fb08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x25fb0c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x25fb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x25fb10: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x25fb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x25fb14: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25fb14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25fb18: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x25fb18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x25fb1c: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x25fb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x25fb20: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x25fb20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x25fb24: 0xa44b0000  sh          $t3, 0x0($v0)
    ctx->pc = 0x25fb24u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 11));
    // 0x25fb28: 0x4a1ff57  bgez        $a1, . + 4 + (-0xA9 << 2)
    ctx->pc = 0x25FB28u;
    {
        const bool branch_taken_0x25fb28 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x25FB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FB28u;
        // 0x25fb2c: 0xaf8493a0  sw          $a0, -0x6C60($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fb28) {
            ctx->pc = 0x25F888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25f888;
        }
    }
    ctx->pc = 0x25FB30u;
label_25fb30:
    // 0x25fb30: 0xc0ae40a  jal         func_2B9028
    ctx->pc = 0x25FB30u;
    SET_GPR_U32(ctx, 31, 0x25FB38u);
    ctx->pc = 0x2B9028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9028u, 0x25FB30u, 0x25FB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FB38u;
label_25fb38:
    // 0x25fb38: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25FB38u;
    {
        const bool branch_taken_0x25fb38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FB38u;
        // 0x25fb3c: 0x2571821  addu        $v1, $s2, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fb38) {
            ctx->pc = 0x25FB48u;
            goto label_25fb48;
        }
    }
    ctx->pc = 0x25FB40u;
label_25fb40:
    // 0x25fb40: 0x2512001c  addiu       $s2, $t0, 0x1C
    ctx->pc = 0x25fb40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 8), 28));
    // 0x25fb44: 0x2571821  addu        $v1, $s2, $s7
    ctx->pc = 0x25fb44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 23)));
label_25fb48:
    // 0x25fb48: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x25fb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25fb4c: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x25fb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x25fb50: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x25fb50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
label_25fb54:
    // 0x25fb54: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x25fb54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x25fb58: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x25fb58u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25fb5c: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x25fb5cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25fb60: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x25fb60u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25fb64: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x25fb64u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25fb68: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x25fb68u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25fb6c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x25fb6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25fb70: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x25fb70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25fb74: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x25fb74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25fb78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25fb78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25fb7c: 0x3e00008  jr          $ra
    ctx->pc = 0x25FB7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25FB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FB7Cu;
        // 0x25fb80: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25FB7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25FB84u;
}
