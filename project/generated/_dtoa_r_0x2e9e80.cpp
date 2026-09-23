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

// Function: _dtoa_r
// Address: 0x2e9e80 - 0x2eb04c
void _dtoa_r_0x2e9e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_dtoa_r_0x2e9e80");
#endif

    switch (ctx->pc) {
        case 0x2e9ef0u: goto label_2e9ef0;
        case 0x2e9fa8u: goto label_2e9fa8;
        case 0x2e9ff0u: goto label_2e9ff0;
        case 0x2ea0a0u: goto label_2ea0a0;
        case 0x2ea0b8u: goto label_2ea0b8;
        case 0x2ea0f8u: goto label_2ea0f8;
        case 0x2ea108u: goto label_2ea108;
        case 0x2ea118u: goto label_2ea118;
        case 0x2ea124u: goto label_2ea124;
        case 0x2ea134u: goto label_2ea134;
        case 0x2ea140u: goto label_2ea140;
        case 0x2ea14cu: goto label_2ea14c;
        case 0x2ea15cu: goto label_2ea15c;
        case 0x2ea16cu: goto label_2ea16c;
        case 0x2ea178u: goto label_2ea178;
        case 0x2ea1b0u: goto label_2ea1b0;
        case 0x2ea2f0u: goto label_2ea2f0;
        case 0x2ea32cu: goto label_2ea32c;
        case 0x2ea394u: goto label_2ea394;
        case 0x2ea3a8u: goto label_2ea3a8;
        case 0x2ea3c0u: goto label_2ea3c0;
        case 0x2ea3dcu: goto label_2ea3dc;
        case 0x2ea410u: goto label_2ea410;
        case 0x2ea420u: goto label_2ea420;
        case 0x2ea438u: goto label_2ea438;
        case 0x2ea464u: goto label_2ea464;
        case 0x2ea49cu: goto label_2ea49c;
        case 0x2ea4a8u: goto label_2ea4a8;
        case 0x2ea4b4u: goto label_2ea4b4;
        case 0x2ea4c4u: goto label_2ea4c4;
        case 0x2ea50cu: goto label_2ea50c;
        case 0x2ea51cu: goto label_2ea51c;
        case 0x2ea530u: goto label_2ea530;
        case 0x2ea53cu: goto label_2ea53c;
        case 0x2ea57cu: goto label_2ea57c;
        case 0x2ea588u: goto label_2ea588;
        case 0x2ea590u: goto label_2ea590;
        case 0x2ea5a0u: goto label_2ea5a0;
        case 0x2ea5b4u: goto label_2ea5b4;
        case 0x2ea5c0u: goto label_2ea5c0;
        case 0x2ea5ccu: goto label_2ea5cc;
        case 0x2ea5d8u: goto label_2ea5d8;
        case 0x2ea5f4u: goto label_2ea5f4;
        case 0x2ea60cu: goto label_2ea60c;
        case 0x2ea618u: goto label_2ea618;
        case 0x2ea65cu: goto label_2ea65c;
        case 0x2ea668u: goto label_2ea668;
        case 0x2ea67cu: goto label_2ea67c;
        case 0x2ea688u: goto label_2ea688;
        case 0x2ea694u: goto label_2ea694;
        case 0x2ea6a0u: goto label_2ea6a0;
        case 0x2ea6c8u: goto label_2ea6c8;
        case 0x2ea6d4u: goto label_2ea6d4;
        case 0x2ea6ecu: goto label_2ea6ec;
        case 0x2ea6f8u: goto label_2ea6f8;
        case 0x2ea708u: goto label_2ea708;
        case 0x2ea794u: goto label_2ea794;
        case 0x2ea7a0u: goto label_2ea7a0;
        case 0x2ea7c0u: goto label_2ea7c0;
        case 0x2ea7d0u: goto label_2ea7d0;
        case 0x2ea7e0u: goto label_2ea7e0;
        case 0x2ea7f4u: goto label_2ea7f4;
        case 0x2ea7fcu: goto label_2ea7fc;
        case 0x2ea808u: goto label_2ea808;
        case 0x2ea814u: goto label_2ea814;
        case 0x2ea820u: goto label_2ea820;
        case 0x2ea840u: goto label_2ea840;
        case 0x2ea850u: goto label_2ea850;
        case 0x2ea864u: goto label_2ea864;
        case 0x2ea88cu: goto label_2ea88c;
        case 0x2ea960u: goto label_2ea960;
        case 0x2ea9e0u: goto label_2ea9e0;
        case 0x2ea9f4u: goto label_2ea9f4;
        case 0x2eaa04u: goto label_2eaa04;
        case 0x2eaa20u: goto label_2eaa20;
        case 0x2eaa34u: goto label_2eaa34;
        case 0x2eaa44u: goto label_2eaa44;
        case 0x2eaa60u: goto label_2eaa60;
        case 0x2eaadcu: goto label_2eaadc;
        case 0x2eab6cu: goto label_2eab6c;
        case 0x2eab88u: goto label_2eab88;
        case 0x2eaba0u: goto label_2eaba0;
        case 0x2eabbcu: goto label_2eabbc;
        case 0x2eabe0u: goto label_2eabe0;
        case 0x2eac20u: goto label_2eac20;
        case 0x2eac30u: goto label_2eac30;
        case 0x2eac78u: goto label_2eac78;
        case 0x2eac98u: goto label_2eac98;
        case 0x2eacbcu: goto label_2eacbc;
        case 0x2eacccu: goto label_2eaccc;
        case 0x2eace0u: goto label_2eace0;
        case 0x2eacf4u: goto label_2eacf4;
        case 0x2ead18u: goto label_2ead18;
        case 0x2ead38u: goto label_2ead38;
        case 0x2ead50u: goto label_2ead50;
        case 0x2ead64u: goto label_2ead64;
        case 0x2ead74u: goto label_2ead74;
        case 0x2ead88u: goto label_2ead88;
        case 0x2eada4u: goto label_2eada4;
        case 0x2eadb4u: goto label_2eadb4;
        case 0x2eae2cu: goto label_2eae2c;
        case 0x2eae3cu: goto label_2eae3c;
        case 0x2eaec0u: goto label_2eaec0;
        case 0x2eaed4u: goto label_2eaed4;
        case 0x2eaee8u: goto label_2eaee8;
        case 0x2eaf10u: goto label_2eaf10;
        case 0x2eaf20u: goto label_2eaf20;
        case 0x2eaf50u: goto label_2eaf50;
        case 0x2eaf90u: goto label_2eaf90;
        case 0x2eafbcu: goto label_2eafbc;
        case 0x2eafe0u: goto label_2eafe0;
        case 0x2eafecu: goto label_2eafec;
        case 0x2eb000u: goto label_2eb000;
        default: break;
    }

    ctx->pc = 0x2e9e80u;

    // 0x2e9e80: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x2e9e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x2e9e84: 0xffbe00e0  sd          $fp, 0xE0($sp)
    ctx->pc = 0x2e9e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 30));
    // 0x2e9e88: 0xffb600c0  sd          $s6, 0xC0($sp)
    ctx->pc = 0x2e9e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
    // 0x2e9e8c: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x2e9e8cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9e90: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x2e9e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x2e9e94: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2e9e94u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9e98: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x2e9e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x2e9e9c: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x2e9e9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9ea0: 0xffb700d0  sd          $s7, 0xD0($sp)
    ctx->pc = 0x2e9ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 23));
    // 0x2e9ea4: 0xffb500b0  sd          $s5, 0xB0($sp)
    ctx->pc = 0x2e9ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 21));
    // 0x2e9ea8: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x2e9ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x2e9eac: 0xffb30090  sd          $s3, 0x90($sp)
    ctx->pc = 0x2e9eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 19));
    // 0x2e9eb0: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x2e9eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x2e9eb4: 0xffb10070  sd          $s1, 0x70($sp)
    ctx->pc = 0x2e9eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
    // 0x2e9eb8: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x2e9eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x2e9ebc: 0x8fcb0040  lw          $t3, 0x40($fp)
    ctx->pc = 0x2e9ebcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 64)));
    // 0x2e9ec0: 0xafa7000c  sw          $a3, 0xC($sp)
    ctx->pc = 0x2e9ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    // 0x2e9ec4: 0xafa80010  sw          $t0, 0x10($sp)
    ctx->pc = 0x2e9ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 8));
    // 0x2e9ec8: 0x1160000a  beqz        $t3, . + 4 + (0xA << 2)
    ctx->pc = 0x2E9EC8u;
    {
        const bool branch_taken_0x2e9ec8 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9EC8u;
        // 0x2e9ecc: 0xafaa0014  sw          $t2, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9ec8) {
            ctx->pc = 0x2E9EF4u;
            goto label_2e9ef4;
        }
    }
    ctx->pc = 0x2E9ED0u;
    // 0x2e9ed0: 0x8fc60044  lw          $a2, 0x44($fp)
    ctx->pc = 0x2e9ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 68)));
    // 0x2e9ed4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e9ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e9ed8: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x2e9ed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9edc: 0xad660004  sw          $a2, 0x4($t3)
    ctx->pc = 0x2e9edcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 6));
    // 0x2e9ee0: 0x8fc20044  lw          $v0, 0x44($fp)
    ctx->pc = 0x2e9ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 68)));
    // 0x2e9ee4: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x2e9ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x2e9ee8: 0xc0bafd2  jal         func_2EBF48
    ctx->pc = 0x2E9EE8u;
    SET_GPR_U32(ctx, 31, 0x2E9EF0u);
    ctx->pc = 0x2E9EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9EE8u;
    // 0x2e9eec: 0xad630008  sw          $v1, 0x8($t3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBF48u, 0x2E9EE8u, 0x2E9EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9EF0u;
label_2e9ef0:
    // 0x2e9ef0: 0xafc00040  sw          $zero, 0x40($fp)
    ctx->pc = 0x2e9ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 64), GPR_U32(ctx, 0));
label_2e9ef4:
    // 0x2e9ef4: 0x16103e  dsrl32      $v0, $s6, 0
    ctx->pc = 0x2e9ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) >> (32 + 0));
    // 0x2e9ef8: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x2e9ef8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e9efc: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x2e9efcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x2e9f00: 0x483000c  bgezl       $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x2E9F00u;
    {
        const bool branch_taken_0x2e9f00 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x2e9f00) {
            ctx->pc = 0x2E9F04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E9F00u;
            // 0x2e9f04: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9F34u;
            goto label_2e9f34;
        }
    }
    ctx->pc = 0x2E9F08u;
    // 0x2e9f08: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x2e9f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x2e9f0c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2e9f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2e9f10: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2e9f10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2e9f14: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e9f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2e9f18: 0x2c3b024  and         $s6, $s6, $v1
    ctx->pc = 0x2e9f18u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) & GPR_U64(ctx, 3));
    // 0x2e9f1c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2e9f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2e9f20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e9f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e9f24: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2e9f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e9f28: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2e9f28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2e9f2c: 0x2c2b025  or          $s6, $s6, $v0
    ctx->pc = 0x2e9f2cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | GPR_U64(ctx, 2));
    // 0x2e9f30: 0x16103e  dsrl32      $v0, $s6, 0
    ctx->pc = 0x2e9f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) >> (32 + 0));
label_2e9f34:
    // 0x2e9f34: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x2e9f34u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e9f38: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x2e9f38u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x2e9f3c: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x2e9f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x2e9f40: 0x2031024  and         $v0, $s0, $v1
    ctx->pc = 0x2e9f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x2e9f44: 0x14430016  bne         $v0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2E9F44u;
    {
        const bool branch_taken_0x2e9f44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2E9F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9F44u;
        // 0x2e9f48: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9f44) {
            ctx->pc = 0x2E9FA0u;
            goto label_2e9fa0;
        }
    }
    ctx->pc = 0x2E9F4Cu;
    // 0x2e9f4c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2e9f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e9f50: 0x2403270f  addiu       $v1, $zero, 0x270F
    ctx->pc = 0x2e9f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x2e9f54: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2e9f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e9f58: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x2e9f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x2e9f5c: 0x2c21024  and         $v0, $s6, $v0
    ctx->pc = 0x2e9f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & GPR_U64(ctx, 2));
    // 0x2e9f60: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E9F60u;
    {
        const bool branch_taken_0x2e9f60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E9F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9F60u;
        // 0x2e9f64: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9f60) {
            ctx->pc = 0x2E9F74u;
            goto label_2e9f74;
        }
    }
    ctx->pc = 0x2E9F68u;
    // 0x2e9f68: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2e9f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2e9f6c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E9F6Cu;
    {
        const bool branch_taken_0x2e9f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9F6Cu;
        // 0x2e9f70: 0x2455c530  addiu       $s5, $v0, -0x3AD0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9f6c) {
            ctx->pc = 0x2E9F7Cu;
            goto label_2e9f7c;
        }
    }
    ctx->pc = 0x2E9F74u;
label_2e9f74:
    // 0x2e9f74: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2e9f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2e9f78: 0x2455c540  addiu       $s5, $v0, -0x3AC0
    ctx->pc = 0x2e9f78u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952256));
label_2e9f7c:
    // 0x2e9f7c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2e9f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2e9f80: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2E9F80u;
    {
        const bool branch_taken_0x2e9f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9F80u;
        // 0x2e9f84: 0x26a40008  addiu       $a0, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9f80) {
            ctx->pc = 0x2E9FD8u;
            goto label_2e9fd8;
        }
    }
    ctx->pc = 0x2E9F88u;
    // 0x2e9f88: 0x82a20003  lb          $v0, 0x3($s5)
    ctx->pc = 0x2e9f88u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 3)));
    // 0x2e9f8c: 0x26a30003  addiu       $v1, $s5, 0x3
    ctx->pc = 0x2e9f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 3));
    // 0x2e9f90: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x2e9f90u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x2e9f94: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x2e9f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2e9f98: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2E9F98u;
    {
        const bool branch_taken_0x2e9f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9F98u;
        // 0x2e9f9c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9f98) {
            ctx->pc = 0x2E9FD8u;
            goto label_2e9fd8;
        }
    }
    ctx->pc = 0x2E9FA0u;
label_2e9fa0:
    // 0x2e9fa0: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2E9FA0u;
    SET_GPR_U32(ctx, 31, 0x2E9FA8u);
    ctx->pc = 0x2E9FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9FA0u;
    // 0x2e9fa4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2E9FA0u, 0x2E9FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9FA8u;
label_2e9fa8:
    // 0x2e9fa8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2E9FA8u;
    {
        const bool branch_taken_0x2e9fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E9FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9FA8u;
        // 0x2e9fac: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9fa8) {
            ctx->pc = 0x2E9FE0u;
            goto label_2e9fe0;
        }
    }
    ctx->pc = 0x2E9FB0u;
    // 0x2e9fb0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2e9fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e9fb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e9fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e9fb8: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2e9fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2e9fbc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2e9fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2e9fc0: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2e9fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2e9fc4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E9FC4u;
    {
        const bool branch_taken_0x2e9fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9FC4u;
        // 0x2e9fc8: 0x2475c548  addiu       $s5, $v1, -0x3AB8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9fc4) {
            ctx->pc = 0x2E9FD8u;
            goto label_2e9fd8;
        }
    }
    ctx->pc = 0x2E9FCCu;
    // 0x2e9fcc: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x2e9fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2e9fd0: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x2e9fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2e9fd4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2e9fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2e9fd8:
    // 0x2e9fd8: 0x10000410  b           . + 4 + (0x410 << 2)
    ctx->pc = 0x2E9FD8u;
    {
        const bool branch_taken_0x2e9fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9FD8u;
        // 0x2e9fdc: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9fd8) {
            ctx->pc = 0x2EB01Cu;
            goto label_2eb01c;
        }
    }
    ctx->pc = 0x2E9FE0u;
label_2e9fe0:
    // 0x2e9fe0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2e9fe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9fe4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2e9fe4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9fe8: 0xc0bb304  jal         func_2ECC10
    ctx->pc = 0x2E9FE8u;
    SET_GPR_U32(ctx, 31, 0x2E9FF0u);
    ctx->pc = 0x2E9FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9FE8u;
    // 0x2e9fec: 0x37a70004  ori         $a3, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ECC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ECC10u, 0x2E9FE8u, 0x2E9FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9FF0u;
