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

// Function: propNewPickup
// Address: 0x2730e0 - 0x273614
void propNewPickup_0x2730e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("propNewPickup_0x2730e0");
#endif

    switch (ctx->pc) {
        case 0x27316cu: goto label_27316c;
        case 0x273188u: goto label_273188;
        case 0x2731a0u: goto label_2731a0;
        case 0x2731e0u: goto label_2731e0;
        case 0x27321cu: goto label_27321c;
        case 0x273230u: goto label_273230;
        case 0x273254u: goto label_273254;
        case 0x273278u: goto label_273278;
        case 0x273298u: goto label_273298;
        case 0x27337cu: goto label_27337c;
        case 0x2733d0u: goto label_2733d0;
        case 0x273460u: goto label_273460;
        case 0x273504u: goto label_273504;
        case 0x273528u: goto label_273528;
        default: break;
    }

    ctx->pc = 0x2730e0u;

    // 0x2730e0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2730e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x2730e4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2730e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2730e8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2730e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2730ec: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2730ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2730f0: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x2730f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x2730f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2730f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2730f8: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x2730f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x2730fc: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x2730fcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273100: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x273100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x273104: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x273104u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273108: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x273108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x27310c: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x27310cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273110: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x273110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x273114: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x273114u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273118: 0xe7bb00e8  swc1        $f27, 0xE8($sp)
    ctx->pc = 0x273118u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x27311c: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x27311cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273120: 0xe7ba00e0  swc1        $f26, 0xE0($sp)
    ctx->pc = 0x273120u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x273124: 0x460066c6  mov.s       $f27, $f12
    ctx->pc = 0x273124u;
    ctx->f[27] = FPU_MOV_S(ctx->f[12]);
    // 0x273128: 0xe7b900d8  swc1        $f25, 0xD8($sp)
    ctx->pc = 0x273128u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x27312c: 0x46008e86  mov.s       $f26, $f17
    ctx->pc = 0x27312cu;
    ctx->f[26] = FPU_MOV_S(ctx->f[17]);
    // 0x273130: 0xe7b800d0  swc1        $f24, 0xD0($sp)
    ctx->pc = 0x273130u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x273134: 0x46008646  mov.s       $f25, $f16
    ctx->pc = 0x273134u;
    ctx->f[25] = FPU_MOV_S(ctx->f[16]);
    // 0x273138: 0xe7b700c8  swc1        $f23, 0xC8($sp)
    ctx->pc = 0x273138u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x27313c: 0x46009e06  mov.s       $f24, $f19
    ctx->pc = 0x27313cu;
    ctx->f[24] = FPU_MOV_S(ctx->f[19]);
    // 0x273140: 0xe7b600c0  swc1        $f22, 0xC0($sp)
    ctx->pc = 0x273140u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x273144: 0x460075c6  mov.s       $f23, $f14
    ctx->pc = 0x273144u;
    ctx->f[23] = FPU_MOV_S(ctx->f[14]);
    // 0x273148: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x273148u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x27314c: 0x46007d86  mov.s       $f22, $f15
    ctx->pc = 0x27314cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[15]);
    // 0x273150: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x273150u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x273154: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x273154u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x273158: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x273158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x27315c: 0x46009506  mov.s       $f20, $f18
    ctx->pc = 0x27315cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[18]);
    // 0x273160: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x273160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x273164: 0xc09cc0e  jal         func_273038
    ctx->pc = 0x273164u;
    SET_GPR_U32(ctx, 31, 0x27316Cu);
    ctx->pc = 0x273168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273164u;
    // 0x273168: 0xffb30040  sd          $s3, 0x40($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273038u, 0x273164u, 0x27316Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27316Cu;
label_27316c:
    // 0x27316c: 0x4618bb40  add.s       $f13, $f23, $f24
    ctx->pc = 0x27316cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[23], ctx->f[24]);
    // 0x273170: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x273170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273174: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x273174u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x273178: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x273178u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x27317c: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x27317cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x273180: 0xc09a1be  jal         func_2686F8
    ctx->pc = 0x273180u;
    SET_GPR_U32(ctx, 31, 0x273188u);
    ctx->pc = 0x273184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273180u;
    // 0x273184: 0x46006b40  add.s       $f13, $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2686F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2686F8u, 0x273180u, 0x273188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273188u;
