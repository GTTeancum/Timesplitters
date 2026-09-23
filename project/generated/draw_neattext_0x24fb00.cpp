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

// Function: draw_neattext
// Address: 0x24fb00 - 0x24fcbc
void draw_neattext_0x24fb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("draw_neattext_0x24fb00");
#endif

    switch (ctx->pc) {
        case 0x24fb4cu: goto label_24fb4c;
        case 0x24fb9cu: goto label_24fb9c;
        case 0x24fbbcu: goto label_24fbbc;
        case 0x24fc40u: goto label_24fc40;
        case 0x24fc5cu: goto label_24fc5c;
        case 0x24fc64u: goto label_24fc64;
        default: break;
    }

    ctx->pc = 0x24fb00u;

    // 0x24fb00: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x24fb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x24fb04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24fb04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24fb08: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x24fb08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x24fb0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24fb0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fb10: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x24fb10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x24fb14: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x24fb14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x24fb18: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x24fb18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x24fb1c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x24fb1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x24fb20: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x24fb20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x24fb24: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x24fb24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x24fb28: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x24fb28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x24fb2c: 0x8e150014  lw          $s5, 0x14($s0)
    ctx->pc = 0x24fb2cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x24fb30: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x24fb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x24fb34: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x24fb34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x24fb38: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x24FB38u;
    {
        const bool branch_taken_0x24fb38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24FB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FB38u;
        // 0x24fb3c: 0x8f84a028  lw          $a0, -0x5FD8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942760)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fb38) {
            ctx->pc = 0x24FB44u;
            goto label_24fb44;
        }
    }
    ctx->pc = 0x24FB40u;
    // 0x24fb40: 0x8f84a024  lw          $a0, -0x5FDC($gp)
    ctx->pc = 0x24fb40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942756)));
label_24fb44:
    // 0x24fb44: 0xc08089c  jal         func_202270
    ctx->pc = 0x24FB44u;
    SET_GPR_U32(ctx, 31, 0x24FB4Cu);
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x24FB44u, 0x24FB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FB4Cu;
label_24fb4c:
    // 0x24fb4c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x24fb4cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fb50: 0x96060000  lhu         $a2, 0x0($s0)
    ctx->pc = 0x24fb50u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24fb54: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x24fb54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x24fb58: 0x8eb10008  lw          $s1, 0x8($s5)
    ctx->pc = 0x24fb58u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x24fb5c: 0x244399f0  addiu       $v1, $v0, -0x6610
    ctx->pc = 0x24fb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941168));
    // 0x24fb60: 0x8c4499f0  lw          $a0, -0x6610($v0)
    ctx->pc = 0x24fb60u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3299F0u));
    // 0x24fb64: 0x8c650014  lw          $a1, 0x14($v1)
    ctx->pc = 0x24fb64u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x329A04u));
    // 0x24fb68: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x24fb68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x24fb6c: 0x86a021  addu        $s4, $a0, $a2
    ctx->pc = 0x24fb6cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x24fb70: 0x8e160010  lw          $s6, 0x10($s0)
    ctx->pc = 0x24fb70u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x24fb74: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x24FB74u;
    {
        const bool branch_taken_0x24fb74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FB74u;
        // 0x24fb78: 0xa29821  addu        $s3, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fb74) {
            ctx->pc = 0x24FB9Cu;
            goto label_24fb9c;
        }
    }
    ctx->pc = 0x24FB7Cu;
    // 0x24fb7c: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x24fb7cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x24fb80: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x24fb80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fb84: 0x96070006  lhu         $a3, 0x6($s0)
    ctx->pc = 0x24fb84u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x24fb88: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x24fb88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fb8c: 0x2863021  addu        $a2, $s4, $a2
    ctx->pc = 0x24fb8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    // 0x24fb90: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x24fb90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fb94: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x24FB94u;
    SET_GPR_U32(ctx, 31, 0x24FB9Cu);
    ctx->pc = 0x24FB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FB94u;
    // 0x24fb98: 0x2673821  addu        $a3, $s3, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x24FB94u, 0x24FB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FB9Cu;
label_24fb9c:
    // 0x24fb9c: 0x12c0003d  beqz        $s6, . + 4 + (0x3D << 2)
    ctx->pc = 0x24FB9Cu;
    {
        const bool branch_taken_0x24fb9c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FB9Cu;
        // 0x24fba0: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fb9c) {
            ctx->pc = 0x24FC94u;
            goto label_24fc94;
        }
    }
    ctx->pc = 0x24FBA4u;
    // 0x24fba4: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x24fba4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x24fba8: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x24fba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x24fbac: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x24FBACu;
    {
        const bool branch_taken_0x24fbac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FBACu;
        // 0x24fbb0: 0x93829ab5  lbu         $v0, -0x654B($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fbac) {
            ctx->pc = 0x24FBE0u;
            goto label_24fbe0;
        }
    }
    ctx->pc = 0x24FBB4u;
    // 0x24fbb4: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x24FBB4u;
    SET_GPR_U32(ctx, 31, 0x24FBBCu);
    ctx->pc = 0x24FBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FBB4u;
    // 0x24fbb8: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x24FBB4u, 0x24FBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FBBCu;
