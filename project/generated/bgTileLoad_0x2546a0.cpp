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

// Function: bgTileLoad
// Address: 0x2546a0 - 0x254bcc
void bgTileLoad_0x2546a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bgTileLoad_0x2546a0");
#endif

    switch (ctx->pc) {
        case 0x2546f0u: goto label_2546f0;
        case 0x25470cu: goto label_25470c;
        case 0x254760u: goto label_254760;
        case 0x254774u: goto label_254774;
        case 0x2547b4u: goto label_2547b4;
        case 0x2547c8u: goto label_2547c8;
        case 0x254818u: goto label_254818;
        case 0x254830u: goto label_254830;
        case 0x254890u: goto label_254890;
        case 0x2548a8u: goto label_2548a8;
        case 0x2548bcu: goto label_2548bc;
        case 0x2548d0u: goto label_2548d0;
        case 0x2548ecu: goto label_2548ec;
        case 0x254938u: goto label_254938;
        case 0x254950u: goto label_254950;
        case 0x2549a8u: goto label_2549a8;
        case 0x2549c4u: goto label_2549c4;
        case 0x254a10u: goto label_254a10;
        case 0x254a28u: goto label_254a28;
        case 0x254a60u: goto label_254a60;
        case 0x254aa8u: goto label_254aa8;
        case 0x254ac8u: goto label_254ac8;
        case 0x254b08u: goto label_254b08;
        case 0x254b18u: goto label_254b18;
        case 0x254b60u: goto label_254b60;
        case 0x254b6cu: goto label_254b6c;
        case 0x254b9cu: goto label_254b9c;
        default: break;
    }

    ctx->pc = 0x2546a0u;

    // 0x2546a0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2546a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x2546a4: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x2546a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x2546a8: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x2546a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x2546ac: 0x24638460  addiu       $v1, $v1, -0x7BA0
    ctx->pc = 0x2546acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935648));
    // 0x2546b0: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x2546b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x2546b4: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x2546b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x2546b8: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2546b8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2546bc: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x2546bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x2546c0: 0x3c1401fc  lui         $s4, 0x1FC
    ctx->pc = 0x2546c0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)508 << 16));
    // 0x2546c4: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x2546c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x2546c8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2546c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2546cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2546ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2546d0: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x2546d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x2546d4: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x2546d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x2546d8: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x2546d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x2546dc: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x2546dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x2546e0: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x2546e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2546e4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x2546e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2546e8: 0xc087166  jal         func_21C598
    ctx->pc = 0x2546E8u;
    SET_GPR_U32(ctx, 31, 0x2546F0u);
    ctx->pc = 0x2546ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2546E8u;
    // 0x2546ec: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C598u, 0x2546E8u, 0x2546F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2546F0u;
label_2546f0:
    // 0x2546f0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2546f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2546f4: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x2546f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x2546f8: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x2546f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2546fc: 0x248489a0  addiu       $a0, $a0, -0x7660
    ctx->pc = 0x2546fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936992));
    // 0x254700: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x254700u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x254704: 0xc087140  jal         func_21C500
    ctx->pc = 0x254704u;
    SET_GPR_U32(ctx, 31, 0x25470Cu);
    ctx->pc = 0x254708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254704u;
    // 0x254708: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C500u, 0x254704u, 0x25470Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25470Cu;