label_273188:
    // 0x273188: 0x12000076  beqz        $s0, . + 4 + (0x76 << 2)
    ctx->pc = 0x273188u;
    {
        const bool branch_taken_0x273188 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x27318Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273188u;
        // 0x27318c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273188) {
            ctx->pc = 0x273364u;
            goto label_273364;
        }
    }
    ctx->pc = 0x273190u;
    // 0x273190: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x273190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x273194: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x273194u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273198: 0x2444e890  addiu       $a0, $v0, -0x1770
    ctx->pc = 0x273198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961296));
    // 0x27319c: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x27319cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_2731a0:
    // 0x2731a0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2731a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2731a4: 0x25220001  addiu       $v0, $t1, 0x1
    ctx->pc = 0x2731a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2731a8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2731a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2731ac: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2731acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2731b0: 0x43480a  movz        $t1, $v0, $v1
    ctx->pc = 0x2731b0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 2));
    // 0x2731b4: 0x4a1fffa  bgez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2731B4u;
    {
        const bool branch_taken_0x2731b4 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x2731b4) {
            ctx->pc = 0x2731A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2731a0;
        }
    }
    ctx->pc = 0x2731BCu;
    // 0x2731bc: 0x15200019  bnez        $t1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2731BCu;
    {
        const bool branch_taken_0x2731bc = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x2731C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2731BCu;
        // 0x2731c0: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2731bc) {
            ctx->pc = 0x273224u;
            goto label_273224;
        }
    }
    ctx->pc = 0x2731C4u;
    // 0x2731c4: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x2731c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x2731c8: 0x8f849da8  lw          $a0, -0x6258($gp)
    ctx->pc = 0x2731c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942120)));
    // 0x2731cc: 0x2446e930  addiu       $a2, $v0, -0x16D0
    ctx->pc = 0x2731ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961456));
    // 0x2731d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2731d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2731d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2731d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2731d8: 0x3c0b0036  lui         $t3, 0x36
    ctx->pc = 0x2731d8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)54 << 16));
    // 0x2731dc: 0x0  nop
    ctx->pc = 0x2731dcu;
    // NOP
label_2731e0:
    // 0x2731e0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2731e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2731e4: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x2731e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2731e8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2731E8u;
    {
        const bool branch_taken_0x2731e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2731e8) {
            ctx->pc = 0x2731ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2731E8u;
            // 0x2731ec: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2731FCu;
            goto label_2731fc;
        }
    }
    ctx->pc = 0x2731F0u;
    // 0x2731f0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2731f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2731f4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2731f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2731f8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2731f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2731fc:
    // 0x2731fc: 0x28a20014  slti        $v0, $a1, 0x14
    ctx->pc = 0x2731fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x273200: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x273200u;
    {
        const bool branch_taken_0x273200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x273204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273200u;
        // 0x273204: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273200) {
            ctx->pc = 0x2731E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2731e0;
        }
    }
    ctx->pc = 0x273208u;
    // 0x273208: 0x2563e8e0  addiu       $v1, $t3, -0x1720
    ctx->pc = 0x273208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 4294961376));
    // 0x27320c: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x27320cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x273210: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x273210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x273214: 0xc09cd86  jal         func_273618
    ctx->pc = 0x273214u;
    SET_GPR_U32(ctx, 31, 0x27321Cu);
    ctx->pc = 0x273218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273214u;
    // 0x273218: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273618u, 0x273214u, 0x27321Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27321Cu;
