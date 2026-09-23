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

// Function: mmCellBits
// Address: 0x2452e8 - 0x2454d4
void mmCellBits_0x2452e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmCellBits_0x2452e8");
#endif

    switch (ctx->pc) {
        case 0x24530cu: goto label_24530c;
        case 0x24537cu: goto label_24537c;
        case 0x2453e4u: goto label_2453e4;
        case 0x24540cu: goto label_24540c;
        case 0x245430u: goto label_245430;
        default: break;
    }

    ctx->pc = 0x2452e8u;

    // 0x2452e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2452e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2452ec: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2452ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2452f0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2452f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2452f4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2452f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2452f8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2452f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2452fc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2452fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x245300: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x245300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x245304: 0xc09148e  jal         func_245238
    ctx->pc = 0x245304u;
    SET_GPR_U32(ctx, 31, 0x24530Cu);
    ctx->pc = 0x245308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245304u;
    // 0x245308: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245238u, 0x245304u, 0x24530Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24530Cu;
label_24530c:
    // 0x24530c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x24530cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245310: 0x11000027  beqz        $t0, . + 4 + (0x27 << 2)
    ctx->pc = 0x245310u;
    {
        const bool branch_taken_0x245310 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x245314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245310u;
        // 0x245314: 0x8f82a0d8  lw          $v0, -0x5F28($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245310) {
            ctx->pc = 0x2453B0u;
            goto label_2453b0;
        }
    }
    ctx->pc = 0x245318u;
    // 0x245318: 0x8d020018  lw          $v0, 0x18($t0)
    ctx->pc = 0x245318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x24531c: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x24531cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x245320: 0x8d030010  lw          $v1, 0x10($t0)
    ctx->pc = 0x245320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x245324: 0x34e7ffef  ori         $a3, $a3, 0xFFEF
    ctx->pc = 0x245324u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65519);
    // 0x245328: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x245328u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24532c: 0x8d040014  lw          $a0, 0x14($t0)
    ctx->pc = 0x24532cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x245330: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x245330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x245334: 0x2231823  subu        $v1, $s1, $v1
    ctx->pc = 0x245334u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x245338: 0x8c460024  lw          $a2, 0x24($v0)
    ctx->pc = 0x245338u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x24533c: 0x34d43  sra         $t1, $v1, 21
    ctx->pc = 0x24533cu;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 3), 21));
    // 0x245340: 0x8f82a0dc  lw          $v0, -0x5F24($gp)
    ctx->pc = 0x245340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942940)));
    // 0x245344: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x245344u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x245348: 0x8d03000c  lw          $v1, 0xC($t0)
    ctx->pc = 0x245348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x24534c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x24534cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x245350: 0x1252818  mult        $a1, $t1, $a1
    ctx->pc = 0x245350u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x245354: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x245354u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x245358: 0x8f84a0d8  lw          $a0, -0x5F28($gp)
    ctx->pc = 0x245358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
    // 0x24535c: 0x2431823  subu        $v1, $s2, $v1
    ctx->pc = 0x24535cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x245360: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x245360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x245364: 0x34d43  sra         $t1, $v1, 21
    ctx->pc = 0x245364u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 3), 21));
    // 0x245368: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x245368u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x24536c: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x24536cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x245370: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x245370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x245374: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x245374u;
    {
        const bool branch_taken_0x245374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245374u;
        // 0x245378: 0xaf84a0d8  sw          $a0, -0x5F28($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942936), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245374) {
            ctx->pc = 0x2453A0u;
            goto label_2453a0;
        }
    }
    ctx->pc = 0x24537Cu;
label_24537c:
    // 0x24537c: 0x8f82a0d8  lw          $v0, -0x5F28($gp)
    ctx->pc = 0x24537cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
    // 0x245380: 0x1252818  mult        $a1, $t1, $a1
    ctx->pc = 0x245380u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x245384: 0xa2080  sll         $a0, $t2, 2
    ctx->pc = 0x245384u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x245388: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x245388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x24538c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x24538cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x245390: 0x74d43  sra         $t1, $a3, 21
    ctx->pc = 0x245390u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 7), 21));
    // 0x245394: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x245394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x245398: 0xaf82a0d8  sw          $v0, -0x5F28($gp)
    ctx->pc = 0x245398u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942936), GPR_U32(ctx, 2));
    // 0x24539c: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x24539cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_2453a0:
    // 0x2453a0: 0xaf88a0fc  sw          $t0, -0x5F04($gp)
    ctx->pc = 0x2453a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942972), GPR_U32(ctx, 8));
    // 0x2453a4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2453a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2453a8: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x2453A8u;
    {
        const bool branch_taken_0x2453a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2453ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2453A8u;
        // 0x2453ac: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2453a8) {
            ctx->pc = 0x2454B8u;
            goto label_2454b8;
        }
    }
    ctx->pc = 0x2453B0u;
