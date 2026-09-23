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

// Function: draw_menuitem
// Address: 0x22d230 - 0x22d698
void draw_menuitem_0x22d230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("draw_menuitem_0x22d230");
#endif

    switch (ctx->pc) {
        case 0x22d28cu: goto label_22d28c;
        case 0x22d330u: goto label_22d330;
        case 0x22d34cu: goto label_22d34c;
        case 0x22d3ecu: goto label_22d3ec;
        case 0x22d404u: goto label_22d404;
        case 0x22d468u: goto label_22d468;
        case 0x22d474u: goto label_22d474;
        case 0x22d47cu: goto label_22d47c;
        case 0x22d4e4u: goto label_22d4e4;
        case 0x22d4ecu: goto label_22d4ec;
        case 0x22d504u: goto label_22d504;
        case 0x22d50cu: goto label_22d50c;
        case 0x22d5a4u: goto label_22d5a4;
        case 0x22d620u: goto label_22d620;
        default: break;
    }

    ctx->pc = 0x22d230u;

    // 0x22d230: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x22d230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x22d234: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x22d234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x22d238: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x22d238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x22d23c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x22d23cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d240: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x22d240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x22d244: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x22d244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x22d248: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x22d248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x22d24c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x22d24cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x22d250: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x22d250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x22d254: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x22d254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x22d258: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x22d258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x22d25c: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x22d25cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x22d260: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x22d260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x22d264: 0x8e960010  lw          $s6, 0x10($s4)
    ctx->pc = 0x22d264u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x22d268: 0x96c5000a  lhu         $a1, 0xA($s6)
    ctx->pc = 0x22d268u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 10)));
    // 0x22d26c: 0x30a20200  andi        $v0, $a1, 0x200
    ctx->pc = 0x22d26cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)512);
    // 0x22d270: 0x144000fd  bnez        $v0, . + 4 + (0xFD << 2)
    ctx->pc = 0x22D270u;
    {
        const bool branch_taken_0x22d270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D270u;
        // 0x22d274: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d270) {
            ctx->pc = 0x22D668u;
            goto label_22d668;
        }
    }
    ctx->pc = 0x22D278u;
    // 0x22d278: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x22d278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x22d27c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22D27Cu;
    {
        const bool branch_taken_0x22d27c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D27Cu;
        // 0x22d280: 0x30a20004  andi        $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d27c) {
            ctx->pc = 0x22D294u;
            goto label_22d294;
        }
    }
    ctx->pc = 0x22D284u;
    // 0x22d284: 0xc08b3dc  jal         func_22CF70
    ctx->pc = 0x22D284u;
    SET_GPR_U32(ctx, 31, 0x22D28Cu);
    ctx->pc = 0x22CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CF70u, 0x22D284u, 0x22D28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D28Cu;
label_22d28c:
    // 0x22d28c: 0x96c5000a  lhu         $a1, 0xA($s6)
    ctx->pc = 0x22d28cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 10)));
    // 0x22d290: 0x30a20004  andi        $v0, $a1, 0x4
    ctx->pc = 0x22d290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