label_27321c:
    // 0x27321c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x27321cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273220: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x273220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_273224:
    // 0x273224: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x273224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273228: 0x2444e890  addiu       $a0, $v0, -0x1770
    ctx->pc = 0x273228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961296));
    // 0x27322c: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x27322cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_273230:
    // 0x273230: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x273230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x273234: 0x54080  sll         $t0, $a1, 2
    ctx->pc = 0x273234u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x273238: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x273238u;
    {
        const bool branch_taken_0x273238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27323Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273238u;
        // 0x27323c: 0x140182d  daddu       $v1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273238) {
            ctx->pc = 0x273314u;
            goto label_273314;
        }
    }
    ctx->pc = 0x273240u;
    // 0x273240: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x273240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x273244: 0x246a0004  addiu       $t2, $v1, 0x4
    ctx->pc = 0x273244u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x273248: 0x28a20014  slti        $v0, $a1, 0x14
    ctx->pc = 0x273248u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x27324c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x27324Cu;
    {
        const bool branch_taken_0x27324c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x273250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27324Cu;
        // 0x273250: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27324c) {
            ctx->pc = 0x273230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_273230;
        }
    }
    ctx->pc = 0x273254u;
label_273254:
    // 0x273254: 0x29220003  slti        $v0, $t1, 0x3
    ctx->pc = 0x273254u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x273258: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x273258u;
    {
        const bool branch_taken_0x273258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27325Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273258u;
        // 0x27325c: 0x252a0001  addiu       $t2, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273258) {
            ctx->pc = 0x2733A8u;
            goto label_2733a8;
        }
    }
    ctx->pc = 0x273260u;
    // 0x273260: 0x19400051  blez        $t2, . + 4 + (0x51 << 2)
    ctx->pc = 0x273260u;
    {
        const bool branch_taken_0x273260 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x273264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273260u;
        // 0x273264: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273260) {
            ctx->pc = 0x2733A8u;
            goto label_2733a8;
        }
    }
    ctx->pc = 0x273268u;
    // 0x273268: 0x8e500160  lw          $s0, 0x160($s2)
    ctx->pc = 0x273268u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
    // 0x27326c: 0x3c0b0036  lui         $t3, 0x36
    ctx->pc = 0x27326cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)54 << 16));
    // 0x273270: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x273270u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x273274: 0x0  nop
    ctx->pc = 0x273274u;
    // NOP
label_273278:
    // 0x273278: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x273278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x27327c: 0x8f869da8  lw          $a2, -0x6258($gp)
    ctx->pc = 0x27327cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942120)));
    // 0x273280: 0x24890001  addiu       $t1, $a0, 0x1
    ctx->pc = 0x273280u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x273284: 0x2447e930  addiu       $a3, $v0, -0x16D0
    ctx->pc = 0x273284u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961456));
    // 0x273288: 0x2463e890  addiu       $v1, $v1, -0x1770
    ctx->pc = 0x273288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961296));
    // 0x27328c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27328cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273290: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x273290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273294: 0x0  nop
    ctx->pc = 0x273294u;
    // NOP
label_273298:
    // 0x273298: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x273298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27329c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x27329Cu;
    {
        const bool branch_taken_0x27329c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27329c) {
            ctx->pc = 0x2732A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27329Cu;
            // 0x2732a0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2732C0u;
            goto label_2732c0;
        }
    }
    ctx->pc = 0x2732A4u;
    // 0x2732a4: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x2732a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2732a8: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x2732a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2732ac: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2732ACu;
    {
        const bool branch_taken_0x2732ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2732ac) {
            ctx->pc = 0x2732B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2732ACu;
            // 0x2732b0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2732C0u;
            goto label_2732c0;
        }
    }
    ctx->pc = 0x2732B4u;
    // 0x2732b4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2732b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2732b8: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2732b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2732bc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2732bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2732c0:
    // 0x2732c0: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2732c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2732c4: 0x28a20014  slti        $v0, $a1, 0x14
    ctx->pc = 0x2732c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x2732c8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2732C8u;
    {
        const bool branch_taken_0x2732c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2732CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2732C8u;
        // 0x2732cc: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2732c8) {
            ctx->pc = 0x273298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_273298;
        }
    }
    ctx->pc = 0x2732D0u;
    // 0x2732d0: 0x2563e8e0  addiu       $v1, $t3, -0x1720
    ctx->pc = 0x2732d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 4294961376));
    // 0x2732d4: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x2732d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2732d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2732d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2732dc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2732dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2732e0: 0x8c8301e8  lw          $v1, 0x1E8($a0)
    ctx->pc = 0x2732e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 488)));
    // 0x2732e4: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2732E4u;
    {
        const bool branch_taken_0x2732e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2732e4) {
            ctx->pc = 0x2732E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2732E4u;
            // 0x2732e8: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273300u;
            goto label_273300;
        }
    }
    ctx->pc = 0x2732ECu;
    // 0x2732ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2732ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2732f0: 0x24021518  addiu       $v0, $zero, 0x1518
    ctx->pc = 0x2732f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5400));
    // 0x2732f4: 0xac8201ec  sw          $v0, 0x1EC($a0)
    ctx->pc = 0x2732f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 492), GPR_U32(ctx, 2));
    // 0x2732f8: 0xac8301e8  sw          $v1, 0x1E8($a0)
    ctx->pc = 0x2732f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 488), GPR_U32(ctx, 3));
    // 0x2732fc: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x2732fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_273300:
    // 0x273300: 0x8a102a  slt         $v0, $a0, $t2
    ctx->pc = 0x273300u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x273304: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x273304u;
    {
        const bool branch_taken_0x273304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x273308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273304u;
        // 0x273308: 0x3c030036  lui         $v1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273304) {
            ctx->pc = 0x273278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_273278;
        }
    }
    ctx->pc = 0x27330Cu;
    // 0x27330c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x27330Cu;
    {
        const bool branch_taken_0x27330c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27330c) {
            ctx->pc = 0x2733ACu;
            goto label_2733ac;
        }
    }
    ctx->pc = 0x273314u;
