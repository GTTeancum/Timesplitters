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

// Function: gunRemoteFire
// Address: 0x290010 - 0x290500
void gunRemoteFire_0x290010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gunRemoteFire_0x290010");
#endif

    switch (ctx->pc) {
        case 0x290070u: goto label_290070;
        case 0x2901e0u: goto label_2901e0;
        case 0x2901f8u: goto label_2901f8;
        case 0x290218u: goto label_290218;
        case 0x29022cu: goto label_29022c;
        case 0x29023cu: goto label_29023c;
        case 0x290278u: goto label_290278;
        case 0x2902c8u: goto label_2902c8;
        case 0x2903a8u: goto label_2903a8;
        case 0x290484u: goto label_290484;
        case 0x290494u: goto label_290494;
        case 0x2904b8u: goto label_2904b8;
        case 0x2904c8u: goto label_2904c8;
        default: break;
    }

    ctx->pc = 0x290010u;

    // 0x290010: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x290010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x290014: 0xffbe0130  sd          $fp, 0x130($sp)
    ctx->pc = 0x290014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 30));
    // 0x290018: 0xffb50100  sd          $s5, 0x100($sp)
    ctx->pc = 0x290018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 21));
    // 0x29001c: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x29001cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290020: 0xffb400f0  sd          $s4, 0xF0($sp)
    ctx->pc = 0x290020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 20));
    // 0x290024: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x290024u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290028: 0xffb000b0  sd          $s0, 0xB0($sp)
    ctx->pc = 0x290028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
    // 0x29002c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x29002cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290030: 0xffb70120  sd          $s7, 0x120($sp)
    ctx->pc = 0x290030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 23));
    // 0x290034: 0x27b00090  addiu       $s0, $sp, 0x90
    ctx->pc = 0x290034u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x290038: 0xffb100c0  sd          $s1, 0xC0($sp)
    ctx->pc = 0x290038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 17));
    // 0x29003c: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x29003cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290040: 0xffb60110  sd          $s6, 0x110($sp)
    ctx->pc = 0x290040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 22));
    // 0x290044: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x290044u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290048: 0xffb300e0  sd          $s3, 0xE0($sp)
    ctx->pc = 0x290048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 19));
    // 0x29004c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29004cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290050: 0xffbf0140  sd          $ra, 0x140($sp)
    ctx->pc = 0x290050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 31));
    // 0x290054: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x290054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290058: 0xffb200d0  sd          $s2, 0xD0($sp)
    ctx->pc = 0x290058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 18));
    // 0x29005c: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x29005cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x290060: 0xe7b50158  swc1        $f21, 0x158($sp)
    ctx->pc = 0x290060u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x290064: 0xe7b40150  swc1        $f20, 0x150($sp)
    ctx->pc = 0x290064u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x290068: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x290068u;
    SET_GPR_U32(ctx, 31, 0x290070u);
    ctx->pc = 0x29006Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290068u;
    // 0x29006c: 0xafa800a0  sw          $t0, 0xA0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x290068u, 0x290070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290070u;