label_25470c:
    // 0x25470c: 0x8ec60000  lw          $a2, 0x0($s6)
    ctx->pc = 0x25470cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x254710: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x254710u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x254714: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x254714u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254718: 0x24848ee0  addiu       $a0, $a0, -0x7120
    ctx->pc = 0x254718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938336));
    // 0x25471c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x25471cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x254720: 0x268249b8  addiu       $v0, $s4, 0x49B8
    ctx->pc = 0x254720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 18872));
    // 0x254724: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x254724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x254728: 0x8fc50010  lw          $a1, 0x10($fp)
    ctx->pc = 0x254728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x25472c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25472cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x254730: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x254730u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x254734: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x254734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x254738: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x254738u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x25473c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x25473Cu;
    {
        const bool branch_taken_0x25473c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x254740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25473Cu;
        // 0x254740: 0x8e500014  lw          $s0, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25473c) {
            ctx->pc = 0x25477Cu;
            goto label_25477c;
        }
    }
    ctx->pc = 0x254744u;
    // 0x254744: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x254744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x254748: 0x2610000f  addiu       $s0, $s0, 0xF
    ctx->pc = 0x254748u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
    // 0x25474c: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x25474cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x254750: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x254750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x254754: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x254754u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x254758: 0xc08070e  jal         func_201C38
    ctx->pc = 0x254758u;
    SET_GPR_U32(ctx, 31, 0x254760u);
    ctx->pc = 0x25475Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254758u;
    // 0x25475c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x254758u, 0x254760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254760u;
label_254760:
    // 0x254760: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x254760u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254764: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x254764u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x254768: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x254768u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25476c: 0xc0b9516  jal         func_2E5458
    ctx->pc = 0x25476Cu;
    SET_GPR_U32(ctx, 31, 0x254774u);
    ctx->pc = 0x254770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25476Cu;
    // 0x254770: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5458u, 0x25476Cu, 0x254774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254774u;
label_254774:
    // 0x254774: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x254774u;
    {
        const bool branch_taken_0x254774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254774u;
        // 0x254778: 0x8ec60000  lw          $a2, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254774) {
            ctx->pc = 0x254780u;
            goto label_254780;
        }
    }
    ctx->pc = 0x25477Cu;
label_25477c:
    // 0x25477c: 0x8e530010  lw          $s3, 0x10($s2)
    ctx->pc = 0x25477cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_254780:
    // 0x254780: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x254780u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x254784: 0x268249b8  addiu       $v0, $s4, 0x49B8
    ctx->pc = 0x254784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 18872));
    // 0x254788: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x254788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25478c: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x25478cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x254790: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x254790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x254794: 0x24c67380  addiu       $a2, $a2, 0x7380
    ctx->pc = 0x254794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29568));
    // 0x254798: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x254798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25479c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x25479cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2547a0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2547a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2547a4: 0x8ec50010  lw          $a1, 0x10($s6)
    ctx->pc = 0x2547a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x2547a8: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x2547a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x2547ac: 0xc0b5848  jal         func_2D6120
    ctx->pc = 0x2547ACu;
    SET_GPR_U32(ctx, 31, 0x2547B4u);
    ctx->pc = 0x2547B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2547ACu;
    // 0x2547b0: 0xa62821  addu        $a1, $a1, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6120u, 0x2547ACu, 0x2547B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2547B4u;
label_2547b4:
    // 0x2547b4: 0xc6cc0004  lwc1        $f12, 0x4($s6)
    ctx->pc = 0x2547b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2547b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2547b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2547bc: 0xc6cd0008  lwc1        $f13, 0x8($s6)
    ctx->pc = 0x2547bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2547c0: 0xc0ad3a6  jal         func_2B4E98
    ctx->pc = 0x2547C0u;
    SET_GPR_U32(ctx, 31, 0x2547C8u);
    ctx->pc = 0x2547C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2547C0u;
    // 0x2547c4: 0xc6ce000c  lwc1        $f14, 0xC($s6) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4E98u, 0x2547C0u, 0x2547C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2547C8u;
label_2547c8:
    // 0x2547c8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2547c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2547cc: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x2547ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2547d0: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x2547d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2547d4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2547d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2547d8: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x2547d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2547dc: 0x8e65000c  lw          $a1, 0xC($s3)
    ctx->pc = 0x2547dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x2547e0: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x2547e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x2547e4: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x2547e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x2547e8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2547e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2547ec: 0x10a00016  beqz        $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2547ECu;
    {
        const bool branch_taken_0x2547ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2547F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2547ECu;
        // 0x2547f0: 0xae240004  sw          $a0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2547ec) {
            ctx->pc = 0x254848u;
            goto label_254848;
        }
    }
    ctx->pc = 0x2547F4u;
    // 0x2547f4: 0xb31021  addu        $v0, $a1, $s3
    ctx->pc = 0x2547f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x2547f8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2547f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2547fc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2547fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x254800: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x254800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x254804: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x254804u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x254808: 0x18600011  blez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x254808u;
    {
        const bool branch_taken_0x254808 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x25480Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254808u;
        // 0x25480c: 0xae23001c  sw          $v1, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254808) {
            ctx->pc = 0x254850u;
            goto label_254850;
        }
    }
    ctx->pc = 0x254810u;
    // 0x254810: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x254810u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254814: 0x0  nop
    ctx->pc = 0x254814u;
    // NOP