label_273314:
    // 0x273314: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x273314u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273318: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x273318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x27331c: 0x24050078  addiu       $a1, $zero, 0x78
    ctx->pc = 0x27331cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x273320: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x273320u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x273324: 0x2652818  mult        $a1, $s3, $a1
    ctx->pc = 0x273324u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x273328: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x273328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x27332c: 0x8f879da8  lw          $a3, -0x6258($gp)
    ctx->pc = 0x27332cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942120)));
    // 0x273330: 0x2463df30  addiu       $v1, $v1, -0x20D0
    ctx->pc = 0x273330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958896));
    // 0x273334: 0x2484e8e0  addiu       $a0, $a0, -0x1720
    ctx->pc = 0x273334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961376));
    // 0x273338: 0x2442e930  addiu       $v0, $v0, -0x16D0
    ctx->pc = 0x273338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961456));
    // 0x27333c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x27333cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273340: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x273340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x273344: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x273344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x273348: 0xad460000  sw          $a2, 0x0($t2)
    ctx->pc = 0x273348u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
    // 0x27334c: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x27334cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x273350: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x273350u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x273354: 0xae450160  sw          $a1, 0x160($s2)
    ctx->pc = 0x273354u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 352), GPR_U32(ctx, 5));
    // 0x273358: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x273358u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x27335c: 0x1000ffbd  b           . + 4 + (-0x43 << 2)
    ctx->pc = 0x27335Cu;
    {
        const bool branch_taken_0x27335c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27335Cu;
        // 0x273360: 0xac920000  sw          $s2, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27335c) {
            ctx->pc = 0x273254u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_273254;
        }
    }
    ctx->pc = 0x273364u;
label_273364:
    // 0x273364: 0x8f84b0ac  lw          $a0, -0x4F54($gp)
    ctx->pc = 0x273364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946988)));
    // 0x273368: 0x28820078  slti        $v0, $a0, 0x78
    ctx->pc = 0x273368u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)120) ? 1 : 0);
    // 0x27336c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27336Cu;
    {
        const bool branch_taken_0x27336c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x273370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27336Cu;
        // 0x273370: 0x24030078  addiu       $v1, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27336c) {
            ctx->pc = 0x273384u;
            goto label_273384;
        }
    }
    ctx->pc = 0x273374u;
    // 0x273374: 0xc09a4d0  jal         func_269340
    ctx->pc = 0x273374u;
    SET_GPR_U32(ctx, 31, 0x27337Cu);
    ctx->pc = 0x273378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273374u;
    // 0x273378: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269340u, 0x273374u, 0x27337Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27337Cu;
