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

// Function: hr_addnewroutes
// Address: 0x2661a8 - 0x2663e4
void hr_addnewroutes_0x2661a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("hr_addnewroutes_0x2661a8");
#endif

    switch (ctx->pc) {
        case 0x266240u: goto label_266240;
        case 0x2662a0u: goto label_2662a0;
        case 0x2662acu: goto label_2662ac;
        case 0x2662c0u: goto label_2662c0;
        case 0x2662d0u: goto label_2662d0;
        case 0x2662e8u: goto label_2662e8;
        case 0x266354u: goto label_266354;
        case 0x26636cu: goto label_26636c;
        case 0x26638cu: goto label_26638c;
        case 0x2663a8u: goto label_2663a8;
        default: break;
    }

    ctx->pc = 0x2661a8u;

    // 0x2661a8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2661a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2661ac: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x2661acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2661b0: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x2661b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x2661b4: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x2661b4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2661b8: 0x8f83a2ec  lw          $v1, -0x5D14($gp)
    ctx->pc = 0x2661b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x2661bc: 0x2e21018  mult        $v0, $s7, $v0
    ctx->pc = 0x2661bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2661c0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2661c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2661c4: 0xe7b600b0  swc1        $f22, 0xB0($sp)
    ctx->pc = 0x2661c4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2661c8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2661c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2661cc: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2661ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2661d0: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x2661d0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x2661d4: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x2661d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x2661d8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2661d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2661dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2661dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2661e0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2661e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2661e4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2661e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2661e8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2661e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2661ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2661ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2661f0: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x2661f0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2661f4: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x2661f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2661f8: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2661f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2661fc: 0x84760008  lh          $s6, 0x8($v1)
    ctx->pc = 0x2661fcu;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x266200: 0x8f85a350  lw          $a1, -0x5CB0($gp)
    ctx->pc = 0x266200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943568)));
    // 0x266204: 0x161080  sll         $v0, $s6, 2
    ctx->pc = 0x266204u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x266208: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x266208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x26620c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26620cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x266210: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x266210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x266214: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x266214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x266218: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x266218u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x26621c: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x26621cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x266220: 0x1880005e  blez        $a0, . + 4 + (0x5E << 2)
    ctx->pc = 0x266220u;
    {
        const bool branch_taken_0x266220 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x266224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266220u;
        // 0x266224: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266220) {
            ctx->pc = 0x26639Cu;
            goto label_26639c;
        }
    }
    ctx->pc = 0x266228u;
    // 0x266228: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x266228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x26622c: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x26622cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266230: 0x245e649c  addiu       $fp, $v0, 0x649C
    ctx->pc = 0x266230u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 25756));
    // 0x266234: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x266234u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266238: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x266238u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x26623c: 0x0  nop
    ctx->pc = 0x26623cu;
    // NOP
label_266240:
    // 0x266240: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x266240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x266244: 0x8f83a2f0  lw          $v1, -0x5D10($gp)
    ctx->pc = 0x266244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943472)));
    // 0x266248: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x266248u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x26624c: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x26624cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x266250: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x266250u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x266254: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x266254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x266258: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x266258u;
    {
        const bool branch_taken_0x266258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26625Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266258u;
        // 0x26625c: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266258) {
            ctx->pc = 0x26638Cu;
            goto label_26638c;
        }
    }
    ctx->pc = 0x266260u;
    // 0x266260: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x266260u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x266264: 0x8f84a2ec  lw          $a0, -0x5D14($gp)
    ctx->pc = 0x266264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x266268: 0xc21018  mult        $v0, $a2, $v0
    ctx->pc = 0x266268u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x26626c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x26626cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x266270: 0x84430008  lh          $v1, 0x8($v0)
    ctx->pc = 0x266270u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x266274: 0x14760004  bne         $v1, $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x266274u;
    {
        const bool branch_taken_0x266274 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 22));
        ctx->pc = 0x266278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266274u;
        // 0x266278: 0x30a20002  andi        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x266274) {
            ctx->pc = 0x266288u;
            goto label_266288;
        }
    }
    ctx->pc = 0x26627Cu;
    // 0x26627c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x26627cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266280: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x266280u;
    {
        const bool branch_taken_0x266280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266280u;
        // 0x266284: 0x8e110008  lw          $s1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266280) {
            ctx->pc = 0x266298u;
            goto label_266298;
        }
    }
    ctx->pc = 0x266288u;