label_290070:
    // 0x290070: 0x8eaa0020  lw          $t2, 0x20($s5)
    ctx->pc = 0x290070u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x290074: 0x24050190  addiu       $a1, $zero, 0x190
    ctx->pc = 0x290074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x290078: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x290078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x29007c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x29007cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x290080: 0x8d470000  lw          $a3, 0x0($t2)
    ctx->pc = 0x290080u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x290084: 0x24636218  addiu       $v1, $v1, 0x6218
    ctx->pc = 0x290084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25112));
    // 0x290088: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x290088u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x29008c: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x29008cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x290090: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x290090u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x290094: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x290094u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290098: 0x8f89b460  lw          $t1, -0x4BA0($gp)
    ctx->pc = 0x290098u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
    // 0x29009c: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x29009cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2900a0: 0xa42818  mult        $a1, $a1, $a0
    ctx->pc = 0x2900a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2900a4: 0x8eb30160  lw          $s3, 0x160($s5)
    ctx->pc = 0x2900a4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 352)));
    // 0x2900a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2900a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2900ac: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x2900acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2900b0: 0x24460034  addiu       $a2, $v0, 0x34
    ctx->pc = 0x2900b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x2900b4: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2900b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2900b8: 0x245600bc  addiu       $s6, $v0, 0xBC
    ctx->pc = 0x2900b8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 188));
    // 0x2900bc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2900bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2900c0: 0xe52823  subu        $a1, $a3, $a1
    ctx->pc = 0x2900c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2900c4: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x2900c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x2900c8: 0x103180a  movz        $v1, $t0, $v1
    ctx->pc = 0x2900c8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 8));
    // 0x2900cc: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2900ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x2900d0: 0x192000fd  blez        $t1, . + 4 + (0xFD << 2)
    ctx->pc = 0x2900D0u;
    {
        const bool branch_taken_0x2900d0 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x2900D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2900D0u;
        // 0x2900d4: 0xdeb00a  movz        $s6, $a2, $fp (Delay Slot)
        if (GPR_U64(ctx, 30) == 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2900d0) {
            ctx->pc = 0x2904C8u;
            goto label_2904c8;
        }
    }
    ctx->pc = 0x2900D8u;
    // 0x2900d8: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2900D8u;
    {
        const bool branch_taken_0x2900d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2900DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2900D8u;
        // 0x2900dc: 0x8e820044  lw          $v0, 0x44($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2900d8) {
            ctx->pc = 0x2900E8u;
            goto label_2900e8;
        }
    }
    ctx->pc = 0x2900E0u;
    // 0x2900e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2900E0u;
    {
        const bool branch_taken_0x2900e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2900E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2900E0u;
        // 0x2900e4: 0x8ec3000c  lw          $v1, 0xC($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2900e0) {
            ctx->pc = 0x2900ECu;
            goto label_2900ec;
        }
    }
    ctx->pc = 0x2900E8u;
label_2900e8:
    // 0x2900e8: 0x8ec30008  lw          $v1, 0x8($s6)
    ctx->pc = 0x2900e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_2900ec:
    // 0x2900ec: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2900ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2900f0: 0x144000f6  bnez        $v0, . + 4 + (0xF6 << 2)
    ctx->pc = 0x2900F0u;
    {
        const bool branch_taken_0x2900f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2900F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2900F0u;
        // 0x2900f4: 0xdfbf0140  ld          $ra, 0x140($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2900f0) {
            ctx->pc = 0x2904CCu;
            goto label_2904cc;
        }
    }
    ctx->pc = 0x2900F8u;
    // 0x2900f8: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x2900f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2900fc: 0x240201a9  addiu       $v0, $zero, 0x1A9
    ctx->pc = 0x2900fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 425));
    // 0x290100: 0x14620020  bne         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x290100u;
    {
        const bool branch_taken_0x290100 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x290104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290100u;
        // 0x290104: 0x95420124  lhu         $v0, 0x124($t2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290100) {
            ctx->pc = 0x290184u;
            goto label_290184;
        }
    }
    ctx->pc = 0x290108u;
    // 0x290108: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x290108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29010c: 0xafa300a4  sw          $v1, 0xA4($sp)
    ctx->pc = 0x29010cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 3));
    // 0x290110: 0x3042fffc  andi        $v0, $v0, 0xFFFC
    ctx->pc = 0x290110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65532);
    // 0x290114: 0x8e630068  lw          $v1, 0x68($s3)
    ctx->pc = 0x290114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
    // 0x290118: 0xa5420124  sh          $v0, 0x124($t2)
    ctx->pc = 0x290118u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 292), (uint16_t)GPR_U32(ctx, 2));
    // 0x29011c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x29011Cu;
    {
        const bool branch_taken_0x29011c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x290120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29011Cu;
        // 0x290120: 0x3047ffff  andi        $a3, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29011c) {
            ctx->pc = 0x29012Cu;
            goto label_29012c;
        }
    }
    ctx->pc = 0x290124u;
    // 0x290124: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x290124u;
    {
        const bool branch_taken_0x290124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290124u;
        // 0x290128: 0x34e20002  ori         $v0, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x290124) {
            ctx->pc = 0x290130u;
            goto label_290130;
        }
    }
    ctx->pc = 0x29012Cu;
label_29012c:
    // 0x29012c: 0x34e20001  ori         $v0, $a3, 0x1
    ctx->pc = 0x29012cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1);
