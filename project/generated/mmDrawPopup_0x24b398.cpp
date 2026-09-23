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

// Function: mmDrawPopup
// Address: 0x24b398 - 0x24b504
void mmDrawPopup_0x24b398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmDrawPopup_0x24b398");
#endif

    switch (ctx->pc) {
        case 0x24b3ecu: goto label_24b3ec;
        case 0x24b410u: goto label_24b410;
        case 0x24b470u: goto label_24b470;
        case 0x24b480u: goto label_24b480;
        case 0x24b4a0u: goto label_24b4a0;
        case 0x24b4a8u: goto label_24b4a8;
        case 0x24b4d0u: goto label_24b4d0;
        default: break;
    }

    ctx->pc = 0x24b398u;

    // 0x24b398: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x24b398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x24b39c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x24b39cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x24b3a0: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x24b3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x24b3a4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x24b3a4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b3a8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x24b3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x24b3ac: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x24b3acu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b3b0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x24b3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x24b3b4: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x24b3b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b3b8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x24b3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x24b3bc: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x24b3bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b3c0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x24b3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x24b3c4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x24b3c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b3c8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x24b3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x24b3cc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x24b3ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b3d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24b3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24b3d4: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x24b3d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b3d8: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x24b3d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b3dc: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x24b3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x24b3e0: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x24b3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x24b3e4: 0xc08089c  jal         func_202270
    ctx->pc = 0x24B3E4u;
    SET_GPR_U32(ctx, 31, 0x24B3ECu);
    ctx->pc = 0x24B3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B3E4u;
    // 0x24b3e8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x24B3E4u, 0x24B3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B3ECu;
label_24b3ec:
    // 0x24b3ec: 0x3c097f7f  lui         $t1, 0x7F7F
    ctx->pc = 0x24b3ecu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32639 << 16));
    // 0x24b3f0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x24b3f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b3f4: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x24b3f4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b3f8: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x24b3f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b3fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24b3fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b400: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x24b400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b404: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x24b404u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b408: 0xc08bb46  jal         func_22ED18
    ctx->pc = 0x24B408u;
    SET_GPR_U32(ctx, 31, 0x24B410u);
    ctx->pc = 0x24B40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B408u;
    // 0x24b40c: 0x35297f7f  ori         $t1, $t1, 0x7F7F (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32639);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22ED18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22ED18u, 0x24B408u, 0x24B410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B410u;
label_24b410:
    // 0x24b410: 0x93829ab5  lbu         $v0, -0x654B($gp)
    ctx->pc = 0x24b410u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x24b414: 0x2138023  subu        $s0, $s0, $s3
    ctx->pc = 0x24b414u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x24b418: 0x2610fffb  addiu       $s0, $s0, -0x5
    ctx->pc = 0x24b418u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967291));
    // 0x24b41c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24b41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24b420: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24B420u;
    {
        const bool branch_taken_0x24b420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B420u;
        // 0x24b424: 0x2644000a  addiu       $a0, $s2, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b420) {
            ctx->pc = 0x24B438u;
            goto label_24b438;
        }
    }
    ctx->pc = 0x24B428u;
    // 0x24b428: 0x8f829a9c  lw          $v0, -0x6564($gp)
    ctx->pc = 0x24b428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x24b42c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x24b42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x24b430: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24B430u;
    {
        const bool branch_taken_0x24b430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B430u;
        // 0x24b434: 0x31843  sra         $v1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b430) {
            ctx->pc = 0x24B440u;
            goto label_24b440;
        }
    }
    ctx->pc = 0x24B438u;