label_266288:
    // 0x266288: 0x54400041  bnel        $v0, $zero, . + 4 + (0x41 << 2)
    ctx->pc = 0x266288u;
    {
        const bool branch_taken_0x266288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x266288) {
            ctx->pc = 0x26628Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266288u;
            // 0x26628c: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266390u;
            goto label_266390;
        }
    }
    ctx->pc = 0x266290u;
    // 0x266290: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x266290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x266294: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x266294u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_266298:
    // 0x266298: 0xc099840  jal         func_266100
    ctx->pc = 0x266298u;
    SET_GPR_U32(ctx, 31, 0x2662A0u);
    ctx->pc = 0x26629Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266298u;
    // 0x26629c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266100u, 0x266298u, 0x2662A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2662A0u;
label_2662a0:
    // 0x2662a0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2662a0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2662a4: 0xc099862  jal         func_266188
    ctx->pc = 0x2662A4u;
    SET_GPR_U32(ctx, 31, 0x2662ACu);
    ctx->pc = 0x2662A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2662A4u;
    // 0x2662a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266188u, 0x2662A4u, 0x2662ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2662ACu;
label_2662ac:
    // 0x2662ac: 0x4614b500  add.s       $f20, $f22, $f20
    ctx->pc = 0x2662acu;
    ctx->f[20] = FPU_ADD_S(ctx->f[22], ctx->f[20]);
    // 0x2662b0: 0x8f85b8d4  lw          $a1, -0x472C($gp)
    ctx->pc = 0x2662b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949076)));
    // 0x2662b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2662b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2662b8: 0xc099840  jal         func_266100
    ctx->pc = 0x2662B8u;
    SET_GPR_U32(ctx, 31, 0x2662C0u);
    ctx->pc = 0x2662BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2662B8u;
    // 0x2662bc: 0x4600a540  add.s       $f21, $f20, $f0 (Delay Slot)
    ctx->f[21] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x266100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266100u, 0x2662B8u, 0x2662C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2662C0u;
label_2662c0:
    // 0x2662c0: 0x2784b8c0  addiu       $a0, $gp, -0x4740
    ctx->pc = 0x2662c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294949056));
    // 0x2662c4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2662c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2662c8: 0xc0997f0  jal         func_265FC0
    ctx->pc = 0x2662C8u;
    SET_GPR_U32(ctx, 31, 0x2662D0u);
    ctx->pc = 0x2662CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2662C8u;
    // 0x2662cc: 0x4600ad00  add.s       $f20, $f21, $f0 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x265FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265FC0u, 0x2662C8u, 0x2662D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2662D0u;
label_2662d0:
    // 0x2662d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2662d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2662d4: 0x4a10009  bgez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2662D4u;
    {
        const bool branch_taken_0x2662d4 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2662D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2662D4u;
        // 0x2662d8: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2662d4) {
            ctx->pc = 0x2662FCu;
            goto label_2662fc;
        }
    }
    ctx->pc = 0x2662DCu;
    // 0x2662dc: 0x2784b8c8  addiu       $a0, $gp, -0x4738
    ctx->pc = 0x2662dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294949064));
    // 0x2662e0: 0xc0997f0  jal         func_265FC0
    ctx->pc = 0x2662E0u;
    SET_GPR_U32(ctx, 31, 0x2662E8u);
    ctx->pc = 0x2662E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2662E0u;
    // 0x2662e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265FC0u, 0x2662E0u, 0x2662E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2662E8u;
label_2662e8:
    // 0x2662e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2662e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2662ec: 0x4a00021  bltz        $a1, . + 4 + (0x21 << 2)
    ctx->pc = 0x2662ECu;
    {
        const bool branch_taken_0x2662ec = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2662F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2662ECu;
        // 0x2662f0: 0x3c0201fc  lui         $v0, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2662ec) {
            ctx->pc = 0x266374u;
            goto label_266374;
        }
    }
    ctx->pc = 0x2662F4u;
    // 0x2662f4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2662F4u;
    {
        const bool branch_taken_0x2662f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2662F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2662F4u;
        // 0x2662f8: 0x51900  sll         $v1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2662f4) {
            ctx->pc = 0x266320u;
            goto label_266320;
        }
    }
    ctx->pc = 0x2662FCu;
label_2662fc:
    // 0x2662fc: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x2662fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x266300: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x266300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266304: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x266304u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x266308: 0x0  nop
    ctx->pc = 0x266308u;
    // NOP
    // 0x26630c: 0x45020020  bc1fl       . + 4 + (0x20 << 2)
    ctx->pc = 0x26630Cu;
    {
        const bool branch_taken_0x26630c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26630c) {
            ctx->pc = 0x266310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26630Cu;
            // 0x266310: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266390u;
            goto label_266390;
        }
    }
    ctx->pc = 0x266314u;
    // 0x266314: 0x2784b8c0  addiu       $a0, $gp, -0x4740
    ctx->pc = 0x266314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294949056));
    // 0x266318: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x266318u;
    {
        const bool branch_taken_0x266318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266318) {
            ctx->pc = 0x26634Cu;
            goto label_26634c;
        }
    }
    ctx->pc = 0x266320u;
