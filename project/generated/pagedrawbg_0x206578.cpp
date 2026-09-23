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

// Function: pagedrawbg
// Address: 0x206578 - 0x2067cc
void pagedrawbg_0x206578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("pagedrawbg_0x206578");
#endif

    switch (ctx->pc) {
        case 0x2065b4u: goto label_2065b4;
        case 0x2065c4u: goto label_2065c4;
        case 0x2065e8u: goto label_2065e8;
        case 0x206674u: goto label_206674;
        case 0x206698u: goto label_206698;
        case 0x2066b4u: goto label_2066b4;
        case 0x2066d0u: goto label_2066d0;
        case 0x2066ecu: goto label_2066ec;
        case 0x206708u: goto label_206708;
        case 0x206724u: goto label_206724;
        case 0x206744u: goto label_206744;
        case 0x20674cu: goto label_20674c;
        case 0x206754u: goto label_206754;
        case 0x206760u: goto label_206760;
        case 0x20679cu: goto label_20679c;
        default: break;
    }

    ctx->pc = 0x206578u;

    // 0x206578: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x206578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x20657c: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x20657cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x206580: 0xafa5001c  sw          $a1, 0x1C($sp)
    ctx->pc = 0x206580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 5));
    // 0x206584: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x206584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x206588: 0xffb700a0  sd          $s7, 0xA0($sp)
    ctx->pc = 0x206588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
    // 0x20658c: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x20658cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x206590: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x206590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x206594: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x206594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x206598: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x206598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x20659c: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x20659cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2065a0: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x2065a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x2065a4: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2065a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2065a8: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x2065a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x2065ac: 0xc08089c  jal         func_202270
    ctx->pc = 0x2065ACu;
    SET_GPR_U32(ctx, 31, 0x2065B4u);
    ctx->pc = 0x2065B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2065ACu;
    // 0x2065b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x2065ACu, 0x2065B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2065B4u;
label_2065b4:
    // 0x2065b4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2065b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2065b8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2065b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2065bc: 0xc08b0ec  jal         func_22C3B0
    ctx->pc = 0x2065BCu;
    SET_GPR_U32(ctx, 31, 0x2065C4u);
    ctx->pc = 0x2065C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2065BCu;
    // 0x2065c0: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C3B0u, 0x2065BCu, 0x2065C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2065C4u;
label_2065c4:
    // 0x2065c4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2065c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2065c8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2065c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2065cc: 0x8fa6001c  lw          $a2, 0x1C($sp)
    ctx->pc = 0x2065ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x2065d0: 0x27a50014  addiu       $a1, $sp, 0x14
    ctx->pc = 0x2065d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x2065d4: 0x8fbe0000  lw          $fp, 0x0($sp)
    ctx->pc = 0x2065d4u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2065d8: 0x8fb70008  lw          $s7, 0x8($sp)
    ctx->pc = 0x2065d8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2065dc: 0x8fb6000c  lw          $s6, 0xC($sp)
    ctx->pc = 0x2065dcu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2065e0: 0xc080aa2  jal         func_202A88
    ctx->pc = 0x2065E0u;
    SET_GPR_U32(ctx, 31, 0x2065E8u);
    ctx->pc = 0x2065E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2065E0u;
    // 0x2065e4: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A88u, 0x2065E0u, 0x2065E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2065E8u;