label_290130:
    // 0x290130: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x290130u;
    {
        const bool branch_taken_0x290130 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x290134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290130u;
        // 0x290134: 0xa5620124  sh          $v0, 0x124($t3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 11), 292), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290130) {
            ctx->pc = 0x290144u;
            goto label_290144;
        }
    }
    ctx->pc = 0x290138u;
    // 0x290138: 0xc7808b2c  lwc1        $f0, -0x74D4($gp)
    ctx->pc = 0x290138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29013c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x29013Cu;
    {
        const bool branch_taken_0x29013c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29013Cu;
        // 0x290140: 0xe660007c  swc1        $f0, 0x7C($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 124), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29013c) {
            ctx->pc = 0x29014Cu;
            goto label_29014c;
        }
    }
    ctx->pc = 0x290144u;
label_290144:
    // 0x290144: 0xc7808b30  lwc1        $f0, -0x74D0($gp)
    ctx->pc = 0x290144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290148: 0xe6600080  swc1        $f0, 0x80($s3)
    ctx->pc = 0x290148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 128), bits); }
label_29014c:
    // 0x29014c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x29014cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x290150: 0x8ca50048  lw          $a1, 0x48($a1)
    ctx->pc = 0x290150u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x290154: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x290154u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x290158: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x290158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x29015c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29015cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x290160: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x290160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x290164: 0xe6600088  swc1        $f0, 0x88($s3)
    ctx->pc = 0x290164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 136), bits); }
    // 0x290168: 0x28640002  slti        $a0, $v1, 0x2
    ctx->pc = 0x290168u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x29016c: 0xae630068  sw          $v1, 0x68($s3)
    ctx->pc = 0x29016cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 3));
    // 0x290170: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x290170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x290174: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x290174u;
    {
        const bool branch_taken_0x290174 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x290178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290174u;
        // 0x290178: 0xa29021  addu        $s2, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290174) {
            ctx->pc = 0x2901A4u;
            goto label_2901a4;
        }
    }
    ctx->pc = 0x29017Cu;
    // 0x29017c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x29017Cu;
    {
        const bool branch_taken_0x29017c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29017Cu;
        // 0x290180: 0xae600068  sw          $zero, 0x68($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29017c) {
            ctx->pc = 0x2901A4u;
            goto label_2901a4;
        }
    }
    ctx->pc = 0x290184u;
label_290184:
    // 0x290184: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x290184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290188: 0xafa400a4  sw          $a0, 0xA4($sp)
    ctx->pc = 0x290188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 4));
    // 0x29018c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x29018cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x290190: 0xa5420124  sh          $v0, 0x124($t2)
    ctx->pc = 0x290190u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 292), (uint16_t)GPR_U32(ctx, 2));
    // 0x290194: 0x80a30007  lb          $v1, 0x7($a1)
    ctx->pc = 0x290194u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 7)));
    // 0x290198: 0x18600002  blez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x290198u;
    {
        const bool branch_taken_0x290198 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x29019Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290198u;
        // 0x29019c: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290198) {
            ctx->pc = 0x2901A4u;
            goto label_2901a4;
        }
    }
    ctx->pc = 0x2901A0u;
    // 0x2901a0: 0x8cb20048  lw          $s2, 0x48($a1)
    ctx->pc = 0x2901a0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
label_2901a4:
    // 0x2901a4: 0xc6af004c  lwc1        $f15, 0x4C($s5)
    ctx->pc = 0x2901a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2901a8: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x2901a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2901ac: 0xc7808b34  lwc1        $f0, -0x74CC($gp)
    ctx->pc = 0x2901acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2901b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2901b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2901b4: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2901b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2901b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2901b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2901bc: 0x46007bc2  mul.s       $f15, $f15, $f0
    ctx->pc = 0x2901bcu;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[0]);
    // 0x2901c0: 0xae800044  sw          $zero, 0x44($s4)
    ctx->pc = 0x2901c0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 0));
    // 0x2901c4: 0xc6ac0030  lwc1        $f12, 0x30($s5)
    ctx->pc = 0x2901c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2901c8: 0xc6ad0034  lwc1        $f13, 0x34($s5)
    ctx->pc = 0x2901c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2901cc: 0x0  nop
    ctx->pc = 0x2901ccu;
    // NOP
    // 0x2901d0: 0x0  nop
    ctx->pc = 0x2901d0u;
    // NOP
    // 0x2901d4: 0x46017bc3  div.s       $f15, $f15, $f1
    ctx->pc = 0x2901d4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[15] = copysignf(INFINITY, ctx->f[15] * 0.0f); } else ctx->f[15] = ctx->f[15] / ctx->f[1];
    // 0x2901d8: 0xc0ad314  jal         func_2B4C50
    ctx->pc = 0x2901D8u;
    SET_GPR_U32(ctx, 31, 0x2901E0u);
    ctx->pc = 0x2901DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2901D8u;
    // 0x2901dc: 0xc6ae0038  lwc1        $f14, 0x38($s5) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4C50u, 0x2901D8u, 0x2901E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2901E0u;