label_22d294:
    // 0x22d294: 0x104000f3  beqz        $v0, . + 4 + (0xF3 << 2)
    ctx->pc = 0x22D294u;
    {
        const bool branch_taken_0x22d294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D294u;
        // 0x22d298: 0x30a20008  andi        $v0, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d294) {
            ctx->pc = 0x22D664u;
            goto label_22d664;
        }
    }
    ctx->pc = 0x22D29Cu;
    // 0x22d29c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x22D29Cu;
    {
        const bool branch_taken_0x22d29c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D29Cu;
        // 0x22d2a0: 0x8ed3000c  lw          $s3, 0xC($s6) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d29c) {
            ctx->pc = 0x22D304u;
            goto label_22d304;
        }
    }
    ctx->pc = 0x22D2A4u;
    // 0x22d2a4: 0x54182  srl         $t0, $a1, 6
    ctx->pc = 0x22d2a4u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 5), 6));
    // 0x22d2a8: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x22d2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x22d2ac: 0x8e670008  lw          $a3, 0x8($s3)
    ctx->pc = 0x22d2acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x22d2b0: 0x39080001  xori        $t0, $t0, 0x1
    ctx->pc = 0x22d2b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)1);
    // 0x22d2b4: 0x96850002  lhu         $a1, 0x2($s4)
    ctx->pc = 0x22d2b4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x22d2b8: 0x31080001  andi        $t0, $t0, 0x1
    ctx->pc = 0x22d2b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x22d2bc: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x22d2bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x22d2c0: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x22d2c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x22d2c4: 0x96840000  lhu         $a0, 0x0($s4)
    ctx->pc = 0x22d2c4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x22d2c8: 0x24a5000e  addiu       $a1, $a1, 0xE
    ctx->pc = 0x22d2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14));
    // 0x22d2cc: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x22d2ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x22d2d0: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x22d2d0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x22d2d4: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x22d2d4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x22d2d8: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x22d2d8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22d2dc: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x22d2dcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22d2e0: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x22d2e0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22d2e4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x22d2e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22d2e8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x22d2e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22d2ec: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x22d2ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22d2f0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x22d2f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22d2f4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x22d2f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22d2f8: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x22d2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22d2fc: 0x808b438  j           func_22D0E0
    ctx->pc = 0x22D2FCu;
    ctx->pc = 0x22D300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D2FCu;
    // 0x22d300: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D0E0u;
    draw_slider_0x22d0e0(rdram, ctx, runtime); return;
    ctx->pc = 0x22D304u;
label_22d304:
    // 0x22d304: 0x8f84a01c  lw          $a0, -0x5FE4($gp)
    ctx->pc = 0x22d304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942748)));
    // 0x22d308: 0x3c111e1e  lui         $s1, 0x1E1E
    ctx->pc = 0x22d308u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)7710 << 16));
    // 0x22d30c: 0x30a20040  andi        $v0, $a1, 0x40
    ctx->pc = 0x22d30cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)64);
    // 0x22d310: 0x8f83a020  lw          $v1, -0x5FE0($gp)
    ctx->pc = 0x22d310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942752)));
    // 0x22d314: 0x36311e80  ori         $s1, $s1, 0x1E80
    ctx->pc = 0x22d314u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)7808);
    // 0x22d318: 0x241e0040  addiu       $fp, $zero, 0x40
    ctx->pc = 0x22d318u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x22d31c: 0x82880a  movz        $s1, $a0, $v0
    ctx->pc = 0x22d31cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 4));
    // 0x22d320: 0x62f00a  movz        $fp, $v1, $v0
    ctx->pc = 0x22d320u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 3));
    // 0x22d324: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x22d324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d328: 0xc08b074  jal         func_22C1D0
    ctx->pc = 0x22D328u;
    SET_GPR_U32(ctx, 31, 0x22D330u);
    ctx->pc = 0x22D32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D328u;
    // 0x22d32c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C1D0u, 0x22D328u, 0x22D330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D330u;
label_22d330:
    // 0x22d330: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x22d330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x22d334: 0x96c2000a  lhu         $v0, 0xA($s6)
    ctx->pc = 0x22d334u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 10)));
    // 0x22d338: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x22d338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x22d33c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x22D33Cu;
    {
        const bool branch_taken_0x22d33c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d33c) {
            ctx->pc = 0x22D340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22D33Cu;
            // 0x22d340: 0x8e62001c  lw          $v0, 0x1C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22D354u;
            goto label_22d354;
        }
    }
    ctx->pc = 0x22D344u;
    // 0x22d344: 0xc08089c  jal         func_202270
    ctx->pc = 0x22D344u;
    SET_GPR_U32(ctx, 31, 0x22D34Cu);
    ctx->pc = 0x22D348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D344u;
    // 0x22d348: 0x8f84a028  lw          $a0, -0x5FD8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942760)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x22D344u, 0x22D34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D34Cu;