label_2065e8:
    // 0x2065e8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2065e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2065ec: 0x3d79821  addu        $s3, $fp, $s7
    ctx->pc = 0x2065ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 23)));
    // 0x2065f0: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x2065f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x2065f4: 0x8fb00014  lw          $s0, 0x14($sp)
    ctx->pc = 0x2065f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2065f8: 0x2629823  subu        $s3, $s3, $v0
    ctx->pc = 0x2065f8u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2065fc: 0x8c6699f0  lw          $a2, -0x6610($v1)
    ctx->pc = 0x2065fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941168)));
    // 0x206600: 0x139843  sra         $s3, $s3, 1
    ctx->pc = 0x206600u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 19), 1));
    // 0x206604: 0x246399f0  addiu       $v1, $v1, -0x6610
    ctx->pc = 0x206604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941168));
    // 0x206608: 0x27e202a  slt         $a0, $s3, $fp
    ctx->pc = 0x206608u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x20660c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x20660cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x206610: 0x264f00b  movn        $fp, $s3, $a0
    ctx->pc = 0x206610u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 19));
    // 0x206614: 0x2e2282a  slt         $a1, $s7, $v0
    ctx->pc = 0x206614u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x206618: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x206618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x20661c: 0x45b80b  movn        $s7, $v0, $a1
    ctx->pc = 0x20661cu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 2));
    // 0x206620: 0x8c710014  lw          $s1, 0x14($v1)
    ctx->pc = 0x206620u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x206624: 0xde1021  addu        $v0, $a2, $fp
    ctx->pc = 0x206624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 30)));
    // 0x206628: 0x908023  subu        $s0, $a0, $s0
    ctx->pc = 0x206628u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x20662c: 0xd71821  addu        $v1, $a2, $s7
    ctx->pc = 0x20662cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 23)));
    // 0x206630: 0x2610fffc  addiu       $s0, $s0, -0x4
    ctx->pc = 0x206630u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x206634: 0x2249021  addu        $s2, $s1, $a0
    ctx->pc = 0x206634u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x206638: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x206638u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x20663c: 0x2454fffb  addiu       $s4, $v0, -0x5
    ctx->pc = 0x20663cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
    // 0x206640: 0x24750005  addiu       $s5, $v1, 0x5
    ctx->pc = 0x206640u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x206644: 0x2669821  addu        $s3, $s3, $a2
    ctx->pc = 0x206644u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x206648: 0x3c08001e  lui         $t0, 0x1E
    ctx->pc = 0x206648u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)30 << 16));
    // 0x20664c: 0x245efffa  addiu       $fp, $v0, -0x6
    ctx->pc = 0x20664cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x206650: 0x24770006  addiu       $s7, $v1, 0x6
    ctx->pc = 0x206650u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x206654: 0x2368821  addu        $s1, $s1, $s6
    ctx->pc = 0x206654u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    // 0x206658: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x206658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20665c: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x20665cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x206660: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x206660u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206664: 0x2647fffd  addiu       $a3, $s2, -0x3
    ctx->pc = 0x206664u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967293));
    // 0x206668: 0x35080080  ori         $t0, $t0, 0x80
    ctx->pc = 0x206668u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)128);
    // 0x20666c: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x20666Cu;
    SET_GPR_U32(ctx, 31, 0x206674u);
    ctx->pc = 0x206670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20666Cu;
    // 0x206670: 0x26360006  addiu       $s6, $s1, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x20666Cu, 0x206674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206674u;
label_206674:
    // 0x206674: 0x2642fffe  addiu       $v0, $s2, -0x2
    ctx->pc = 0x206674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967294));
    // 0x206678: 0x3c08001e  lui         $t0, 0x1E
    ctx->pc = 0x206678u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)30 << 16));
    // 0x20667c: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x20667cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x206680: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x206680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206684: 0x2645ffff  addiu       $a1, $s2, -0x1
    ctx->pc = 0x206684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x206688: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x206688u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20668c: 0x26270005  addiu       $a3, $s1, 0x5
    ctx->pc = 0x20668cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 5));
    // 0x206690: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x206690u;
    SET_GPR_U32(ctx, 31, 0x206698u);
    ctx->pc = 0x206694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206690u;
    // 0x206694: 0x35080080  ori         $t0, $t0, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x206690u, 0x206698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206698u;
label_206698:
    // 0x206698: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x206698u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x20669c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x20669cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2066a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2066a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2066a4: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2066a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2066a8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2066a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2066ac: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x2066ACu;
    SET_GPR_U32(ctx, 31, 0x2066B4u);
    ctx->pc = 0x2066B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2066ACu;
    // 0x2066b0: 0x35080080  ori         $t0, $t0, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x2066ACu, 0x2066B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2066B4u;
label_2066b4:
    // 0x2066b4: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x2066b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2066b8: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x2066b8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x2066bc: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2066bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2066c0: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2066c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2066c4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2066c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2066c8: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x2066C8u;
    SET_GPR_U32(ctx, 31, 0x2066D0u);
    ctx->pc = 0x2066CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2066C8u;
    // 0x2066cc: 0x35080080  ori         $t0, $t0, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x2066C8u, 0x2066D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2066D0u;
label_2066d0:
    // 0x2066d0: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x2066d0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x2066d4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2066d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2066d8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2066d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2066dc: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2066dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2066e0: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x2066e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2066e4: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x2066E4u;
    SET_GPR_U32(ctx, 31, 0x2066ECu);
    ctx->pc = 0x2066E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2066E4u;
    // 0x2066e8: 0x35080080  ori         $t0, $t0, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x2066E4u, 0x2066ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2066ECu;