label_266320:
    // 0x266320: 0x24446490  addiu       $a0, $v0, 0x6490
    ctx->pc = 0x266320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25744));
    // 0x266324: 0x7e1021  addu        $v0, $v1, $fp
    ctx->pc = 0x266324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x266328: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x266328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26632c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x26632cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x266330: 0x0  nop
    ctx->pc = 0x266330u;
    // NOP
    // 0x266334: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x266334u;
    {
        const bool branch_taken_0x266334 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x266338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266334u;
        // 0x266338: 0x641021  addu        $v0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266334) {
            ctx->pc = 0x26638Cu;
            goto label_26638c;
        }
    }
    ctx->pc = 0x26633Cu;
    // 0x26633c: 0x84430004  lh          $v1, 0x4($v0)
    ctx->pc = 0x26633cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x266340: 0x54710013  bnel        $v1, $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x266340u;
    {
        const bool branch_taken_0x266340 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x266340) {
            ctx->pc = 0x266344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266340u;
            // 0x266344: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266390u;
            goto label_266390;
        }
    }
    ctx->pc = 0x266348u;
    // 0x266348: 0x2784b8c8  addiu       $a0, $gp, -0x4738
    ctx->pc = 0x266348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294949064));
label_26634c:
    // 0x26634c: 0xc099816  jal         func_266058
    ctx->pc = 0x26634Cu;
    SET_GPR_U32(ctx, 31, 0x266354u);
    ctx->pc = 0x266350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26634Cu;
    // 0x266350: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266058u, 0x26634Cu, 0x266354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266354u;
label_266354:
    // 0x266354: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x266354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266358: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x266358u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26635c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x26635cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x266360: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x266360u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x266364: 0xc0997c2  jal         func_265F08
    ctx->pc = 0x266364u;
    SET_GPR_U32(ctx, 31, 0x26636Cu);
    ctx->pc = 0x266368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266364u;
    // 0x266368: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265F08u, 0x266364u, 0x26636Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26636Cu;
label_26636c:
    // 0x26636c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x26636Cu;
    {
        const bool branch_taken_0x26636c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26636Cu;
        // 0x266370: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26636c) {
            ctx->pc = 0x266394u;
            goto label_266394;
        }
    }
    ctx->pc = 0x266374u;
label_266374:
    // 0x266374: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x266374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266378: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x266378u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26637c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x26637cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x266380: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x266380u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x266384: 0xc0997c2  jal         func_265F08
    ctx->pc = 0x266384u;
    SET_GPR_U32(ctx, 31, 0x26638Cu);
    ctx->pc = 0x266388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266384u;
    // 0x266388: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265F08u, 0x266384u, 0x26638Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26638Cu;
label_26638c:
    // 0x26638c: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x26638cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_266390:
    // 0x266390: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x266390u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_266394:
    // 0x266394: 0x5660ffaa  bnel        $s3, $zero, . + 4 + (-0x56 << 2)
    ctx->pc = 0x266394u;
    {
        const bool branch_taken_0x266394 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x266394) {
            ctx->pc = 0x266398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266394u;
            // 0x266398: 0x8e920000  lw          $s2, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_266240;
        }
    }
    ctx->pc = 0x26639Cu;
label_26639c:
    // 0x26639c: 0x2784b8c0  addiu       $a0, $gp, -0x4740
    ctx->pc = 0x26639cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294949056));
    // 0x2663a0: 0xc099800  jal         func_266000
    ctx->pc = 0x2663A0u;
    SET_GPR_U32(ctx, 31, 0x2663A8u);
    ctx->pc = 0x2663A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2663A0u;
    // 0x2663a4: 0x8f85b8d8  lw          $a1, -0x4728($gp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949080)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266000u, 0x2663A0u, 0x2663A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2663A8u;
label_2663a8:
    // 0x2663a8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2663a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2663ac: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x2663acu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2663b0: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x2663b0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2663b4: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2663b4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2663b8: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2663b8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2663bc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2663bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2663c0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2663c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2663c4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2663c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2663c8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2663c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2663cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2663ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2663d0: 0xc7b600b0  lwc1        $f22, 0xB0($sp)
    ctx->pc = 0x2663d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2663d4: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x2663d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2663d8: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x2663d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2663dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2663DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2663E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2663DCu;
        // 0x2663e0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2663DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2663E4u;
}