label_24fbbc:
    // 0x24fbbc: 0x96040004  lhu         $a0, 0x4($s0)
    ctx->pc = 0x24fbbcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x24fbc0: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x24fbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x24fbc4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24fbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24fbc8: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x24fbc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x24fbcc: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x24fbccu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x24fbd0: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x24fbd0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x24fbd4: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x24fbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x24fbd8: 0x83a023  subu        $s4, $a0, $v1
    ctx->pc = 0x24fbd8u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x24fbdc: 0x93829ab5  lbu         $v0, -0x654B($gp)
    ctx->pc = 0x24fbdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
label_24fbe0:
    // 0x24fbe0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24fbe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24fbe4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24FBE4u;
    {
        const bool branch_taken_0x24fbe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FBE4u;
        // 0x24fbe8: 0x96040006  lhu         $a0, 0x6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fbe4) {
            ctx->pc = 0x24FBFCu;
            goto label_24fbfc;
        }
    }
    ctx->pc = 0x24FBECu;
    // 0x24fbec: 0x8f829a9c  lw          $v0, -0x6564($gp)
    ctx->pc = 0x24fbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x24fbf0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x24fbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x24fbf4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24FBF4u;
    {
        const bool branch_taken_0x24fbf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FBF4u;
        // 0x24fbf8: 0x31843  sra         $v1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fbf4) {
            ctx->pc = 0x24FC04u;
            goto label_24fc04;
        }
    }
    ctx->pc = 0x24FBFCu;
label_24fbfc:
    // 0x24fbfc: 0x8f829a9c  lw          $v0, -0x6564($gp)
    ctx->pc = 0x24fbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x24fc00: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x24fc00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_24fc04:
    // 0x24fc04: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x24fc04u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x24fc08: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x24fc08u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x24fc0c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24fc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24fc10: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x24fc10u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x24fc14: 0x2639821  addu        $s3, $s3, $v1
    ctx->pc = 0x24fc14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x24fc18: 0x3c124078  lui         $s2, 0x4078
    ctx->pc = 0x24fc18u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)16504 << 16));
    // 0x24fc1c: 0x30a30004  andi        $v1, $a1, 0x4
    ctx->pc = 0x24fc1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x24fc20: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x24FC20u;
    {
        const bool branch_taken_0x24fc20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24FC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FC20u;
        // 0x24fc24: 0x36527880  ori         $s2, $s2, 0x7880 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)30848);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fc20) {
            ctx->pc = 0x24FC2Cu;
            goto label_24fc2c;
        }
    }
    ctx->pc = 0x24FC28u;
    // 0x24fc28: 0x8eb20004  lw          $s2, 0x4($s5)
    ctx->pc = 0x24fc28u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_24fc2c:
    // 0x24fc2c: 0x24025080  addiu       $v0, $zero, 0x5080
    ctx->pc = 0x24fc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20608));
    // 0x24fc30: 0x24110040  addiu       $s1, $zero, 0x40
    ctx->pc = 0x24fc30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x24fc34: 0x43880b  movn        $s1, $v0, $v1
    ctx->pc = 0x24fc34u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x24fc38: 0xc0adf7c  jal         func_2B7DF0
    ctx->pc = 0x24FC38u;
    SET_GPR_U32(ctx, 31, 0x24FC40u);
    ctx->pc = 0x24FC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FC38u;
    // 0x24fc3c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7DF0u, 0x24FC38u, 0x24FC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FC40u;
label_24fc40:
    // 0x24fc40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24fc40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fc44: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x24fc44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fc48: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x24fc48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fc4c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x24fc4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fc50: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x24fc50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fc54: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x24FC54u;
    SET_GPR_U32(ctx, 31, 0x24FC5Cu);
    ctx->pc = 0x24FC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FC54u;
    // 0x24fc58: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x24FC54u, 0x24FC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FC5Cu;
label_24fc5c:
    // 0x24fc5c: 0xc0adf7c  jal         func_2B7DF0
    ctx->pc = 0x24FC5Cu;
    SET_GPR_U32(ctx, 31, 0x24FC64u);
    ctx->pc = 0x24FC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FC5Cu;
    // 0x24fc60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7DF0u, 0x24FC5Cu, 0x24FC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FC64u;
label_24fc64:
    // 0x24fc64: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x24fc64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fc68: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x24fc68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24fc6c: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x24fc6cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24fc70: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x24fc70u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24fc74: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x24fc74u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24fc78: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x24fc78u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24fc7c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x24fc7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24fc80: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x24fc80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24fc84: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x24fc84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24fc88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24fc88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24fc8c: 0x808089c  j           func_202270
    ctx->pc = 0x24FC8Cu;
    ctx->pc = 0x24FC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FC8Cu;
    // 0x24fc90: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    textSelect_0x202270(rdram, ctx, runtime); return;
    ctx->pc = 0x24FC94u;
label_24fc94:
    // 0x24fc94: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x24fc94u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24fc98: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x24fc98u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24fc9c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x24fc9cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24fca0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x24fca0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24fca4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x24fca4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24fca8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x24fca8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24fcac: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x24fcacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24fcb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24fcb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24fcb4: 0x3e00008  jr          $ra
    ctx->pc = 0x24FCB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24FCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FCB4u;
        // 0x24fcb8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24FCB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24FCBCu;
}