label_2066ec:
    // 0x2066ec: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2066ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2066f0: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x2066f0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x2066f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2066f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2066f8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2066f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2066fc: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x2066fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206700: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x206700u;
    SET_GPR_U32(ctx, 31, 0x206708u);
    ctx->pc = 0x206704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206700u;
    // 0x206704: 0x35080080  ori         $t0, $t0, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x206700u, 0x206708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206708u;
label_206708:
    // 0x206708: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x206708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20670c: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x20670cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x206710: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x206710u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206714: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x206714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206718: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x206718u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20671c: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x20671Cu;
    SET_GPR_U32(ctx, 31, 0x206724u);
    ctx->pc = 0x206720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20671Cu;
    // 0x206720: 0x35080080  ori         $t0, $t0, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x20671Cu, 0x206724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206724u;
label_206724:
    // 0x206724: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x206724u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x206728: 0x3c08000a  lui         $t0, 0xA
    ctx->pc = 0x206728u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)10 << 16));
    // 0x20672c: 0x8fa6001c  lw          $a2, 0x1C($sp)
    ctx->pc = 0x20672cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x206730: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x206730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206734: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x206734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206738: 0x34e70080  ori         $a3, $a3, 0x80
    ctx->pc = 0x206738u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)128);
    // 0x20673c: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x20673Cu;
    SET_GPR_U32(ctx, 31, 0x206744u);
    ctx->pc = 0x206740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20673Cu;
    // 0x206740: 0x35080080  ori         $t0, $t0, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x20673Cu, 0x206744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206744u;
label_206744:
    // 0x206744: 0xc08089c  jal         func_202270
    ctx->pc = 0x206744u;
    SET_GPR_U32(ctx, 31, 0x20674Cu);
    ctx->pc = 0x206748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206744u;
    // 0x206748: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x206744u, 0x20674Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20674Cu;
label_20674c:
    // 0x20674c: 0xc08b79a  jal         func_22DE68
    ctx->pc = 0x20674Cu;
    SET_GPR_U32(ctx, 31, 0x206754u);
    ctx->pc = 0x206750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20674Cu;
    // 0x206750: 0x8fa40018  lw          $a0, 0x18($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DE68u, 0x20674Cu, 0x206754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206754u;
label_206754:
    // 0x206754: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x206754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x206758: 0xc08b11c  jal         func_22C470
    ctx->pc = 0x206758u;
    SET_GPR_U32(ctx, 31, 0x206760u);
    ctx->pc = 0x20675Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206758u;
    // 0x20675c: 0x94850004  lhu         $a1, 0x4($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C470u, 0x206758u, 0x206760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206760u;
label_206760:
    // 0x206760: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x206760u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206764: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x206764u;
    {
        const bool branch_taken_0x206764 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x206768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206764u;
        // 0x206768: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206764) {
            ctx->pc = 0x20679Cu;
            goto label_20679c;
        }
    }
    ctx->pc = 0x20676Cu;
    // 0x20676c: 0x94c50002  lhu         $a1, 0x2($a2)
    ctx->pc = 0x20676cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x206770: 0x94c30006  lhu         $v1, 0x6($a2)
    ctx->pc = 0x206770u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x206774: 0x34423f80  ori         $v0, $v0, 0x3F80
    ctx->pc = 0x206774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16256);
    // 0x206778: 0x94c40000  lhu         $a0, 0x0($a2)
    ctx->pc = 0x206778u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x20677c: 0x9388a02c  lbu         $t0, -0x5FD4($gp)
    ctx->pc = 0x20677cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294942764)));
    // 0x206780: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x206780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x206784: 0x94c60004  lhu         $a2, 0x4($a2)
    ctx->pc = 0x206784u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x206788: 0x24a70002  addiu       $a3, $a1, 0x2
    ctx->pc = 0x206788u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x20678c: 0x84600  sll         $t0, $t0, 24
    ctx->pc = 0x20678cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
    // 0x206790: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x206790u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x206794: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x206794u;
    SET_GPR_U32(ctx, 31, 0x20679Cu);
    ctx->pc = 0x206798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206794u;
    // 0x206798: 0x863021  addu        $a2, $a0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x206794u, 0x20679Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20679Cu;
label_20679c:
    // 0x20679c: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x20679cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2067a0: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x2067a0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2067a4: 0xdfb700a0  ld          $s7, 0xA0($sp)
    ctx->pc = 0x2067a4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2067a8: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x2067a8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2067ac: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x2067acu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2067b0: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x2067b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2067b4: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x2067b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2067b8: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2067b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2067bc: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x2067bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2067c0: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2067c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2067c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2067C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2067C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2067C4u;
        // 0x2067c8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2067C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2067CCu;
}