label_2e9ff0:
    // 0x2e9ff0: 0x101d02  srl         $v1, $s0, 20
    ctx->pc = 0x2e9ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 20));
    // 0x2e9ff4: 0x307407ff  andi        $s4, $v1, 0x7FF
    ctx->pc = 0x2e9ff4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x2e9ff8: 0x12800015  beqz        $s4, . + 4 + (0x15 << 2)
    ctx->pc = 0x2E9FF8u;
    {
        const bool branch_taken_0x2e9ff8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9FF8u;
        // 0x2e9ffc: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9ff8) {
            ctx->pc = 0x2EA050u;
            goto label_2ea050;
        }
    }
    ctx->pc = 0x2EA000u;
    // 0x2ea000: 0x2c0b82d  daddu       $s7, $s6, $zero
    ctx->pc = 0x2ea000u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea004: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x2ea004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x2ea008: 0x17183f  dsra32      $v1, $s7, 0
    ctx->pc = 0x2ea008u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 23) >> (32 + 0));
    // 0x2ea00c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ea00cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ea010: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2ea010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ea014: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2ea014u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x2ea018: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x2ea018u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x2ea01c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2ea01cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2ea020: 0x2e5b824  and         $s7, $s7, $a1
    ctx->pc = 0x2ea020u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) & GPR_U64(ctx, 5));
    // 0x2ea024: 0x2e3b825  or          $s7, $s7, $v1
    ctx->pc = 0x2ea024u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | GPR_U64(ctx, 3));
    // 0x2ea028: 0x3c043ff0  lui         $a0, 0x3FF0
    ctx->pc = 0x2ea028u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16368 << 16));
    // 0x2ea02c: 0x17103f  dsra32      $v0, $s7, 0
    ctx->pc = 0x2ea02cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 23) >> (32 + 0));
    // 0x2ea030: 0x2694fc01  addiu       $s4, $s4, -0x3FF
    ctx->pc = 0x2ea030u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294966273));
    // 0x2ea034: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2ea034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2ea038: 0x2e5b824  and         $s7, $s7, $a1
    ctx->pc = 0x2ea038u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) & GPR_U64(ctx, 5));
    // 0x2ea03c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ea03cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ea040: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x2ea040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x2ea044: 0x2e2b825  or          $s7, $s7, $v0
    ctx->pc = 0x2ea044u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | GPR_U64(ctx, 2));
    // 0x2ea048: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2EA048u;
    {
        const bool branch_taken_0x2ea048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA048u;
        // 0x2ea04c: 0x8fb10004  lw          $s1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea048) {
            ctx->pc = 0x2EA0E8u;
            goto label_2ea0e8;
        }
    }
    ctx->pc = 0x2EA050u;
label_2ea050:
    // 0x2ea050: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2ea050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ea054: 0x8fb10004  lw          $s1, 0x4($sp)
    ctx->pc = 0x2ea054u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2ea058: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x2ea058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2ea05c: 0x24940432  addiu       $s4, $a0, 0x432
    ctx->pc = 0x2ea05cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 1074));
    // 0x2ea060: 0x2a820021  slti        $v0, $s4, 0x21
    ctx->pc = 0x2ea060u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x2ea064: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EA064u;
    {
        const bool branch_taken_0x2ea064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EA068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA064u;
        // 0x2ea068: 0x141023  negu        $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea064) {
            ctx->pc = 0x2EA08Cu;
            goto label_2ea08c;
        }
    }
    ctx->pc = 0x2EA06Cu;
    // 0x2ea06c: 0x24840412  addiu       $a0, $a0, 0x412
    ctx->pc = 0x2ea06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1042));
    // 0x2ea070: 0x141823  negu        $v1, $s4
    ctx->pc = 0x2ea070u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
    // 0x2ea074: 0x16103c  dsll32      $v0, $s6, 0
    ctx->pc = 0x2ea074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 0));
    // 0x2ea078: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2ea078u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2ea07c: 0x701804  sllv        $v1, $s0, $v1
    ctx->pc = 0x2ea07cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 3) & 0x1F));
    // 0x2ea080: 0x821006  srlv        $v0, $v0, $a0
    ctx->pc = 0x2ea080u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x2ea084: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2EA084u;
    {
        const bool branch_taken_0x2ea084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA084u;
        // 0x2ea088: 0x628025  or          $s0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea084) {
            ctx->pc = 0x2EA098u;
            goto label_2ea098;
        }
    }
    ctx->pc = 0x2EA08Cu;
label_2ea08c:
    // 0x2ea08c: 0x16183c  dsll32      $v1, $s6, 0
    ctx->pc = 0x2ea08cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) << (32 + 0));
    // 0x2ea090: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2ea090u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2ea094: 0x438004  sllv        $s0, $v1, $v0
    ctx->pc = 0x2ea094u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_2ea098:
    // 0x2ea098: 0xc0b8dee  jal         func_2E37B8
    ctx->pc = 0x2EA098u;
    SET_GPR_U32(ctx, 31, 0x2EA0A0u);
    ctx->pc = 0x2EA09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA098u;
    // 0x2ea09c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E37B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E37B8u, 0x2EA098u, 0x2EA0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA0A0u;
label_2ea0a0:
    // 0x2ea0a0: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EA0A0u;
    {
        const bool branch_taken_0x2ea0a0 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2EA0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA0A0u;
        // 0x2ea0a4: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea0a0) {
            ctx->pc = 0x2EA0BCu;
            goto label_2ea0bc;
        }
    }
    ctx->pc = 0x2EA0A8u;
    // 0x2ea0a8: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x2ea0a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x2ea0ac: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x2ea0acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x2ea0b0: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2EA0B0u;
    SET_GPR_U32(ctx, 31, 0x2EA0B8u);
    ctx->pc = 0x2EA0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA0B0u;
    // 0x2ea0b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2EA0B0u, 0x2EA0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA0B8u;
label_2ea0b8:
    // 0x2ea0b8: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2ea0b8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ea0bc:
    // 0x2ea0bc: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2ea0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x2ea0c0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2ea0c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2ea0c4: 0x17183f  dsra32      $v1, $s7, 0
    ctx->pc = 0x2ea0c4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 23) >> (32 + 0));
    // 0x2ea0c8: 0x3c02fe10  lui         $v0, 0xFE10
    ctx->pc = 0x2ea0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65040 << 16));
    // 0x2ea0cc: 0x2e4b824  and         $s7, $s7, $a0
    ctx->pc = 0x2ea0ccu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) & GPR_U64(ctx, 4));
    // 0x2ea0d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ea0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ea0d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ea0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ea0d8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2ea0d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2ea0dc: 0xafa40044  sw          $a0, 0x44($sp)
    ctx->pc = 0x2ea0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 4));
    // 0x2ea0e0: 0x2694fbcd  addiu       $s4, $s4, -0x433
    ctx->pc = 0x2ea0e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294966221));
    // 0x2ea0e4: 0x2e3b825  or          $s7, $s7, $v1
    ctx->pc = 0x2ea0e4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | GPR_U64(ctx, 3));
label_2ea0e8:
    // 0x2ea0e8: 0x3405ffe0  ori         $a1, $zero, 0xFFE0
    ctx->pc = 0x2ea0e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
    // 0x2ea0ec: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x2ea0ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x2ea0f0: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2EA0F0u;
    SET_GPR_U32(ctx, 31, 0x2EA0F8u);
    ctx->pc = 0x2EA0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA0F0u;
    // 0x2ea0f4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2EA0F0u, 0x2EA0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA0F8u;
label_2ea0f8:
    // 0x2ea0f8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2ea0f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2ea0fc: 0xdc25c550  ld          $a1, -0x3AB0($at)
    ctx->pc = 0x2ea0fcu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3AC550u));
    // 0x2ea100: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2EA100u;
    SET_GPR_U32(ctx, 31, 0x2EA108u);
    ctx->pc = 0x2EA104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA100u;
    // 0x2ea104: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2EA100u, 0x2EA108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA108u;
label_2ea108:
    // 0x2ea108: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2ea108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2ea10c: 0xdc25c558  ld          $a1, -0x3AA8($at)
    ctx->pc = 0x2ea10cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3AC558u));
    // 0x2ea110: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2EA110u;
    SET_GPR_U32(ctx, 31, 0x2EA118u);
    ctx->pc = 0x2EA114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA110u;
    // 0x2ea114: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2EA110u, 0x2EA118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA118u;
label_2ea118:
    // 0x2ea118: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ea118u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea11c: 0xc0b8dee  jal         func_2E37B8
    ctx->pc = 0x2EA11Cu;
    SET_GPR_U32(ctx, 31, 0x2EA124u);
    ctx->pc = 0x2EA120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA11Cu;
    // 0x2ea120: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E37B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E37B8u, 0x2EA11Cu, 0x2EA124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA124u;
label_2ea124:
    // 0x2ea124: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2ea124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2ea128: 0xdc25c560  ld          $a1, -0x3AA0($at)
    ctx->pc = 0x2ea128u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3AC560u));
    // 0x2ea12c: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2EA12Cu;
    SET_GPR_U32(ctx, 31, 0x2EA134u);
    ctx->pc = 0x2EA130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA12Cu;
    // 0x2ea130: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2EA12Cu, 0x2EA134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA134u;
label_2ea134:
    // 0x2ea134: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ea134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea138: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2EA138u;
    SET_GPR_U32(ctx, 31, 0x2EA140u);
    ctx->pc = 0x2EA13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA138u;
    // 0x2ea13c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2EA138u, 0x2EA140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA140u;
label_2ea140:
    // 0x2ea140: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2ea140u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea144: 0xc0b8e1c  jal         func_2E3870
    ctx->pc = 0x2EA144u;
    SET_GPR_U32(ctx, 31, 0x2EA14Cu);
    ctx->pc = 0x2EA148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA144u;
    // 0x2ea148: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3870u, 0x2EA144u, 0x2EA14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA14Cu;
label_2ea14c:
    // 0x2ea14c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2ea14cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea150: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ea150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea154: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2EA154u;
    SET_GPR_U32(ctx, 31, 0x2EA15Cu);
    ctx->pc = 0x2EA158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA154u;
    // 0x2ea158: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2EA154u, 0x2EA15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA15Cu;
label_2ea15c:
    // 0x2ea15c: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EA15Cu;
    {
        const bool branch_taken_0x2ea15c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2EA160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA15Cu;
        // 0x2ea160: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea15c) {
            ctx->pc = 0x2EA184u;
            goto label_2ea184;
        }
    }
    ctx->pc = 0x2EA164u;
    // 0x2ea164: 0xc0b8dee  jal         func_2E37B8
    ctx->pc = 0x2EA164u;
    SET_GPR_U32(ctx, 31, 0x2EA16Cu);
    ctx->pc = 0x2EA168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA164u;
    // 0x2ea168: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E37B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E37B8u, 0x2EA164u, 0x2EA16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA16Cu;
label_2ea16c:
    // 0x2ea16c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ea16cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea170: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2EA170u;
    SET_GPR_U32(ctx, 31, 0x2EA178u);
    ctx->pc = 0x2EA174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA170u;
    // 0x2ea174: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2EA170u, 0x2EA178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA178u;
label_2ea178:
    // 0x2ea178: 0x2663ffff  addiu       $v1, $s3, -0x1
    ctx->pc = 0x2ea178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x2ea17c: 0x62980b  movn        $s3, $v1, $v0
    ctx->pc = 0x2ea17cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
    // 0x2ea180: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ea180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ea184:
    // 0x2ea184: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x2ea184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x2ea188: 0x2e620017  sltiu       $v0, $s3, 0x17
    ctx->pc = 0x2ea188u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
    // 0x2ea18c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2EA18Cu;
    {
        const bool branch_taken_0x2ea18c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA18Cu;
        // 0x2ea190: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea18c) {
            ctx->pc = 0x2EA1C0u;
            goto label_2ea1c0;
        }
    }
    ctx->pc = 0x2EA194u;
    // 0x2ea194: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x2ea194u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x2ea198: 0x2442c5e0  addiu       $v0, $v0, -0x3A20
    ctx->pc = 0x2ea198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952416));
    // 0x2ea19c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2ea19cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea1a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ea1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ea1a4: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x2ea1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x2ea1a8: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2EA1A8u;
    SET_GPR_U32(ctx, 31, 0x2EA1B0u);
    ctx->pc = 0x2EA1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA1A8u;
    // 0x2ea1ac: 0xdc650000  ld          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2EA1A8u, 0x2EA1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA1B0u;
label_2ea1b0:
    // 0x2ea1b0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2ea1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ea1b4: 0x2664ffff  addiu       $a0, $s3, -0x1
    ctx->pc = 0x2ea1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x2ea1b8: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x2ea1b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ea1bc: 0x83980a  movz        $s3, $a0, $v1
    ctx->pc = 0x2ea1bcu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 4));
label_2ea1c0:
    // 0x2ea1c0: 0x2341023  subu        $v0, $s1, $s4
    ctx->pc = 0x2ea1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x2ea1c4: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x2ea1c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2ea1c8: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EA1C8u;
    {
        const bool branch_taken_0x2ea1c8 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x2ea1c8) {
            ctx->pc = 0x2EA1CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA1C8u;
            // 0x2ea1cc: 0x108023  negu        $s0, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA1DCu;
            goto label_2ea1dc;
        }
    }
    ctx->pc = 0x2EA1D0u;
    // 0x2ea1d0: 0xafb00038  sw          $s0, 0x38($sp)
    ctx->pc = 0x2ea1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 16));
    // 0x2ea1d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2EA1D4u;
    {
        const bool branch_taken_0x2ea1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA1D4u;
        // 0x2ea1d8: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea1d4) {
            ctx->pc = 0x2EA1E4u;
            goto label_2ea1e4;
        }
    }
    ctx->pc = 0x2EA1DCu;
label_2ea1dc:
    // 0x2ea1dc: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x2ea1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x2ea1e0: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x2ea1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
label_2ea1e4:
    // 0x2ea1e4: 0x6600006  bltz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EA1E4u;
    {
        const bool branch_taken_0x2ea1e4 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x2EA1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA1E4u;
        // 0x2ea1e8: 0x8fa30038  lw          $v1, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea1e4) {
            ctx->pc = 0x2EA200u;
            goto label_2ea200;
        }
    }
    ctx->pc = 0x2EA1ECu;
    // 0x2ea1ec: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x2ea1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x2ea1f0: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x2ea1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2ea1f4: 0xafb3003c  sw          $s3, 0x3C($sp)
    ctx->pc = 0x2ea1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 19));
    // 0x2ea1f8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2EA1F8u;
    {
        const bool branch_taken_0x2ea1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA1F8u;
        // 0x2ea1fc: 0xafa30038  sw          $v1, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea1f8) {
            ctx->pc = 0x2EA218u;
            goto label_2ea218;
        }
    }
    ctx->pc = 0x2EA200u;
label_2ea200:
    // 0x2ea200: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2ea200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ea204: 0x131023  negu        $v0, $s3
    ctx->pc = 0x2ea204u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    // 0x2ea208: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x2ea208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x2ea20c: 0x932023  subu        $a0, $a0, $s3
    ctx->pc = 0x2ea20cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x2ea210: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x2ea210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x2ea214: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2ea214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_2ea218:
    // 0x2ea218: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2ea218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ea21c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2ea21cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ea220: 0x2c83000a  sltiu       $v1, $a0, 0xA
    ctx->pc = 0x2ea220u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2ea224: 0x3200a  movz        $a0, $zero, $v1
    ctx->pc = 0x2ea224u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x2ea228: 0x28820006  slti        $v0, $a0, 0x6
    ctx->pc = 0x2ea228u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2ea22c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EA22Cu;
    {
        const bool branch_taken_0x2ea22c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EA230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA22Cu;
        // 0x2ea230: 0xafa40008  sw          $a0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea22c) {
            ctx->pc = 0x2EA240u;
            goto label_2ea240;
        }
    }
    ctx->pc = 0x2EA234u;
    // 0x2ea234: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x2ea234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x2ea238: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2ea238u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea23c: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2ea23cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
label_2ea240:
    // 0x2ea240: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ea240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ea244: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ea244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ea248: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x2ea248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x2ea24c: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x2ea24cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2ea250: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2EA250u;
    {
        const bool branch_taken_0x2ea250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA250u;
        // 0x2ea254: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea250) {
            ctx->pc = 0x2EA2D4u;
            goto label_2ea2d4;
        }
    }
    ctx->pc = 0x2EA258u;
    // 0x2ea258: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ea258u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ea25c: 0x2442c570  addiu       $v0, $v0, -0x3A90
    ctx->pc = 0x2ea25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952304));
    // 0x2ea260: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ea260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ea264: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2ea264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ea268: 0x800008  jr          $a0
    ctx->pc = 0x2EA268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2EA270u: goto label_2ea270;
            case 0x2EA28Cu: goto label_2ea28c;
            case 0x2EA290u: goto label_2ea290;
            case 0x2EA2B0u: goto label_2ea2b0;
            case 0x2EA2B4u: goto label_2ea2b4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EA268u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2EA270u;
label_2ea270:
    // 0x2ea270: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2ea270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ea274: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2ea274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ea278: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x2ea278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x2ea27c: 0x24140012  addiu       $s4, $zero, 0x12
    ctx->pc = 0x2ea27cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2ea280: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2ea280u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x2ea284: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2EA284u;
    {
        const bool branch_taken_0x2ea284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA284u;
        // 0x2ea288: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea284) {
            ctx->pc = 0x2EA2D4u;
            goto label_2ea2d4;
        }
    }
    ctx->pc = 0x2EA28Cu;