label_2901e0:
    // 0x2901e0: 0x8ea20020  lw          $v0, 0x20($s5)
    ctx->pc = 0x2901e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x2901e4: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x2901e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2901e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2901e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2901ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2901ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2901f0: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x2901F0u;
    SET_GPR_U32(ctx, 31, 0x2901F8u);
    ctx->pc = 0x2901F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2901F0u;
    // 0x2901f4: 0x8c460004  lw          $a2, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x2901F0u, 0x2901F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2901F8u;
label_2901f8:
    // 0x2901f8: 0x8ea20020  lw          $v0, 0x20($s5)
    ctx->pc = 0x2901f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x2901fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2901fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290200: 0x8fa400a4  lw          $a0, 0xA4($sp)
    ctx->pc = 0x290200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x290204: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x290204u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x290208: 0x41980  sll         $v1, $a0, 6
    ctx->pc = 0x290208u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x29020c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29020cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290210: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x290210u;
    SET_GPR_U32(ctx, 31, 0x290218u);
    ctx->pc = 0x290214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290210u;
    // 0x290214: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x290210u, 0x290218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290218u;
label_290218:
    // 0x290218: 0xc64e0008  lwc1        $f14, 0x8($s2)
    ctx->pc = 0x290218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x29021c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29021cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290220: 0xc64c0000  lwc1        $f12, 0x0($s2)
    ctx->pc = 0x290220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x290224: 0xc0ad390  jal         func_2B4E40
    ctx->pc = 0x290224u;
    SET_GPR_U32(ctx, 31, 0x29022Cu);
    ctx->pc = 0x290228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290224u;
    // 0x290228: 0xc64d0004  lwc1        $f13, 0x4($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4E40u, 0x290224u, 0x29022Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29022Cu;
label_29022c:
    // 0x29022c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29022cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290230: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x290230u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290234: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x290234u;
    SET_GPR_U32(ctx, 31, 0x29023Cu);
    ctx->pc = 0x290238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290234u;
    // 0x290238: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x290234u, 0x29023Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29023Cu;
label_29023c:
    // 0x29023c: 0xc7a20080  lwc1        $f2, 0x80($sp)
    ctx->pc = 0x29023cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x290240: 0x240201a9  addiu       $v0, $zero, 0x1A9
    ctx->pc = 0x290240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 425));
    // 0x290244: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x290244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290248: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x290248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29024c: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x29024cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x290250: 0xe6820048  swc1        $f2, 0x48($s4)
    ctx->pc = 0x290250u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 72), bits); }
    // 0x290254: 0xe680004c  swc1        $f0, 0x4C($s4)
    ctx->pc = 0x290254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 76), bits); }
    // 0x290258: 0x1462007b  bne         $v1, $v0, . + 4 + (0x7B << 2)
    ctx->pc = 0x290258u;
    {
        const bool branch_taken_0x290258 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x29025Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290258u;
        // 0x29025c: 0xe6810050  swc1        $f1, 0x50($s4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x290258) {
            ctx->pc = 0x290448u;
            goto label_290448;
        }
    }
    ctx->pc = 0x290260u;
    // 0x290260: 0x8e620060  lw          $v0, 0x60($s3)
    ctx->pc = 0x290260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x290264: 0x8c500164  lw          $s0, 0x164($v0)
    ctx->pc = 0x290264u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 356)));
    // 0x290268: 0x12000078  beqz        $s0, . + 4 + (0x78 << 2)
    ctx->pc = 0x290268u;
    {
        const bool branch_taken_0x290268 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29026Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290268u;
        // 0x29026c: 0xc7a00070  lwc1        $f0, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x290268) {
            ctx->pc = 0x29044Cu;
            goto label_29044c;
        }
    }
    ctx->pc = 0x290270u;
    // 0x290270: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x290270u;
    SET_GPR_U32(ctx, 31, 0x290278u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x290270u, 0x290278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290278u;
label_290278:
    // 0x290278: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x290278u;
    {
        const bool branch_taken_0x290278 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x29027Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290278u;
        // 0x29027c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290278) {
            ctx->pc = 0x29028Cu;
            goto label_29028c;
        }
    }
    ctx->pc = 0x290280u;
    // 0x290280: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x290280u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x290284: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x290284u;
    {
        const bool branch_taken_0x290284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290284u;
        // 0x290288: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x290284) {
            ctx->pc = 0x2902A0u;
            goto label_2902a0;
        }
    }
    ctx->pc = 0x29028Cu;