label_22d34c:
    // 0x22d34c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x22d34cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x22d350: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x22d350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_22d354:
    // 0x22d354: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x22D354u;
    {
        const bool branch_taken_0x22d354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D354u;
        // 0x22d358: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d354) {
            ctx->pc = 0x22D3CCu;
            goto label_22d3cc;
        }
    }
    ctx->pc = 0x22D35Cu;
    // 0x22d35c: 0x96c2000a  lhu         $v0, 0xA($s6)
    ctx->pc = 0x22d35cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 10)));
    // 0x22d360: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x22d360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x22d364: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x22D364u;
    {
        const bool branch_taken_0x22d364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D364u;
        // 0x22d368: 0x96950000  lhu         $s5, 0x0($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d364) {
            ctx->pc = 0x22D39Cu;
            goto label_22d39c;
        }
    }
    ctx->pc = 0x22D36Cu;
    // 0x22d36c: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x22d36cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x22d370: 0x24a399f0  addiu       $v1, $a1, -0x6610
    ctx->pc = 0x22d370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941168));
    // 0x22d374: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x22d374u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3299FCu));
    // 0x22d378: 0x284201f4  slti        $v0, $v0, 0x1F4
    ctx->pc = 0x22d378u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)500) ? 1 : 0);
    // 0x22d37c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22D37Cu;
    {
        const bool branch_taken_0x22d37c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D37Cu;
        // 0x22d380: 0x8ca499f0  lw          $a0, -0x6610($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294941168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d37c) {
            ctx->pc = 0x22D390u;
            goto label_22d390;
        }
    }
    ctx->pc = 0x22D384u;
    // 0x22d384: 0x26a20140  addiu       $v0, $s5, 0x140
    ctx->pc = 0x22d384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 320));
    // 0x22d388: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x22D388u;
    {
        const bool branch_taken_0x22d388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D388u;
        // 0x22d38c: 0x44a821  addu        $s5, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d388) {
            ctx->pc = 0x22D3D0u;
            goto label_22d3d0;
        }
    }
    ctx->pc = 0x22D390u;
label_22d390:
    // 0x22d390: 0x26a201c0  addiu       $v0, $s5, 0x1C0
    ctx->pc = 0x22d390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 448));
    // 0x22d394: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x22D394u;
    {
        const bool branch_taken_0x22d394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D394u;
        // 0x22d398: 0x44a821  addu        $s5, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d394) {
            ctx->pc = 0x22D3D0u;
            goto label_22d3d0;
        }
    }
    ctx->pc = 0x22D39Cu;
label_22d39c:
    // 0x22d39c: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x22d39cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x22d3a0: 0x24a399f0  addiu       $v1, $a1, -0x6610
    ctx->pc = 0x22d3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941168));
    // 0x22d3a4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x22d3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3299FCu));
    // 0x22d3a8: 0x284201f4  slti        $v0, $v0, 0x1F4
    ctx->pc = 0x22d3a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)500) ? 1 : 0);
    // 0x22d3ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22D3ACu;
    {
        const bool branch_taken_0x22d3ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D3ACu;
        // 0x22d3b0: 0x8ca499f0  lw          $a0, -0x6610($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294941168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d3ac) {
            ctx->pc = 0x22D3C0u;
            goto label_22d3c0;
        }
    }
    ctx->pc = 0x22D3B4u;
    // 0x22d3b4: 0x26a20100  addiu       $v0, $s5, 0x100
    ctx->pc = 0x22d3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 256));
    // 0x22d3b8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x22D3B8u;
    {
        const bool branch_taken_0x22d3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D3B8u;
        // 0x22d3bc: 0x44a821  addu        $s5, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d3b8) {
            ctx->pc = 0x22D3D0u;
            goto label_22d3d0;
        }
    }
    ctx->pc = 0x22D3C0u;
label_22d3c0:
    // 0x22d3c0: 0x26a20180  addiu       $v0, $s5, 0x180
    ctx->pc = 0x22d3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 384));
    // 0x22d3c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x22D3C4u;
    {
        const bool branch_taken_0x22d3c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D3C4u;
        // 0x22d3c8: 0x44a821  addu        $s5, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d3c4) {
            ctx->pc = 0x22D3D0u;
            goto label_22d3d0;
        }
    }
    ctx->pc = 0x22D3CCu;
label_22d3cc:
    // 0x22d3cc: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x22d3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_22d3d0:
    // 0x22d3d0: 0x24b799f0  addiu       $s7, $a1, -0x6610
    ctx->pc = 0x22d3d0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941168));
    // 0x22d3d4: 0x96830002  lhu         $v1, 0x2($s4)
    ctx->pc = 0x22d3d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x22d3d8: 0x8ee20014  lw          $v0, 0x14($s7)
    ctx->pc = 0x22d3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 20)));
    // 0x22d3dc: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x22d3dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d3e0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x22d3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22d3e4: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x22D3E4u;
    SET_GPR_U32(ctx, 31, 0x22D3ECu);
    ctx->pc = 0x22D3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D3E4u;
    // 0x22d3e8: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x22D3E4u, 0x22D3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D3ECu;