label_254818:
    // 0x254818: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x254818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x25481c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x25481cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254820: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x254820u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254824: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x254824u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x254828: 0xc095098  jal         func_254260
    ctx->pc = 0x254828u;
    SET_GPR_U32(ctx, 31, 0x254830u);
    ctx->pc = 0x25482Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254828u;
    // 0x25482c: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254260u, 0x254828u, 0x254830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254830u;
label_254830:
    // 0x254830: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x254830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x254834: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x254834u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x254838: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x254838u;
    {
        const bool branch_taken_0x254838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25483Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254838u;
        // 0x25483c: 0x2652002c  addiu       $s2, $s2, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254838) {
            ctx->pc = 0x254818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_254818;
        }
    }
    ctx->pc = 0x254840u;
    // 0x254840: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x254840u;
    {
        const bool branch_taken_0x254840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254840u;
        // 0x254844: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254840) {
            ctx->pc = 0x254854u;
            goto label_254854;
        }
    }
    ctx->pc = 0x254848u;
label_254848:
    // 0x254848: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x254848u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x25484c: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x25484cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_254850:
    // 0x254850: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x254850u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_254854:
    // 0x254854: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x254854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x254858: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x254858u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x25485c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x25485cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x254860: 0x8ec4001c  lw          $a0, 0x1C($s6)
    ctx->pc = 0x254860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 28)));
    // 0x254864: 0x8cc5002c  lw          $a1, 0x2C($a2)
    ctx->pc = 0x254864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x254868: 0xae24002c  sw          $a0, 0x2C($s1)
    ctx->pc = 0x254868u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 4));
    // 0x25486c: 0x8ec20020  lw          $v0, 0x20($s6)
    ctx->pc = 0x25486cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x254870: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x254870u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x254874: 0xae230030  sw          $v1, 0x30($s1)
    ctx->pc = 0x254874u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
    // 0x254878: 0x8ec20018  lw          $v0, 0x18($s6)
    ctx->pc = 0x254878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
    // 0x25487c: 0x10a00081  beqz        $a1, . + 4 + (0x81 << 2)
    ctx->pc = 0x25487Cu;
    {
        const bool branch_taken_0x25487c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x254880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25487Cu;
        // 0x254880: 0xae220038  sw          $v0, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25487c) {
            ctx->pc = 0x254A84u;
            goto label_254a84;
        }
    }
    ctx->pc = 0x254884u;
    // 0x254884: 0x2417002c  addiu       $s7, $zero, 0x2C
    ctx->pc = 0x254884u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x254888: 0x2978018  mult        $s0, $s4, $s7
    ctx->pc = 0x254888u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x25488c: 0x0  nop
    ctx->pc = 0x25488cu;
    // NOP
label_254890:
    // 0x254890: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x254890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254894: 0x2061021  addu        $v0, $s0, $a2
    ctx->pc = 0x254894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x254898: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x254898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25489c: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x25489cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x2548a0: 0xc097a4c  jal         func_25E930
    ctx->pc = 0x2548A0u;
    SET_GPR_U32(ctx, 31, 0x2548A8u);
    ctx->pc = 0x2548A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2548A0u;
    // 0x2548a4: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E930u, 0x2548A0u, 0x2548A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2548A8u;