label_29028c:
    // 0x29028c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x29028cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x290290: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x290290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x290294: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x290294u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x290298: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x290298u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29029c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x29029cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2902a0:
    // 0x2902a0: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2902a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2902a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2902a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2902a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2902a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2902ac: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2902acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2902b0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2902b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2902b4: 0xc6c10020  lwc1        $f1, 0x20($s6)
    ctx->pc = 0x2902b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2902b8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2902b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2902bc: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2902bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2902c0: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2902C0u;
    SET_GPR_U32(ctx, 31, 0x2902C8u);
    ctx->pc = 0x2902C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2902C0u;
    // 0x2902c4: 0x46010542  mul.s       $f21, $f0, $f1 (Delay Slot)
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2902C0u, 0x2902C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2902C8u;
label_2902c8:
    // 0x2902c8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2902C8u;
    {
        const bool branch_taken_0x2902c8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2902CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2902C8u;
        // 0x2902cc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2902c8) {
            ctx->pc = 0x2902DCu;
            goto label_2902dc;
        }
    }
    ctx->pc = 0x2902D0u;
    // 0x2902d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2902d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2902d4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2902D4u;
    {
        const bool branch_taken_0x2902d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2902D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2902D4u;
        // 0x2902d8: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2902d4) {
            ctx->pc = 0x2902F0u;
            goto label_2902f0;
        }
    }
    ctx->pc = 0x2902DCu;
label_2902dc:
    // 0x2902dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2902dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2902e0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2902e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2902e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2902e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2902e8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2902e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2902ec: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2902ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2902f0:
    // 0x2902f0: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2902f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2902f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2902f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2902f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2902f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2902fc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2902fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x290300: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x290300u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x290304: 0x8e02033c  lw          $v0, 0x33C($s0)
    ctx->pc = 0x290304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 828)));
    // 0x290308: 0xc6c10020  lwc1        $f1, 0x20($s6)
    ctx->pc = 0x290308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29030c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x29030cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x290310: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x290310u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x290314: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x290314u;
    {
        const bool branch_taken_0x290314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x290318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290314u;
        // 0x290318: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x290314) {
            ctx->pc = 0x290350u;
            goto label_290350;
        }
    }
    ctx->pc = 0x29031Cu;
    // 0x29031c: 0xc6800048  lwc1        $f0, 0x48($s4)
    ctx->pc = 0x29031cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290320: 0xc6010340  lwc1        $f1, 0x340($s0)
    ctx->pc = 0x290320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290324: 0xc682004c  lwc1        $f2, 0x4C($s4)
    ctx->pc = 0x290324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x290328: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x290328u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29032c: 0xc6830050  lwc1        $f3, 0x50($s4)
    ctx->pc = 0x29032cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x290330: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x290330u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x290334: 0xc6000344  lwc1        $f0, 0x344($s0)
    ctx->pc = 0x290334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290338: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x290338u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x29033c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x29033cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x290340: 0xc6010348  lwc1        $f1, 0x348($s0)
    ctx->pc = 0x290340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290344: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x290344u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x290348: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x290348u;
    {
        const bool branch_taken_0x290348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29034Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290348u;
        // 0x29034c: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x290348) {
            ctx->pc = 0x290368u;
            goto label_290368;
        }
    }
    ctx->pc = 0x290350u;