label_27337c:
    // 0x27337c: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x27337Cu;
    {
        const bool branch_taken_0x27337c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27337Cu;
        // 0x273380: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27337c) {
            ctx->pc = 0x2735C4u;
            goto label_2735c4;
        }
    }
    ctx->pc = 0x273384u;
label_273384:
    // 0x273384: 0x8f82b0a8  lw          $v0, -0x4F58($gp)
    ctx->pc = 0x273384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946984)));
    // 0x273388: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x273388u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x27338c: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x27338cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x273390: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x273390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x273394: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x273394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x273398: 0xae420160  sw          $v0, 0x160($s2)
    ctx->pc = 0x273398u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 352), GPR_U32(ctx, 2));
    // 0x27339c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27339cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2733a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2733A0u;
    {
        const bool branch_taken_0x2733a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2733A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2733A0u;
        // 0x2733a4: 0xaf84b0ac  sw          $a0, -0x4F54($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946988), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2733a0) {
            ctx->pc = 0x2733ACu;
            goto label_2733ac;
        }
    }
    ctx->pc = 0x2733A8u;
label_2733a8:
    // 0x2733a8: 0x8e500160  lw          $s0, 0x160($s2)
    ctx->pc = 0x2733a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
label_2733ac:
    // 0x2733ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2733acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2733b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2733b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2733b4: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x2733b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2733b8: 0xae13005c  sw          $s3, 0x5C($s0)
    ctx->pc = 0x2733b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 19));
    // 0x2733bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2733bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2733c0: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x2733c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x2733c4: 0xae42008c  sw          $v0, 0x8C($s2)
    ctx->pc = 0x2733c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 2));
    // 0x2733c8: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2733C8u;
    SET_GPR_U32(ctx, 31, 0x2733D0u);
    ctx->pc = 0x2733CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2733C8u;
    // 0x2733cc: 0xe6000064  swc1        $f0, 0x64($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2733C8u, 0x2733D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2733D0u;
label_2733d0:
    // 0x2733d0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2733D0u;
    {
        const bool branch_taken_0x2733d0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2733D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2733D0u;
        // 0x2733d4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2733d0) {
            ctx->pc = 0x2733E4u;
            goto label_2733e4;
        }
    }
    ctx->pc = 0x2733D8u;
    // 0x2733d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2733d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2733dc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2733DCu;
    {
        const bool branch_taken_0x2733dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2733E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2733DCu;
        // 0x2733e0: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2733dc) {
            ctx->pc = 0x2733F8u;
            goto label_2733f8;
        }
    }
    ctx->pc = 0x2733E4u;
label_2733e4:
    // 0x2733e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2733e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2733e8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2733e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2733ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2733ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2733f0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2733f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2733f4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2733f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2733f8:
    // 0x2733f8: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2733f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2733fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2733fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x273400: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x273400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x273404: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x273404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x273408: 0xae050060  sw          $a1, 0x60($s0)
    ctx->pc = 0x273408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 5));
    // 0x27340c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x27340cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x273410: 0x2443c4a8  addiu       $v1, $v0, -0x3B58
    ctx->pc = 0x273410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952104));
    // 0x273414: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x273414u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x32C4F0u));
    // 0x273418: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x273418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x27341c: 0x10440044  beq         $v0, $a0, . + 4 + (0x44 << 2)
    ctx->pc = 0x27341Cu;
    {
        const bool branch_taken_0x27341c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x273420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27341Cu;
        // 0x273420: 0xe6000068  swc1        $f0, 0x68($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27341c) {
            ctx->pc = 0x273530u;
            goto label_273530;
        }
    }
    ctx->pc = 0x273424u;
    // 0x273424: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x273424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x273428: 0x12820042  beq         $s4, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x273428u;
    {
        const bool branch_taken_0x273428 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x27342Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273428u;
        // 0x27342c: 0x2622feaa  addiu       $v0, $s1, -0x156 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294966954));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273428) {
            ctx->pc = 0x273534u;
            goto label_273534;
        }
    }
    ctx->pc = 0x273430u;
    // 0x273430: 0x2631fe98  addiu       $s1, $s1, -0x168
    ctx->pc = 0x273430u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294966936));
    // 0x273434: 0xe7b70004  swc1        $f23, 0x4($sp)
    ctx->pc = 0x273434u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x273438: 0xe7b50000  swc1        $f21, 0x0($sp)
    ctx->pc = 0x273438u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x27343c: 0x2e22001e  sltiu       $v0, $s1, 0x1E
    ctx->pc = 0x27343cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
    // 0x273440: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x273440u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x273444: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x273444u;
    {
        const bool branch_taken_0x273444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x273448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273444u;
        // 0x273448: 0xe7b60008  swc1        $f22, 0x8($sp) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x273444) {
            ctx->pc = 0x27350Cu;
            goto label_27350c;
        }
    }
    ctx->pc = 0x27344Cu;
    // 0x27344c: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x27344cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x273450: 0x1445002f  bne         $v0, $a1, . + 4 + (0x2F << 2)
    ctx->pc = 0x273450u;
    {
        const bool branch_taken_0x273450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x273454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273450u;
        // 0x273454: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273450) {
            ctx->pc = 0x273510u;
            goto label_273510;
        }
    }
    ctx->pc = 0x273458u;
    // 0x273458: 0xc09cab0  jal         func_272AC0
    ctx->pc = 0x273458u;
    SET_GPR_U32(ctx, 31, 0x273460u);
    ctx->pc = 0x27345Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273458u;
    // 0x27345c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272AC0u, 0x273458u, 0x273460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273460u;