label_2548a8:
    // 0x2548a8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2548a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2548ac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2548acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2548b0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2548b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2548b4: 0xc098124  jal         func_260490
    ctx->pc = 0x2548B4u;
    SET_GPR_U32(ctx, 31, 0x2548BCu);
    ctx->pc = 0x2548B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2548B4u;
    // 0x2548b8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260490u, 0x2548B4u, 0x2548BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2548BCu;
label_2548bc:
    // 0x2548bc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2548bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2548c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2548c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2548c4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2548c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2548c8: 0xc097a30  jal         func_25E8C0
    ctx->pc = 0x2548C8u;
    SET_GPR_U32(ctx, 31, 0x2548D0u);
    ctx->pc = 0x2548CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2548C8u;
    // 0x2548cc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E8C0u, 0x2548C8u, 0x2548D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2548D0u;
label_2548d0:
    // 0x2548d0: 0x8ec50018  lw          $a1, 0x18($s6)
    ctx->pc = 0x2548d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
    // 0x2548d4: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2548D4u;
    {
        const bool branch_taken_0x2548d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2548d4) {
            ctx->pc = 0x2548D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2548D4u;
            // 0x2548d8: 0x8e260000  lw          $a2, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2548F0u;
            goto label_2548f0;
        }
    }
    ctx->pc = 0x2548DCu;
    // 0x2548dc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2548dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2548e0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2548e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2548e4: 0xc0981a8  jal         func_2606A0
    ctx->pc = 0x2548E4u;
    SET_GPR_U32(ctx, 31, 0x2548ECu);
    ctx->pc = 0x2548E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2548E4u;
    // 0x2548e8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2606A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2606A0u, 0x2548E4u, 0x2548ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2548ECu;
label_2548ec:
    // 0x2548ec: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x2548ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2548f0:
    // 0x2548f0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2548f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2548f4: 0x2062021  addu        $a0, $s0, $a2
    ctx->pc = 0x2548f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x2548f8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2548f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2548fc: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x2548fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x254900: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x254900u;
    {
        const bool branch_taken_0x254900 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x254904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254900u;
        // 0x254904: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254900) {
            ctx->pc = 0x254910u;
            goto label_254910;
        }
    }
    ctx->pc = 0x254908u;
    // 0x254908: 0xb31021  addu        $v0, $a1, $s3
    ctx->pc = 0x254908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x25490c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x25490cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_254910:
    // 0x254910: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x254910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x254914: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x254914u;
    {
        const bool branch_taken_0x254914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x254918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254914u;
        // 0x254918: 0x538021  addu        $s0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254914) {
            ctx->pc = 0x254970u;
            goto label_254970;
        }
    }
    ctx->pc = 0x25491Cu;
    // 0x25491c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x25491cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254920: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x254920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x254924: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x254924u;
    {
        const bool branch_taken_0x254924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x254928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254924u;
        // 0x254928: 0xac900008  sw          $s0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254924) {
            ctx->pc = 0x254970u;
            goto label_254970;
        }
    }
    ctx->pc = 0x25492Cu;
    // 0x25492c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x25492cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254930: 0x26950001  addiu       $s5, $s4, 0x1
    ctx->pc = 0x254930u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x254934: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x254934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_254938:
    // 0x254938: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x254938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25493c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x25493cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x254940: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x254940u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x254944: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x254944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x254948: 0xc0950bc  jal         func_2542F0
    ctx->pc = 0x254948u;
    SET_GPR_U32(ctx, 31, 0x254950u);
    ctx->pc = 0x25494Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254948u;
    // 0x25494c: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2542F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2542F0u, 0x254948u, 0x254950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254950u;
label_254950:
    // 0x254950: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x254950u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x254954: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x254954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254958: 0x901821  addu        $v1, $a0, $s0
    ctx->pc = 0x254958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x25495c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x25495cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x254960: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x254960u;
    {
        const bool branch_taken_0x254960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x254964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254960u;
        // 0x254964: 0x901021  addu        $v0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254960) {
            ctx->pc = 0x254938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_254938;
        }
    }
    ctx->pc = 0x254968u;
    // 0x254968: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x254968u;
    {
        const bool branch_taken_0x254968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25496Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254968u;
        // 0x25496c: 0x8e260000  lw          $a2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254968) {
            ctx->pc = 0x254974u;
            goto label_254974;
        }
    }
    ctx->pc = 0x254970u;