label_24b438:
    // 0x24b438: 0x8f829a9c  lw          $v0, -0x6564($gp)
    ctx->pc = 0x24b438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x24b43c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x24b43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_24b440:
    // 0x24b440: 0x2031823  subu        $v1, $s0, $v1
    ctx->pc = 0x24b440u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x24b444: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x24b444u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x24b448: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24b448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24b44c: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x24b44cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x24b450: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x24b450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x24b454: 0x24710002  addiu       $s1, $v1, 0x2
    ctx->pc = 0x24b454u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x24b458: 0x3c077f7f  lui         $a3, 0x7F7F
    ctx->pc = 0x24b458u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32639 << 16));
    // 0x24b45c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x24b45cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b460: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24b460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b464: 0x34e77f80  ori         $a3, $a3, 0x7F80
    ctx->pc = 0x24b464u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32640);
    // 0x24b468: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x24B468u;
    SET_GPR_U32(ctx, 31, 0x24B470u);
    ctx->pc = 0x24B46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B468u;
    // 0x24b46c: 0x24082880  addiu       $t0, $zero, 0x2880 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x24B468u, 0x24B470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B470u;
label_24b470:
    // 0x24b470: 0x52800018  beql        $s4, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x24B470u;
    {
        const bool branch_taken_0x24b470 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b470) {
            ctx->pc = 0x24B474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B470u;
            // 0x24b474: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B4D4u;
            goto label_24b4d4;
        }
    }
    ctx->pc = 0x24B478u;
    // 0x24b478: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x24B478u;
    SET_GPR_U32(ctx, 31, 0x24B480u);
    ctx->pc = 0x24B47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B478u;
    // 0x24b47c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x24B478u, 0x24B480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B480u;
label_24b480:
    // 0x24b480: 0x2a28023  subu        $s0, $s5, $v0
    ctx->pc = 0x24b480u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x24b484: 0x3c077f7f  lui         $a3, 0x7F7F
    ctx->pc = 0x24b484u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32639 << 16));
    // 0x24b488: 0x2604ffd4  addiu       $a0, $s0, -0x2C
    ctx->pc = 0x24b488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967252));
    // 0x24b48c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24b48cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b490: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x24b490u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b494: 0x34e77f80  ori         $a3, $a3, 0x7F80
    ctx->pc = 0x24b494u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32640);
    // 0x24b498: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x24B498u;
    SET_GPR_U32(ctx, 31, 0x24B4A0u);
    ctx->pc = 0x24B49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B498u;
    // 0x24b49c: 0x24082880  addiu       $t0, $zero, 0x2880 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x24B498u, 0x24B4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B4A0u;
label_24b4a0:
    // 0x24b4a0: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x24B4A0u;
    SET_GPR_U32(ctx, 31, 0x24B4A8u);
    ctx->pc = 0x24B4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B4A0u;
    // 0x24b4a4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x24B4A0u, 0x24B4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B4A8u;
label_24b4a8:
    // 0x24b4a8: 0x2610ffe4  addiu       $s0, $s0, -0x1C
    ctx->pc = 0x24b4a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
    // 0x24b4ac: 0x44916800  mtc1        $s1, $f13
    ctx->pc = 0x24b4acu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x24b4b0: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x24b4b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x24b4b4: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x24b4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x24b4b8: 0x3c058080  lui         $a1, 0x8080
    ctx->pc = 0x24b4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32896 << 16));
    // 0x24b4bc: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x24b4bcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24b4c0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x24b4c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x24b4c4: 0x34a58080  ori         $a1, $a1, 0x8080
    ctx->pc = 0x24b4c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32896);
    // 0x24b4c8: 0xc08b952  jal         func_22E548
    ctx->pc = 0x24B4C8u;
    SET_GPR_U32(ctx, 31, 0x24B4D0u);
    ctx->pc = 0x24B4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B4C8u;
    // 0x24b4cc: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E548u, 0x24B4C8u, 0x24B4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B4D0u;
label_24b4d0:
    // 0x24b4d0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x24b4d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_24b4d4:
    // 0x24b4d4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x24b4d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24b4d8: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x24b4d8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24b4dc: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x24b4dcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24b4e0: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x24b4e0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24b4e4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x24b4e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24b4e8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x24b4e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24b4ec: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x24b4ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24b4f0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x24b4f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24b4f4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x24b4f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24b4f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24b4f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24b4fc: 0x808089c  j           func_202270
    ctx->pc = 0x24B4FCu;
    ctx->pc = 0x24B500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B4FCu;
    // 0x24b500: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    textSelect_0x202270(rdram, ctx, runtime); return;
    ctx->pc = 0x24B504u;
}
