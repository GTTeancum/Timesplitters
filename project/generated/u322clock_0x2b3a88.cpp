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

// Function: u322clock
// Address: 0x2b3a88 - 0x2b3b84
void u322clock_0x2b3a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("u322clock_0x2b3a88");
#endif

    switch (ctx->pc) {
        case 0x2b3ac4u: goto label_2b3ac4;
        case 0x2b3ae8u: goto label_2b3ae8;
        case 0x2b3b0cu: goto label_2b3b0c;
        case 0x2b3b34u: goto label_2b3b34;
        case 0x2b3b58u: goto label_2b3b58;
        case 0x2b3b64u: goto label_2b3b64;
        default: break;
    }

    ctx->pc = 0x2b3a88u;

    // 0x2b3a88: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2b3a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2b3a8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b3a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b3a90: 0x2410003c  addiu       $s0, $zero, 0x3C
    ctx->pc = 0x2b3a90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2b3a94: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2b3a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2b3a98: 0xb0001b  divu        $zero, $a1, $s0
    ctx->pc = 0x2b3a98u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x2b3a9c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2b3a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2b3aa0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2b3aa0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3aa4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2b3aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2b3aa8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2b3aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2b3aac: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B3AACu;
    {
        const bool branch_taken_0x2b3aac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3aac) {
            ctx->pc = 0x2B3AB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3AACu;
            // 0x2b3ab0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3AB4u;
            goto label_2b3ab4;
        }
    }
    ctx->pc = 0x2B3AB4u;
label_2b3ab4:
    // 0x2b3ab4: 0x8812  mflo        $s1
    ctx->pc = 0x2b3ab4u;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x2b3ab8: 0x2302018  mult        $a0, $s1, $s0
    ctx->pc = 0x2b3ab8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2b3abc: 0xc0ace68  jal         func_2B39A0
    ctx->pc = 0x2B3ABCu;
    SET_GPR_U32(ctx, 31, 0x2B3AC4u);
    ctx->pc = 0x2B3AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3ABCu;
    // 0x2b3ac0: 0xa42023  subu        $a0, $a1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B39A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B39A0u, 0x2B3ABCu, 0x2B3AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3AC4u;
label_2b3ac4:
    // 0x2b3ac4: 0x230001b  divu        $zero, $s1, $s0
    ctx->pc = 0x2b3ac4u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,17); } }
    // 0x2b3ac8: 0xa2620001  sb          $v0, 0x1($s3)
    ctx->pc = 0x2b3ac8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b3acc: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x2b3accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2b3ad0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B3AD0u;
    {
        const bool branch_taken_0x2b3ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3ad0) {
            ctx->pc = 0x2B3AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3AD0u;
            // 0x2b3ad4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3AD8u;
            goto label_2b3ad8;
        }
    }
    ctx->pc = 0x2B3AD8u;
label_2b3ad8:
    // 0x2b3ad8: 0x9012  mflo        $s2
    ctx->pc = 0x2b3ad8u;
    SET_GPR_U64(ctx, 18, ctx->lo);
    // 0x2b3adc: 0x2508018  mult        $s0, $s2, $s0
    ctx->pc = 0x2b3adcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2b3ae0: 0xc0ace68  jal         func_2B39A0
    ctx->pc = 0x2B3AE0u;
    SET_GPR_U32(ctx, 31, 0x2B3AE8u);
    ctx->pc = 0x2B3AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3AE0u;
    // 0x2b3ae4: 0x2302023  subu        $a0, $s1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B39A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B39A0u, 0x2B3AE0u, 0x2B3AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3AE8u;
label_2b3ae8:
    // 0x2b3ae8: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x2b3ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2b3aec: 0xa2620002  sb          $v0, 0x2($s3)
    ctx->pc = 0x2b3aecu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b3af0: 0x244001b  divu        $zero, $s2, $a0
    ctx->pc = 0x2b3af0u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,18); } }
    // 0x2b3af4: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B3AF4u;
    {
        const bool branch_taken_0x2b3af4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3af4) {
            ctx->pc = 0x2B3AF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3AF4u;
            // 0x2b3af8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3AFCu;
            goto label_2b3afc;
        }
    }
    ctx->pc = 0x2B3AFCu;