label_22d3ec:
    // 0x22d3ec: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x22d3ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22d3f0: 0x2422023  subu        $a0, $s2, $v0
    ctx->pc = 0x22d3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x22d3f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22d3f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d3f8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x22d3f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d3fc: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x22D3FCu;
    SET_GPR_U32(ctx, 31, 0x22D404u);
    ctx->pc = 0x22D400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D3FCu;
    // 0x22d400: 0x3c0402d  daddu       $t0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x22D3FCu, 0x22D404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D404u;
label_22d404:
    // 0x22d404: 0x96c5000a  lhu         $a1, 0xA($s6)
    ctx->pc = 0x22d404u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 10)));
    // 0x22d408: 0x30a20040  andi        $v0, $a1, 0x40
    ctx->pc = 0x22d408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)64);
    // 0x22d40c: 0x14400086  bnez        $v0, . + 4 + (0x86 << 2)
    ctx->pc = 0x22D40Cu;
    {
        const bool branch_taken_0x22d40c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D40Cu;
        // 0x22d410: 0x30a20100  andi        $v0, $a1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d40c) {
            ctx->pc = 0x22D628u;
            goto label_22d628;
        }
    }
    ctx->pc = 0x22D414u;
    // 0x22d414: 0x8ee20014  lw          $v0, 0x14($s7)
    ctx->pc = 0x22d414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 20)));
    // 0x22d418: 0x30a50100  andi        $a1, $a1, 0x100
    ctx->pc = 0x22d418u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)256);
    // 0x22d41c: 0x96840002  lhu         $a0, 0x2($s4)
    ctx->pc = 0x22d41cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x22d420: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x22d420u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d424: 0x8e660020  lw          $a2, 0x20($s3)
    ctx->pc = 0x22d424u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x22d428: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x22d428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x22d42c: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x22d42cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x22d430: 0x24500002  addiu       $s0, $v0, 0x2
    ctx->pc = 0x22d430u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x22d434: 0x14c0003b  bnez        $a2, . + 4 + (0x3B << 2)
    ctx->pc = 0x22D434u;
    {
        const bool branch_taken_0x22d434 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D434u;
        // 0x22d438: 0x65800b  movn        $s0, $v1, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d434) {
            ctx->pc = 0x22D524u;
            goto label_22d524;
        }
    }
    ctx->pc = 0x22D43Cu;
    // 0x22d43c: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x22d43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x22d440: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x22D440u;
    {
        const bool branch_taken_0x22d440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D440u;
        // 0x22d444: 0x24110008  addiu       $s1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d440) {
            ctx->pc = 0x22D4BCu;
            goto label_22d4bc;
        }
    }
    ctx->pc = 0x22D448u;
    // 0x22d448: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x22d448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x22d44c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x22D44Cu;
    {
        const bool branch_taken_0x22d44c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D44Cu;
        // 0x22d450: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d44c) {
            ctx->pc = 0x22D4BCu;
            goto label_22d4bc;
        }
    }
    ctx->pc = 0x22D454u;
    // 0x22d454: 0x4490a000  mtc1        $s0, $f20
    ctx->pc = 0x22d454u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22d458: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x22d458u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x22d45c: 0x265e0010  addiu       $fp, $s2, 0x10
    ctx->pc = 0x22d45cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x22d460: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x22d460u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d464: 0x0  nop
    ctx->pc = 0x22d464u;
    // NOP
label_22d468:
    // 0x22d468: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x22d468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d46c: 0xc08b074  jal         func_22C1D0
    ctx->pc = 0x22D46Cu;
    SET_GPR_U32(ctx, 31, 0x22D474u);
    ctx->pc = 0x22D470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D46Cu;
    // 0x22d470: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C1D0u, 0x22D46Cu, 0x22D474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D474u;
label_22d474:
    // 0x22d474: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x22D474u;
    SET_GPR_U32(ctx, 31, 0x22D47Cu);
    ctx->pc = 0x22D478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D474u;
    // 0x22d478: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x22D474u, 0x22D47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D47Cu;