label_254970:
    // 0x254970: 0x26950001  addiu       $s5, $s4, 0x1
    ctx->pc = 0x254970u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_254974:
    // 0x254974: 0x2971018  mult        $v0, $s4, $s7
    ctx->pc = 0x254974u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x254978: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x254978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x25497c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x25497cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x254980: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x254980u;
    {
        const bool branch_taken_0x254980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x254980) {
            ctx->pc = 0x254984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254980u;
            // 0x254984: 0x2971018  mult        $v0, $s4, $s7 (Delay Slot)
            { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2549E4u;
            goto label_2549e4;
        }
    }
    ctx->pc = 0x254988u;
    // 0x254988: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x254988u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x25498c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x25498cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254990: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x254990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x254994: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x254994u;
    {
        const bool branch_taken_0x254994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x254998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254994u;
        // 0x254998: 0xac70000c  sw          $s0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254994) {
            ctx->pc = 0x2549E0u;
            goto label_2549e0;
        }
    }
    ctx->pc = 0x25499Cu;
    // 0x25499c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x25499cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2549a0: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x2549a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2549a4: 0x0  nop
    ctx->pc = 0x2549a4u;
    // NOP
label_2549a8:
    // 0x2549a8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2549a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2549ac: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2549acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2549b0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2549b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2549b4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2549b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2549b8: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x2549b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x2549bc: 0xc0950d8  jal         func_254360
    ctx->pc = 0x2549BCu;
    SET_GPR_U32(ctx, 31, 0x2549C4u);
    ctx->pc = 0x2549C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2549BCu;
    // 0x2549c0: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254360u, 0x2549BCu, 0x2549C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2549C4u;
label_2549c4:
    // 0x2549c4: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2549c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2549c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2549c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2549cc: 0x901821  addu        $v1, $a0, $s0
    ctx->pc = 0x2549ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2549d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2549d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2549d4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2549D4u;
    {
        const bool branch_taken_0x2549d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2549D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2549D4u;
        // 0x2549d8: 0x901021  addu        $v0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2549d4) {
            ctx->pc = 0x2549A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2549a8;
        }
    }
    ctx->pc = 0x2549DCu;
    // 0x2549dc: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x2549dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2549e0:
    // 0x2549e0: 0x2971018  mult        $v0, $s4, $s7
    ctx->pc = 0x2549e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2549e4:
    // 0x2549e4: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x2549e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2549e8: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2549e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2549ec: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x2549ECu;
    {
        const bool branch_taken_0x2549ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2549ec) {
            ctx->pc = 0x2549F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2549ECu;
            // 0x2549f0: 0x2971018  mult        $v0, $s4, $s7 (Delay Slot)
            { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x254A48u;
            goto label_254a48;
        }
    }
    ctx->pc = 0x2549F4u;
    // 0x2549f4: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x2549f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2549f8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2549f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2549fc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2549fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x254a00: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x254A00u;
    {
        const bool branch_taken_0x254a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x254A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254A00u;
        // 0x254a04: 0xac700010  sw          $s0, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254a00) {
            ctx->pc = 0x254A44u;
            goto label_254a44;
        }
    }
    ctx->pc = 0x254A08u;
    // 0x254a08: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x254a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254a0c: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x254a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_254a10:
    // 0x254a10: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x254a10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254a14: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x254a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x254a18: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x254a18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x254a1c: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x254a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x254a20: 0xc0950f4  jal         func_2543D0
    ctx->pc = 0x254A20u;
    SET_GPR_U32(ctx, 31, 0x254A28u);
    ctx->pc = 0x254A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254A20u;
    // 0x254a24: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2543D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2543D0u, 0x254A20u, 0x254A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254A28u;