label_2b3afc:
    // 0x2b3afc: 0x8812  mflo        $s1
    ctx->pc = 0x2b3afcu;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x2b3b00: 0x2242018  mult        $a0, $s1, $a0
    ctx->pc = 0x2b3b00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2b3b04: 0xc0ace68  jal         func_2B39A0
    ctx->pc = 0x2B3B04u;
    SET_GPR_U32(ctx, 31, 0x2B3B0Cu);
    ctx->pc = 0x2B3B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3B04u;
    // 0x2b3b08: 0x2442023  subu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B39A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B39A0u, 0x2B3B04u, 0x2B3B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3B0Cu;
label_2b3b0c:
    // 0x2b3b0c: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x2b3b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2b3b10: 0xa2620003  sb          $v0, 0x3($s3)
    ctx->pc = 0x2b3b10u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b3b14: 0x223001b  divu        $zero, $s1, $v1
    ctx->pc = 0x2b3b14u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,17); } }
    // 0x2b3b18: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B3B18u;
    {
        const bool branch_taken_0x2b3b18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3b18) {
            ctx->pc = 0x2B3B1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3B18u;
            // 0x2b3b1c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3B20u;
            goto label_2b3b20;
        }
    }
    ctx->pc = 0x2B3B20u;
label_2b3b20:
    // 0x2b3b20: 0x8012  mflo        $s0
    ctx->pc = 0x2b3b20u;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x2b3b24: 0x102140  sll         $a0, $s0, 5
    ctx->pc = 0x2b3b24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x2b3b28: 0x902023  subu        $a0, $a0, $s0
    ctx->pc = 0x2b3b28u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2b3b2c: 0xc0ace68  jal         func_2B39A0
    ctx->pc = 0x2B3B2Cu;
    SET_GPR_U32(ctx, 31, 0x2B3B34u);
    ctx->pc = 0x2B3B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3B2Cu;
    // 0x2b3b30: 0x2242023  subu        $a0, $s1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B39A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B39A0u, 0x2B3B2Cu, 0x2B3B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3B34u;
label_2b3b34:
    // 0x2b3b34: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2b3b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2b3b38: 0xa2620005  sb          $v0, 0x5($s3)
    ctx->pc = 0x2b3b38u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b3b3c: 0x204001b  divu        $zero, $s0, $a0
    ctx->pc = 0x2b3b3cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
    // 0x2b3b40: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B3B40u;
    {
        const bool branch_taken_0x2b3b40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3b40) {
            ctx->pc = 0x2B3B44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3B40u;
            // 0x2b3b44: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3B48u;
            goto label_2b3b48;
        }
    }
    ctx->pc = 0x2B3B48u;
label_2b3b48:
    // 0x2b3b48: 0x8812  mflo        $s1
    ctx->pc = 0x2b3b48u;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x2b3b4c: 0x2242018  mult        $a0, $s1, $a0
    ctx->pc = 0x2b3b4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2b3b50: 0xc0ace68  jal         func_2B39A0
    ctx->pc = 0x2B3B50u;
    SET_GPR_U32(ctx, 31, 0x2B3B58u);
    ctx->pc = 0x2B3B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3B50u;
    // 0x2b3b54: 0x2042023  subu        $a0, $s0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B39A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B39A0u, 0x2B3B50u, 0x2B3B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3B58u;
label_2b3b58:
    // 0x2b3b58: 0xa2620006  sb          $v0, 0x6($s3)
    ctx->pc = 0x2b3b58u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b3b5c: 0xc0ace68  jal         func_2B39A0
    ctx->pc = 0x2B3B5Cu;
    SET_GPR_U32(ctx, 31, 0x2B3B64u);
    ctx->pc = 0x2B3B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3B5Cu;
    // 0x2b3b60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B39A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B39A0u, 0x2B3B5Cu, 0x2B3B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3B64u;
label_2b3b64:
    // 0x2b3b64: 0xa2620007  sb          $v0, 0x7($s3)
    ctx->pc = 0x2b3b64u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b3b68: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2b3b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b3b6c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2b3b6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b3b70: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2b3b70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b3b74: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2b3b74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b3b78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b3b78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b3b7c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3B7Cu;
        // 0x2b3b80: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3B84u;
}