label_22d47c:
    // 0x22d47c: 0x8e650010  lw          $a1, 0x10($s3)
    ctx->pc = 0x22d47cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x22d480: 0x1438c0  sll         $a3, $s4, 3
    ctx->pc = 0x22d480u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x22d484: 0x8e680000  lw          $t0, 0x0($s3)
    ctx->pc = 0x22d484u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x22d488: 0x222302a  slt         $a2, $s1, $v0
    ctx->pc = 0x22d488u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x22d48c: 0x2052021  addu        $a0, $s0, $a1
    ctx->pc = 0x22d48cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x22d490: 0x46880b  movn        $s1, $v0, $a2
    ctx->pc = 0x22d490u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x22d494: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x22d494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22d498: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x22d498u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d49c: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x22d49cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x22d4a0: 0x681826  xor         $v1, $v1, $t0
    ctx->pc = 0x22d4a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 8));
    // 0x22d4a4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x22d4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x22d4a8: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x22d4a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x22d4ac: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x22D4ACu;
    {
        const bool branch_taken_0x22d4ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D4ACu;
        // 0x22d4b0: 0x2e3b825  or          $s7, $s7, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d4ac) {
            ctx->pc = 0x22D468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22d468;
        }
    }
    ctx->pc = 0x22D4B4u;
    // 0x22d4b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x22D4B4u;
    {
        const bool branch_taken_0x22d4b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d4b4) {
            ctx->pc = 0x22D4C8u;
            goto label_22d4c8;
        }
    }
    ctx->pc = 0x22D4BCu;
label_22d4bc:
    // 0x22d4bc: 0x4490a000  mtc1        $s0, $f20
    ctx->pc = 0x22d4bcu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22d4c0: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x22d4c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x22d4c4: 0x265e0010  addiu       $fp, $s2, 0x10
    ctx->pc = 0x22d4c4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_22d4c8:
    // 0x22d4c8: 0x16e00014  bnez        $s7, . + 4 + (0x14 << 2)
    ctx->pc = 0x22D4C8u;
    {
        const bool branch_taken_0x22d4c8 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D4C8u;
        // 0x22d4cc: 0x2b11023  subu        $v0, $s5, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d4c8) {
            ctx->pc = 0x22D51Cu;
            goto label_22d51c;
        }
    }
    ctx->pc = 0x22D4D0u;
    // 0x22d4d0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x22d4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x22d4d4: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x22d4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x22d4d8: 0x2450e808  addiu       $s0, $v0, -0x17F8
    ctx->pc = 0x22d4d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961160));
    // 0x22d4dc: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x22D4DCu;
    SET_GPR_U32(ctx, 31, 0x22D4E4u);
    ctx->pc = 0x22D4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D4DCu;
    // 0x22d4e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x22D4DCu, 0x22D4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D4E4u;
label_22d4e4:
    // 0x22d4e4: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x22D4E4u;
    SET_GPR_U32(ctx, 31, 0x22D4ECu);
    ctx->pc = 0x22D4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D4E4u;
    // 0x22d4e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x22D4E4u, 0x22D4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D4ECu;
label_22d4ec:
    // 0x22d4ec: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x22d4ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x22d4f0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22D4F0u;
    {
        const bool branch_taken_0x22d4f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D4F0u;
        // 0x22d4f4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d4f0) {
            ctx->pc = 0x22D514u;
            goto label_22d514;
        }
    }
    ctx->pc = 0x22D4F8u;
    // 0x22d4f8: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x22d4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x22d4fc: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x22D4FCu;
    SET_GPR_U32(ctx, 31, 0x22D504u);
    ctx->pc = 0x22D500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D4FCu;
    // 0x22d500: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x22D4FCu, 0x22D504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D504u;
label_22d504:
    // 0x22d504: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x22D504u;
    SET_GPR_U32(ctx, 31, 0x22D50Cu);
    ctx->pc = 0x22D508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D504u;
    // 0x22d508: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x22D504u, 0x22D50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D50Cu;
label_22d50c:
    // 0x22d50c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x22D50Cu;
    {
        const bool branch_taken_0x22d50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D50Cu;
        // 0x22d510: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d50c) {
            ctx->pc = 0x22D518u;
            goto label_22d518;
        }
    }
    ctx->pc = 0x22D514u;