label_2ea28c:
    // 0x2ea28c: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x2ea28cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_2ea290:
    // 0x2ea290: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x2ea290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2ea294: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2ea294u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ea298: 0x3102a  slt         $v0, $zero, $v1
    ctx->pc = 0x2ea298u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2ea29c: 0x62a00b  movn        $s4, $v1, $v0
    ctx->pc = 0x2ea29cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 3));
    // 0x2ea2a0: 0xafb4000c  sw          $s4, 0xC($sp)
    ctx->pc = 0x2ea2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 20));
    // 0x2ea2a4: 0xafb40028  sw          $s4, 0x28($sp)
    ctx->pc = 0x2ea2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 20));
    // 0x2ea2a8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2EA2A8u;
    {
        const bool branch_taken_0x2ea2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA2A8u;
        // 0x2ea2ac: 0xafb40020  sw          $s4, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea2a8) {
            ctx->pc = 0x2EA2D4u;
            goto label_2ea2d4;
        }
    }
    ctx->pc = 0x2EA2B0u;
label_2ea2b0:
    // 0x2ea2b0: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x2ea2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_2ea2b4:
    // 0x2ea2b4: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x2ea2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2ea2b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ea2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ea2bc: 0x931021  addu        $v0, $a0, $s3
    ctx->pc = 0x2ea2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x2ea2c0: 0x24540001  addiu       $s4, $v0, 0x1
    ctx->pc = 0x2ea2c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2ea2c4: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x2ea2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x2ea2c8: 0xafb40020  sw          $s4, 0x20($sp)
    ctx->pc = 0x2ea2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 20));
    // 0x2ea2cc: 0x14102a  slt         $v0, $zero, $s4
    ctx->pc = 0x2ea2ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x2ea2d0: 0x62a00a  movz        $s4, $v1, $v0
    ctx->pc = 0x2ea2d0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 3));
label_2ea2d4:
    // 0x2ea2d4: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x2ea2d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ea2d8: 0x2e820018  sltiu       $v0, $s4, 0x18
    ctx->pc = 0x2ea2d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x2ea2dc: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2EA2DCu;
    {
        const bool branch_taken_0x2ea2dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EA2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA2DCu;
        // 0x2ea2e0: 0xafc00044  sw          $zero, 0x44($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea2dc) {
            ctx->pc = 0x2EA318u;
            goto label_2ea318;
        }
    }
    ctx->pc = 0x2EA2E4u;
    // 0x2ea2e4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2ea2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ea2e8: 0x2c51000f  sltiu       $s1, $v0, 0xF
    ctx->pc = 0x2ea2e8u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x2ea2ec: 0x0  nop
    ctx->pc = 0x2ea2ecu;
    // NOP
label_2ea2f0:
    // 0x2ea2f0: 0x8fc30044  lw          $v1, 0x44($fp)
    ctx->pc = 0x2ea2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 68)));
    // 0x2ea2f4: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x2ea2f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2ea2f8: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x2ea2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x2ea2fc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2ea2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2ea300: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x2ea300u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ea304: 0xafc30044  sw          $v1, 0x44($fp)
    ctx->pc = 0x2ea304u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 68), GPR_U32(ctx, 3));
    // 0x2ea308: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2EA308u;
    {
        const bool branch_taken_0x2ea308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea308) {
            ctx->pc = 0x2EA2F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ea2f0;
        }
    }
    ctx->pc = 0x2EA310u;
    // 0x2ea310: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2EA310u;
    {
        const bool branch_taken_0x2ea310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA310u;
        // 0x2ea314: 0x8fc50044  lw          $a1, 0x44($fp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea310) {
            ctx->pc = 0x2EA324u;
            goto label_2ea324;
        }
    }
    ctx->pc = 0x2EA318u;
label_2ea318:
    // 0x2ea318: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2ea318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ea31c: 0x2c71000f  sltiu       $s1, $v1, 0xF
    ctx->pc = 0x2ea31cu;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x2ea320: 0x8fc50044  lw          $a1, 0x44($fp)
    ctx->pc = 0x2ea320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 68)));
label_2ea324:
    // 0x2ea324: 0xc0bafa8  jal         func_2EBEA0
    ctx->pc = 0x2EA324u;
    SET_GPR_U32(ctx, 31, 0x2EA32Cu);
    ctx->pc = 0x2EA328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA324u;
    // 0x2ea328: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBEA0u, 0x2EA324u, 0x2EA32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA32Cu;
label_2ea32c:
    // 0x2ea32c: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x2ea32cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x2ea330: 0xafc20040  sw          $v0, 0x40($fp)
    ctx->pc = 0x2ea330u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 64), GPR_U32(ctx, 2));
    // 0x2ea334: 0x12200102  beqz        $s1, . + 4 + (0x102 << 2)
    ctx->pc = 0x2EA334u;
    {
        const bool branch_taken_0x2ea334 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA334u;
        // 0x2ea338: 0x8fb50058  lw          $s5, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea334) {
            ctx->pc = 0x2EA740u;
            goto label_2ea740;
        }
    }
    ctx->pc = 0x2EA33Cu;
    // 0x2ea33c: 0x12400100  beqz        $s2, . + 4 + (0x100 << 2)
    ctx->pc = 0x2EA33Cu;
    {
        const bool branch_taken_0x2ea33c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA33Cu;
        // 0x2ea340: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea33c) {
            ctx->pc = 0x2EA740u;
            goto label_2ea740;
        }
    }
    ctx->pc = 0x2EA344u;
    // 0x2ea344: 0x2c0b82d  daddu       $s7, $s6, $zero
    ctx->pc = 0x2ea344u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea348: 0xafb3002c  sw          $s3, 0x2C($sp)
    ctx->pc = 0x2ea348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 19));
    // 0x2ea34c: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x2ea34cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ea350: 0x1a600024  blez        $s3, . + 4 + (0x24 << 2)
    ctx->pc = 0x2EA350u;
    {
        const bool branch_taken_0x2ea350 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x2EA354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA350u;
        // 0x2ea354: 0xafa40024  sw          $a0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea350) {
            ctx->pc = 0x2EA3E4u;
            goto label_2ea3e4;
        }
    }
    ctx->pc = 0x2EA358u;
    // 0x2ea358: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2ea358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2ea35c: 0x3263000f  andi        $v1, $s3, 0xF
    ctx->pc = 0x2ea35cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)15);
    // 0x2ea360: 0x2442c5e0  addiu       $v0, $v0, -0x3A20
    ctx->pc = 0x2ea360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952416));
    // 0x2ea364: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2ea364u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2ea368: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ea368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ea36c: 0x138103  sra         $s0, $s3, 4
    ctx->pc = 0x2ea36cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 19), 4));
    // 0x2ea370: 0x32020010  andi        $v0, $s0, 0x10
    ctx->pc = 0x2ea370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16);
    // 0x2ea374: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EA374u;
    {
        const bool branch_taken_0x2ea374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA374u;
        // 0x2ea378: 0xdc720000  ld          $s2, 0x0($v1) (Delay Slot)
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea374) {
            ctx->pc = 0x2EA398u;
            goto label_2ea398;
        }
    }
    ctx->pc = 0x2EA37Cu;
    // 0x2ea37c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2ea37cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2ea380: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2ea380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea384: 0xdc45c6c8  ld          $a1, -0x3938($v0)
    ctx->pc = 0x2ea384u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3AC6C8u));
    // 0x2ea388: 0x3210000f  andi        $s0, $s0, 0xF
    ctx->pc = 0x2ea388u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x2ea38c: 0xc0b8d3a  jal         func_2E34E8
    ctx->pc = 0x2EA38Cu;
    SET_GPR_U32(ctx, 31, 0x2EA394u);
    ctx->pc = 0x2EA390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA38Cu;
    // 0x2ea390: 0x24140003  addiu       $s4, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E34E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E34E8u, 0x2EA38Cu, 0x2EA394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA394u;
label_2ea394:
    // 0x2ea394: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2ea394u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ea398:
    // 0x2ea398: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x2EA398u;
    {
        const bool branch_taken_0x2ea398 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA398u;
        // 0x2ea39c: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea398) {
            ctx->pc = 0x2EA3D0u;
            goto label_2ea3d0;
        }
    }
    ctx->pc = 0x2EA3A0u;
    // 0x2ea3a0: 0x2451c6a8  addiu       $s1, $v0, -0x3958
    ctx->pc = 0x2ea3a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952616));
    // 0x2ea3a4: 0x0  nop
    ctx->pc = 0x2ea3a4u;
    // NOP
label_2ea3a8:
    // 0x2ea3a8: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x2ea3a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x2ea3ac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EA3ACu;
    {
        const bool branch_taken_0x2ea3ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA3ACu;
        // 0x2ea3b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea3ac) {
            ctx->pc = 0x2EA3C4u;
            goto label_2ea3c4;
        }
    }
    ctx->pc = 0x2EA3B4u;
    // 0x2ea3b4: 0xde250000  ld          $a1, 0x0($s1)
    ctx->pc = 0x2ea3b4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ea3b8: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2EA3B8u;
    SET_GPR_U32(ctx, 31, 0x2EA3C0u);
    ctx->pc = 0x2EA3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA3B8u;
    // 0x2ea3bc: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2EA3B8u, 0x2EA3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA3C0u;
label_2ea3c0:
    // 0x2ea3c0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2ea3c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ea3c4:
    // 0x2ea3c4: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x2ea3c4u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
    // 0x2ea3c8: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2EA3C8u;
    {
        const bool branch_taken_0x2ea3c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EA3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA3C8u;
        // 0x2ea3cc: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea3c8) {
            ctx->pc = 0x2EA3A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ea3a8;
        }
    }
    ctx->pc = 0x2EA3D0u;
label_2ea3d0:
    // 0x2ea3d0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2ea3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea3d4: 0xc0b8d3a  jal         func_2E34E8
    ctx->pc = 0x2EA3D4u;
    SET_GPR_U32(ctx, 31, 0x2EA3DCu);
    ctx->pc = 0x2EA3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA3D4u;
    // 0x2ea3d8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E34E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E34E8u, 0x2EA3D4u, 0x2EA3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA3DCu;
label_2ea3dc:
    // 0x2ea3dc: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2EA3DCu;
    {
        const bool branch_taken_0x2ea3dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA3DCu;
        // 0x2ea3e0: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea3dc) {
            ctx->pc = 0x2EA448u;
            goto label_2ea448;
        }
    }
    ctx->pc = 0x2EA3E4u;
label_2ea3e4:
    // 0x2ea3e4: 0x138823  negu        $s1, $s3
    ctx->pc = 0x2ea3e4u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    // 0x2ea3e8: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2EA3E8u;
    {
        const bool branch_taken_0x2ea3e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA3E8u;
        // 0x2ea3ec: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea3e8) {
            ctx->pc = 0x2EA448u;
            goto label_2ea448;
        }
    }
    ctx->pc = 0x2EA3F0u;
    // 0x2ea3f0: 0x3222000f  andi        $v0, $s1, 0xF
    ctx->pc = 0x2ea3f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
    // 0x2ea3f4: 0x2463c5e0  addiu       $v1, $v1, -0x3A20
    ctx->pc = 0x2ea3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952416));
    // 0x2ea3f8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2ea3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2ea3fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ea3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ea400: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2ea400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea404: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x2ea404u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ea408: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2EA408u;
    SET_GPR_U32(ctx, 31, 0x2EA410u);
    ctx->pc = 0x2EA40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA408u;
    // 0x2ea40c: 0x118103  sra         $s0, $s1, 4 (Delay Slot)
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2EA408u, 0x2EA410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA410u;
label_2ea410:
    // 0x2ea410: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x2EA410u;
    {
        const bool branch_taken_0x2ea410 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA410u;
        // 0x2ea414: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea410) {
            ctx->pc = 0x2EA448u;
            goto label_2ea448;
        }
    }
    ctx->pc = 0x2EA418u;
    // 0x2ea418: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2ea418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2ea41c: 0x2451c6a8  addiu       $s1, $v0, -0x3958
    ctx->pc = 0x2ea41cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952616));
label_2ea420:
    // 0x2ea420: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x2ea420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x2ea424: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EA424u;
    {
        const bool branch_taken_0x2ea424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA424u;
        // 0x2ea428: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea424) {
            ctx->pc = 0x2EA43Cu;
            goto label_2ea43c;
        }
    }
    ctx->pc = 0x2EA42Cu;
    // 0x2ea42c: 0xde240000  ld          $a0, 0x0($s1)
    ctx->pc = 0x2ea42cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ea430: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2EA430u;
    SET_GPR_U32(ctx, 31, 0x2EA438u);
    ctx->pc = 0x2EA434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA430u;
    // 0x2ea434: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2EA430u, 0x2EA438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA438u;
label_2ea438:
    // 0x2ea438: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2ea438u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ea43c:
    // 0x2ea43c: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x2ea43cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
    // 0x2ea440: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2EA440u;
    {
        const bool branch_taken_0x2ea440 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EA444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA440u;
        // 0x2ea444: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea440) {
            ctx->pc = 0x2EA420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ea420;
        }
    }
    ctx->pc = 0x2EA448u;
label_2ea448:
    // 0x2ea448: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2ea448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ea44c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2EA44Cu;
    {
        const bool branch_taken_0x2ea44c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea44c) {
            ctx->pc = 0x2EA4A0u;
            goto label_2ea4a0;
        }
    }
    ctx->pc = 0x2EA454u;
    // 0x2ea454: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x2ea454u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x2ea458: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x2ea458u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x2ea45c: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2EA45Cu;
    SET_GPR_U32(ctx, 31, 0x2EA464u);
    ctx->pc = 0x2EA460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA45Cu;
    // 0x2ea460: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2EA45Cu, 0x2EA464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA464u;
label_2ea464:
    // 0x2ea464: 0x441000e  bgez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2EA464u;
    {
        const bool branch_taken_0x2ea464 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2EA468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA464u;
        // 0x2ea468: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea464) {
            ctx->pc = 0x2EA4A0u;
            goto label_2ea4a0;
        }
    }
    ctx->pc = 0x2EA46Cu;
    // 0x2ea46c: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2EA46Cu;
    {
        const bool branch_taken_0x2ea46c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x2ea46c) {
            ctx->pc = 0x2EA4A0u;
            goto label_2ea4a0;
        }
    }
    ctx->pc = 0x2EA474u;
    // 0x2ea474: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2ea474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ea478: 0x188000ac  blez        $a0, . + 4 + (0xAC << 2)
    ctx->pc = 0x2EA478u;
    {
        const bool branch_taken_0x2ea478 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2EA47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA478u;
        // 0x2ea47c: 0x8fa20028  lw          $v0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea478) {
            ctx->pc = 0x2EA72Cu;
            goto label_2ea72c;
        }
    }
    ctx->pc = 0x2EA480u;
    // 0x2ea480: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2ea480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea484: 0x34048048  ori         $a0, $zero, 0x8048
    ctx->pc = 0x2ea484u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x2ea488: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x2ea488u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x2ea48c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x2ea48cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x2ea490: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2ea490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x2ea494: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2EA494u;
    SET_GPR_U32(ctx, 31, 0x2EA49Cu);
    ctx->pc = 0x2EA498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA494u;
    // 0x2ea498: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2EA494u, 0x2EA49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA49Cu;
label_2ea49c:
    // 0x2ea49c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2ea49cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ea4a0:
    // 0x2ea4a0: 0xc0b8dee  jal         func_2E37B8
    ctx->pc = 0x2EA4A0u;
    SET_GPR_U32(ctx, 31, 0x2EA4A8u);
    ctx->pc = 0x2EA4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA4A0u;
    // 0x2ea4a4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E37B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E37B8u, 0x2EA4A0u, 0x2EA4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA4A8u;
label_2ea4a8:
    // 0x2ea4a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ea4a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea4ac: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2EA4ACu;
    SET_GPR_U32(ctx, 31, 0x2EA4B4u);
    ctx->pc = 0x2EA4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA4ACu;
    // 0x2ea4b0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2EA4ACu, 0x2EA4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA4B4u;
label_2ea4b4:
    // 0x2ea4b4: 0x34058038  ori         $a1, $zero, 0x8038
    ctx->pc = 0x2ea4b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32824);
    // 0x2ea4b8: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x2ea4b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x2ea4bc: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2EA4BCu;
    SET_GPR_U32(ctx, 31, 0x2EA4C4u);
    ctx->pc = 0x2EA4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA4BCu;
    // 0x2ea4c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2EA4BCu, 0x2EA4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA4C4u;
