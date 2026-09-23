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

// Function: menulistmake
// Address: 0x24c168 - 0x24c26c
void menulistmake_0x24c168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("menulistmake_0x24c168");
#endif

    switch (ctx->pc) {
        case 0x24c1e0u: goto label_24c1e0;
        case 0x24c1f0u: goto label_24c1f0;
        default: break;
    }

    ctx->pc = 0x24c168u;

    // 0x24c168: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x24c168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x24c16c: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x24c16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x24c170: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x24c170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x24c174: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x24c174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x24c178: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x24c178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x24c17c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x24c17cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x24c180: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x24c180u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c184: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x24c184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x24c188: 0x260a82d  daddu       $s5, $s3, $zero
    ctx->pc = 0x24c188u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c18c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x24c18cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x24c190: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x24c190u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c194: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x24c194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x24c198: 0x2634000c  addiu       $s4, $s1, 0xC
    ctx->pc = 0x24c198u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x24c19c: 0x26320010  addiu       $s2, $s1, 0x10
    ctx->pc = 0x24c19cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x24c1a0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x24c1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24c1a4: 0x96250002  lhu         $a1, 0x2($s1)
    ctx->pc = 0x24c1a4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x24c1a8: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x24c1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x24c1ac: 0x96240004  lhu         $a0, 0x4($s1)
    ctx->pc = 0x24c1acu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x24c1b0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x24c1b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24c1b4: 0x96260006  lhu         $a2, 0x6($s1)
    ctx->pc = 0x24c1b4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x24c1b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24c1b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c1bc: 0xa7a40000  sh          $a0, 0x0($sp)
    ctx->pc = 0x24c1bcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x24c1c0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x24c1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x24c1c4: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x24c1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x24c1c8: 0xa7a60002  sh          $a2, 0x2($sp)
    ctx->pc = 0x24c1c8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 6));
    // 0x24c1cc: 0x205282a  slt         $a1, $s0, $a1
    ctx->pc = 0x24c1ccu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x24c1d0: 0x10a00018  beqz        $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x24C1D0u;
    {
        const bool branch_taken_0x24c1d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C1D0u;
        // 0x24c1d4: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c1d0) {
            ctx->pc = 0x24C234u;
            goto label_24c234;
        }
    }
    ctx->pc = 0x24C1D8u;
    // 0x24c1d8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x24C1D8u;
    {
        const bool branch_taken_0x24c1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C1D8u;
        // 0x24c1dc: 0x96220000  lhu         $v0, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c1d8) {
            ctx->pc = 0x24C228u;
            goto label_24c228;
        }
    }
    ctx->pc = 0x24C1E0u;
label_24c1e0:
    // 0x24c1e0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x24c1e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c1e4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x24c1e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c1e8: 0xc092ffe  jal         func_24BFF8
    ctx->pc = 0x24C1E8u;
    SET_GPR_U32(ctx, 31, 0x24C1F0u);
    ctx->pc = 0x24C1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C1E8u;
    // 0x24c1ec: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BFF8u, 0x24C1E8u, 0x24C1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C1F0u;
label_24c1f0:
    // 0x24c1f0: 0x26730018  addiu       $s3, $s3, 0x18
    ctx->pc = 0x24c1f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x24c1f4: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x24c1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x24c1f8: 0x97a30002  lhu         $v1, 0x2($sp)
    ctx->pc = 0x24c1f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x24c1fc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x24c1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24c200: 0x96250002  lhu         $a1, 0x2($s1)
    ctx->pc = 0x24c200u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x24c204: 0x2463000a  addiu       $v1, $v1, 0xA
    ctx->pc = 0x24c204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x24c208: 0xa7a30002  sh          $v1, 0x2($sp)
    ctx->pc = 0x24c208u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x24c20c: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x24c20cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x24c210: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x24c210u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24c214: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x24c214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x24c218: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x24c218u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x24c21c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24C21Cu;
    {
        const bool branch_taken_0x24c21c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C21Cu;
        // 0x24c220: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c21c) {
            ctx->pc = 0x24C234u;
            goto label_24c234;
        }
    }
    ctx->pc = 0x24C224u;
    // 0x24c224: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x24c224u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_24c228:
    // 0x24c228: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x24c228u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x24c22c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x24C22Cu;
    {
        const bool branch_taken_0x24c22c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24C230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C22Cu;
        // 0x24c230: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c22c) {
            ctx->pc = 0x24C1E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24c1e0;
        }
    }
    ctx->pc = 0x24C234u;
label_24c234:
    // 0x24c234: 0x3c03aaaa  lui         $v1, 0xAAAA
    ctx->pc = 0x24c234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43690 << 16));
    // 0x24c238: 0x2751023  subu        $v0, $s3, $s5
    ctx->pc = 0x24c238u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
    // 0x24c23c: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x24c23cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
    // 0x24c240: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x24c240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24c244: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x24c244u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x24c248: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x24c248u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24c24c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x24c24cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24c250: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x24c250u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24c254: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x24c254u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24c258: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x24c258u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24c25c: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x24c25cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x24c260: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x24c260u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24c264: 0x3e00008  jr          $ra
    ctx->pc = 0x24C264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C264u;
        // 0x24c268: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24C26Cu;
}