label_254a28:
    // 0x254a28: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x254a28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x254a2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x254a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254a30: 0x901821  addu        $v1, $a0, $s0
    ctx->pc = 0x254a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x254a34: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x254a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x254a38: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x254A38u;
    {
        const bool branch_taken_0x254a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x254A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254A38u;
        // 0x254a3c: 0x901021  addu        $v0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254a38) {
            ctx->pc = 0x254A10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_254a10;
        }
    }
    ctx->pc = 0x254A40u;
    // 0x254a40: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x254a40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_254a44:
    // 0x254a44: 0x2971018  mult        $v0, $s4, $s7
    ctx->pc = 0x254a44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_254a48:
    // 0x254a48: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x254a48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254a4c: 0x2a0a02d  daddu       $s4, $s5, $zero
    ctx->pc = 0x254a4cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254a50: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x254a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x254a54: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x254a54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254a58: 0xc095110  jal         func_254440
    ctx->pc = 0x254A58u;
    SET_GPR_U32(ctx, 31, 0x254A60u);
    ctx->pc = 0x254A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254A58u;
    // 0x254a5c: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254440u, 0x254A58u, 0x254A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254A60u;
label_254a60:
    // 0x254a60: 0x2972018  mult        $a0, $s4, $s7
    ctx->pc = 0x254a60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x254a64: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x254a64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x254a68: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x254a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x254a6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x254a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x254a70: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x254a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x254a74: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x254a74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x254a78: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x254a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x254a7c: 0x5460ff84  bnel        $v1, $zero, . + 4 + (-0x7C << 2)
    ctx->pc = 0x254A7Cu;
    {
        const bool branch_taken_0x254a7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x254a7c) {
            ctx->pc = 0x254A80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254A7Cu;
            // 0x254a80: 0x2978018  mult        $s0, $s4, $s7 (Delay Slot)
            { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x254890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_254890;
        }
    }
    ctx->pc = 0x254A84u;
label_254a84:
    // 0x254a84: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x254a84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x254a88: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x254a88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x254a8c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x254a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x254a90: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x254A90u;
    {
        const bool branch_taken_0x254a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x254A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254A90u;
        // 0x254a94: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254a90) {
            ctx->pc = 0x254AE4u;
            goto label_254ae4;
        }
    }
    ctx->pc = 0x254A98u;
    // 0x254a98: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x254a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x254a9c: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x254a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x254aa0: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x254aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x254aa4: 0x0  nop
    ctx->pc = 0x254aa4u;
    // NOP
label_254aa8:
    // 0x254aa8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x254aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x254aac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x254aacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254ab0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x254ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x254ab4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x254ab4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x254ab8: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x254ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x254abc: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x254abcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x254ac0: 0xc095184  jal         func_254610
    ctx->pc = 0x254AC0u;
    SET_GPR_U32(ctx, 31, 0x254AC8u);
    ctx->pc = 0x254AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254AC0u;
    // 0x254ac4: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254610u, 0x254AC0u, 0x254AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254AC8u;
label_254ac8:
    // 0x254ac8: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x254ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x254acc: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x254accu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x254ad0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x254ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254ad4: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x254ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x254ad8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x254ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x254adc: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x254ADCu;
    {
        const bool branch_taken_0x254adc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x254adc) {
            ctx->pc = 0x254AE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254ADCu;
            // 0x254ae0: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x254AA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_254aa8;
        }
    }
    ctx->pc = 0x254AE4u;
label_254ae4:
    // 0x254ae4: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x254ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x254ae8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x254ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x254aec: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x254aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x254af0: 0x4400013  bltz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x254AF0u;
    {
        const bool branch_taken_0x254af0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x254AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254AF0u;
        // 0x254af4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254af0) {
            ctx->pc = 0x254B40u;
            goto label_254b40;
        }
    }
    ctx->pc = 0x254AF8u;
    // 0x254af8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x254af8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254afc: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x254afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x254b00: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x254b00u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x254b04: 0x0  nop
    ctx->pc = 0x254b04u;
    // NOP