label_2ea4c4:
    // 0x2ea4c4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2ea4c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea4c8: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2ea4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x2ea4cc: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2ea4ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2ea4d0: 0x12183f  dsra32      $v1, $s2, 0
    ctx->pc = 0x2ea4d0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x2ea4d4: 0x3c02fcc0  lui         $v0, 0xFCC0
    ctx->pc = 0x2ea4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64704 << 16));
    // 0x2ea4d8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ea4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ea4dc: 0x2449024  and         $s2, $s2, $a0
    ctx->pc = 0x2ea4dcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    // 0x2ea4e0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2ea4e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2ea4e4: 0x2439025  or          $s2, $s2, $v1
    ctx->pc = 0x2ea4e4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
    // 0x2ea4e8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2ea4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ea4ec: 0x54600017  bnel        $v1, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x2EA4ECu;
    {
        const bool branch_taken_0x2ea4ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea4ec) {
            ctx->pc = 0x2EA4F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA4ECu;
            // 0x2ea4f0: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA54Cu;
            goto label_2ea54c;
        }
    }
    ctx->pc = 0x2EA4F4u;
    // 0x2ea4f4: 0x34058028  ori         $a1, $zero, 0x8028
    ctx->pc = 0x2ea4f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32808);
    // 0x2ea4f8: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x2ea4f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x2ea4fc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2ea4fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea500: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x2ea500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x2ea504: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2EA504u;
    SET_GPR_U32(ctx, 31, 0x2EA50Cu);
    ctx->pc = 0x2EA508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA504u;
    // 0x2ea508: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2EA504u, 0x2EA50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA50Cu;
label_2ea50c:
    // 0x2ea50c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ea50cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea510: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2ea510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea514: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2EA514u;
    SET_GPR_U32(ctx, 31, 0x2EA51Cu);
    ctx->pc = 0x2EA518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA514u;
    // 0x2ea518: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2EA514u, 0x2EA51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA51Cu;
label_2ea51c:
    // 0x2ea51c: 0x1c4001ca  bgtz        $v0, . + 4 + (0x1CA << 2)
    ctx->pc = 0x2EA51Cu;
    {
        const bool branch_taken_0x2ea51c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2EA520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA51Cu;
        // 0x2ea520: 0x8fa30058  lw          $v1, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea51c) {
            ctx->pc = 0x2EAC48u;
            goto label_2eac48;
        }
    }
    ctx->pc = 0x2EA524u;
    // 0x2ea524: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2ea524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea528: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2EA528u;
    SET_GPR_U32(ctx, 31, 0x2EA530u);
    ctx->pc = 0x2EA52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA528u;
    // 0x2ea52c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2EA528u, 0x2EA530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA530u;
label_2ea530:
    // 0x2ea530: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ea530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea534: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2EA534u;
    SET_GPR_U32(ctx, 31, 0x2EA53Cu);
    ctx->pc = 0x2EA538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA534u;
    // 0x2ea538: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2EA534u, 0x2EA53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA53Cu;
label_2ea53c:
    // 0x2ea53c: 0x44001be  bltz        $v0, . + 4 + (0x1BE << 2)
    ctx->pc = 0x2EA53Cu;
    {
        const bool branch_taken_0x2ea53c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2EA540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA53Cu;
        // 0x2ea540: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea53c) {
            ctx->pc = 0x2EAC38u;
            goto label_2eac38;
        }
    }
    ctx->pc = 0x2EA544u;
    // 0x2ea544: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x2EA544u;
    {
        const bool branch_taken_0x2ea544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA544u;
        // 0x2ea548: 0x2e0b02d  daddu       $s6, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea544) {
            ctx->pc = 0x2EA734u;
            goto label_2ea734;
        }
    }
    ctx->pc = 0x2EA54Cu;
label_2ea54c:
    // 0x2ea54c: 0x1080003a  beqz        $a0, . + 4 + (0x3A << 2)
    ctx->pc = 0x2EA54Cu;
    {
        const bool branch_taken_0x2ea54c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA54Cu;
        // 0x2ea550: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea54c) {
            ctx->pc = 0x2EA638u;
            goto label_2ea638;
        }
    }
    ctx->pc = 0x2EA554u;
    // 0x2ea554: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2ea554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2ea558: 0x2463c5e0  addiu       $v1, $v1, -0x3A20
    ctx->pc = 0x2ea558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952416));
    // 0x2ea55c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2ea55cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea560: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x2ea560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2ea564: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2ea564u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2ea568: 0x3404ff80  ori         $a0, $zero, 0xFF80
    ctx->pc = 0x2ea568u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x2ea56c: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x2ea56cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x2ea570: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ea570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ea574: 0xc0b8d3a  jal         func_2E34E8
    ctx->pc = 0x2EA574u;
    SET_GPR_U32(ctx, 31, 0x2EA57Cu);
    ctx->pc = 0x2EA578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA574u;
    // 0x2ea578: 0xdc450000  ld          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E34E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E34E8u, 0x2EA574u, 0x2EA57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA57Cu;
label_2ea57c:
    // 0x2ea57c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2ea57cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea580: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2EA580u;
    SET_GPR_U32(ctx, 31, 0x2EA588u);
    ctx->pc = 0x2EA584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA580u;
    // 0x2ea584: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2EA580u, 0x2EA588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA588u;
label_2ea588:
    // 0x2ea588: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2EA588u;
    {
        const bool branch_taken_0x2ea588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA588u;
        // 0x2ea58c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea588) {
            ctx->pc = 0x2EA5B8u;
            goto label_2ea5b8;
        }
    }
    ctx->pc = 0x2EA590u;
label_2ea590:
    // 0x2ea590: 0x34048048  ori         $a0, $zero, 0x8048
    ctx->pc = 0x2ea590u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x2ea594: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x2ea594u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x2ea598: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2EA598u;
    SET_GPR_U32(ctx, 31, 0x2EA5A0u);
    ctx->pc = 0x2EA59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA598u;
    // 0x2ea59c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2EA598u, 0x2EA5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA5A0u;
label_2ea5a0:
    // 0x2ea5a0: 0x34048048  ori         $a0, $zero, 0x8048
    ctx->pc = 0x2ea5a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x2ea5a4: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x2ea5a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x2ea5a8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2ea5a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea5ac: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2EA5ACu;
    SET_GPR_U32(ctx, 31, 0x2EA5B4u);
    ctx->pc = 0x2EA5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA5ACu;
    // 0x2ea5b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2EA5ACu, 0x2EA5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA5B4u;
label_2ea5b4:
    // 0x2ea5b4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2ea5b4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ea5b8:
    // 0x2ea5b8: 0xc0b8e1c  jal         func_2E3870
    ctx->pc = 0x2EA5B8u;
    SET_GPR_U32(ctx, 31, 0x2EA5C0u);
    ctx->pc = 0x2EA5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA5B8u;
    // 0x2ea5bc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3870u, 0x2EA5B8u, 0x2EA5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA5C0u;
label_2ea5c0:
    // 0x2ea5c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ea5c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea5c4: 0xc0b8dee  jal         func_2E37B8
    ctx->pc = 0x2EA5C4u;
    SET_GPR_U32(ctx, 31, 0x2EA5CCu);
    ctx->pc = 0x2EA5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA5C4u;
    // 0x2ea5c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E37B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E37B8u, 0x2EA5C4u, 0x2EA5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA5CCu;
label_2ea5cc:
    // 0x2ea5cc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2ea5ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea5d0: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2EA5D0u;
    SET_GPR_U32(ctx, 31, 0x2EA5D8u);
    ctx->pc = 0x2EA5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA5D0u;
    // 0x2ea5d4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2EA5D0u, 0x2EA5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA5D8u;
label_2ea5d8:
    // 0x2ea5d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ea5d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea5dc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2ea5dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea5e0: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x2ea5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x2ea5e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ea5e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea5e8: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x2ea5e8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ea5ec: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2EA5ECu;
    SET_GPR_U32(ctx, 31, 0x2EA5F4u);
    ctx->pc = 0x2EA5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA5ECu;
    // 0x2ea5f0: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2EA5ECu, 0x2EA5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA5F4u;
label_2ea5f4:
    // 0x2ea5f4: 0x442027f  bltzl       $v0, . + 4 + (0x27F << 2)
    ctx->pc = 0x2EA5F4u;
    {
        const bool branch_taken_0x2ea5f4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2ea5f4) {
            ctx->pc = 0x2EA5F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA5F4u;
            // 0x2ea5f8: 0x26770001  addiu       $s7, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EAFF4u;
            goto label_2eaff4;
        }
    }
    ctx->pc = 0x2EA5FCu;
    // 0x2ea5fc: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x2ea5fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x2ea600: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x2ea600u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x2ea604: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2EA604u;
    SET_GPR_U32(ctx, 31, 0x2EA60Cu);
    ctx->pc = 0x2EA608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA604u;
    // 0x2ea608: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2EA604u, 0x2EA60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA60Cu;
label_2ea60c:
    // 0x2ea60c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ea60cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea610: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2EA610u;
    SET_GPR_U32(ctx, 31, 0x2EA618u);
    ctx->pc = 0x2EA614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA610u;
    // 0x2ea614: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2EA610u, 0x2EA618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA618u;
label_2ea618:
    // 0x2ea618: 0x4400098  bltz        $v0, . + 4 + (0x98 << 2)
    ctx->pc = 0x2EA618u;
    {
        const bool branch_taken_0x2ea618 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2EA61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA618u;
        // 0x2ea61c: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea618) {
            ctx->pc = 0x2EA87Cu;
            goto label_2ea87c;
        }
    }
    ctx->pc = 0x2EA620u;
    // 0x2ea620: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2ea620u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2ea624: 0x283102a  slt         $v0, $s4, $v1
    ctx->pc = 0x2ea624u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2ea628: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x2EA628u;
    {
        const bool branch_taken_0x2ea628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea628) {
            ctx->pc = 0x2EA590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ea590;
        }
    }
    ctx->pc = 0x2EA630u;
    // 0x2ea630: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x2EA630u;
    {
        const bool branch_taken_0x2ea630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA630u;
        // 0x2ea634: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea630) {
            ctx->pc = 0x2EA730u;
            goto label_2ea730;
        }
    }
    ctx->pc = 0x2EA638u;
label_2ea638:
    // 0x2ea638: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2ea638u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2ea63c: 0x2463c5e0  addiu       $v1, $v1, -0x3A20
    ctx->pc = 0x2ea63cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952416));
    // 0x2ea640: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2ea640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea644: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x2ea644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2ea648: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2ea648u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ea64c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2ea64cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2ea650: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ea650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ea654: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2EA654u;
    SET_GPR_U32(ctx, 31, 0x2EA65Cu);
    ctx->pc = 0x2EA658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA654u;
    // 0x2ea658: 0xdc440000  ld          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2EA654u, 0x2EA65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA65Cu;
label_2ea65c:
    // 0x2ea65c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2EA65Cu;
    {
        const bool branch_taken_0x2ea65c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA65Cu;
        // 0x2ea660: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea65c) {
            ctx->pc = 0x2EA680u;
            goto label_2ea680;
        }
    }
    ctx->pc = 0x2EA664u;
    // 0x2ea664: 0x0  nop
    ctx->pc = 0x2ea664u;
    // NOP
label_2ea668:
    // 0x2ea668: 0x34048048  ori         $a0, $zero, 0x8048
    ctx->pc = 0x2ea668u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x2ea66c: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x2ea66cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x2ea670: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ea670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea674: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2EA674u;
    SET_GPR_U32(ctx, 31, 0x2EA67Cu);
    ctx->pc = 0x2EA678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA674u;
    // 0x2ea678: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2EA674u, 0x2EA67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA67Cu;
label_2ea67c:
    // 0x2ea67c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2ea67cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ea680:
    // 0x2ea680: 0xc0b8e1c  jal         func_2E3870
    ctx->pc = 0x2EA680u;
    SET_GPR_U32(ctx, 31, 0x2EA688u);
    ctx->pc = 0x2EA684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA680u;
    // 0x2ea684: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3870u, 0x2EA680u, 0x2EA688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA688u;
label_2ea688:
    // 0x2ea688: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ea688u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea68c: 0xc0b8dee  jal         func_2E37B8
    ctx->pc = 0x2EA68Cu;
    SET_GPR_U32(ctx, 31, 0x2EA694u);
    ctx->pc = 0x2EA690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA68Cu;
    // 0x2ea690: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E37B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E37B8u, 0x2EA68Cu, 0x2EA694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA694u;
label_2ea694:
    // 0x2ea694: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2ea694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea698: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2EA698u;
    SET_GPR_U32(ctx, 31, 0x2EA6A0u);
    ctx->pc = 0x2EA69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA698u;
    // 0x2ea69c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2EA698u, 0x2EA6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA6A0u;
label_2ea6a0:
    // 0x2ea6a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ea6a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea6a4: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x2ea6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x2ea6a8: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x2ea6a8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ea6ac: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2ea6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ea6b0: 0x1682ffed  bne         $s4, $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2EA6B0u;
    {
        const bool branch_taken_0x2ea6b0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EA6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA6B0u;
        // 0x2ea6b4: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea6b0) {
            ctx->pc = 0x2EA668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ea668;
        }
    }
    ctx->pc = 0x2EA6B8u;
    // 0x2ea6b8: 0x3404ff80  ori         $a0, $zero, 0xFF80
    ctx->pc = 0x2ea6b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x2ea6bc: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x2ea6bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x2ea6c0: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2EA6C0u;
    SET_GPR_U32(ctx, 31, 0x2EA6C8u);
    ctx->pc = 0x2EA6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA6C0u;
    // 0x2ea6c4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2EA6C0u, 0x2EA6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA6C8u;
label_2ea6c8:
    // 0x2ea6c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ea6c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea6cc: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2EA6CCu;
    SET_GPR_U32(ctx, 31, 0x2EA6D4u);
    ctx->pc = 0x2EA6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA6CCu;
    // 0x2ea6d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2EA6CCu, 0x2EA6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA6D4u;
label_2ea6d4:
    // 0x2ea6d4: 0x5c40006a  bgtzl       $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x2EA6D4u;
    {
        const bool branch_taken_0x2ea6d4 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2ea6d4) {
            ctx->pc = 0x2EA6D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA6D4u;
            // 0x2ea6d8: 0x26770001  addiu       $s7, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA880u;
            goto label_2ea880;
        }
    }
    ctx->pc = 0x2EA6DCu;
    // 0x2ea6dc: 0x3404ff80  ori         $a0, $zero, 0xFF80
    ctx->pc = 0x2ea6dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x2ea6e0: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x2ea6e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x2ea6e4: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2EA6E4u;
    SET_GPR_U32(ctx, 31, 0x2EA6ECu);
    ctx->pc = 0x2EA6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA6E4u;
    // 0x2ea6e8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2EA6E4u, 0x2EA6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA6ECu;
label_2ea6ec:
    // 0x2ea6ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ea6ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea6f0: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2EA6F0u;
    SET_GPR_U32(ctx, 31, 0x2EA6F8u);
    ctx->pc = 0x2EA6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA6F0u;
    // 0x2ea6f4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2EA6F0u, 0x2EA6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA6F8u;
label_2ea6f8:
    // 0x2ea6f8: 0x441000d  bgez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2EA6F8u;
    {
        const bool branch_taken_0x2ea6f8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2EA6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA6F8u;
        // 0x2ea6fc: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea6f8) {
            ctx->pc = 0x2EA730u;
            goto label_2ea730;
        }
    }
    ctx->pc = 0x2EA700u;
    // 0x2ea700: 0x26770001  addiu       $s7, $s3, 0x1
    ctx->pc = 0x2ea700u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2ea704: 0x0  nop
    ctx->pc = 0x2ea704u;
    // NOP
label_2ea708:
    // 0x2ea708: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x2ea708u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x2ea70c: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x2ea70cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2ea710: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x2ea710u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2ea714: 0x0  nop
    ctx->pc = 0x2ea714u;
    // NOP
    // 0x2ea718: 0x0  nop
    ctx->pc = 0x2ea718u;
    // NOP
    // 0x2ea71c: 0x1043fffa  beq         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2EA71Cu;
    {
        const bool branch_taken_0x2ea71c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ea71c) {
            ctx->pc = 0x2EA708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ea708;
        }
    }
    ctx->pc = 0x2EA724u;
    // 0x2ea724: 0x10000233  b           . + 4 + (0x233 << 2)
    ctx->pc = 0x2EA724u;
    {
        const bool branch_taken_0x2ea724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA724u;
        // 0x2ea728: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea724) {
            ctx->pc = 0x2EAFF4u;
            goto label_2eaff4;
        }
    }
    ctx->pc = 0x2EA72Cu;