label_2453b0:
    // 0x2453b0: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x2453b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x2453b4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2453b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2453b8: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x2453B8u;
    {
        const bool branch_taken_0x2453b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2453BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2453B8u;
        // 0x2453bc: 0x8f82a0f8  lw          $v0, -0x5F08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942968)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2453b8) {
            ctx->pc = 0x2454B0u;
            goto label_2454b0;
        }
    }
    ctx->pc = 0x2453C0u;
    // 0x2453c0: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x2453C0u;
    {
        const bool branch_taken_0x2453c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2453C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2453C0u;
        // 0x2453c4: 0x8f82a004  lw          $v0, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2453c0) {
            ctx->pc = 0x2454B0u;
            goto label_2454b0;
        }
    }
    ctx->pc = 0x2453C8u;
    // 0x2453c8: 0x3c100010  lui         $s0, 0x10
    ctx->pc = 0x2453c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)16 << 16));
    // 0x2453cc: 0x8f83a158  lw          $v1, -0x5EA8($gp)
    ctx->pc = 0x2453ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943064)));
    // 0x2453d0: 0x84440022  lh          $a0, 0x22($v0)
    ctx->pc = 0x2453d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 34)));
    // 0x2453d4: 0x8f85a188  lw          $a1, -0x5E78($gp)
    ctx->pc = 0x2453d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943112)));
    // 0x2453d8: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x2453d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2453dc: 0xc092e5e  jal         func_24B978
    ctx->pc = 0x2453DCu;
    SET_GPR_U32(ctx, 31, 0x2453E4u);
    ctx->pc = 0x2453E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2453DCu;
    // 0x2453e0: 0x42400  sll         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B978u, 0x2453DCu, 0x2453E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2453E4u;
label_2453e4:
    // 0x2453e4: 0x8f85a004  lw          $a1, -0x5FFC($gp)
    ctx->pc = 0x2453e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x2453e8: 0x8f83a168  lw          $v1, -0x5E98($gp)
    ctx->pc = 0x2453e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943080)));
    // 0x2453ec: 0x84a40026  lh          $a0, 0x26($a1)
    ctx->pc = 0x2453ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 38)));
    // 0x2453f0: 0x8f86a15c  lw          $a2, -0x5EA4($gp)
    ctx->pc = 0x2453f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943068)));
    // 0x2453f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2453f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2453f8: 0x8f85a18c  lw          $a1, -0x5E74($gp)
    ctx->pc = 0x2453f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943116)));
    // 0x2453fc: 0x709821  addu        $s3, $v1, $s0
    ctx->pc = 0x2453fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x245400: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x245400u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x245404: 0xc092e5e  jal         func_24B978
    ctx->pc = 0x245404u;
    SET_GPR_U32(ctx, 31, 0x24540Cu);
    ctx->pc = 0x245408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245404u;
    // 0x245408: 0x42400  sll         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B978u, 0x245404u, 0x24540Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24540Cu;
label_24540c:
    // 0x24540c: 0x8f83a16c  lw          $v1, -0x5E94($gp)
    ctx->pc = 0x24540cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943084)));
    // 0x245410: 0x8f88a0f8  lw          $t0, -0x5F08($gp)
    ctx->pc = 0x245410u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942968)));
    // 0x245414: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x245414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x245418: 0x11000025  beqz        $t0, . + 4 + (0x25 << 2)
    ctx->pc = 0x245418u;
    {
        const bool branch_taken_0x245418 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x24541Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245418u;
        // 0x24541c: 0x705821  addu        $t3, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245418) {
            ctx->pc = 0x2454B0u;
            goto label_2454b0;
        }
    }
    ctx->pc = 0x245420u;
    // 0x245420: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x245420u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x245424: 0x3c09ffe0  lui         $t1, 0xFFE0
    ctx->pc = 0x245424u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65504 << 16));
    // 0x245428: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x245428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x24542c: 0x0  nop
    ctx->pc = 0x24542cu;
    // NOP