label_273460:
    // 0x273460: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x273460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x273464: 0x2e220018  sltiu       $v0, $s1, 0x18
    ctx->pc = 0x273464u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x273468: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x273468u;
    {
        const bool branch_taken_0x273468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27346Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273468u;
        // 0x27346c: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273468) {
            ctx->pc = 0x2734D8u;
            goto label_2734d8;
        }
    }
    ctx->pc = 0x273470u;
    // 0x273470: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x273470u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x273474: 0x24428060  addiu       $v0, $v0, -0x7FA0
    ctx->pc = 0x273474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934624));
    // 0x273478: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x273478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27347c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x27347cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x273480: 0x800008  jr          $a0
    ctx->pc = 0x273480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x273488u: goto label_273488;
            case 0x273498u: goto label_273498;
            case 0x2734A4u: goto label_2734a4;
            case 0x2734B4u: goto label_2734b4;
            case 0x2734C0u: goto label_2734c0;
            case 0x2734D0u: goto label_2734d0;
            case 0x2734D8u: goto label_2734d8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273480u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x273488u;
label_273488:
    // 0x273488: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x273488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x27348c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27348cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x273490: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x273490u;
    {
        const bool branch_taken_0x273490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273490u;
        // 0x273494: 0xe6000064  swc1        $f0, 0x64($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x273490) {
            ctx->pc = 0x2734D8u;
            goto label_2734d8;
        }
    }
    ctx->pc = 0x273498u;
label_273498:
    // 0x273498: 0xc7808590  lwc1        $f0, -0x7A70($gp)
    ctx->pc = 0x273498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27349c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x27349Cu;
    {
        const bool branch_taken_0x27349c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2734A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27349Cu;
        // 0x2734a0: 0xe6000064  swc1        $f0, 0x64($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27349c) {
            ctx->pc = 0x2734D8u;
            goto label_2734d8;
        }
    }
    ctx->pc = 0x2734A4u;
label_2734a4:
    // 0x2734a4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2734a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2734a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2734a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2734ac: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2734ACu;
    {
        const bool branch_taken_0x2734ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2734B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2734ACu;
        // 0x2734b0: 0xe6000064  swc1        $f0, 0x64($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2734ac) {
            ctx->pc = 0x2734D8u;
            goto label_2734d8;
        }
    }
    ctx->pc = 0x2734B4u;
label_2734b4:
    // 0x2734b4: 0xc7808594  lwc1        $f0, -0x7A6C($gp)
    ctx->pc = 0x2734b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2734b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2734B8u;
    {
        const bool branch_taken_0x2734b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2734BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2734B8u;
        // 0x2734bc: 0xe6000064  swc1        $f0, 0x64($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2734b8) {
            ctx->pc = 0x2734D8u;
            goto label_2734d8;
        }
    }
    ctx->pc = 0x2734C0u;