label_2ea72c:
    // 0x2ea72c: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x2ea72cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_2ea730:
    // 0x2ea730: 0x2e0b02d  daddu       $s6, $s7, $zero
    ctx->pc = 0x2ea730u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2ea734:
    // 0x2ea734: 0x8fb3002c  lw          $s3, 0x2C($sp)
    ctx->pc = 0x2ea734u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x2ea738: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2ea738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2ea73c: 0x8fb50058  lw          $s5, 0x58($sp)
    ctx->pc = 0x2ea73cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2ea740:
    // 0x2ea740: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2ea740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ea744: 0x460005e  bltz        $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x2EA744u;
    {
        const bool branch_taken_0x2ea744 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2EA748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA744u;
        // 0x2ea748: 0x2a62000f  slti        $v0, $s3, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)15) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea744) {
            ctx->pc = 0x2EA8C0u;
            goto label_2ea8c0;
        }
    }
    ctx->pc = 0x2EA74Cu;
    // 0x2ea74c: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x2EA74Cu;
    {
        const bool branch_taken_0x2ea74c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA74Cu;
        // 0x2ea750: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea74c) {
            ctx->pc = 0x2EA8C0u;
            goto label_2ea8c0;
        }
    }
    ctx->pc = 0x2EA754u;
    // 0x2ea754: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x2ea754u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x2ea758: 0x2442c5e0  addiu       $v0, $v0, -0x3A20
    ctx->pc = 0x2ea758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952416));
    // 0x2ea75c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ea75cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ea760: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x2ea760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2ea764: 0x4410012  bgez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2EA764u;
    {
        const bool branch_taken_0x2ea764 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2EA768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA764u;
        // 0x2ea768: 0xdc720000  ld          $s2, 0x0($v1) (Delay Slot)
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea764) {
            ctx->pc = 0x2EA7B0u;
            goto label_2ea7b0;
        }
    }
    ctx->pc = 0x2EA76Cu;
    // 0x2ea76c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2ea76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ea770: 0x1c600011  bgtz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2EA770u;
    {
        const bool branch_taken_0x2ea770 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x2EA774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA770u;
        // 0x2ea774: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea770) {
            ctx->pc = 0x2EA7B8u;
            goto label_2ea7b8;
        }
    }
    ctx->pc = 0x2EA778u;
    // 0x2ea778: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x2ea778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x2ea77c: 0x460012e  bltz        $v1, . + 4 + (0x12E << 2)
    ctx->pc = 0x2EA77Cu;
    {
        const bool branch_taken_0x2ea77c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2EA780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA77Cu;
        // 0x2ea780: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea77c) {
            ctx->pc = 0x2EAC38u;
            goto label_2eac38;
        }
    }
    ctx->pc = 0x2EA784u;
    // 0x2ea784: 0x34058028  ori         $a1, $zero, 0x8028
    ctx->pc = 0x2ea784u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32808);
    // 0x2ea788: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x2ea788u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x2ea78c: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2EA78Cu;
    SET_GPR_U32(ctx, 31, 0x2EA794u);
    ctx->pc = 0x2EA790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA78Cu;
    // 0x2ea790: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2EA78Cu, 0x2EA794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA794u;
label_2ea794:
    // 0x2ea794: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2ea794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea798: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2EA798u;
    SET_GPR_U32(ctx, 31, 0x2EA7A0u);
    ctx->pc = 0x2EA79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA798u;
    // 0x2ea79c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2EA798u, 0x2EA7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA7A0u;
label_2ea7a0:
    // 0x2ea7a0: 0x18400125  blez        $v0, . + 4 + (0x125 << 2)
    ctx->pc = 0x2EA7A0u;
    {
        const bool branch_taken_0x2ea7a0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2EA7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA7A0u;
        // 0x2ea7a4: 0x8fa30058  lw          $v1, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea7a0) {
            ctx->pc = 0x2EAC38u;
            goto label_2eac38;
        }
    }
    ctx->pc = 0x2EA7A8u;
    // 0x2ea7a8: 0x10000128  b           . + 4 + (0x128 << 2)
    ctx->pc = 0x2EA7A8u;
    {
        const bool branch_taken_0x2ea7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA7A8u;
        // 0x2ea7ac: 0x24020031  addiu       $v0, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea7a8) {
            ctx->pc = 0x2EAC4Cu;
            goto label_2eac4c;
        }
    }
    ctx->pc = 0x2EA7B0u;
label_2ea7b0:
    // 0x2ea7b0: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2ea7b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ea7b4: 0x0  nop
    ctx->pc = 0x2ea7b4u;
    // NOP
label_2ea7b8:
    // 0x2ea7b8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2EA7B8u;
    {
        const bool branch_taken_0x2ea7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA7B8u;
        // 0x2ea7bc: 0x26770001  addiu       $s7, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea7b8) {
            ctx->pc = 0x2EA7E8u;
            goto label_2ea7e8;
        }
    }
    ctx->pc = 0x2EA7C0u;
label_2ea7c0:
    // 0x2ea7c0: 0x34048048  ori         $a0, $zero, 0x8048
    ctx->pc = 0x2ea7c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x2ea7c4: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x2ea7c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x2ea7c8: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2EA7C8u;
    SET_GPR_U32(ctx, 31, 0x2EA7D0u);
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2EA7C8u, 0x2EA7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA7D0u;
label_2ea7d0:
    // 0x2ea7d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ea7d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea7d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ea7d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea7d8: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2EA7D8u;
    SET_GPR_U32(ctx, 31, 0x2EA7E0u);
    ctx->pc = 0x2EA7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA7D8u;
    // 0x2ea7dc: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2EA7D8u, 0x2EA7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA7E0u;
label_2ea7e0:
    // 0x2ea7e0: 0x10400204  beqz        $v0, . + 4 + (0x204 << 2)
    ctx->pc = 0x2EA7E0u;
    {
        const bool branch_taken_0x2ea7e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA7E0u;
        // 0x2ea7e4: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea7e0) {
            ctx->pc = 0x2EAFF4u;
            goto label_2eaff4;
        }
    }
    ctx->pc = 0x2EA7E8u;
label_2ea7e8:
    // 0x2ea7e8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2ea7e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea7ec: 0xc0b8d3a  jal         func_2E34E8
    ctx->pc = 0x2EA7ECu;
    SET_GPR_U32(ctx, 31, 0x2EA7F4u);
    ctx->pc = 0x2EA7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA7ECu;
    // 0x2ea7f0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E34E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E34E8u, 0x2EA7ECu, 0x2EA7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA7F4u;
label_2ea7f4:
    // 0x2ea7f4: 0xc0b8e1c  jal         func_2E3870
    ctx->pc = 0x2EA7F4u;
    SET_GPR_U32(ctx, 31, 0x2EA7FCu);
    ctx->pc = 0x2EA7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA7F4u;
    // 0x2ea7f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3870u, 0x2EA7F4u, 0x2EA7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA7FCu;
label_2ea7fc:
    // 0x2ea7fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ea7fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea800: 0xc0b8dee  jal         func_2E37B8
    ctx->pc = 0x2EA800u;
    SET_GPR_U32(ctx, 31, 0x2EA808u);
    ctx->pc = 0x2EA804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA800u;
    // 0x2ea804: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E37B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E37B8u, 0x2EA800u, 0x2EA808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA808u;
label_2ea808:
    // 0x2ea808: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ea808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea80c: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2EA80Cu;
    SET_GPR_U32(ctx, 31, 0x2EA814u);
    ctx->pc = 0x2EA810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA80Cu;
    // 0x2ea810: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2EA80Cu, 0x2EA814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA814u;
label_2ea814:
    // 0x2ea814: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2ea814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea818: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2EA818u;
    SET_GPR_U32(ctx, 31, 0x2EA820u);
    ctx->pc = 0x2EA81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA818u;
    // 0x2ea81c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2EA818u, 0x2EA820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA820u;
label_2ea820:
    // 0x2ea820: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ea820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea824: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x2ea824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x2ea828: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x2ea828u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ea82c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2ea82cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ea830: 0x1684ffe3  bne         $s4, $a0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x2EA830u;
    {
        const bool branch_taken_0x2ea830 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 4));
        ctx->pc = 0x2EA834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA830u;
        // 0x2ea834: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea830) {
            ctx->pc = 0x2EA7C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ea7c0;
        }
    }
    ctx->pc = 0x2EA838u;
    // 0x2ea838: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2EA838u;
    SET_GPR_U32(ctx, 31, 0x2EA840u);
    ctx->pc = 0x2EA83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA838u;
    // 0x2ea83c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2EA838u, 0x2EA840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA840u;
label_2ea840:
    // 0x2ea840: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ea840u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea844: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2ea844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea848: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2EA848u;
    SET_GPR_U32(ctx, 31, 0x2EA850u);
    ctx->pc = 0x2EA84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA848u;
    // 0x2ea84c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2EA848u, 0x2EA850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA850u;
label_2ea850:
    // 0x2ea850: 0x1c40000c  bgtz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2EA850u;
    {
        const bool branch_taken_0x2ea850 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2EA854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA850u;
        // 0x2ea854: 0x24050039  addiu       $a1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea850) {
            ctx->pc = 0x2EA884u;
            goto label_2ea884;
        }
    }
    ctx->pc = 0x2EA858u;
    // 0x2ea858: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ea858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea85c: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2EA85Cu;
    SET_GPR_U32(ctx, 31, 0x2EA864u);
    ctx->pc = 0x2EA860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA85Cu;
    // 0x2ea860: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2EA85Cu, 0x2EA864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA864u;
label_2ea864:
    // 0x2ea864: 0x144001e3  bnez        $v0, . + 4 + (0x1E3 << 2)
    ctx->pc = 0x2EA864u;
    {
        const bool branch_taken_0x2ea864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EA868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA864u;
        // 0x2ea868: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea864) {
            ctx->pc = 0x2EAFF4u;
            goto label_2eaff4;
        }
    }
    ctx->pc = 0x2EA86Cu;
    // 0x2ea86c: 0x104001e1  beqz        $v0, . + 4 + (0x1E1 << 2)
    ctx->pc = 0x2EA86Cu;
    {
        const bool branch_taken_0x2ea86c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA86Cu;
        // 0x2ea870: 0x24050039  addiu       $a1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea86c) {
            ctx->pc = 0x2EAFF4u;
            goto label_2eaff4;
        }
    }
    ctx->pc = 0x2EA874u;
    // 0x2ea874: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2EA874u;
    {
        const bool branch_taken_0x2ea874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA874u;
        // 0x2ea878: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea874) {
            ctx->pc = 0x2EA888u;
            goto label_2ea888;
        }
    }
    ctx->pc = 0x2EA87Cu;
label_2ea87c:
    // 0x2ea87c: 0x26770001  addiu       $s7, $s3, 0x1
    ctx->pc = 0x2ea87cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2ea880:
    // 0x2ea880: 0x24050039  addiu       $a1, $zero, 0x39
    ctx->pc = 0x2ea880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_2ea884:
    // 0x2ea884: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x2ea884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_2ea888:
    // 0x2ea888: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x2ea888u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_2ea88c:
    // 0x2ea88c: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x2ea88cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2ea890: 0x14450007  bne         $v0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EA890u;
    {
        const bool branch_taken_0x2ea890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x2EA894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA890u;
        // 0x2ea894: 0x92a40000  lbu         $a0, 0x0($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea890) {
            ctx->pc = 0x2EA8B0u;
            goto label_2ea8b0;
        }
    }
    ctx->pc = 0x2EA898u;
    // 0x2ea898: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2ea898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2ea89c: 0x56a2fffb  bnel        $s5, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2EA89Cu;
    {
        const bool branch_taken_0x2ea89c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ea89c) {
            ctx->pc = 0x2EA8A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA89Cu;
            // 0x2ea8a0: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA88Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ea88c;
        }
    }
    ctx->pc = 0x2EA8A4u;
    // 0x2ea8a4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2ea8a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ea8a8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2ea8a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea8ac: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x2ea8acu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_2ea8b0:
    // 0x2ea8b0: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x2ea8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2ea8b4: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x2ea8b4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ea8b8: 0x100001ce  b           . + 4 + (0x1CE << 2)
    ctx->pc = 0x2EA8B8u;
    {
        const bool branch_taken_0x2ea8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA8B8u;
        // 0x2ea8bc: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea8b8) {
            ctx->pc = 0x2EAFF4u;
            goto label_2eaff4;
        }
    }
    ctx->pc = 0x2EA8C0u;
label_2ea8c0:
    // 0x2ea8c0: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x2ea8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x2ea8c4: 0x8fb10018  lw          $s1, 0x18($sp)
    ctx->pc = 0x2ea8c4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ea8c8: 0x8fb2001c  lw          $s2, 0x1C($sp)
    ctx->pc = 0x2ea8c8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x2ea8cc: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x2ea8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x2ea8d0: 0x1080002b  beqz        $a0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2EA8D0u;
    {
        const bool branch_taken_0x2ea8d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA8D0u;
        // 0x2ea8d4: 0xafa00050  sw          $zero, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea8d0) {
            ctx->pc = 0x2EA980u;
            goto label_2ea980;
        }
    }
    ctx->pc = 0x2EA8D8u;
    // 0x2ea8d8: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x2ea8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ea8dc: 0x28570002  slti        $s7, $v0, 0x2
    ctx->pc = 0x2ea8dcu;
    SET_GPR_U64(ctx, 23, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2ea8e0: 0x12e00007  beqz        $s7, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EA8E0u;
    {
        const bool branch_taken_0x2ea8e0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA8E0u;
        // 0x2ea8e4: 0x8fa40044  lw          $a0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea8e0) {
            ctx->pc = 0x2EA900u;
            goto label_2ea900;
        }
    }
    ctx->pc = 0x2EA8E8u;
    // 0x2ea8e8: 0x1480001a  bnez        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2EA8E8u;
    {
        const bool branch_taken_0x2ea8e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EA8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA8E8u;
        // 0x2ea8ec: 0x24740433  addiu       $s4, $v1, 0x433 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 1075));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea8e8) {
            ctx->pc = 0x2EA954u;
            goto label_2ea954;
        }
    }
    ctx->pc = 0x2EA8F0u;
    // 0x2ea8f0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2ea8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2ea8f4: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x2ea8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x2ea8f8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2EA8F8u;
    {
        const bool branch_taken_0x2ea8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA8F8u;
        // 0x2ea8fc: 0x43a023  subu        $s4, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea8f8) {
            ctx->pc = 0x2EA954u;
            goto label_2ea954;
        }
    }
    ctx->pc = 0x2EA900u;
label_2ea900:
    // 0x2ea900: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2ea900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ea904: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x2ea904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x2ea908: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x2ea908u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2ea90c: 0x70102a  slt         $v0, $v1, $s0
    ctx->pc = 0x2ea90cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2ea910: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EA910u;
    {
        const bool branch_taken_0x2ea910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EA914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA910u;
        // 0x2ea914: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea910) {
            ctx->pc = 0x2EA920u;
            goto label_2ea920;
        }
    }
    ctx->pc = 0x2EA918u;
    // 0x2ea918: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2EA918u;
    {
        const bool branch_taken_0x2ea918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA918u;
        // 0x2ea91c: 0x709023  subu        $s2, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea918) {
            ctx->pc = 0x2EA93Cu;
            goto label_2ea93c;
        }
    }
    ctx->pc = 0x2EA920u;
label_2ea920:
    // 0x2ea920: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2ea920u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea924: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x2ea924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2ea928: 0x2048023  subu        $s0, $s0, $a0
    ctx->pc = 0x2ea928u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2ea92c: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x2ea92cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2ea930: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2ea930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2ea934: 0xafa4001c  sw          $a0, 0x1C($sp)
    ctx->pc = 0x2ea934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
    // 0x2ea938: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x2ea938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
label_2ea93c:
    // 0x2ea93c: 0x8fb40020  lw          $s4, 0x20($sp)
    ctx->pc = 0x2ea93cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ea940: 0x6810005  bgez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EA940u;
    {
        const bool branch_taken_0x2ea940 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x2EA944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA940u;
        // 0x2ea944: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea940) {
            ctx->pc = 0x2EA958u;
            goto label_2ea958;
        }
    }
    ctx->pc = 0x2EA948u;
    // 0x2ea948: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ea948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ea94c: 0x748823  subu        $s1, $v1, $s4
    ctx->pc = 0x2ea94cu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x2ea950: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2ea950u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea954:
    // 0x2ea954: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2ea954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2ea958:
    // 0x2ea958: 0xc0bb0c8  jal         func_2EC320
    ctx->pc = 0x2EA958u;
    SET_GPR_U32(ctx, 31, 0x2EA960u);
    ctx->pc = 0x2EA95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA958u;
    // 0x2ea95c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC320u, 0x2EA958u, 0x2EA960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA960u;
label_2ea960:
    // 0x2ea960: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x2ea960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x2ea964: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2ea964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2ea968: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ea968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ea96c: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x2ea96cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x2ea970: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2ea970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2ea974: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x2ea974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x2ea978: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2EA978u;
    {
        const bool branch_taken_0x2ea978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA978u;
        // 0x2ea97c: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea978) {
            ctx->pc = 0x2EA988u;
            goto label_2ea988;
        }
    }
    ctx->pc = 0x2EA980u;