label_290350:
    // 0x290350: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x290350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290354: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x290354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290358: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x290358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29035c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x29035cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x290360: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x290360u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x290364: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x290364u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_290368:
    // 0x290368: 0xc7a80000  lwc1        $f8, 0x0($sp)
    ctx->pc = 0x290368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x29036c: 0xc7a70004  lwc1        $f7, 0x4($sp)
    ctx->pc = 0x29036cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x290370: 0x46084002  mul.s       $f0, $f8, $f8
    ctx->pc = 0x290370u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x290374: 0xc7a60008  lwc1        $f6, 0x8($sp)
    ctx->pc = 0x290374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x290378: 0x46073842  mul.s       $f1, $f7, $f7
    ctx->pc = 0x290378u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x29037c: 0x46063082  mul.s       $f2, $f6, $f6
    ctx->pc = 0x29037cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x290380: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x290380u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x290384: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x290384u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x290388: 0x0  nop
    ctx->pc = 0x290388u;
    // NOP
    // 0x29038c: 0x0  nop
    ctx->pc = 0x29038cu;
    // NOP
    // 0x290390: 0x460c0004  c1          0xC0004
    ctx->pc = 0x290390u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x290394: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x290394u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x290398: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x290398u;
    {
        const bool branch_taken_0x290398 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x290398) {
            ctx->pc = 0x2903B4u;
            goto label_2903b4;
        }
    }
    ctx->pc = 0x2903A0u;
    // 0x2903a0: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x2903A0u;
    SET_GPR_U32(ctx, 31, 0x2903A8u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x2903A0u, 0x2903A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2903A8u;
label_2903a8:
    // 0x2903a8: 0xc7a80000  lwc1        $f8, 0x0($sp)
    ctx->pc = 0x2903a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2903ac: 0xc7a70004  lwc1        $f7, 0x4($sp)
    ctx->pc = 0x2903acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2903b0: 0xc7a60008  lwc1        $f6, 0x8($sp)
    ctx->pc = 0x2903b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_2903b4:
    // 0x2903b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2903b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2903b8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2903b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2903bc: 0xc60400f0  lwc1        $f4, 0xF0($s0)
    ctx->pc = 0x2903bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2903c0: 0x0  nop
    ctx->pc = 0x2903c0u;
    // NOP
    // 0x2903c4: 0x0  nop
    ctx->pc = 0x2903c4u;
    // NOP
    // 0x2903c8: 0x460018c3  div.s       $f3, $f3, $f0
    ctx->pc = 0x2903c8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[0];
    // 0x2903cc: 0xc60200e4  lwc1        $f2, 0xE4($s0)
    ctx->pc = 0x2903ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2903d0: 0x4604a902  mul.s       $f4, $f21, $f4
    ctx->pc = 0x2903d0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[21], ctx->f[4]);
    // 0x2903d4: 0xc6c5001c  lwc1        $f5, 0x1C($s6)
    ctx->pc = 0x2903d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2903d8: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x2903d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x2903dc: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x2903dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2903e0: 0x46034002  mul.s       $f0, $f8, $f3
    ctx->pc = 0x2903e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[3]);
    // 0x2903e4: 0x46033842  mul.s       $f1, $f7, $f3
    ctx->pc = 0x2903e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
    // 0x2903e8: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x2903e8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x2903ec: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x2903ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x2903f0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2903f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2903f4: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2903f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2903f8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2903f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2903fc: 0xc60200f4  lwc1        $f2, 0xF4($s0)
    ctx->pc = 0x2903fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x290400: 0xc60000e8  lwc1        $f0, 0xE8($s0)
    ctx->pc = 0x290400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290404: 0x4602a882  mul.s       $f2, $f21, $f2
    ctx->pc = 0x290404u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x290408: 0xc6c4001c  lwc1        $f4, 0x1C($s6)
    ctx->pc = 0x290408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x29040c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x29040cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x290410: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x290410u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x290414: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x290414u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x290418: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x290418u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x29041c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x29041cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x290420: 0xc60000f8  lwc1        $f0, 0xF8($s0)
    ctx->pc = 0x290420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290424: 0xc60100ec  lwc1        $f1, 0xEC($s0)
    ctx->pc = 0x290424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290428: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x290428u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x29042c: 0xc6c2001c  lwc1        $f2, 0x1C($s6)
    ctx->pc = 0x29042cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x290430: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x290430u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x290434: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x290434u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x290438: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x290438u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x29043c: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x29043cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x290440: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x290440u;
    {
        const bool branch_taken_0x290440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290440u;
        // 0x290444: 0xe7a30008  swc1        $f3, 0x8($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x290440) {
            ctx->pc = 0x290460u;
            goto label_290460;
        }
    }
    ctx->pc = 0x290448u;