label_2734c0:
    // 0x2734c0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2734c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2734c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2734c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2734c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2734C8u;
    {
        const bool branch_taken_0x2734c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2734CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2734C8u;
        // 0x2734cc: 0xe6000064  swc1        $f0, 0x64($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2734c8) {
            ctx->pc = 0x2734D8u;
            goto label_2734d8;
        }
    }
    ctx->pc = 0x2734D0u;
label_2734d0:
    // 0x2734d0: 0xc7808598  lwc1        $f0, -0x7A68($gp)
    ctx->pc = 0x2734d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2734d4: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x2734d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
label_2734d8:
    // 0x2734d8: 0xc6010064  lwc1        $f1, 0x64($s0)
    ctx->pc = 0x2734d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2734dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2734dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2734e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2734e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2734e4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2734e4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2734e8: 0x0  nop
    ctx->pc = 0x2734e8u;
    // NOP
    // 0x2734ec: 0x45030016  bc1tl       . + 4 + (0x16 << 2)
    ctx->pc = 0x2734ECu;
    {
        const bool branch_taken_0x2734ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2734ec) {
            ctx->pc = 0x2734F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2734ECu;
            // 0x2734f0: 0xe6590048  swc1        $f25, 0x48($s2) (Delay Slot)
            { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 72), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x273548u;
            goto label_273548;
        }
    }
    ctx->pc = 0x2734F4u;
    // 0x2734f4: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x2734f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2734f8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2734f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2734fc: 0xc09829e  jal         func_260A78
    ctx->pc = 0x2734FCu;
    SET_GPR_U32(ctx, 31, 0x273504u);
    ctx->pc = 0x273500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2734FCu;
    // 0x273500: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260A78u, 0x2734FCu, 0x273504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273504u;
label_273504:
    // 0x273504: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x273504u;
    {
        const bool branch_taken_0x273504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273504u;
        // 0x273508: 0xe6590048  swc1        $f25, 0x48($s2) (Delay Slot)
        { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x273504) {
            ctx->pc = 0x273548u;
            goto label_273548;
        }
    }
    ctx->pc = 0x27350Cu;
label_27350c:
    // 0x27350c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x27350cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_273510:
    // 0x273510: 0x12820003  beq         $s4, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x273510u;
    {
        const bool branch_taken_0x273510 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x273514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273510u;
        // 0x273514: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273510) {
            ctx->pc = 0x273520u;
            goto label_273520;
        }
    }
    ctx->pc = 0x273518u;
    // 0x273518: 0x5682000b  bnel        $s4, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x273518u;
    {
        const bool branch_taken_0x273518 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x273518) {
            ctx->pc = 0x27351Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273518u;
            // 0x27351c: 0xe6590048  swc1        $f25, 0x48($s2) (Delay Slot)
            { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 72), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x273548u;
            goto label_273548;
        }
    }
    ctx->pc = 0x273520u;
label_273520:
    // 0x273520: 0xc09cab0  jal         func_272AC0
    ctx->pc = 0x273520u;
    SET_GPR_U32(ctx, 31, 0x273528u);
    ctx->pc = 0x273524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273520u;
    // 0x273524: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272AC0u, 0x273520u, 0x273528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273528u;
label_273528:
    // 0x273528: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x273528u;
    {
        const bool branch_taken_0x273528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27352Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273528u;
        // 0x27352c: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273528) {
            ctx->pc = 0x273544u;
            goto label_273544;
        }
    }
    ctx->pc = 0x273530u;
label_273530:
    // 0x273530: 0x2622feaa  addiu       $v0, $s1, -0x156
    ctx->pc = 0x273530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294966954));