label_2ea980:
    // 0x2ea980: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ea980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ea984: 0x28770002  slti        $s7, $v1, 0x2
    ctx->pc = 0x2ea984u;
    SET_GPR_U64(ctx, 23, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_2ea988:
    // 0x2ea988: 0x1a20000b  blez        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x2EA988u;
    {
        const bool branch_taken_0x2ea988 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x2EA98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA988u;
        // 0x2ea98c: 0x8fa40038  lw          $a0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea988) {
            ctx->pc = 0x2EA9B8u;
            goto label_2ea9b8;
        }
    }
    ctx->pc = 0x2EA990u;
    // 0x2ea990: 0x18800009  blez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EA990u;
    {
        const bool branch_taken_0x2ea990 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2EA994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA990u;
        // 0x2ea994: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea990) {
            ctx->pc = 0x2EA9B8u;
            goto label_2ea9b8;
        }
    }
    ctx->pc = 0x2EA998u;
    // 0x2ea998: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x2ea998u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x2ea99c: 0x222a00b  movn        $s4, $s1, $v0
    ctx->pc = 0x2ea99cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 17));
    // 0x2ea9a0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ea9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ea9a4: 0x942023  subu        $a0, $a0, $s4
    ctx->pc = 0x2ea9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x2ea9a8: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x2ea9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x2ea9ac: 0x2348823  subu        $s1, $s1, $s4
    ctx->pc = 0x2ea9acu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x2ea9b0: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x2ea9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2ea9b4: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x2ea9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_2ea9b8:
    // 0x2ea9b8: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x2ea9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x2ea9bc: 0x1860001e  blez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2EA9BCu;
    {
        const bool branch_taken_0x2ea9bc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2EA9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA9BCu;
        // 0x2ea9c0: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea9bc) {
            ctx->pc = 0x2EAA38u;
            goto label_2eaa38;
        }
    }
    ctx->pc = 0x2EA9C4u;
    // 0x2ea9c4: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2EA9C4u;
    {
        const bool branch_taken_0x2ea9c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA9C4u;
        // 0x2ea9c8: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea9c4) {
            ctx->pc = 0x2EAA28u;
            goto label_2eaa28;
        }
    }
    ctx->pc = 0x2EA9CCu;
    // 0x2ea9cc: 0x1a40000d  blez        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x2EA9CCu;
    {
        const bool branch_taken_0x2ea9cc = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x2EA9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA9CCu;
        // 0x2ea9d0: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea9cc) {
            ctx->pc = 0x2EAA04u;
            goto label_2eaa04;
        }
    }
    ctx->pc = 0x2EA9D4u;
    // 0x2ea9d4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2ea9d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea9d8: 0xc0bb162  jal         func_2EC588
    ctx->pc = 0x2EA9D8u;
    SET_GPR_U32(ctx, 31, 0x2EA9E0u);
    ctx->pc = 0x2EA9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA9D8u;
    // 0x2ea9dc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC588u, 0x2EA9D8u, 0x2EA9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA9E0u;
label_2ea9e0:
    // 0x2ea9e0: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x2ea9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x2ea9e4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2ea9e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea9e8: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x2ea9e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ea9ec: 0xc0bb0d6  jal         func_2EC358
    ctx->pc = 0x2EA9ECu;
    SET_GPR_U32(ctx, 31, 0x2EA9F4u);
    ctx->pc = 0x2EA9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA9ECu;
    // 0x2ea9f0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC358u, 0x2EA9ECu, 0x2EA9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA9F4u;
label_2ea9f4:
    // 0x2ea9f4: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2ea9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ea9f8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2ea9f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea9fc: 0xc0bafd2  jal         func_2EBF48
    ctx->pc = 0x2EA9FCu;
    SET_GPR_U32(ctx, 31, 0x2EAA04u);
    ctx->pc = 0x2EAA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA9FCu;
    // 0x2eaa00: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBF48u, 0x2EA9FCu, 0x2EAA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAA04u;
label_2eaa04:
    // 0x2eaa04: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x2eaa04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x2eaa08: 0x528023  subu        $s0, $v0, $s2
    ctx->pc = 0x2eaa08u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2eaa0c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2EAA0Cu;
    {
        const bool branch_taken_0x2eaa0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAA0Cu;
        // 0x2eaa10: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaa0c) {
            ctx->pc = 0x2EAA38u;
            goto label_2eaa38;
        }
    }
    ctx->pc = 0x2EAA14u;
    // 0x2eaa14: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2eaa14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaa18: 0xc0bb162  jal         func_2EC588
    ctx->pc = 0x2EAA18u;
    SET_GPR_U32(ctx, 31, 0x2EAA20u);
    ctx->pc = 0x2EAA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAA18u;
    // 0x2eaa1c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC588u, 0x2EAA18u, 0x2EAA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAA20u;
label_2eaa20:
    // 0x2eaa20: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2EAA20u;
    {
        const bool branch_taken_0x2eaa20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAA20u;
        // 0x2eaa24: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaa20) {
            ctx->pc = 0x2EAA38u;
            goto label_2eaa38;
        }
    }
    ctx->pc = 0x2EAA28u;
label_2eaa28:
    // 0x2eaa28: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2eaa28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaa2c: 0xc0bb162  jal         func_2EC588
    ctx->pc = 0x2EAA2Cu;
    SET_GPR_U32(ctx, 31, 0x2EAA34u);
    ctx->pc = 0x2EAA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAA2Cu;
    // 0x2eaa30: 0x8fa6001c  lw          $a2, 0x1C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC588u, 0x2EAA2Cu, 0x2EAA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAA34u;
label_2eaa34:
    // 0x2eaa34: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x2eaa34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_2eaa38:
    // 0x2eaa38: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2eaa38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaa3c: 0xc0bb0c8  jal         func_2EC320
    ctx->pc = 0x2EAA3Cu;
    SET_GPR_U32(ctx, 31, 0x2EAA44u);
    ctx->pc = 0x2EAA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAA3Cu;
    // 0x2eaa40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC320u, 0x2EAA3Cu, 0x2EAA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAA44u;
label_2eaa44:
    // 0x2eaa44: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x2eaa44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2eaa48: 0x18600006  blez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EAA48u;
    {
        const bool branch_taken_0x2eaa48 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2EAA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAA48u;
        // 0x2eaa4c: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaa48) {
            ctx->pc = 0x2EAA64u;
            goto label_2eaa64;
        }
    }
    ctx->pc = 0x2EAA50u;
    // 0x2eaa50: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2eaa50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaa54: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2eaa54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaa58: 0xc0bb162  jal         func_2EC588
    ctx->pc = 0x2EAA58u;
    SET_GPR_U32(ctx, 31, 0x2EAA60u);
    ctx->pc = 0x2EAA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAA58u;
    // 0x2eaa5c: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC588u, 0x2EAA58u, 0x2EAA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAA60u;
label_2eaa60:
    // 0x2eaa60: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x2eaa60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_2eaa64:
    // 0x2eaa64: 0x12e00015  beqz        $s7, . + 4 + (0x15 << 2)
    ctx->pc = 0x2EAA64u;
    {
        const bool branch_taken_0x2eaa64 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAA64u;
        // 0x2eaa68: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaa64) {
            ctx->pc = 0x2EAABCu;
            goto label_2eaabc;
        }
    }
    ctx->pc = 0x2EAA6Cu;
    // 0x2eaa6c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2eaa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2eaa70: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x2eaa70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x2eaa74: 0x2c21024  and         $v0, $s6, $v0
    ctx->pc = 0x2eaa74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & GPR_U64(ctx, 2));
    // 0x2eaa78: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2EAA78u;
    {
        const bool branch_taken_0x2eaa78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eaa78) {
            ctx->pc = 0x2EAA7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EAA78u;
            // 0x2eaa7c: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EAAB8u;
            goto label_2eaab8;
        }
    }
    ctx->pc = 0x2EAA80u;
    // 0x2eaa80: 0x16103f  dsra32      $v0, $s6, 0
    ctx->pc = 0x2eaa80u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 22) >> (32 + 0));
    // 0x2eaa84: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x2eaa84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x2eaa88: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2eaa88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2eaa8c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EAA8Cu;
    {
        const bool branch_taken_0x2eaa8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAA8Cu;
        // 0x2eaa90: 0x8fa40018  lw          $a0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaa8c) {
            ctx->pc = 0x2EAAB4u;
            goto label_2eaab4;
        }
    }
    ctx->pc = 0x2EAA94u;
    // 0x2eaa94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2eaa94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eaa98: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2eaa98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2eaa9c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2eaa9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2eaaa0: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x2eaaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x2eaaa4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2eaaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2eaaa8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2eaaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2eaaac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2EAAACu;
    {
        const bool branch_taken_0x2eaaac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAAACu;
        // 0x2eaab0: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaaac) {
            ctx->pc = 0x2EAAB8u;
            goto label_2eaab8;
        }
    }
    ctx->pc = 0x2EAAB4u;
label_2eaab4:
    // 0x2eaab4: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x2eaab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_2eaab8:
    // 0x2eaab8: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x2eaab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_2eaabc:
    // 0x2eaabc: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2EAABCu;
    {
        const bool branch_taken_0x2eaabc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAABCu;
        // 0x2eaac0: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaabc) {
            ctx->pc = 0x2EAAE8u;
            goto label_2eaae8;
        }
    }
    ctx->pc = 0x2EAAC4u;
    // 0x2eaac4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2eaac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2eaac8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2eaac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2eaacc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2eaaccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2eaad0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2eaad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2eaad4: 0xc0bb076  jal         func_2EC1D8
    ctx->pc = 0x2EAAD4u;
    SET_GPR_U32(ctx, 31, 0x2EAADCu);
    ctx->pc = 0x2EAAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAAD4u;
    // 0x2eaad8: 0x8c440014  lw          $a0, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC1D8u, 0x2EAAD4u, 0x2EAADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAADCu;
label_2eaadc:
    // 0x2eaadc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2eaadcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2eaae0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2EAAE0u;
    {
        const bool branch_taken_0x2eaae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAAE0u;
        // 0x2eaae4: 0x821023  subu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaae0) {
            ctx->pc = 0x2EAAF0u;
            goto label_2eaaf0;
        }
    }
    ctx->pc = 0x2EAAE8u;
label_2eaae8:
    // 0x2eaae8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2eaae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2eaaec: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x2eaaecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2eaaf0:
    // 0x2eaaf0: 0x3054001f  andi        $s4, $v0, 0x1F
    ctx->pc = 0x2eaaf0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2eaaf4: 0x12800002  beqz        $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EAAF4u;
    {
        const bool branch_taken_0x2eaaf4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAAF4u;
        // 0x2eaaf8: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaaf4) {
            ctx->pc = 0x2EAB00u;
            goto label_2eab00;
        }
    }
    ctx->pc = 0x2EAAFCu;
    // 0x2eaafc: 0x54a023  subu        $s4, $v0, $s4
    ctx->pc = 0x2eaafcu;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_2eab00:
    // 0x2eab00: 0x2a820005  slti        $v0, $s4, 0x5
    ctx->pc = 0x2eab00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2eab04: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2EAB04u;
    {
        const bool branch_taken_0x2eab04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EAB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAB04u;
        // 0x2eab08: 0x2a820004  slti        $v0, $s4, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eab04) {
            ctx->pc = 0x2EAB30u;
            goto label_2eab30;
        }
    }
    ctx->pc = 0x2EAB0Cu;
    // 0x2eab0c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2eab0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2eab10: 0x2694fffc  addiu       $s4, $s4, -0x4
    ctx->pc = 0x2eab10u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967292));
    // 0x2eab14: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2eab14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2eab18: 0x2348821  addu        $s1, $s1, $s4
    ctx->pc = 0x2eab18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x2eab1c: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x2eab1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x2eab20: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2eab20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2eab24: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x2eab24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x2eab28: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2EAB28u;
    {
        const bool branch_taken_0x2eab28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAB28u;
        // 0x2eab2c: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eab28) {
            ctx->pc = 0x2EAB54u;
            goto label_2eab54;
        }
    }
    ctx->pc = 0x2EAB30u;
label_2eab30:
    // 0x2eab30: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EAB30u;
    {
        const bool branch_taken_0x2eab30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAB30u;
        // 0x2eab34: 0x8fa30038  lw          $v1, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eab30) {
            ctx->pc = 0x2EAB54u;
            goto label_2eab54;
        }
    }
    ctx->pc = 0x2EAB38u;
    // 0x2eab38: 0x2694001c  addiu       $s4, $s4, 0x1C
    ctx->pc = 0x2eab38u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 28));
    // 0x2eab3c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2eab3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2eab40: 0x2348821  addu        $s1, $s1, $s4
    ctx->pc = 0x2eab40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x2eab44: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x2eab44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x2eab48: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x2eab48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x2eab4c: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x2eab4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
    // 0x2eab50: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2eab50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_2eab54:
    // 0x2eab54: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2eab54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2eab58: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EAB58u;
    {
        const bool branch_taken_0x2eab58 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2EAB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAB58u;
        // 0x2eab5c: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eab58) {
            ctx->pc = 0x2EAB70u;
            goto label_2eab70;
        }
    }
    ctx->pc = 0x2EAB60u;
    // 0x2eab60: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2eab60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eab64: 0xc0bb1a2  jal         func_2EC688
    ctx->pc = 0x2EAB64u;
    SET_GPR_U32(ctx, 31, 0x2EAB6Cu);
    ctx->pc = 0x2EAB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAB64u;
    // 0x2eab68: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC688u, 0x2EAB64u, 0x2EAB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAB6Cu;
label_2eab6c:
    // 0x2eab6c: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x2eab6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_2eab70:
    // 0x2eab70: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2eab70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2eab74: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EAB74u;
    {
        const bool branch_taken_0x2eab74 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2EAB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAB74u;
        // 0x2eab78: 0x8fa50054  lw          $a1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eab74) {
            ctx->pc = 0x2EAB8Cu;
            goto label_2eab8c;
        }
    }
    ctx->pc = 0x2EAB7Cu;
    // 0x2eab7c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2eab7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eab80: 0xc0bb1a2  jal         func_2EC688
    ctx->pc = 0x2EAB80u;
    SET_GPR_U32(ctx, 31, 0x2EAB88u);
    ctx->pc = 0x2EAB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAB80u;
    // 0x2eab84: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC688u, 0x2EAB80u, 0x2EAB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAB88u;
label_2eab88:
    // 0x2eab88: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x2eab88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_2eab8c:
    // 0x2eab8c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2eab8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2eab90: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2EAB90u;
    {
        const bool branch_taken_0x2eab90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAB90u;
        // 0x2eab94: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eab90) {
            ctx->pc = 0x2EABECu;
            goto label_2eabec;
        }
    }
    ctx->pc = 0x2EAB98u;
    // 0x2eab98: 0xc0bb200  jal         func_2EC800
    ctx->pc = 0x2EAB98u;
    SET_GPR_U32(ctx, 31, 0x2EABA0u);
    ctx->pc = 0x2EAB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAB98u;
    // 0x2eab9c: 0x8fa50054  lw          $a1, 0x54($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC800u, 0x2EAB98u, 0x2EABA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EABA0u;
label_2eaba0:
    // 0x2eaba0: 0x4410013  bgez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2EABA0u;
    {
        const bool branch_taken_0x2eaba0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2EABA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EABA0u;
        // 0x2eaba4: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaba0) {
            ctx->pc = 0x2EABF0u;
            goto label_2eabf0;
        }
    }
    ctx->pc = 0x2EABA8u;
    // 0x2eaba8: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2eaba8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2eabac: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2eabacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eabb0: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2eabb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2eabb4: 0xc0bafde  jal         func_2EBF78
    ctx->pc = 0x2EABB4u;
    SET_GPR_U32(ctx, 31, 0x2EABBCu);
    ctx->pc = 0x2EABB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EABB4u;
    // 0x2eabb8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBF78u, 0x2EABB4u, 0x2EABBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EABBCu;
label_2eabbc:
    // 0x2eabbc: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x2eabbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x2eabc0: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x2eabc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x2eabc4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EABC4u;
    {
        const bool branch_taken_0x2eabc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EABC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EABC4u;
        // 0x2eabc8: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eabc4) {
            ctx->pc = 0x2EABE4u;
            goto label_2eabe4;
        }
    }
    ctx->pc = 0x2EABCCu;
    // 0x2eabcc: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x2eabccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2eabd0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2eabd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eabd4: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2eabd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2eabd8: 0xc0bafde  jal         func_2EBF78
    ctx->pc = 0x2EABD8u;
    SET_GPR_U32(ctx, 31, 0x2EABE0u);
    ctx->pc = 0x2EABDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EABD8u;
    // 0x2eabdc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBF78u, 0x2EABD8u, 0x2EABE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EABE0u;
label_2eabe0:
    // 0x2eabe0: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x2eabe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_2eabe4:
    // 0x2eabe4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2eabe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2eabe8: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x2eabe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