label_245430:
    // 0x245430: 0x544c001d  bnel        $v0, $t4, . + 4 + (0x1D << 2)
    ctx->pc = 0x245430u;
    {
        const bool branch_taken_0x245430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 12));
        if (branch_taken_0x245430) {
            ctx->pc = 0x245434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245430u;
            // 0x245434: 0x8d080038  lw          $t0, 0x38($t0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2454A8u;
            goto label_2454a8;
        }
    }
    ctx->pc = 0x245438u;
    // 0x245438: 0x8d020018  lw          $v0, 0x18($t0)
    ctx->pc = 0x245438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x24543c: 0x8d030014  lw          $v1, 0x14($t0)
    ctx->pc = 0x24543cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x245440: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x245440u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x245444: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x245444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x245448: 0x35023  negu        $t2, $v1
    ctx->pc = 0x245448u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x24544c: 0x8c460024  lw          $a2, 0x24($v0)
    ctx->pc = 0x24544cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x245450: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x245450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x245454: 0x143182b  sltu        $v1, $t2, $v1
    ctx->pc = 0x245454u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x245458: 0x50600013  beql        $v1, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x245458u;
    {
        const bool branch_taken_0x245458 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x245458) {
            ctx->pc = 0x24545Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245458u;
            // 0x24545c: 0x8d080038  lw          $t0, 0x38($t0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2454A8u;
            goto label_2454a8;
        }
    }
    ctx->pc = 0x245460u;
    // 0x245460: 0x8d02000c  lw          $v0, 0xC($t0)
    ctx->pc = 0x245460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x245464: 0x8d030010  lw          $v1, 0x10($t0)
    ctx->pc = 0x245464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x245468: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x245468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x24546c: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x24546cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x245470: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x245470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x245474: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x245474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x245478: 0x2423823  subu        $a3, $s2, $v0
    ctx->pc = 0x245478u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x24547c: 0x1631821  addu        $v1, $t3, $v1
    ctx->pc = 0x24547cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x245480: 0x51540  sll         $v0, $a1, 21
    ctx->pc = 0x245480u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 21));
    // 0x245484: 0x42540  sll         $a0, $a0, 21
    ctx->pc = 0x245484u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 21));
    // 0x245488: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x245488u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x24548c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24548Cu;
    {
        const bool branch_taken_0x24548c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24548Cu;
        // 0x245490: 0x691824  and         $v1, $v1, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24548c) {
            ctx->pc = 0x2454A4u;
            goto label_2454a4;
        }
    }
    ctx->pc = 0x245494u;
    // 0x245494: 0x2231823  subu        $v1, $s1, $v1
    ctx->pc = 0x245494u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x245498: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x245498u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x24549c: 0x5440ffb7  bnel        $v0, $zero, . + 4 + (-0x49 << 2)
    ctx->pc = 0x24549Cu;
    {
        const bool branch_taken_0x24549c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24549c) {
            ctx->pc = 0x2454A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24549Cu;
            // 0x2454a0: 0x34d43  sra         $t1, $v1, 21 (Delay Slot)
            SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 3), 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24537Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24537c;
        }
    }
    ctx->pc = 0x2454A4u;
label_2454a4:
    // 0x2454a4: 0x8d080038  lw          $t0, 0x38($t0)
    ctx->pc = 0x2454a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 56)));
label_2454a8:
    // 0x2454a8: 0x5500ffe1  bnel        $t0, $zero, . + 4 + (-0x1F << 2)
    ctx->pc = 0x2454A8u;
    {
        const bool branch_taken_0x2454a8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x2454a8) {
            ctx->pc = 0x2454ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2454A8u;
            // 0x2454ac: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x245430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_245430;
        }
    }
    ctx->pc = 0x2454B0u;
label_2454b0:
    // 0x2454b0: 0xaf80a0fc  sw          $zero, -0x5F04($gp)
    ctx->pc = 0x2454b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942972), GPR_U32(ctx, 0));
    // 0x2454b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2454b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2454b8:
    // 0x2454b8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2454b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2454bc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2454bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2454c0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2454c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2454c4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2454c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2454c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2454c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2454cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2454CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2454D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2454CCu;
        // 0x2454d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2454CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2454D4u;
}