label_273534:
    // 0x273534: 0x2c42000b  sltiu       $v0, $v0, 0xB
    ctx->pc = 0x273534u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x273538: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x273538u;
    {
        const bool branch_taken_0x273538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x273538) {
            ctx->pc = 0x27353Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273538u;
            // 0x27353c: 0xe6590048  swc1        $f25, 0x48($s2) (Delay Slot)
            { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 72), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x273548u;
            goto label_273548;
        }
    }
    ctx->pc = 0x273540u;
    // 0x273540: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x273540u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_273544:
    // 0x273544: 0xe6590048  swc1        $f25, 0x48($s2)
    ctx->pc = 0x273544u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 72), bits); }
label_273548:
    // 0x273548: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x273548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27354c: 0xe65a004c  swc1        $f26, 0x4C($s2)
    ctx->pc = 0x27354cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 76), bits); }
    // 0x273550: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x273550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273554: 0xe6540058  swc1        $f20, 0x58($s2)
    ctx->pc = 0x273554u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 88), bits); }
    // 0x273558: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x273558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x27355c: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x27355cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x273560: 0xe6180014  swc1        $f24, 0x14($s0)
    ctx->pc = 0x273560u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x273564: 0xe61b0008  swc1        $f27, 0x8($s0)
    ctx->pc = 0x273564u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x273568: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x273568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x27356c: 0xe6150018  swc1        $f21, 0x18($s0)
    ctx->pc = 0x27356cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x273570: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x273570u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x273574: 0xc6400034  lwc1        $f0, 0x34($s2)
    ctx->pc = 0x273574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273578: 0xe6160020  swc1        $f22, 0x20($s0)
    ctx->pc = 0x273578u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x27357c: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x27357cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
    // 0x273580: 0xae15000c  sw          $s5, 0xC($s0)
    ctx->pc = 0x273580u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 21));
    // 0x273584: 0xae160010  sw          $s6, 0x10($s0)
    ctx->pc = 0x273584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 22));
    // 0x273588: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x273588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x27358c: 0xae17002c  sw          $s7, 0x2C($s0)
    ctx->pc = 0x27358cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 23));
    // 0x273590: 0xae1e0030  sw          $fp, 0x30($s0)
    ctx->pc = 0x273590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 30));
    // 0x273594: 0xae040044  sw          $a0, 0x44($s0)
    ctx->pc = 0x273594u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 4));
    // 0x273598: 0xae140000  sw          $s4, 0x0($s0)
    ctx->pc = 0x273598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 20));
    // 0x27359c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x27359cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2735a0: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x2735a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x2735a4: 0x16850006  bne         $s4, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2735A4u;
    {
        const bool branch_taken_0x2735a4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 5));
        ctx->pc = 0x2735A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2735A4u;
        // 0x2735a8: 0xae030028  sw          $v1, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2735a4) {
            ctx->pc = 0x2735C0u;
            goto label_2735c0;
        }
    }
    ctx->pc = 0x2735ACu;
    // 0x2735ac: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x2735acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2735b0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2735b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2735b4: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x2735b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x2735b8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2735b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2735bc: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x2735bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
label_2735c0:
    // 0x2735c0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2735c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2735c4:
    // 0x2735c4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2735c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2735c8: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x2735c8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2735cc: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x2735ccu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2735d0: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2735d0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2735d4: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2735d4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2735d8: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2735d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2735dc: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2735dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2735e0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2735e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2735e4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2735e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2735e8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2735e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2735ec: 0xc7bb00e8  lwc1        $f27, 0xE8($sp)
    ctx->pc = 0x2735ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x2735f0: 0xc7ba00e0  lwc1        $f26, 0xE0($sp)
    ctx->pc = 0x2735f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x2735f4: 0xc7b900d8  lwc1        $f25, 0xD8($sp)
    ctx->pc = 0x2735f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2735f8: 0xc7b800d0  lwc1        $f24, 0xD0($sp)
    ctx->pc = 0x2735f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2735fc: 0xc7b700c8  lwc1        $f23, 0xC8($sp)
    ctx->pc = 0x2735fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x273600: 0xc7b600c0  lwc1        $f22, 0xC0($sp)
    ctx->pc = 0x273600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x273604: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x273604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x273608: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x273608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27360c: 0x3e00008  jr          $ra
    ctx->pc = 0x27360Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27360Cu;
        // 0x273610: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27360Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x273614u;
}