label_2eabec:
    // 0x2eabec: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2eabecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2eabf0:
    // 0x2eabf0: 0x5c80001a  bgtzl       $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2EABF0u;
    {
        const bool branch_taken_0x2eabf0 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x2eabf0) {
            ctx->pc = 0x2EABF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EABF0u;
            // 0x2eabf4: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EAC5Cu;
            goto label_2eac5c;
        }
    }
    ctx->pc = 0x2EABF8u;
    // 0x2eabf8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2eabf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2eabfc: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x2eabfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2eac00: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x2EAC00u;
    {
        const bool branch_taken_0x2eac00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eac00) {
            ctx->pc = 0x2EAC04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EAC00u;
            // 0x2eac04: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EAC5Cu;
            goto label_2eac5c;
        }
    }
    ctx->pc = 0x2EAC08u;
    // 0x2eac08: 0x480000b  bltz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x2EAC08u;
    {
        const bool branch_taken_0x2eac08 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2EAC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAC08u;
        // 0x2eac0c: 0x8fa50054  lw          $a1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eac08) {
            ctx->pc = 0x2EAC38u;
            goto label_2eac38;
        }
    }
    ctx->pc = 0x2EAC10u;
    // 0x2eac10: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2eac10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eac14: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x2eac14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2eac18: 0xc0bafde  jal         func_2EBF78
    ctx->pc = 0x2EAC18u;
    SET_GPR_U32(ctx, 31, 0x2EAC20u);
    ctx->pc = 0x2EAC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAC18u;
    // 0x2eac1c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBF78u, 0x2EAC18u, 0x2EAC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAC20u;
label_2eac20:
    // 0x2eac20: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x2eac20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x2eac24: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2eac24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2eac28: 0xc0bb200  jal         func_2EC800
    ctx->pc = 0x2EAC28u;
    SET_GPR_U32(ctx, 31, 0x2EAC30u);
    ctx->pc = 0x2EAC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAC28u;
    // 0x2eac2c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC800u, 0x2EAC28u, 0x2EAC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAC30u;
label_2eac30:
    // 0x2eac30: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EAC30u;
    {
        const bool branch_taken_0x2eac30 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2EAC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAC30u;
        // 0x2eac34: 0x8fa30058  lw          $v1, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eac30) {
            ctx->pc = 0x2EAC48u;
            goto label_2eac48;
        }
    }
    ctx->pc = 0x2EAC38u;
label_2eac38:
    // 0x2eac38: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x2eac38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2eac3c: 0x49827  nor         $s3, $zero, $a0
    ctx->pc = 0x2eac3cu;
    SET_GPR_U64(ctx, 19, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x2eac40: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x2EAC40u;
    {
        const bool branch_taken_0x2eac40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAC40u;
        // 0x2eac44: 0x26770001  addiu       $s7, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eac40) {
            ctx->pc = 0x2EAFB0u;
            goto label_2eafb0;
        }
    }
    ctx->pc = 0x2EAC48u;
label_2eac48:
    // 0x2eac48: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x2eac48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_2eac4c:
    // 0x2eac4c: 0x26770002  addiu       $s7, $s3, 0x2
    ctx->pc = 0x2eac4cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x2eac50: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x2eac50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2eac54: 0x100000d6  b           . + 4 + (0xD6 << 2)
    ctx->pc = 0x2EAC54u;
    {
        const bool branch_taken_0x2eac54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAC54u;
        // 0x2eac58: 0x24750001  addiu       $s5, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eac54) {
            ctx->pc = 0x2EAFB0u;
            goto label_2eafb0;
        }
    }
    ctx->pc = 0x2EAC5Cu;
label_2eac5c:
    // 0x2eac5c: 0x10800095  beqz        $a0, . + 4 + (0x95 << 2)
    ctx->pc = 0x2EAC5Cu;
    {
        const bool branch_taken_0x2eac5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAC5Cu;
        // 0x2eac60: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eac5c) {
            ctx->pc = 0x2EAEB4u;
            goto label_2eaeb4;
        }
    }
    ctx->pc = 0x2EAC64u;
    // 0x2eac64: 0x1a200005  blez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EAC64u;
    {
        const bool branch_taken_0x2eac64 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x2EAC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAC64u;
        // 0x2eac68: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eac64) {
            ctx->pc = 0x2EAC7Cu;
            goto label_2eac7c;
        }
    }
    ctx->pc = 0x2EAC6Cu;
    // 0x2eac6c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2eac6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eac70: 0xc0bb1a2  jal         func_2EC688
    ctx->pc = 0x2EAC70u;
    SET_GPR_U32(ctx, 31, 0x2EAC78u);
    ctx->pc = 0x2EAC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAC70u;
    // 0x2eac74: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC688u, 0x2EAC70u, 0x2EAC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAC78u;
label_2eac78:
    // 0x2eac78: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x2eac78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_2eac7c:
    // 0x2eac7c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2eac7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2eac80: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2eac80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2eac84: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2EAC84u;
    {
        const bool branch_taken_0x2eac84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAC84u;
        // 0x2eac88: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eac84) {
            ctx->pc = 0x2EACD0u;
            goto label_2eacd0;
        }
    }
    ctx->pc = 0x2EAC8Cu;
    // 0x2eac8c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2eac8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2eac90: 0xc0bafa8  jal         func_2EBEA0
    ctx->pc = 0x2EAC90u;
    SET_GPR_U32(ctx, 31, 0x2EAC98u);
    ctx->pc = 0x2EAC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAC90u;
    // 0x2eac94: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBEA0u, 0x2EAC90u, 0x2EAC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAC98u;
label_2eac98:
    // 0x2eac98: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x2eac98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2eac9c: 0x8c860010  lw          $a2, 0x10($a0)
    ctx->pc = 0x2eac9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2eaca0: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x2eaca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x2eaca4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x2eaca4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2eaca8: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x2eaca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x2eacac: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x2eacacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2eacb0: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x2eacb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2eacb4: 0xc0b9516  jal         func_2E5458
    ctx->pc = 0x2EACB4u;
    SET_GPR_U32(ctx, 31, 0x2EACBCu);
    ctx->pc = 0x2EACB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EACB4u;
    // 0x2eacb8: 0x2445000c  addiu       $a1, $v0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5458u, 0x2EACB4u, 0x2EACBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EACBCu;
label_2eacbc:
    // 0x2eacbc: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x2eacbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2eacc0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2eacc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eacc4: 0xc0bb1a2  jal         func_2EC688
    ctx->pc = 0x2EACC4u;
    SET_GPR_U32(ctx, 31, 0x2EACCCu);
    ctx->pc = 0x2EACC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EACC4u;
    // 0x2eacc8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC688u, 0x2EACC4u, 0x2EACCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EACCCu;
label_2eaccc:
    // 0x2eaccc: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x2eacccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_2eacd0:
    // 0x2eacd0: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2eacd0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eacd4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2EACD4u;
    {
        const bool branch_taken_0x2eacd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EACD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EACD4u;
        // 0x2eacd8: 0x26770001  addiu       $s7, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eacd4) {
            ctx->pc = 0x2EAD58u;
            goto label_2ead58;
        }
    }
    ctx->pc = 0x2EACDCu;
    // 0x2eacdc: 0x0  nop
    ctx->pc = 0x2eacdcu;
    // NOP
label_2eace0:
    // 0x2eace0: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2eace0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2eace4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2eace4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eace8: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2eace8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2eacec: 0xc0bafde  jal         func_2EBF78
    ctx->pc = 0x2EACECu;
    SET_GPR_U32(ctx, 31, 0x2EACF4u);
    ctx->pc = 0x2EACF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EACECu;
    // 0x2eacf0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBF78u, 0x2EACECu, 0x2EACF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EACF4u;
label_2eacf4:
    // 0x2eacf4: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x2eacf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2eacf8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2eacf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2eacfc: 0x14640009  bne         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EACFCu;
    {
        const bool branch_taken_0x2eacfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2EAD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EACFCu;
        // 0x2ead00: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eacfc) {
            ctx->pc = 0x2EAD24u;
            goto label_2ead24;
        }
    }
    ctx->pc = 0x2EAD04u;
    // 0x2ead04: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2ead04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ead08: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2ead08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2ead0c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2ead0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ead10: 0xc0bafde  jal         func_2EBF78
    ctx->pc = 0x2EAD10u;
    SET_GPR_U32(ctx, 31, 0x2EAD18u);
    ctx->pc = 0x2EAD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAD10u;
    // 0x2ead14: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBF78u, 0x2EAD10u, 0x2EAD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAD18u;
label_2ead18:
    // 0x2ead18: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x2ead18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x2ead1c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2EAD1Cu;
    {
        const bool branch_taken_0x2ead1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAD1Cu;
        // 0x2ead20: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ead1c) {
            ctx->pc = 0x2EAD54u;
            goto label_2ead54;
        }
    }
    ctx->pc = 0x2EAD24u;
label_2ead24:
    // 0x2ead24: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x2ead24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2ead28: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2ead28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ead2c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2ead2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2ead30: 0xc0bafde  jal         func_2EBF78
    ctx->pc = 0x2EAD30u;
    SET_GPR_U32(ctx, 31, 0x2EAD38u);
    ctx->pc = 0x2EAD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAD30u;
    // 0x2ead34: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBF78u, 0x2EAD30u, 0x2EAD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAD38u;
label_2ead38:
    // 0x2ead38: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x2ead38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ead3c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2ead3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ead40: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x2ead40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x2ead44: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2ead44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2ead48: 0xc0bafde  jal         func_2EBF78
    ctx->pc = 0x2EAD48u;
    SET_GPR_U32(ctx, 31, 0x2EAD50u);
    ctx->pc = 0x2EAD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAD48u;
    // 0x2ead4c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBF78u, 0x2EAD48u, 0x2EAD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAD50u;
label_2ead50:
    // 0x2ead50: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x2ead50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_2ead54:
    // 0x2ead54: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2ead54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2ead58:
    // 0x2ead58: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2ead58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ead5c: 0xc0ba71a  jal         func_2E9C68
    ctx->pc = 0x2EAD5Cu;
    SET_GPR_U32(ctx, 31, 0x2EAD64u);
    ctx->pc = 0x2EAD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAD5Cu;
    // 0x2ead60: 0x8fa50054  lw          $a1, 0x54($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9C68u, 0x2EAD5Cu, 0x2EAD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAD64u;
label_2ead64:
    // 0x2ead64: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2ead64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ead68: 0x24530030  addiu       $s3, $v0, 0x30
    ctx->pc = 0x2ead68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2ead6c: 0xc0bb200  jal         func_2EC800
    ctx->pc = 0x2EAD6Cu;
    SET_GPR_U32(ctx, 31, 0x2EAD74u);
    ctx->pc = 0x2EAD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAD6Cu;
    // 0x2ead70: 0x8fa5004c  lw          $a1, 0x4C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC800u, 0x2EAD6Cu, 0x2EAD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAD74u;
label_2ead74:
    // 0x2ead74: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x2ead74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x2ead78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ead78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ead7c: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x2ead7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ead80: 0xc0bb21a  jal         func_2EC868
    ctx->pc = 0x2EAD80u;
    SET_GPR_U32(ctx, 31, 0x2EAD88u);
    ctx->pc = 0x2EAD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAD80u;
    // 0x2ead84: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC868u, 0x2EAD80u, 0x2EAD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAD88u;
label_2ead88:
    // 0x2ead88: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2ead88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ead8c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x2ead8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2ead90: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EAD90u;
    {
        const bool branch_taken_0x2ead90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EAD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAD90u;
        // 0x2ead94: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ead90) {
            ctx->pc = 0x2EADA8u;
            goto label_2eada8;
        }
    }
    ctx->pc = 0x2EAD98u;
    // 0x2ead98: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2ead98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ead9c: 0xc0bb200  jal         func_2EC800
    ctx->pc = 0x2EAD9Cu;
    SET_GPR_U32(ctx, 31, 0x2EADA4u);
    ctx->pc = 0x2EADA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAD9Cu;
    // 0x2eada0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC800u, 0x2EAD9Cu, 0x2EADA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EADA4u;
label_2eada4:
    // 0x2eada4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2eada4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2eada8:
    // 0x2eada8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2eada8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eadac: 0xc0bafd2  jal         func_2EBF48
    ctx->pc = 0x2EADACu;
    SET_GPR_U32(ctx, 31, 0x2EADB4u);
    ctx->pc = 0x2EADB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EADACu;
    // 0x2eadb0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBF48u, 0x2EADACu, 0x2EADB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EADB4u;
label_2eadb4:
    // 0x2eadb4: 0x1620000d  bnez        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x2EADB4u;
    {
        const bool branch_taken_0x2eadb4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EADB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EADB4u;
        // 0x2eadb8: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eadb4) {
            ctx->pc = 0x2EADECu;
            goto label_2eadec;
        }
    }
    ctx->pc = 0x2EADBCu;
    // 0x2eadbc: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2EADBCu;
    {
        const bool branch_taken_0x2eadbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eadbc) {
            ctx->pc = 0x2EADECu;
            goto label_2eadec;
        }
    }
    ctx->pc = 0x2EADC4u;
    // 0x2eadc4: 0x16103c  dsll32      $v0, $s6, 0
    ctx->pc = 0x2eadc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 0));
    // 0x2eadc8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2eadc8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2eadcc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2eadccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2eadd0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EADD0u;
    {
        const bool branch_taken_0x2eadd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EADD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EADD0u;
        // 0x2eadd4: 0x24020039  addiu       $v0, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eadd0) {
            ctx->pc = 0x2EADECu;
            goto label_2eadec;
        }
    }
    ctx->pc = 0x2EADD8u;
    // 0x2eadd8: 0x1262002a  beq         $s3, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2EADD8u;
    {
        const bool branch_taken_0x2eadd8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EADDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EADD8u;
        // 0x2eaddc: 0x10102a  slt         $v0, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eadd8) {
            ctx->pc = 0x2EAE84u;
            goto label_2eae84;
        }
    }
    ctx->pc = 0x2EADE0u;
    // 0x2eade0: 0x539821  addu        $s3, $v0, $s3
    ctx->pc = 0x2eade0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2eade4: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x2EADE4u;
    {
        const bool branch_taken_0x2eade4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EADE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EADE4u;
        // 0x2eade8: 0xa2b30000  sb          $s3, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eade4) {
            ctx->pc = 0x2EAFACu;
            goto label_2eafac;
        }
    }
    ctx->pc = 0x2EADECu;
label_2eadec:
    // 0x2eadec: 0x600000a  bltz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2EADECu;
    {
        const bool branch_taken_0x2eadec = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x2eadec) {
            ctx->pc = 0x2EAE18u;
            goto label_2eae18;
        }
    }
    ctx->pc = 0x2EADF4u;
    // 0x2eadf4: 0x1600001f  bnez        $s0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2EADF4u;
    {
        const bool branch_taken_0x2eadf4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EADF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EADF4u;
        // 0x2eadf8: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eadf4) {
            ctx->pc = 0x2EAE74u;
            goto label_2eae74;
        }
    }
    ctx->pc = 0x2EADFCu;
    // 0x2eadfc: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2EADFCu;
    {
        const bool branch_taken_0x2eadfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eadfc) {
            ctx->pc = 0x2EAE74u;
            goto label_2eae74;
        }
    }
    ctx->pc = 0x2EAE04u;
    // 0x2eae04: 0x16103c  dsll32      $v0, $s6, 0
    ctx->pc = 0x2eae04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 0));
    // 0x2eae08: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2eae08u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2eae0c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2eae0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2eae10: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2EAE10u;
    {
        const bool branch_taken_0x2eae10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eae10) {
            ctx->pc = 0x2EAE74u;
            goto label_2eae74;
        }
    }
    ctx->pc = 0x2EAE18u;
label_2eae18:
    // 0x2eae18: 0x1a200014  blez        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2EAE18u;
    {
        const bool branch_taken_0x2eae18 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x2EAE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAE18u;
        // 0x2eae1c: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eae18) {
            ctx->pc = 0x2EAE6Cu;
            goto label_2eae6c;
        }
    }
    ctx->pc = 0x2EAE20u;
    // 0x2eae20: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2eae20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eae24: 0xc0bb1a2  jal         func_2EC688
    ctx->pc = 0x2EAE24u;
    SET_GPR_U32(ctx, 31, 0x2EAE2Cu);
    ctx->pc = 0x2EAE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAE24u;
    // 0x2eae28: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC688u, 0x2EAE24u, 0x2EAE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAE2Cu;
label_2eae2c:
    // 0x2eae2c: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x2eae2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x2eae30: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x2eae30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x2eae34: 0xc0bb200  jal         func_2EC800
    ctx->pc = 0x2EAE34u;
    SET_GPR_U32(ctx, 31, 0x2EAE3Cu);
    ctx->pc = 0x2EAE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAE34u;
    // 0x2eae38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC800u, 0x2EAE34u, 0x2EAE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAE3Cu;