label_22d514:
    // 0x22d514: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22d514u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22d518:
    // 0x22d518: 0x2b11023  subu        $v0, $s5, $s1
    ctx->pc = 0x22d518u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
label_22d51c:
    // 0x22d51c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x22D51Cu;
    {
        const bool branch_taken_0x22d51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D51Cu;
        // 0x22d520: 0x2452ffe0  addiu       $s2, $v0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d51c) {
            ctx->pc = 0x22D534u;
            goto label_22d534;
        }
    }
    ctx->pc = 0x22D524u;
label_22d524:
    // 0x22d524: 0x4490a000  mtc1        $s0, $f20
    ctx->pc = 0x22d524u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22d528: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x22d528u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x22d52c: 0x2469021  addu        $s2, $s2, $a2
    ctx->pc = 0x22d52cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x22d530: 0x26be0010  addiu       $fp, $s5, 0x10
    ctx->pc = 0x22d530u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_22d534:
    // 0x22d534: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x22d534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x22d538: 0x8f85a004  lw          $a1, -0x5FFC($gp)
    ctx->pc = 0x22d538u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x22d53c: 0x24622e50  addiu       $v0, $v1, 0x2E50
    ctx->pc = 0x22d53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 11856));
    // 0x22d540: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x22d540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x22d544: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22d544u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22d548: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22d548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22d54c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x22d54cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22d550: 0x16c4000d  bne         $s6, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x22D550u;
    {
        const bool branch_taken_0x22d550 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 4));
        ctx->pc = 0x22D554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D550u;
        // 0x22d554: 0x3c110040  lui         $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d550) {
            ctx->pc = 0x22D588u;
            goto label_22d588;
        }
    }
    ctx->pc = 0x22D558u;
    // 0x22d558: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x22d558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x22d55c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x22d55cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x22d560: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22D560u;
    {
        const bool branch_taken_0x22d560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D560u;
        // 0x22d564: 0x3c117f7f  lui         $s1, 0x7F7F (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32639 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d560) {
            ctx->pc = 0x22D580u;
            goto label_22d580;
        }
    }
    ctx->pc = 0x22D568u;
    // 0x22d568: 0x9382a02c  lbu         $v0, -0x5FD4($gp)
    ctx->pc = 0x22d568u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294942764)));
    // 0x22d56c: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x22d56cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x22d570: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x22d570u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x22d574: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x22d574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x22d578: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x22D578u;
    {
        const bool branch_taken_0x22d578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D578u;
        // 0x22d57c: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d578) {
            ctx->pc = 0x22D58Cu;
            goto label_22d58c;
        }
    }
    ctx->pc = 0x22D580u;
label_22d580:
    // 0x22d580: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x22D580u;
    {
        const bool branch_taken_0x22d580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D580u;
        // 0x22d584: 0x36317f80  ori         $s1, $s1, 0x7F80 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)32640);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d580) {
            ctx->pc = 0x22D58Cu;
            goto label_22d58c;
        }
    }
    ctx->pc = 0x22D588u;
label_22d588:
    // 0x22d588: 0x36310030  ori         $s1, $s1, 0x30
    ctx->pc = 0x22d588u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)48);
label_22d58c:
    // 0x22d58c: 0x44926000  mtc1        $s2, $f12
    ctx->pc = 0x22d58cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22d590: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x22d590u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x22d594: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22d594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d598: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x22d598u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x22d59c: 0xc08b952  jal         func_22E548
    ctx->pc = 0x22D59Cu;
    SET_GPR_U32(ctx, 31, 0x22D5A4u);
    ctx->pc = 0x22D5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D59Cu;
    // 0x22d5a0: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E548u, 0x22D59Cu, 0x22D5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D5A4u;