label_290448:
    // 0x290448: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x290448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29044c:
    // 0x29044c: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x29044cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290450: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x290450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x290454: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x290454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x290458: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x290458u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x29045c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x29045cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_290460:
    // 0x290460: 0x240201a9  addiu       $v0, $zero, 0x1A9
    ctx->pc = 0x290460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 425));
    // 0x290464: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x290464u;
    {
        const bool branch_taken_0x290464 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x290468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290464u;
        // 0x290468: 0x8fa900a0  lw          $t1, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290464) {
            ctx->pc = 0x290498u;
            goto label_290498;
        }
    }
    ctx->pc = 0x29046Cu;
    // 0x29046c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x29046cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x290470: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x290470u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x290474: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x290474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x290478: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x290478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29047c: 0xc088f98  jal         func_223E60
    ctx->pc = 0x29047Cu;
    SET_GPR_U32(ctx, 31, 0x290484u);
    ctx->pc = 0x290480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29047Cu;
    // 0x290480: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E60u, 0x29047Cu, 0x290484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290484u;
label_290484:
    // 0x290484: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x290484u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x290488: 0x2404003e  addiu       $a0, $zero, 0x3E
    ctx->pc = 0x290488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x29048c: 0xc088f98  jal         func_223E60
    ctx->pc = 0x29048Cu;
    SET_GPR_U32(ctx, 31, 0x290494u);
    ctx->pc = 0x290490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29048Cu;
    // 0x290490: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E60u, 0x29048Cu, 0x290494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290494u;
label_290494:
    // 0x290494: 0x8fa900a0  lw          $t1, 0xA0($sp)
    ctx->pc = 0x290494u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_290498:
    // 0x290498: 0x2e0502d  daddu       $t2, $s7, $zero
    ctx->pc = 0x290498u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29049c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x29049cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2904a0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2904a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2904a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2904a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2904a8: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x2904a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2904ac: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x2904acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2904b0: 0xc0a41b2  jal         func_2906C8
    ctx->pc = 0x2904B0u;
    SET_GPR_U32(ctx, 31, 0x2904B8u);
    ctx->pc = 0x2904B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2904B0u;
    // 0x2904b4: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2906C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2906C8u, 0x2904B0u, 0x2904B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2904B8u;
label_2904b8:
    // 0x2904b8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2904b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2904bc: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2904bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2904c0: 0xc0a379a  jal         func_28DE68
    ctx->pc = 0x2904C0u;
    SET_GPR_U32(ctx, 31, 0x2904C8u);
    ctx->pc = 0x2904C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2904C0u;
    // 0x2904c4: 0x26a60030  addiu       $a2, $s5, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DE68u, 0x2904C0u, 0x2904C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2904C8u;
label_2904c8:
    // 0x2904c8: 0xdfbf0140  ld          $ra, 0x140($sp)
    ctx->pc = 0x2904c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
label_2904cc:
    // 0x2904cc: 0xdfbe0130  ld          $fp, 0x130($sp)
    ctx->pc = 0x2904ccu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2904d0: 0xdfb70120  ld          $s7, 0x120($sp)
    ctx->pc = 0x2904d0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2904d4: 0xdfb60110  ld          $s6, 0x110($sp)
    ctx->pc = 0x2904d4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2904d8: 0xdfb50100  ld          $s5, 0x100($sp)
    ctx->pc = 0x2904d8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2904dc: 0xdfb400f0  ld          $s4, 0xF0($sp)
    ctx->pc = 0x2904dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2904e0: 0xdfb300e0  ld          $s3, 0xE0($sp)
    ctx->pc = 0x2904e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2904e4: 0xdfb200d0  ld          $s2, 0xD0($sp)
    ctx->pc = 0x2904e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2904e8: 0xdfb100c0  ld          $s1, 0xC0($sp)
    ctx->pc = 0x2904e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2904ec: 0xdfb000b0  ld          $s0, 0xB0($sp)
    ctx->pc = 0x2904ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2904f0: 0xc7b50158  lwc1        $f21, 0x158($sp)
    ctx->pc = 0x2904f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2904f4: 0xc7b40150  lwc1        $f20, 0x150($sp)
    ctx->pc = 0x2904f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2904f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2904F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2904FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2904F8u;
        // 0x2904fc: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2904F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290500u;
}
