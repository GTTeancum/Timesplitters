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

// Function: fread
// Address: 0x2eb158 - 0x2eb274
void fread_0x2eb158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fread_0x2eb158");
#endif

    switch (ctx->pc) {
        case 0x2eb198u: goto label_2eb198;
        case 0x2eb1e0u: goto label_2eb1e0;
        case 0x2eb1f0u: goto label_2eb1f0;
        case 0x2eb208u: goto label_2eb208;
        case 0x2eb230u: goto label_2eb230;
        default: break;
    }

    ctx->pc = 0x2eb158u;

    // 0x2eb158: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2eb158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2eb15c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2eb15cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2eb160: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2eb160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2eb164: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2eb164u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb168: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2eb168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2eb16c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2eb16cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb170: 0x2d49818  mult        $s3, $s6, $s4
    ctx->pc = 0x2eb170u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
    // 0x2eb174: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2eb174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2eb178: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2eb178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2eb17c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2eb17cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb180: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2eb180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2eb184: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2eb184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2eb188: 0x16600009  bnez        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EB188u;
    {
        const bool branch_taken_0x2eb188 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EB18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB188u;
        // 0x2eb18c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb188) {
            ctx->pc = 0x2EB1B0u;
            goto label_2eb1b0;
        }
    }
    ctx->pc = 0x2EB190u;
    // 0x2eb190: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2EB190u;
    {
        const bool branch_taken_0x2eb190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB190u;
        // 0x2eb194: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb190) {
            ctx->pc = 0x2EB24Cu;
            goto label_2eb24c;
        }
    }
    ctx->pc = 0x2EB198u;
label_2eb198:
    // 0x2eb198: 0x52800001  beql        $s4, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2EB198u;
    {
        const bool branch_taken_0x2eb198 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb198) {
            ctx->pc = 0x2EB19Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB198u;
            // 0x2eb19c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB1A0u;
            goto label_2eb1a0;
        }
    }
    ctx->pc = 0x2EB1A0u;
label_2eb1a0:
    // 0x2eb1a0: 0x54001b  divu        $zero, $v0, $s4
    ctx->pc = 0x2eb1a0u;
    { uint32_t divisor = GPR_U32(ctx, 20); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2eb1a4: 0x1012  mflo        $v0
    ctx->pc = 0x2eb1a4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2eb1a8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2EB1A8u;
    {
        const bool branch_taken_0x2eb1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB1A8u;
        // 0x2eb1ac: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb1a8) {
            ctx->pc = 0x2EB250u;
            goto label_2eb250;
        }
    }
    ctx->pc = 0x2EB1B0u;
label_2eb1b0:
    // 0x2eb1b0: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x2eb1b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2eb1b4: 0x4c10004  bgez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EB1B4u;
    {
        const bool branch_taken_0x2eb1b4 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x2EB1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB1B4u;
        // 0x2eb1b8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb1b4) {
            ctx->pc = 0x2EB1C8u;
            goto label_2eb1c8;
        }
    }
    ctx->pc = 0x2EB1BCu;
    // 0x2eb1bc: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2eb1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x2eb1c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb1c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb1c4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2eb1c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2eb1c8:
    // 0x2eb1c8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2eb1c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb1cc: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x2eb1ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x2eb1d0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2EB1D0u;
    {
        const bool branch_taken_0x2eb1d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB1D0u;
        // 0x2eb1d4: 0x260a82d  daddu       $s5, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb1d0) {
            ctx->pc = 0x2EB220u;
            goto label_2eb220;
        }
    }
    ctx->pc = 0x2EB1D8u;
    // 0x2eb1d8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2eb1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2eb1dc: 0x0  nop
    ctx->pc = 0x2eb1dcu;
    // NOP
label_2eb1e0:
    // 0x2eb1e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2eb1e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb1e4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2eb1e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb1e8: 0xc0b9516  jal         func_2E5458
    ctx->pc = 0x2EB1E8u;
    SET_GPR_U32(ctx, 31, 0x2EB1F0u);
    ctx->pc = 0x2EB1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB1E8u;
    // 0x2eb1ec: 0x2709823  subu        $s3, $s3, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5458u, 0x2EB1E8u, 0x2EB1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB1F0u;
label_2eb1f0:
    // 0x2eb1f0: 0x2509021  addu        $s2, $s2, $s0
    ctx->pc = 0x2eb1f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x2eb1f4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2eb1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2eb1f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2eb1f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb1fc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2eb1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2eb200: 0xc0bb3d0  jal         func_2ECF40
    ctx->pc = 0x2EB200u;
    SET_GPR_U32(ctx, 31, 0x2EB208u);
    ctx->pc = 0x2EB204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB200u;
    // 0x2eb204: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ECF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ECF40u, 0x2EB200u, 0x2EB208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB208u;
label_2eb208:
    // 0x2eb208: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x2EB208u;
    {
        const bool branch_taken_0x2eb208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EB20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB208u;
        // 0x2eb20c: 0x2b31023  subu        $v0, $s5, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb208) {
            ctx->pc = 0x2EB198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eb198;
        }
    }
    ctx->pc = 0x2EB210u;
    // 0x2eb210: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x2eb210u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2eb214: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x2eb214u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x2eb218: 0x5440fff1  bnel        $v0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x2EB218u;
    {
        const bool branch_taken_0x2eb218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb218) {
            ctx->pc = 0x2EB21Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB218u;
            // 0x2eb21c: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB1E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eb1e0;
        }
    }
    ctx->pc = 0x2EB220u;
label_2eb220:
    // 0x2eb220: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2eb220u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2eb224: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2eb224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb228: 0xc0b9516  jal         func_2E5458
    ctx->pc = 0x2EB228u;
    SET_GPR_U32(ctx, 31, 0x2EB230u);
    ctx->pc = 0x2EB22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB228u;
    // 0x2eb22c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5458u, 0x2EB228u, 0x2EB230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB230u;
label_2eb230:
    // 0x2eb230: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2eb230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2eb234: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x2eb234u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb238: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2eb238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2eb23c: 0x932023  subu        $a0, $a0, $s3
    ctx->pc = 0x2eb23cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x2eb240: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x2eb240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2eb244: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x2eb244u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x2eb248: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2eb248u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2eb24c:
    // 0x2eb24c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2eb24cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2eb250:
    // 0x2eb250: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2eb250u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2eb254: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2eb254u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2eb258: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2eb258u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2eb25c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2eb25cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2eb260: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2eb260u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2eb264: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2eb264u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2eb268: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2eb268u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eb26c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EB26Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EB270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB26Cu;
        // 0x2eb270: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EB26Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EB274u;
}