label_2eae3c:
    // 0x2eae3c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2eae3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eae40: 0x5e200007  bgtzl       $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EAE40u;
    {
        const bool branch_taken_0x2eae40 = (GPR_S32(ctx, 17) > 0);
        if (branch_taken_0x2eae40) {
            ctx->pc = 0x2EAE44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EAE40u;
            // 0x2eae44: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EAE60u;
            goto label_2eae60;
        }
    }
    ctx->pc = 0x2EAE48u;
    // 0x2eae48: 0x56200058  bnel        $s1, $zero, . + 4 + (0x58 << 2)
    ctx->pc = 0x2EAE48u;
    {
        const bool branch_taken_0x2eae48 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eae48) {
            ctx->pc = 0x2EAE4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EAE48u;
            // 0x2eae4c: 0xa2b30000  sb          $s3, 0x0($s5) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EAFACu;
            goto label_2eafac;
        }
    }
    ctx->pc = 0x2EAE50u;
    // 0x2eae50: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x2eae50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x2eae54: 0x50400055  beql        $v0, $zero, . + 4 + (0x55 << 2)
    ctx->pc = 0x2EAE54u;
    {
        const bool branch_taken_0x2eae54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eae54) {
            ctx->pc = 0x2EAE58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EAE54u;
            // 0x2eae58: 0xa2b30000  sb          $s3, 0x0($s5) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EAFACu;
            goto label_2eafac;
        }
    }
    ctx->pc = 0x2EAE5Cu;
    // 0x2eae5c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2eae5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2eae60:
    // 0x2eae60: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x2eae60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x2eae64: 0x12620008  beq         $s3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EAE64u;
    {
        const bool branch_taken_0x2eae64 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EAE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAE64u;
        // 0x2eae68: 0x24020039  addiu       $v0, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eae64) {
            ctx->pc = 0x2EAE88u;
            goto label_2eae88;
        }
    }
    ctx->pc = 0x2EAE6Cu;
label_2eae6c:
    // 0x2eae6c: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x2EAE6Cu;
    {
        const bool branch_taken_0x2eae6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAE6Cu;
        // 0x2eae70: 0xa2b30000  sb          $s3, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eae6c) {
            ctx->pc = 0x2EAFACu;
            goto label_2eafac;
        }
    }
    ctx->pc = 0x2EAE74u;
label_2eae74:
    // 0x2eae74: 0x1a200009  blez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EAE74u;
    {
        const bool branch_taken_0x2eae74 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x2EAE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAE74u;
        // 0x2eae78: 0x24020039  addiu       $v0, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eae74) {
            ctx->pc = 0x2EAE9Cu;
            goto label_2eae9c;
        }
    }
    ctx->pc = 0x2EAE7Cu;
    // 0x2eae7c: 0x16620005  bne         $s3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EAE7Cu;
    {
        const bool branch_taken_0x2eae7c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EAE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAE7Cu;
        // 0x2eae80: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eae7c) {
            ctx->pc = 0x2EAE94u;
            goto label_2eae94;
        }
    }
    ctx->pc = 0x2EAE84u;
label_2eae84:
    // 0x2eae84: 0x24020039  addiu       $v0, $zero, 0x39
    ctx->pc = 0x2eae84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_2eae88:
    // 0x2eae88: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x2eae88u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2eae8c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2EAE8Cu;
    {
        const bool branch_taken_0x2eae8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAE8Cu;
        // 0x2eae90: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eae8c) {
            ctx->pc = 0x2EAF40u;
            goto label_2eaf40;
        }
    }
    ctx->pc = 0x2EAE94u;
label_2eae94:
    // 0x2eae94: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x2EAE94u;
    {
        const bool branch_taken_0x2eae94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAE94u;
        // 0x2eae98: 0xa2a20000  sb          $v0, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eae94) {
            ctx->pc = 0x2EAFACu;
            goto label_2eafac;
        }
    }
    ctx->pc = 0x2EAE9Cu;
label_2eae9c:
    // 0x2eae9c: 0xa2b30000  sb          $s3, 0x0($s5)
    ctx->pc = 0x2eae9cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
    // 0x2eaea0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2eaea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2eaea4: 0x1684ff8e  bne         $s4, $a0, . + 4 + (-0x72 << 2)
    ctx->pc = 0x2EAEA4u;
    {
        const bool branch_taken_0x2eaea4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 4));
        ctx->pc = 0x2EAEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAEA4u;
        // 0x2eaea8: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaea4) {
            ctx->pc = 0x2EACE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eace0;
        }
    }
    ctx->pc = 0x2EAEACu;
    // 0x2eaeac: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2EAEACu;
    {
        const bool branch_taken_0x2eaeac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAEACu;
        // 0x2eaeb0: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaeac) {
            ctx->pc = 0x2EAF04u;
            goto label_2eaf04;
        }
    }
    ctx->pc = 0x2EAEB4u;
label_2eaeb4:
    // 0x2eaeb4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2EAEB4u;
    {
        const bool branch_taken_0x2eaeb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAEB4u;
        // 0x2eaeb8: 0x26770001  addiu       $s7, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaeb4) {
            ctx->pc = 0x2EAEDCu;
            goto label_2eaedc;
        }
    }
    ctx->pc = 0x2EAEBCu;
    // 0x2eaebc: 0x0  nop
    ctx->pc = 0x2eaebcu;
    // NOP
label_2eaec0:
    // 0x2eaec0: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2eaec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2eaec4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2eaec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaec8: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2eaec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2eaecc: 0xc0bafde  jal         func_2EBF78
    ctx->pc = 0x2EAECCu;
    SET_GPR_U32(ctx, 31, 0x2EAED4u);
    ctx->pc = 0x2EAED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAECCu;
    // 0x2eaed0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBF78u, 0x2EAECCu, 0x2EAED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAED4u;
label_2eaed4:
    // 0x2eaed4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2eaed4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2eaed8: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x2eaed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_2eaedc:
    // 0x2eaedc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2eaedcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2eaee0: 0xc0ba71a  jal         func_2E9C68
    ctx->pc = 0x2EAEE0u;
    SET_GPR_U32(ctx, 31, 0x2EAEE8u);
    ctx->pc = 0x2EAEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAEE0u;
    // 0x2eaee4: 0x8fa50054  lw          $a1, 0x54($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9C68u, 0x2EAEE0u, 0x2EAEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAEE8u;
label_2eaee8:
    // 0x2eaee8: 0x24530030  addiu       $s3, $v0, 0x30
    ctx->pc = 0x2eaee8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2eaeec: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2eaeecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2eaef0: 0xa2b30000  sb          $s3, 0x0($s5)
    ctx->pc = 0x2eaef0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
    // 0x2eaef4: 0x283102a  slt         $v0, $s4, $v1
    ctx->pc = 0x2eaef4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2eaef8: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x2EAEF8u;
    {
        const bool branch_taken_0x2eaef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EAEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAEF8u;
        // 0x2eaefc: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaef8) {
            ctx->pc = 0x2EAEC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eaec0;
        }
    }
    ctx->pc = 0x2EAF00u;
    // 0x2eaf00: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2eaf00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2eaf04:
    // 0x2eaf04: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2eaf04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaf08: 0xc0bb1a2  jal         func_2EC688
    ctx->pc = 0x2EAF08u;
    SET_GPR_U32(ctx, 31, 0x2EAF10u);
    ctx->pc = 0x2EAF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAF08u;
    // 0x2eaf0c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC688u, 0x2EAF08u, 0x2EAF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAF10u;
label_2eaf10:
    // 0x2eaf10: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x2eaf10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x2eaf14: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x2eaf14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x2eaf18: 0xc0bb200  jal         func_2EC800
    ctx->pc = 0x2EAF18u;
    SET_GPR_U32(ctx, 31, 0x2EAF20u);
    ctx->pc = 0x2EAF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAF18u;
    // 0x2eaf1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC800u, 0x2EAF18u, 0x2EAF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAF20u;
label_2eaf20:
    // 0x2eaf20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2eaf20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaf24: 0x5e000007  bgtzl       $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EAF24u;
    {
        const bool branch_taken_0x2eaf24 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x2eaf24) {
            ctx->pc = 0x2EAF28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EAF24u;
            // 0x2eaf28: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EAF44u;
            goto label_2eaf44;
        }
    }
    ctx->pc = 0x2EAF2Cu;
    // 0x2eaf2c: 0x16000018  bnez        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2EAF2Cu;
    {
        const bool branch_taken_0x2eaf2c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EAF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAF2Cu;
        // 0x2eaf30: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaf2c) {
            ctx->pc = 0x2EAF90u;
            goto label_2eaf90;
        }
    }
    ctx->pc = 0x2EAF34u;
    // 0x2eaf34: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x2eaf34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x2eaf38: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x2EAF38u;
    {
        const bool branch_taken_0x2eaf38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eaf38) {
            ctx->pc = 0x2EAF3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EAF38u;
            // 0x2eaf3c: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EAF94u;
            goto label_2eaf94;
        }
    }
    ctx->pc = 0x2EAF40u;
label_2eaf40:
    // 0x2eaf40: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x2eaf40u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_2eaf44:
    // 0x2eaf44: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2EAF44u;
    {
        const bool branch_taken_0x2eaf44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAF44u;
        // 0x2eaf48: 0x24030039  addiu       $v1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaf44) {
            ctx->pc = 0x2EAF5Cu;
            goto label_2eaf5c;
        }
    }
    ctx->pc = 0x2EAF4Cu;
    // 0x2eaf4c: 0x0  nop
    ctx->pc = 0x2eaf4cu;
    // NOP
label_2eaf50:
    // 0x2eaf50: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2eaf50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2eaf54: 0x12a40007  beq         $s5, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EAF54u;
    {
        const bool branch_taken_0x2eaf54 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 4));
        ctx->pc = 0x2EAF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAF54u;
        // 0x2eaf58: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaf54) {
            ctx->pc = 0x2EAF74u;
            goto label_2eaf74;
        }
    }
    ctx->pc = 0x2EAF5Cu;
label_2eaf5c:
    // 0x2eaf5c: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x2eaf5cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2eaf60: 0x1043fffb  beq         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2EAF60u;
    {
        const bool branch_taken_0x2eaf60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EAF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAF60u;
        // 0x2eaf64: 0x92a40000  lbu         $a0, 0x0($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaf60) {
            ctx->pc = 0x2EAF50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eaf50;
        }
    }
    ctx->pc = 0x2EAF68u;
    // 0x2eaf68: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x2eaf68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2eaf6c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2EAF6Cu;
    {
        const bool branch_taken_0x2eaf6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAF6Cu;
        // 0x2eaf70: 0xa2a20000  sb          $v0, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaf6c) {
            ctx->pc = 0x2EAFACu;
            goto label_2eafac;
        }
    }
    ctx->pc = 0x2EAF74u;
label_2eaf74:
    // 0x2eaf74: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2eaf74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2eaf78: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x2eaf78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x2eaf7c: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x2eaf7cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x2eaf80: 0x24750001  addiu       $s5, $v1, 0x1
    ctx->pc = 0x2eaf80u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2eaf84: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2EAF84u;
    {
        const bool branch_taken_0x2eaf84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAF84u;
        // 0x2eaf88: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaf84) {
            ctx->pc = 0x2EAFB0u;
            goto label_2eafb0;
        }
    }
    ctx->pc = 0x2EAF8Cu;
    // 0x2eaf8c: 0x0  nop
    ctx->pc = 0x2eaf8cu;
    // NOP
label_2eaf90:
    // 0x2eaf90: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x2eaf90u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_2eaf94:
    // 0x2eaf94: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x2eaf94u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2eaf98: 0x0  nop
    ctx->pc = 0x2eaf98u;
    // NOP
    // 0x2eaf9c: 0x0  nop
    ctx->pc = 0x2eaf9cu;
    // NOP
    // 0x2eafa0: 0x0  nop
    ctx->pc = 0x2eafa0u;
    // NOP
    // 0x2eafa4: 0x1043fffa  beq         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2EAFA4u;
    {
        const bool branch_taken_0x2eafa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eafa4) {
            ctx->pc = 0x2EAF90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eaf90;
        }
    }
    ctx->pc = 0x2EAFACu;
label_2eafac:
    // 0x2eafac: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2eafacu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_2eafb0:
    // 0x2eafb0: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x2eafb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x2eafb4: 0xc0bafd2  jal         func_2EBF48
    ctx->pc = 0x2EAFB4u;
    SET_GPR_U32(ctx, 31, 0x2EAFBCu);
    ctx->pc = 0x2EAFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAFB4u;
    // 0x2eafb8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBF48u, 0x2EAFB4u, 0x2EAFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAFBCu;
label_2eafbc:
    // 0x2eafbc: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2eafbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2eafc0: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x2EAFC0u;
    {
        const bool branch_taken_0x2eafc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAFC0u;
        // 0x2eafc4: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eafc0) {
            ctx->pc = 0x2EAFF4u;
            goto label_2eaff4;
        }
    }
    ctx->pc = 0x2EAFC8u;
    // 0x2eafc8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EAFC8u;
    {
        const bool branch_taken_0x2eafc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAFC8u;
        // 0x2eafcc: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eafc8) {
            ctx->pc = 0x2EAFE4u;
            goto label_2eafe4;
        }
    }
    ctx->pc = 0x2EAFD0u;
    // 0x2eafd0: 0x10440003  beq         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EAFD0u;
    {
        const bool branch_taken_0x2eafd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x2EAFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAFD0u;
        // 0x2eafd4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eafd0) {
            ctx->pc = 0x2EAFE0u;
            goto label_2eafe0;
        }
    }
    ctx->pc = 0x2EAFD8u;
    // 0x2eafd8: 0xc0bafd2  jal         func_2EBF48
    ctx->pc = 0x2EAFD8u;
    SET_GPR_U32(ctx, 31, 0x2EAFE0u);
    ctx->pc = 0x2EAFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAFD8u;
    // 0x2eafdc: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBF48u, 0x2EAFD8u, 0x2EAFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAFE0u;
label_2eafe0:
    // 0x2eafe0: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x2eafe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2eafe4:
    // 0x2eafe4: 0xc0bafd2  jal         func_2EBF48
    ctx->pc = 0x2EAFE4u;
    SET_GPR_U32(ctx, 31, 0x2EAFECu);
    ctx->pc = 0x2EAFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAFE4u;
    // 0x2eafe8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBF48u, 0x2EAFE4u, 0x2EAFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAFECu;
label_2eafec:
    // 0x2eafec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2EAFECu;
    {
        const bool branch_taken_0x2eafec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAFECu;
        // 0x2eaff0: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eafec) {
            ctx->pc = 0x2EAFF8u;
            goto label_2eaff8;
        }
    }
    ctx->pc = 0x2EAFF4u;
label_2eaff4:
    // 0x2eaff4: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2eaff4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2eaff8:
    // 0x2eaff8: 0xc0bafd2  jal         func_2EBF48
    ctx->pc = 0x2EAFF8u;
    SET_GPR_U32(ctx, 31, 0x2EB000u);
    ctx->pc = 0x2EAFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAFF8u;
    // 0x2eaffc: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBF48u, 0x2EAFF8u, 0x2EB000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB000u;
label_2eb000:
    // 0x2eb000: 0xa2a00000  sb          $zero, 0x0($s5)
    ctx->pc = 0x2eb000u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2eb004: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2eb004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2eb008: 0xac770000  sw          $s7, 0x0($v1)
    ctx->pc = 0x2eb008u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 23));
    // 0x2eb00c: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x2eb00cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2eb010: 0x54800001  bnel        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2EB010u;
    {
        const bool branch_taken_0x2eb010 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb010) {
            ctx->pc = 0x2EB014u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB010u;
            // 0x2eb014: 0xac950000  sw          $s5, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB018u;
            goto label_2eb018;
        }
    }
    ctx->pc = 0x2EB018u;
label_2eb018:
    // 0x2eb018: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2eb018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2eb01c:
    // 0x2eb01c: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x2eb01cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2eb020: 0xdfbe00e0  ld          $fp, 0xE0($sp)
    ctx->pc = 0x2eb020u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2eb024: 0xdfb700d0  ld          $s7, 0xD0($sp)
    ctx->pc = 0x2eb024u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2eb028: 0xdfb600c0  ld          $s6, 0xC0($sp)
    ctx->pc = 0x2eb028u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2eb02c: 0xdfb500b0  ld          $s5, 0xB0($sp)
    ctx->pc = 0x2eb02cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2eb030: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x2eb030u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2eb034: 0xdfb30090  ld          $s3, 0x90($sp)
    ctx->pc = 0x2eb034u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2eb038: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x2eb038u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2eb03c: 0xdfb10070  ld          $s1, 0x70($sp)
    ctx->pc = 0x2eb03cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2eb040: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x2eb040u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2eb044: 0x3e00008  jr          $ra
    ctx->pc = 0x2EB044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EB048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB044u;
        // 0x2eb048: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EB044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EB04Cu;
}