label_254b08:
    // 0x254b08: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x254b08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254b0c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x254b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x254b10: 0xc0ade40  jal         func_2B7900
    ctx->pc = 0x254B10u;
    SET_GPR_U32(ctx, 31, 0x254B18u);
    ctx->pc = 0x254B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254B10u;
    // 0x254b14: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7900u, 0x254B10u, 0x254B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254B18u;
label_254b18:
    // 0x254b18: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x254b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x254b1c: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x254b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x254b20: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x254b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x254b24: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x254b24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254b28: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x254b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x254b2c: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x254b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
    // 0x254b30: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x254b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x254b34: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x254b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x254b38: 0x463fff3  bgezl       $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x254B38u;
    {
        const bool branch_taken_0x254b38 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x254b38) {
            ctx->pc = 0x254B3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254B38u;
            // 0x254b3c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x254B08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_254b08;
        }
    }
    ctx->pc = 0x254B40u;
label_254b40:
    // 0x254b40: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x254b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x254b44: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x254b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x254b48: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x254B48u;
    {
        const bool branch_taken_0x254b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x254B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254B48u;
        // 0x254b4c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254b48) {
            ctx->pc = 0x254B80u;
            goto label_254b80;
        }
    }
    ctx->pc = 0x254B50u;
    // 0x254b50: 0x2410002c  addiu       $s0, $zero, 0x2C
    ctx->pc = 0x254b50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x254b54: 0x2041021  addu        $v0, $s0, $a0
    ctx->pc = 0x254b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x254b58: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x254b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x254b5c: 0x2610002c  addiu       $s0, $s0, 0x2C
    ctx->pc = 0x254b5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_254b60:
    // 0x254b60: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x254b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254b64: 0xc097ee2  jal         func_25FB88
    ctx->pc = 0x254B64u;
    SET_GPR_U32(ctx, 31, 0x254B6Cu);
    ctx->pc = 0x254B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254B64u;
    // 0x254b68: 0xac720024  sw          $s2, 0x24($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FB88u, 0x254B64u, 0x254B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254B6Cu;
label_254b6c:
    // 0x254b6c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x254b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x254b70: 0x2041021  addu        $v0, $s0, $a0
    ctx->pc = 0x254b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x254b74: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x254b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x254b78: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x254B78u;
    {
        const bool branch_taken_0x254b78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x254B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254B78u;
        // 0x254b7c: 0x2610002c  addiu       $s0, $s0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254b78) {
            ctx->pc = 0x254B60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_254b60;
        }
    }
    ctx->pc = 0x254B80u;
label_254b80:
    // 0x254b80: 0x96c20014  lhu         $v0, 0x14($s6)
    ctx->pc = 0x254b80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 20)));
    // 0x254b84: 0xa6220034  sh          $v0, 0x34($s1)
    ctx->pc = 0x254b84u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 52), (uint16_t)GPR_U32(ctx, 2));
    // 0x254b88: 0x8fc40010  lw          $a0, 0x10($fp)
    ctx->pc = 0x254b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x254b8c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x254B8Cu;
    {
        const bool branch_taken_0x254b8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x254B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254B8Cu;
        // 0x254b90: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254b8c) {
            ctx->pc = 0x254B9Cu;
            goto label_254b9c;
        }
    }
    ctx->pc = 0x254B94u;
    // 0x254b94: 0xc09943a  jal         func_2650E8
    ctx->pc = 0x254B94u;
    SET_GPR_U32(ctx, 31, 0x254B9Cu);
    ctx->pc = 0x254B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254B94u;
    // 0x254b98: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2650E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2650E8u, 0x254B94u, 0x254B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254B9Cu;
label_254b9c:
    // 0x254b9c: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x254b9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x254ba0: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x254ba0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x254ba4: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x254ba4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x254ba8: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x254ba8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x254bac: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x254bacu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x254bb0: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x254bb0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x254bb4: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x254bb4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x254bb8: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x254bb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x254bbc: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x254bbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x254bc0: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x254bc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x254bc4: 0x3e00008  jr          $ra
    ctx->pc = 0x254BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254BC4u;
        // 0x254bc8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254BC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254BCCu;
}