label_22d5a4:
    // 0x22d5a4: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x22d5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x22d5a8: 0x8f85a004  lw          $a1, -0x5FFC($gp)
    ctx->pc = 0x22d5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x22d5ac: 0x24622e50  addiu       $v0, $v1, 0x2E50
    ctx->pc = 0x22d5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 11856));
    // 0x22d5b0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x22d5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x22d5b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22d5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22d5b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22d5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22d5bc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x22d5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22d5c0: 0x56c4000d  bnel        $s6, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x22D5C0u;
    {
        const bool branch_taken_0x22d5c0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 4));
        if (branch_taken_0x22d5c0) {
            ctx->pc = 0x22D5C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22D5C0u;
            // 0x22d5c4: 0x3c110040  lui         $s1, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22D5F8u;
            goto label_22d5f8;
        }
    }
    ctx->pc = 0x22D5C8u;
    // 0x22d5c8: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x22d5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x22d5cc: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x22d5ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x22d5d0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22D5D0u;
    {
        const bool branch_taken_0x22d5d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D5D0u;
        // 0x22d5d4: 0x3c117f7f  lui         $s1, 0x7F7F (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32639 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d5d0) {
            ctx->pc = 0x22D5F0u;
            goto label_22d5f0;
        }
    }
    ctx->pc = 0x22D5D8u;
    // 0x22d5d8: 0x9382a02c  lbu         $v0, -0x5FD4($gp)
    ctx->pc = 0x22d5d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294942764)));
    // 0x22d5dc: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x22d5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x22d5e0: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x22d5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x22d5e4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x22d5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x22d5e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x22D5E8u;
    {
        const bool branch_taken_0x22d5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D5E8u;
        // 0x22d5ec: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d5e8) {
            ctx->pc = 0x22D5FCu;
            goto label_22d5fc;
        }
    }
    ctx->pc = 0x22D5F0u;
label_22d5f0:
    // 0x22d5f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x22D5F0u;
    {
        const bool branch_taken_0x22d5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D5F0u;
        // 0x22d5f4: 0x36317f80  ori         $s1, $s1, 0x7F80 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)32640);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d5f0) {
            ctx->pc = 0x22D5FCu;
            goto label_22d5fc;
        }
    }
    ctx->pc = 0x22D5F8u;
label_22d5f8:
    // 0x22d5f8: 0x36310030  ori         $s1, $s1, 0x30
    ctx->pc = 0x22d5f8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)48);
label_22d5fc:
    // 0x22d5fc: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x22d5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x22d600: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x22d600u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x22d604: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22d604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d608: 0x2a31021  addu        $v0, $s5, $v1
    ctx->pc = 0x22d608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x22d60c: 0x3c3100a  movz        $v0, $fp, $v1
    ctx->pc = 0x22d60cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 30));
    // 0x22d610: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22d610u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22d614: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x22d614u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x22d618: 0xc08b952  jal         func_22E548
    ctx->pc = 0x22D618u;
    SET_GPR_U32(ctx, 31, 0x22D620u);
    ctx->pc = 0x22D61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D618u;
    // 0x22d61c: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E548u, 0x22D618u, 0x22D620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D620u;
label_22d620:
    // 0x22d620: 0x96c5000a  lhu         $a1, 0xA($s6)
    ctx->pc = 0x22d620u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 10)));
    // 0x22d624: 0x30a20100  andi        $v0, $a1, 0x100
    ctx->pc = 0x22d624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)256);
label_22d628:
    // 0x22d628: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x22D628u;
    {
        const bool branch_taken_0x22d628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D628u;
        // 0x22d62c: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d628) {
            ctx->pc = 0x22D668u;
            goto label_22d668;
        }
    }
    ctx->pc = 0x22D630u;
    // 0x22d630: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x22d630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x22d634: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x22d634u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x22d638: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x22d638u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22d63c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x22d63cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22d640: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x22d640u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22d644: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x22d644u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22d648: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x22d648u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22d64c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x22d64cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22d650: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x22d650u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22d654: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x22d654u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22d658: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x22d658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22d65c: 0x808089c  j           func_202270
    ctx->pc = 0x22D65Cu;
    ctx->pc = 0x22D660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D65Cu;
    // 0x22d660: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    textSelect_0x202270(rdram, ctx, runtime); return;
    ctx->pc = 0x22D664u;
label_22d664:
    // 0x22d664: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x22d664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_22d668:
    // 0x22d668: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x22d668u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x22d66c: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x22d66cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22d670: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x22d670u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22d674: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x22d674u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22d678: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x22d678u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22d67c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x22d67cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22d680: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x22d680u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22d684: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x22d684u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22d688: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x22d688u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22d68c: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x22d68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22d690: 0x3e00008  jr          $ra
    ctx->pc = 0x22D690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D690u;
        // 0x22d694: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22D698u;
}
