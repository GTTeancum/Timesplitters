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

// Function: particleNewGlass
// Address: 0x299970 - 0x29ae84
void particleNewGlass_0x299970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("particleNewGlass_0x299970");
#endif

    switch (ctx->pc) {
        case 0x299a04u: goto label_299a04;
        case 0x299b7cu: goto label_299b7c;
        case 0x299c38u: goto label_299c38;
        case 0x299cd4u: goto label_299cd4;
        case 0x299d68u: goto label_299d68;
        case 0x299e04u: goto label_299e04;
        case 0x299f08u: goto label_299f08;
        case 0x299f90u: goto label_299f90;
        case 0x299ff8u: goto label_299ff8;
        case 0x29a02cu: goto label_29a02c;
        case 0x29a040u: goto label_29a040;
        case 0x29a04cu: goto label_29a04c;
        case 0x29a054u: goto label_29a054;
        case 0x29a068u: goto label_29a068;
        case 0x29a07cu: goto label_29a07c;
        case 0x29a088u: goto label_29a088;
        case 0x29a090u: goto label_29a090;
        case 0x29a110u: goto label_29a110;
        case 0x29a154u: goto label_29a154;
        case 0x29a198u: goto label_29a198;
        case 0x29a1dcu: goto label_29a1dc;
        case 0x29a21cu: goto label_29a21c;
        case 0x29a264u: goto label_29a264;
        case 0x29a324u: goto label_29a324;
        case 0x29a478u: goto label_29a478;
        case 0x29a550u: goto label_29a550;
        case 0x29a628u: goto label_29a628;
        case 0x29a700u: goto label_29a700;
        case 0x29a7bcu: goto label_29a7bc;
        case 0x29a8b0u: goto label_29a8b0;
        case 0x29ae20u: goto label_29ae20;
        default: break;
    }

    ctx->pc = 0x299970u;

    // 0x299970: 0x27bdfcc0  addiu       $sp, $sp, -0x340
    ctx->pc = 0x299970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966464));
    // 0x299974: 0xffb00240  sd          $s0, 0x240($sp)
    ctx->pc = 0x299974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 16));
    // 0x299978: 0xffb602a0  sd          $s6, 0x2A0($sp)
    ctx->pc = 0x299978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 672), GPR_U64(ctx, 22));
    // 0x29997c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29997cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299980: 0xffb40280  sd          $s4, 0x280($sp)
    ctx->pc = 0x299980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 20));
    // 0x299984: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x299984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x299988: 0xffb30270  sd          $s3, 0x270($sp)
    ctx->pc = 0x299988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 19));
    // 0x29998c: 0xffb20260  sd          $s2, 0x260($sp)
    ctx->pc = 0x29998cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 18));
    // 0x299990: 0xffb10250  sd          $s1, 0x250($sp)
    ctx->pc = 0x299990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 592), GPR_U64(ctx, 17));
    // 0x299994: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x299994u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299998: 0xe7be0330  swc1        $f30, 0x330($sp)
    ctx->pc = 0x299998u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 816), bits); }
    // 0x29999c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x29999cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2999a0: 0xffbe02c0  sd          $fp, 0x2C0($sp)
    ctx->pc = 0x2999a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 704), GPR_U64(ctx, 30));
    // 0x2999a4: 0x46006786  mov.s       $f30, $f12
    ctx->pc = 0x2999a4u;
    ctx->f[30] = FPU_MOV_S(ctx->f[12]);
    // 0x2999a8: 0xffbf02d0  sd          $ra, 0x2D0($sp)
    ctx->pc = 0x2999a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 720), GPR_U64(ctx, 31));
    // 0x2999ac: 0xffb702b0  sd          $s7, 0x2B0($sp)
    ctx->pc = 0x2999acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 688), GPR_U64(ctx, 23));
    // 0x2999b0: 0xffb50290  sd          $s5, 0x290($sp)
    ctx->pc = 0x2999b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 656), GPR_U64(ctx, 21));
    // 0x2999b4: 0xe7bf0338  swc1        $f31, 0x338($sp)
    ctx->pc = 0x2999b4u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 824), bits); }
    // 0x2999b8: 0xe7bd0328  swc1        $f29, 0x328($sp)
    ctx->pc = 0x2999b8u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 808), bits); }
    // 0x2999bc: 0xe7bc0320  swc1        $f28, 0x320($sp)
    ctx->pc = 0x2999bcu;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 800), bits); }
    // 0x2999c0: 0xe7bb0318  swc1        $f27, 0x318($sp)
    ctx->pc = 0x2999c0u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 792), bits); }
    // 0x2999c4: 0xe7ba0310  swc1        $f26, 0x310($sp)
    ctx->pc = 0x2999c4u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 784), bits); }
    // 0x2999c8: 0xe7b90308  swc1        $f25, 0x308($sp)
    ctx->pc = 0x2999c8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 776), bits); }
    // 0x2999cc: 0xe7b80300  swc1        $f24, 0x300($sp)
    ctx->pc = 0x2999ccu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 768), bits); }
    // 0x2999d0: 0xe7b702f8  swc1        $f23, 0x2F8($sp)
    ctx->pc = 0x2999d0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 760), bits); }
    // 0x2999d4: 0xe7b602f0  swc1        $f22, 0x2F0($sp)
    ctx->pc = 0x2999d4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 752), bits); }
    // 0x2999d8: 0xe7b502e8  swc1        $f21, 0x2E8($sp)
    ctx->pc = 0x2999d8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 744), bits); }
    // 0x2999dc: 0xe7b402e0  swc1        $f20, 0x2E0($sp)
    ctx->pc = 0x2999dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 736), bits); }
    // 0x2999e0: 0xafa501e0  sw          $a1, 0x1E0($sp)
    ctx->pc = 0x2999e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 5));
    // 0x2999e4: 0xafa801e4  sw          $t0, 0x1E4($sp)
    ctx->pc = 0x2999e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 8));
    // 0x2999e8: 0xafa901e8  sw          $t1, 0x1E8($sp)
    ctx->pc = 0x2999e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 9));
    // 0x2999ec: 0xafaa01ec  sw          $t2, 0x1EC($sp)
    ctx->pc = 0x2999ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 10));
    // 0x2999f0: 0xafab01f0  sw          $t3, 0x1F0($sp)
    ctx->pc = 0x2999f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 11));
    // 0x2999f4: 0x8fb60340  lw          $s6, 0x340($sp)
    ctx->pc = 0x2999f4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x2999f8: 0x8fb30348  lw          $s3, 0x348($sp)
    ctx->pc = 0x2999f8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 840)));
    // 0x2999fc: 0xc0a5b24  jal         func_296C90
    ctx->pc = 0x2999FCu;
    SET_GPR_U32(ctx, 31, 0x299A04u);
    ctx->pc = 0x299A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2999FCu;
    // 0x299a00: 0x8fb40358  lw          $s4, 0x358($sp) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 856)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296C90u, 0x2999FCu, 0x299A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299A04u;
label_299a04:
    // 0x299a04: 0xafa201f4  sw          $v0, 0x1F4($sp)
    ctx->pc = 0x299a04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 2));
    // 0x299a08: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x299a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x299a0c: 0xc7808ce8  lwc1        $f0, -0x7318($gp)
    ctx->pc = 0x299a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299a10: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x299a10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x299a14: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x299a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x299a18: 0x244203a0  addiu       $v0, $v0, 0x3A0
    ctx->pc = 0x299a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 928));
    // 0x299a1c: 0xafa201f8  sw          $v0, 0x1F8($sp)
    ctx->pc = 0x299a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 2));
    // 0x299a20: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x299a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x299a24: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x299a24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x299a28: 0x244603a0  addiu       $a2, $v0, 0x3A0
    ctx->pc = 0x299a28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 928));
    // 0x299a2c: 0xafa601fc  sw          $a2, 0x1FC($sp)
    ctx->pc = 0x299a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 6));
    // 0x299a30: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x299a30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x299a34: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x299a34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x299a38: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x299a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x299a3c: 0x246703a0  addiu       $a3, $v1, 0x3A0
    ctx->pc = 0x299a3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 928));
    // 0x299a40: 0xafa70200  sw          $a3, 0x200($sp)
    ctx->pc = 0x299a40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 7));
    // 0x299a44: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x299a44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x299a48: 0x8c64003c  lw          $a0, 0x3C($v1)
    ctx->pc = 0x299a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x299a4c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x299a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x299a50: 0x249e03a0  addiu       $fp, $a0, 0x3A0
    ctx->pc = 0x299a50u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), 928));
    // 0x299a54: 0x8fa801f4  lw          $t0, 0x1F4($sp)
    ctx->pc = 0x299a54u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x299a58: 0xe5000010  swc1        $f0, 0x10($t0)
    ctx->pc = 0x299a58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 16), bits); }
    // 0x299a5c: 0xad00000c  sw          $zero, 0xC($t0)
    ctx->pc = 0x299a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 0));
    // 0x299a60: 0xad000034  sw          $zero, 0x34($t0)
    ctx->pc = 0x299a60u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 52), GPR_U32(ctx, 0));
    // 0x299a64: 0xad050004  sw          $a1, 0x4($t0)
    ctx->pc = 0x299a64u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 5));
    // 0x299a68: 0xad00002c  sw          $zero, 0x2C($t0)
    ctx->pc = 0x299a68u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 44), GPR_U32(ctx, 0));
    // 0x299a6c: 0xad000018  sw          $zero, 0x18($t0)
    ctx->pc = 0x299a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 0));
    // 0x299a70: 0xad100014  sw          $s0, 0x14($t0)
    ctx->pc = 0x299a70u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 16));
    // 0x299a74: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x299a74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x299a78: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x299a78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x299a7c: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x299a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x299a80: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x299a80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x299a84: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x299a84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x299a88: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x299a88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x299a8c: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x299a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x299a90: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x299a90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x299a94: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x299a94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x299a98: 0xac600034  sw          $zero, 0x34($v1)
    ctx->pc = 0x299a98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 0));
    // 0x299a9c: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x299a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    // 0x299aa0: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x299aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x299aa4: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x299aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x299aa8: 0xac60002c  sw          $zero, 0x2C($v1)
    ctx->pc = 0x299aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 0));
    // 0x299aac: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x299aacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x299ab0: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x299ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x299ab4: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x299ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x299ab8: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x299ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x299abc: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x299abcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x299ac0: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x299ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x299ac4: 0xafd21180  sw          $s2, 0x1180($fp)
    ctx->pc = 0x299ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4480), GPR_U32(ctx, 18));
    // 0x299ac8: 0x16260004  bne         $s1, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x299AC8u;
    {
        const bool branch_taken_0x299ac8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 6));
        ctx->pc = 0x299ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299AC8u;
        // 0x299acc: 0xafd11184  sw          $s1, 0x1184($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 4484), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299ac8) {
            ctx->pc = 0x299ADCu;
            goto label_299adc;
        }
    }
    ctx->pc = 0x299AD0u;
    // 0x299ad0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x299ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x299ad4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x299AD4u;
    {
        const bool branch_taken_0x299ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299AD4u;
        // 0x299ad8: 0xafc2118c  sw          $v0, 0x118C($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 4492), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299ad4) {
            ctx->pc = 0x299AE0u;
            goto label_299ae0;
        }
    }
    ctx->pc = 0x299ADCu;
label_299adc:
    // 0x299adc: 0xafc0118c  sw          $zero, 0x118C($fp)
    ctx->pc = 0x299adcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4492), GPR_U32(ctx, 0));
label_299ae0:
    // 0x299ae0: 0xc66b0000  lwc1        $f11, 0x0($s3)
    ctx->pc = 0x299ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x299ae4: 0xc66a0004  lwc1        $f10, 0x4($s3)
    ctx->pc = 0x299ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x299ae8: 0x460b5842  mul.s       $f1, $f11, $f11
    ctx->pc = 0x299ae8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[11]);
    // 0x299aec: 0xc6690008  lwc1        $f9, 0x8($s3)
    ctx->pc = 0x299aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x299af0: 0x460a5002  mul.s       $f0, $f10, $f10
    ctx->pc = 0x299af0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
    // 0x299af4: 0x8fa201e4  lw          $v0, 0x1E4($sp)
    ctx->pc = 0x299af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
    // 0x299af8: 0x460948c2  mul.s       $f3, $f9, $f9
    ctx->pc = 0x299af8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[9], ctx->f[9]);
    // 0x299afc: 0x8fa301e8  lw          $v1, 0x1E8($sp)
    ctx->pc = 0x299afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x299b00: 0x8fa401ec  lw          $a0, 0x1EC($sp)
    ctx->pc = 0x299b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x299b04: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x299b04u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x299b08: 0xc4460000  lwc1        $f6, 0x0($v0)
    ctx->pc = 0x299b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x299b0c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x299b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x299b10: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x299b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299b14: 0x46030b00  add.s       $f12, $f1, $f3
    ctx->pc = 0x299b14u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x299b18: 0xc4470004  lwc1        $f7, 0x4($v0)
    ctx->pc = 0x299b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x299b1c: 0x46061081  sub.s       $f2, $f2, $f6
    ctx->pc = 0x299b1cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[6]);
    // 0x299b20: 0xc4480008  lwc1        $f8, 0x8($v0)
    ctx->pc = 0x299b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x299b24: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x299b24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x299b28: 0xc4640004  lwc1        $f4, 0x4($v1)
    ctx->pc = 0x299b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x299b2c: 0x0  nop
    ctx->pc = 0x299b2cu;
    // NOP
    // 0x299b30: 0x0  nop
    ctx->pc = 0x299b30u;
    // NOP
    // 0x299b34: 0x460c0184  c1          0xC0184
    ctx->pc = 0x299b34u;
    ctx->f[6] = FPU_SQRT_S(ctx->f[12]);
    // 0x299b38: 0xc4650008  lwc1        $f5, 0x8($v1)
    ctx->pc = 0x299b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x299b3c: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x299b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x299b40: 0x46072101  sub.s       $f4, $f4, $f7
    ctx->pc = 0x299b40u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[7]);
    // 0x299b44: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x299b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299b48: 0x46082941  sub.s       $f5, $f5, $f8
    ctx->pc = 0x299b48u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[8]);
    // 0x299b4c: 0x460718c1  sub.s       $f3, $f3, $f7
    ctx->pc = 0x299b4cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[7]);
    // 0x299b50: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x299b50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x299b54: 0x46080841  sub.s       $f1, $f1, $f8
    ctx->pc = 0x299b54u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[8]);
    // 0x299b58: 0xe7a40064  swc1        $f4, 0x64($sp)
    ctx->pc = 0x299b58u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x299b5c: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x299b5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x299b60: 0x46063032  c.eq.s      $f6, $f6
    ctx->pc = 0x299b60u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[6], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x299b64: 0xe7a30074  swc1        $f3, 0x74($sp)
    ctx->pc = 0x299b64u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x299b68: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x299b68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x299b6c: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x299B6Cu;
    {
        const bool branch_taken_0x299b6c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x299B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299B6Cu;
        // 0x299b70: 0xe7a50068  swc1        $f5, 0x68($sp) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x299b6c) {
            ctx->pc = 0x299B8Cu;
            goto label_299b8c;
        }
    }
    ctx->pc = 0x299B74u;
    // 0x299b74: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x299B74u;
    SET_GPR_U32(ctx, 31, 0x299B7Cu);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x299B74u, 0x299B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299B7Cu;
label_299b7c:
    // 0x299b7c: 0xc6690008  lwc1        $f9, 0x8($s3)
    ctx->pc = 0x299b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x299b80: 0x46000186  mov.s       $f6, $f0
    ctx->pc = 0x299b80u;
    ctx->f[6] = FPU_MOV_S(ctx->f[0]);
    // 0x299b84: 0xc66b0000  lwc1        $f11, 0x0($s3)
    ctx->pc = 0x299b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x299b88: 0xc66a0004  lwc1        $f10, 0x4($s3)
    ctx->pc = 0x299b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_299b8c:
    // 0x299b8c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x299b8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x299b90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x299b90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299b94: 0x8fa601e0  lw          $a2, 0x1E0($sp)
    ctx->pc = 0x299b94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x299b98: 0x0  nop
    ctx->pc = 0x299b98u;
    // NOP
    // 0x299b9c: 0x0  nop
    ctx->pc = 0x299b9cu;
    // NOP
    // 0x299ba0: 0x46060003  div.s       $f0, $f0, $f6
    ctx->pc = 0x299ba0u;
    if (ctx->f[6] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[6];
    // 0x299ba4: 0x30c60100  andi        $a2, $a2, 0x100
    ctx->pc = 0x299ba4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)256);
    // 0x299ba8: 0xafa60204  sw          $a2, 0x204($sp)
    ctx->pc = 0x299ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 6));
    // 0x299bac: 0x46004a42  mul.s       $f9, $f9, $f0
    ctx->pc = 0x299bacu;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x299bb0: 0x460059c2  mul.s       $f7, $f11, $f0
    ctx->pc = 0x299bb0u;
    ctx->f[7] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x299bb4: 0x46005202  mul.s       $f8, $f10, $f0
    ctx->pc = 0x299bb4u;
    ctx->f[8] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x299bb8: 0xe7a90088  swc1        $f9, 0x88($sp)
    ctx->pc = 0x299bb8u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x299bbc: 0xe7a70080  swc1        $f7, 0x80($sp)
    ctx->pc = 0x299bbcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x299bc0: 0x10c0001a  beqz        $a2, . + 4 + (0x1A << 2)
    ctx->pc = 0x299BC0u;
    {
        const bool branch_taken_0x299bc0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x299BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299BC0u;
        // 0x299bc4: 0xe7a80084  swc1        $f8, 0x84($sp) (Delay Slot)
        { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x299bc0) {
            ctx->pc = 0x299C2Cu;
            goto label_299c2c;
        }
    }
    ctx->pc = 0x299BC8u;
    // 0x299bc8: 0xc6820000  lwc1        $f2, 0x0($s4)
    ctx->pc = 0x299bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x299bcc: 0xc6860004  lwc1        $f6, 0x4($s4)
    ctx->pc = 0x299bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x299bd0: 0x46023802  mul.s       $f0, $f7, $f2
    ctx->pc = 0x299bd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x299bd4: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x299bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299bd8: 0x46064102  mul.s       $f4, $f8, $f6
    ctx->pc = 0x299bd8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[8], ctx->f[6]);
    // 0x299bdc: 0x8fa701f4  lw          $a3, 0x1F4($sp)
    ctx->pc = 0x299bdcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x299be0: 0x46014942  mul.s       $f5, $f9, $f1
    ctx->pc = 0x299be0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x299be4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x299be4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x299be8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x299be8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x299bec: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x299becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x299bf0: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x299bf0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x299bf4: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x299bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x299bf8: 0x4603f782  mul.s       $f30, $f30, $f3
    ctx->pc = 0x299bf8u;
    ctx->f[30] = FPU_MUL_S(ctx->f[30], ctx->f[3]);
    // 0x299bfc: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x299bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    // 0x299c00: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x299c00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x299c04: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x299c04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x299c08: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x299c08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x299c0c: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x299c0cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x299c10: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x299c10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x299c14: 0x46014841  sub.s       $f1, $f9, $f1
    ctx->pc = 0x299c14u;
    ctx->f[1] = FPU_SUB_S(ctx->f[9], ctx->f[1]);
    // 0x299c18: 0x46023881  sub.s       $f2, $f7, $f2
    ctx->pc = 0x299c18u;
    ctx->f[2] = FPU_SUB_S(ctx->f[7], ctx->f[2]);
    // 0x299c1c: 0x46004001  sub.s       $f0, $f8, $f0
    ctx->pc = 0x299c1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[8], ctx->f[0]);
    // 0x299c20: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x299c20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x299c24: 0xe7a20080  swc1        $f2, 0x80($sp)
    ctx->pc = 0x299c24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x299c28: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x299c28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_299c2c:
    // 0x299c2c: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x299c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x299c30: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x299C30u;
    SET_GPR_U32(ctx, 31, 0x299C38u);
    ctx->pc = 0x299C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299C30u;
    // 0x299c34: 0xafc21188  sw          $v0, 0x1188($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 4488), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x299C30u, 0x299C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299C38u;
label_299c38:
    // 0x299c38: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x299C38u;
    {
        const bool branch_taken_0x299c38 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x299C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299C38u;
        // 0x299c3c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299c38) {
            ctx->pc = 0x299C4Cu;
            goto label_299c4c;
        }
    }
    ctx->pc = 0x299C40u;
    // 0x299c40: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x299c40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x299c44: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x299C44u;
    {
        const bool branch_taken_0x299c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299C44u;
        // 0x299c48: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x299c44) {
            ctx->pc = 0x299C60u;
            goto label_299c60;
        }
    }
    ctx->pc = 0x299C4Cu;
label_299c4c:
    // 0x299c4c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x299c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x299c50: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x299c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x299c54: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x299c54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x299c58: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x299c58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x299c5c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x299c5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_299c60:
    // 0x299c60: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x299c60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x299c64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x299c64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299c68: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x299c68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x299c6c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x299c6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x299c70: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x299c70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x299c74: 0xc6c40000  lwc1        $f4, 0x0($s6)
    ctx->pc = 0x299c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x299c78: 0xc7818cec  lwc1        $f1, -0x7314($gp)
    ctx->pc = 0x299c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299c7c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x299c7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x299c80: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x299c80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x299c84: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x299c84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x299c88: 0x46002040  add.s       $f1, $f4, $f0
    ctx->pc = 0x299c88u;
    ctx->f[1] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x299c8c: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x299c8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x299c90: 0x0  nop
    ctx->pc = 0x299c90u;
    // NOP
    // 0x299c94: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x299C94u;
    {
        const bool branch_taken_0x299c94 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x299C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299C94u;
        // 0x299c98: 0xe7a10090  swc1        $f1, 0x90($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x299c94) {
            ctx->pc = 0x299CB4u;
            goto label_299cb4;
        }
    }
    ctx->pc = 0x299C9Cu;
    // 0x299c9c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x299c9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x299ca0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x299ca0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299ca4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x299ca4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x299ca8: 0x0  nop
    ctx->pc = 0x299ca8u;
    // NOP
    // 0x299cac: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x299CACu;
    {
        const bool branch_taken_0x299cac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x299cac) {
            ctx->pc = 0x299CB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x299CACu;
            // 0x299cb0: 0xafa00094  sw          $zero, 0x94($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x299CC4u;
            goto label_299cc4;
        }
    }
    ctx->pc = 0x299CB4u;
label_299cb4:
    // 0x299cb4: 0xe7a40090  swc1        $f4, 0x90($sp)
    ctx->pc = 0x299cb4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x299cb8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x299cb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x299cbc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x299cbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299cc0: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x299cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
label_299cc4:
    // 0x299cc4: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x299cc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x299cc8: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x299cc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x299ccc: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x299CCCu;
    SET_GPR_U32(ctx, 31, 0x299CD4u);
    ctx->pc = 0x299CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299CCCu;
    // 0x299cd0: 0xafa000a4  sw          $zero, 0xA4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x299CCCu, 0x299CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299CD4u;
label_299cd4:
    // 0x299cd4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x299CD4u;
    {
        const bool branch_taken_0x299cd4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x299CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299CD4u;
        // 0x299cd8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299cd4) {
            ctx->pc = 0x299CE8u;
            goto label_299ce8;
        }
    }
    ctx->pc = 0x299CDCu;
    // 0x299cdc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x299cdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x299ce0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x299CE0u;
    {
        const bool branch_taken_0x299ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299CE0u;
        // 0x299ce4: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x299ce0) {
            ctx->pc = 0x299CFCu;
            goto label_299cfc;
        }
    }
    ctx->pc = 0x299CE8u;
label_299ce8:
    // 0x299ce8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x299ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x299cec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x299cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x299cf0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x299cf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x299cf4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x299cf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x299cf8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x299cf8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_299cfc:
    // 0x299cfc: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x299cfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x299d00: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x299d00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299d04: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x299d04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x299d08: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x299d08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x299d0c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x299d0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x299d10: 0xc6c40004  lwc1        $f4, 0x4($s6)
    ctx->pc = 0x299d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x299d14: 0xc7818cf0  lwc1        $f1, -0x7310($gp)
    ctx->pc = 0x299d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299d18: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x299d18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x299d1c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x299d1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x299d20: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x299d20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x299d24: 0x46002040  add.s       $f1, $f4, $f0
    ctx->pc = 0x299d24u;
    ctx->f[1] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x299d28: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x299d28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x299d2c: 0x0  nop
    ctx->pc = 0x299d2cu;
    // NOP
    // 0x299d30: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x299D30u;
    {
        const bool branch_taken_0x299d30 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x299D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299D30u;
        // 0x299d34: 0xe7a100b4  swc1        $f1, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x299d30) {
            ctx->pc = 0x299D50u;
            goto label_299d50;
        }
    }
    ctx->pc = 0x299D38u;
    // 0x299d38: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x299d38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x299d3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x299d3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299d40: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x299d40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x299d44: 0x0  nop
    ctx->pc = 0x299d44u;
    // NOP
    // 0x299d48: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x299D48u;
    {
        const bool branch_taken_0x299d48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x299d48) {
            ctx->pc = 0x299D4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x299D48u;
            // 0x299d4c: 0xe7a000c4  swc1        $f0, 0xC4($sp) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x299D60u;
            goto label_299d60;
        }
    }
    ctx->pc = 0x299D50u;
label_299d50:
    // 0x299d50: 0xe7a400b4  swc1        $f4, 0xB4($sp)
    ctx->pc = 0x299d50u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x299d54: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x299d54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x299d58: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x299d58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299d5c: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x299d5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_299d60:
    // 0x299d60: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x299D60u;
    SET_GPR_U32(ctx, 31, 0x299D68u);
    ctx->pc = 0x299D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299D60u;
    // 0x299d64: 0xe7a000c0  swc1        $f0, 0xC0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x299D60u, 0x299D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299D68u;
label_299d68:
    // 0x299d68: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x299D68u;
    {
        const bool branch_taken_0x299d68 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x299D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299D68u;
        // 0x299d6c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299d68) {
            ctx->pc = 0x299D7Cu;
            goto label_299d7c;
        }
    }
    ctx->pc = 0x299D70u;
    // 0x299d70: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x299d70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x299d74: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x299D74u;
    {
        const bool branch_taken_0x299d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299D74u;
        // 0x299d78: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x299d74) {
            ctx->pc = 0x299D90u;
            goto label_299d90;
        }
    }
    ctx->pc = 0x299D7Cu;
label_299d7c:
    // 0x299d7c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x299d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x299d80: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x299d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x299d84: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x299d84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x299d88: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x299d88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x299d8c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x299d8cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_299d90:
    // 0x299d90: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x299d90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x299d94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x299d94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299d98: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x299d98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x299d9c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x299d9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x299da0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x299da0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x299da4: 0xc6c40000  lwc1        $f4, 0x0($s6)
    ctx->pc = 0x299da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x299da8: 0xc7818cf4  lwc1        $f1, -0x730C($gp)
    ctx->pc = 0x299da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299dac: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x299dacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x299db0: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x299db0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x299db4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x299db4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x299db8: 0x46002040  add.s       $f1, $f4, $f0
    ctx->pc = 0x299db8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x299dbc: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x299dbcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x299dc0: 0x0  nop
    ctx->pc = 0x299dc0u;
    // NOP
    // 0x299dc4: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x299DC4u;
    {
        const bool branch_taken_0x299dc4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x299DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299DC4u;
        // 0x299dc8: 0xe7a100d0  swc1        $f1, 0xD0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x299dc4) {
            ctx->pc = 0x299DE4u;
            goto label_299de4;
        }
    }
    ctx->pc = 0x299DCCu;
    // 0x299dcc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x299dccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x299dd0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x299dd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299dd4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x299dd4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x299dd8: 0x0  nop
    ctx->pc = 0x299dd8u;
    // NOP
    // 0x299ddc: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x299DDCu;
    {
        const bool branch_taken_0x299ddc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x299ddc) {
            ctx->pc = 0x299DE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x299DDCu;
            // 0x299de0: 0xafa000e0  sw          $zero, 0xE0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x299DF4u;
            goto label_299df4;
        }
    }
    ctx->pc = 0x299DE4u;
label_299de4:
    // 0x299de4: 0xe7a400d0  swc1        $f4, 0xD0($sp)
    ctx->pc = 0x299de4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x299de8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x299de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x299dec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x299decu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299df0: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x299df0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
label_299df4:
    // 0x299df4: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x299df4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x299df8: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x299df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x299dfc: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x299DFCu;
    SET_GPR_U32(ctx, 31, 0x299E04u);
    ctx->pc = 0x299E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299DFCu;
    // 0x299e00: 0xafa000f0  sw          $zero, 0xF0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x299DFCu, 0x299E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299E04u;
label_299e04:
    // 0x299e04: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x299E04u;
    {
        const bool branch_taken_0x299e04 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x299E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299E04u;
        // 0x299e08: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299e04) {
            ctx->pc = 0x299E18u;
            goto label_299e18;
        }
    }
    ctx->pc = 0x299E0Cu;
    // 0x299e0c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x299e0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x299e10: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x299E10u;
    {
        const bool branch_taken_0x299e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299E10u;
        // 0x299e14: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x299e10) {
            ctx->pc = 0x299E2Cu;
            goto label_299e2c;
        }
    }
    ctx->pc = 0x299E18u;
label_299e18:
    // 0x299e18: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x299e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x299e1c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x299e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x299e20: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x299e20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x299e24: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x299e24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x299e28: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x299e28u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_299e2c:
    // 0x299e2c: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x299e2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x299e30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x299e30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299e34: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x299e34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x299e38: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x299e38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x299e3c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x299e3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x299e40: 0xc6c40004  lwc1        $f4, 0x4($s6)
    ctx->pc = 0x299e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x299e44: 0xc7818cf8  lwc1        $f1, -0x7308($gp)
    ctx->pc = 0x299e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299e48: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x299e48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x299e4c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x299e4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x299e50: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x299e50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x299e54: 0x46002040  add.s       $f1, $f4, $f0
    ctx->pc = 0x299e54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x299e58: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x299e58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x299e5c: 0x0  nop
    ctx->pc = 0x299e5cu;
    // NOP
    // 0x299e60: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x299E60u;
    {
        const bool branch_taken_0x299e60 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x299E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299E60u;
        // 0x299e64: 0xe7a100f4  swc1        $f1, 0xF4($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x299e60) {
            ctx->pc = 0x299E80u;
            goto label_299e80;
        }
    }
    ctx->pc = 0x299E68u;
    // 0x299e68: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x299e68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x299e6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x299e6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299e70: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x299e70u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x299e74: 0x0  nop
    ctx->pc = 0x299e74u;
    // NOP
    // 0x299e78: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x299E78u;
    {
        const bool branch_taken_0x299e78 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x299e78) {
            ctx->pc = 0x299E7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x299E78u;
            // 0x299e7c: 0xafa00100  sw          $zero, 0x100($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x299E88u;
            goto label_299e88;
        }
    }
    ctx->pc = 0x299E80u;
label_299e80:
    // 0x299e80: 0xe7a400f4  swc1        $f4, 0xF4($sp)
    ctx->pc = 0x299e80u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x299e84: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x299e84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
label_299e88:
    // 0x299e88: 0x27c20004  addiu       $v0, $fp, 0x4
    ctx->pc = 0x299e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x299e8c: 0xafa00104  sw          $zero, 0x104($sp)
    ctx->pc = 0x299e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 0));
    // 0x299e90: 0x27c30008  addiu       $v1, $fp, 0x8
    ctx->pc = 0x299e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x299e94: 0x8fa601f4  lw          $a2, 0x1F4($sp)
    ctx->pc = 0x299e94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x299e98: 0x27c4000c  addiu       $a0, $fp, 0xC
    ctx->pc = 0x299e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 12));
    // 0x299e9c: 0xc6c30000  lwc1        $f3, 0x0($s6)
    ctx->pc = 0x299e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x299ea0: 0x27aa0090  addiu       $t2, $sp, 0x90
    ctx->pc = 0x299ea0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x299ea4: 0x24c60048  addiu       $a2, $a2, 0x48
    ctx->pc = 0x299ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 72));
    // 0x299ea8: 0x27a90094  addiu       $t1, $sp, 0x94
    ctx->pc = 0x299ea8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x299eac: 0xafa6023c  sw          $a2, 0x23C($sp)
    ctx->pc = 0x299eacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 572), GPR_U32(ctx, 6));
    // 0x299eb0: 0x140782d  daddu       $t7, $t2, $zero
    ctx->pc = 0x299eb0u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299eb4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x299eb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x299eb8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x299eb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x299ebc: 0x120702d  daddu       $t6, $t1, $zero
    ctx->pc = 0x299ebcu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299ec0: 0xafa20230  sw          $v0, 0x230($sp)
    ctx->pc = 0x299ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 2));
    // 0x299ec4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x299ec4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x299ec8: 0xafa30234  sw          $v1, 0x234($sp)
    ctx->pc = 0x299ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 3));
    // 0x299ecc: 0x27ad0110  addiu       $t5, $sp, 0x110
    ctx->pc = 0x299eccu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x299ed0: 0xafa40238  sw          $a0, 0x238($sp)
    ctx->pc = 0x299ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 4));
    // 0x299ed4: 0x27ac0114  addiu       $t4, $sp, 0x114
    ctx->pc = 0x299ed4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
    // 0x299ed8: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x299ed8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x299edc: 0x27b10070  addiu       $s1, $sp, 0x70
    ctx->pc = 0x299edcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x299ee0: 0x27b401a0  addiu       $s4, $sp, 0x1A0
    ctx->pc = 0x299ee0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x299ee4: 0x27b501b0  addiu       $s5, $sp, 0x1B0
    ctx->pc = 0x299ee4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x299ee8: 0x27b801c0  addiu       $t8, $sp, 0x1C0
    ctx->pc = 0x299ee8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x299eec: 0x27b20080  addiu       $s2, $sp, 0x80
    ctx->pc = 0x299eecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x299ef0: 0x27b30190  addiu       $s3, $sp, 0x190
    ctx->pc = 0x299ef0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x299ef4: 0x27b901d0  addiu       $t9, $sp, 0x1D0
    ctx->pc = 0x299ef4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x299ef8: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x299ef8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x299efc: 0x27a7009c  addiu       $a3, $sp, 0x9C
    ctx->pc = 0x299efcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x299f00: 0x27a60098  addiu       $a2, $sp, 0x98
    ctx->pc = 0x299f00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x299f04: 0x0  nop
    ctx->pc = 0x299f04u;
    // NOP
label_299f08:
    // 0x299f08: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x299f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x299f0c: 0x25020010  addiu       $v0, $t0, 0x10
    ctx->pc = 0x299f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x299f10: 0x164182a  slt         $v1, $t3, $a0
    ctx->pc = 0x299f10u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x299f14: 0xc4c1fff8  lwc1        $f1, -0x8($a2)
    ctx->pc = 0x299f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299f18: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x299f18u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x299f1c: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x299f1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x299f20: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x299f20u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x299f24: 0x29050010  slti        $a1, $t0, 0x10
    ctx->pc = 0x299f24u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x299f28: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x299f28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x299f2c: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x299f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x299f30: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x299f30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x299f34: 0x1e31021  addu        $v0, $t7, $v1
    ctx->pc = 0x299f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 3)));
    // 0x299f38: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x299f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299f3c: 0x1c31821  addu        $v1, $t6, $v1
    ctx->pc = 0x299f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
    // 0x299f40: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x299f40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x299f44: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x299f44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x299f48: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x299f48u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x299f4c: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x299f4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x299f50: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x299f50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x299f54: 0xc4e1fff8  lwc1        $f1, -0x8($a3)
    ctx->pc = 0x299f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299f58: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x299f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299f5c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x299f5cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x299f60: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x299f60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x299f64: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x299f64u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x299f68: 0xe4e10000  swc1        $f1, 0x0($a3)
    ctx->pc = 0x299f68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x299f6c: 0x14a0ffe6  bnez        $a1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x299F6Cu;
    {
        const bool branch_taken_0x299f6c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x299F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299F6Cu;
        // 0x299f70: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299f6c) {
            ctx->pc = 0x299F08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_299f08;
        }
    }
    ctx->pc = 0x299F74u;
    // 0x299f74: 0x46001886  mov.s       $f2, $f3
    ctx->pc = 0x299f74u;
    ctx->f[2] = FPU_MOV_S(ctx->f[3]);
    // 0x299f78: 0x46002046  mov.s       $f1, $f4
    ctx->pc = 0x299f78u;
    ctx->f[1] = FPU_MOV_S(ctx->f[4]);
    // 0x299f7c: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x299f7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299f80: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x299f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299f84: 0x180182d  daddu       $v1, $t4, $zero
    ctx->pc = 0x299f84u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299f88: 0x1a0102d  daddu       $v0, $t5, $zero
    ctx->pc = 0x299f88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299f8c: 0x2417000f  addiu       $s7, $zero, 0xF
    ctx->pc = 0x299f8cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_299f90:
    // 0x299f90: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x299f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299f94: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x299f94u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x299f98: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x299f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x299f9c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x299f9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x299fa0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x299fa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x299fa4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x299fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x299fa8: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x299fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299fac: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x299facu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x299fb0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x299fb0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x299fb4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x299fb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x299fb8: 0x6e1fff5  bgez        $s7, . + 4 + (-0xB << 2)
    ctx->pc = 0x299FB8u;
    {
        const bool branch_taken_0x299fb8 = (GPR_S32(ctx, 23) >= 0);
        ctx->pc = 0x299FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299FB8u;
        // 0x299fbc: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299fb8) {
            ctx->pc = 0x299F90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_299f90;
        }
    }
    ctx->pc = 0x299FC0u;
    // 0x299fc0: 0xafac0208  sw          $t4, 0x208($sp)
    ctx->pc = 0x299fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 12));
    // 0x299fc4: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x299fc4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299fc8: 0xc79f8cfc  lwc1        $f31, -0x7304($gp)
    ctx->pc = 0x299fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x299fcc: 0xafad020c  sw          $t5, 0x20C($sp)
    ctx->pc = 0x299fccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 13));
    // 0x299fd0: 0xafb0022c  sw          $s0, 0x22C($sp)
    ctx->pc = 0x299fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 556), GPR_U32(ctx, 16));
    // 0x299fd4: 0xafb10210  sw          $s1, 0x210($sp)
    ctx->pc = 0x299fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 17));
    // 0x299fd8: 0xafb40214  sw          $s4, 0x214($sp)
    ctx->pc = 0x299fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 20));
    // 0x299fdc: 0xafb50218  sw          $s5, 0x218($sp)
    ctx->pc = 0x299fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 536), GPR_U32(ctx, 21));
    // 0x299fe0: 0xafb8021c  sw          $t8, 0x21C($sp)
    ctx->pc = 0x299fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 540), GPR_U32(ctx, 24));
    // 0x299fe4: 0xafb20220  sw          $s2, 0x220($sp)
    ctx->pc = 0x299fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 18));
    // 0x299fe8: 0xafb30224  sw          $s3, 0x224($sp)
    ctx->pc = 0x299fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 19));
    // 0x299fec: 0xafb90228  sw          $t9, 0x228($sp)
    ctx->pc = 0x299fecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 552), GPR_U32(ctx, 25));
    // 0x299ff0: 0x26f50001  addiu       $s5, $s7, 0x1
    ctx->pc = 0x299ff0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x299ff4: 0x0  nop
    ctx->pc = 0x299ff4u;
    // NOP
label_299ff8:
    // 0x299ff8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x299ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x299ffc: 0x55102a  slt         $v0, $v0, $s5
    ctx->pc = 0x299ffcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x29a000: 0x26e30010  addiu       $v1, $s7, 0x10
    ctx->pc = 0x29a000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
    // 0x29a004: 0x2a2180b  movn        $v1, $s5, $v0
    ctx->pc = 0x29a004u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 21));
    // 0x29a008: 0x8fa70208  lw          $a3, 0x208($sp)
    ctx->pc = 0x29a008u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x29a00c: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x29a00cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x29a010: 0x1790c0  sll         $s2, $s7, 3
    ctx->pc = 0x29a010u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 23), 3));
    // 0x29a014: 0xf21021  addu        $v0, $a3, $s2
    ctx->pc = 0x29a014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x29a018: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29a018u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29a01c: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x29a01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29a020: 0x2a31823  subu        $v1, $s5, $v1
    ctx->pc = 0x29a020u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x29a024: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x29A024u;
    SET_GPR_U32(ctx, 31, 0x29A02Cu);
    ctx->pc = 0x29A028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A024u;
    // 0x29a028: 0x388c0  sll         $s1, $v1, 3 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x29A024u, 0x29A02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A02Cu;
label_29a02c:
    // 0x29a02c: 0x8fa8020c  lw          $t0, 0x20C($sp)
    ctx->pc = 0x29a02cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
    // 0x29a030: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29a030u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a034: 0x1121821  addu        $v1, $t0, $s2
    ctx->pc = 0x29a034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 18)));
    // 0x29a038: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x29A038u;
    SET_GPR_U32(ctx, 31, 0x29A040u);
    ctx->pc = 0x29A03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A038u;
    // 0x29a03c: 0xc46c0000  lwc1        $f12, 0x0($v1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x29A038u, 0x29A040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A040u;
label_29a040:
    // 0x29a040: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29a040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a044: 0xc0b5d44  jal         func_2D7510
    ctx->pc = 0x29A044u;
    SET_GPR_U32(ctx, 31, 0x29A04Cu);
    ctx->pc = 0x29A048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A044u;
    // 0x29a048: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7510u, 0x29A044u, 0x29A04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A04Cu;
label_29a04c:
    // 0x29a04c: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x29A04Cu;
    SET_GPR_U32(ctx, 31, 0x29A054u);
    ctx->pc = 0x29A050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A04Cu;
    // 0x29a050: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x29A04Cu, 0x29A054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A054u;
label_29a054:
    // 0x29a054: 0x8fa30208  lw          $v1, 0x208($sp)
    ctx->pc = 0x29a054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x29a058: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x29a058u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x29a05c: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x29a05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x29a060: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x29A060u;
    SET_GPR_U32(ctx, 31, 0x29A068u);
    ctx->pc = 0x29A064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A060u;
    // 0x29a064: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x29A060u, 0x29A068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A068u;
label_29a068:
    // 0x29a068: 0x8fa4020c  lw          $a0, 0x20C($sp)
    ctx->pc = 0x29a068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
    // 0x29a06c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29a06cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a070: 0x911821  addu        $v1, $a0, $s1
    ctx->pc = 0x29a070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x29a074: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x29A074u;
    SET_GPR_U32(ctx, 31, 0x29A07Cu);
    ctx->pc = 0x29A078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A074u;
    // 0x29a078: 0xc46c0000  lwc1        $f12, 0x0($v1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x29A074u, 0x29A07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A07Cu;
label_29a07c:
    // 0x29a07c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29a07cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a080: 0xc0b5d44  jal         func_2D7510
    ctx->pc = 0x29A080u;
    SET_GPR_U32(ctx, 31, 0x29A088u);
    ctx->pc = 0x29A084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A080u;
    // 0x29a084: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7510u, 0x29A080u, 0x29A088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A088u;
label_29a088:
    // 0x29a088: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x29A088u;
    SET_GPR_U32(ctx, 31, 0x29A090u);
    ctx->pc = 0x29A08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A088u;
    // 0x29a08c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x29A088u, 0x29A090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A090u;
label_29a090:
    // 0x29a090: 0xc7818d00  lwc1        $f1, -0x7300($gp)
    ctx->pc = 0x29a090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a094: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x29a094u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x29a098: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x29a098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x29a09c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x29a09cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x29a0a0: 0x24c65c60  addiu       $a2, $a2, 0x5C60
    ctx->pc = 0x29a0a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23648));
    // 0x29a0a4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x29a0a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29a0a8: 0x4601a502  mul.s       $f20, $f20, $f1
    ctx->pc = 0x29a0a8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x29a0ac: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x29a0acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x29a0b0: 0x4602a500  add.s       $f20, $f20, $f2
    ctx->pc = 0x29a0b0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
    // 0x29a0b4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29a0b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29a0b8: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x29a0b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x29a0bc: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29a0bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x29a0c0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x29a0c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x29a0c4: 0x24a40200  addiu       $a0, $a1, 0x200
    ctx->pc = 0x29a0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 512));
    // 0x29a0c8: 0x24620200  addiu       $v0, $v1, 0x200
    ctx->pc = 0x29a0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 512));
    // 0x29a0cc: 0x30a507ff  andi        $a1, $a1, 0x7FF
    ctx->pc = 0x29a0ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2047);
    // 0x29a0d0: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x29a0d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x29a0d4: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x29a0d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x29a0d8: 0x308407ff  andi        $a0, $a0, 0x7FF
    ctx->pc = 0x29a0d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2047);
    // 0x29a0dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29a0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29a0e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x29a0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29a0e4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x29a0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x29a0e8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x29a0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x29a0ec: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x29a0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x29a0f0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x29a0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x29a0f4: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x29a0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x29a0f8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x29a0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x29a0fc: 0xc4540000  lwc1        $f20, 0x0($v0)
    ctx->pc = 0x29a0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29a100: 0xc4750000  lwc1        $f21, 0x0($v1)
    ctx->pc = 0x29a100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x29a104: 0xc4960000  lwc1        $f22, 0x0($a0)
    ctx->pc = 0x29a104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x29a108: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x29A108u;
    SET_GPR_U32(ctx, 31, 0x29A110u);
    ctx->pc = 0x29A10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A108u;
    // 0x29a10c: 0xc4b70000  lwc1        $f23, 0x0($a1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x29A108u, 0x29A110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A110u;
label_29a110:
    // 0x29a110: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29A110u;
    {
        const bool branch_taken_0x29a110 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x29A114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A110u;
        // 0x29a114: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a110) {
            ctx->pc = 0x29A124u;
            goto label_29a124;
        }
    }
    ctx->pc = 0x29A118u;
    // 0x29a118: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29a118u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29a11c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x29A11Cu;
    {
        const bool branch_taken_0x29a11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A11Cu;
        // 0x29a120: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a11c) {
            ctx->pc = 0x29A138u;
            goto label_29a138;
        }
    }
    ctx->pc = 0x29A124u;
label_29a124:
    // 0x29a124: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x29a124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x29a128: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x29a128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x29a12c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29a12cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29a130: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x29a130u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x29a134: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x29a134u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_29a138:
    // 0x29a138: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x29a138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x29a13c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x29a13cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29a140: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x29a140u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29a144: 0xc7818d04  lwc1        $f1, -0x72FC($gp)
    ctx->pc = 0x29a144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a148: 0x461f0002  mul.s       $f0, $f0, $f31
    ctx->pc = 0x29a148u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[31]);
    // 0x29a14c: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x29A14Cu;
    SET_GPR_U32(ctx, 31, 0x29A154u);
    ctx->pc = 0x29A150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A14Cu;
    // 0x29a150: 0x46010700  add.s       $f28, $f0, $f1 (Delay Slot)
    ctx->f[28] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x29A14Cu, 0x29A154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A154u;
label_29a154:
    // 0x29a154: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29A154u;
    {
        const bool branch_taken_0x29a154 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x29A158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A154u;
        // 0x29a158: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a154) {
            ctx->pc = 0x29A168u;
            goto label_29a168;
        }
    }
    ctx->pc = 0x29A15Cu;
    // 0x29a15c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29a15cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29a160: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x29A160u;
    {
        const bool branch_taken_0x29a160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A160u;
        // 0x29a164: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a160) {
            ctx->pc = 0x29A17Cu;
            goto label_29a17c;
        }
    }
    ctx->pc = 0x29A168u;
label_29a168:
    // 0x29a168: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x29a168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x29a16c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x29a16cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x29a170: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29a170u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29a174: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x29a174u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x29a178: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x29a178u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_29a17c:
    // 0x29a17c: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x29a17cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x29a180: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x29a180u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x29a184: 0xc7818d08  lwc1        $f1, -0x72F8($gp)
    ctx->pc = 0x29a184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a188: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x29a188u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x29a18c: 0x461f0002  mul.s       $f0, $f0, $f31
    ctx->pc = 0x29a18cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[31]);
    // 0x29a190: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x29A190u;
    SET_GPR_U32(ctx, 31, 0x29A198u);
    ctx->pc = 0x29A194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A190u;
    // 0x29a194: 0x460106c0  add.s       $f27, $f0, $f1 (Delay Slot)
    ctx->f[27] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x29A190u, 0x29A198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A198u;
label_29a198:
    // 0x29a198: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29A198u;
    {
        const bool branch_taken_0x29a198 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x29A19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A198u;
        // 0x29a19c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a198) {
            ctx->pc = 0x29A1ACu;
            goto label_29a1ac;
        }
    }
    ctx->pc = 0x29A1A0u;
    // 0x29a1a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29a1a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29a1a4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x29A1A4u;
    {
        const bool branch_taken_0x29a1a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A1A4u;
        // 0x29a1a8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a1a4) {
            ctx->pc = 0x29A1C0u;
            goto label_29a1c0;
        }
    }
    ctx->pc = 0x29A1ACu;
label_29a1ac:
    // 0x29a1ac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x29a1acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x29a1b0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x29a1b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x29a1b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29a1b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29a1b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x29a1b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x29a1bc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x29a1bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_29a1c0:
    // 0x29a1c0: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x29a1c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x29a1c4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x29a1c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x29a1c8: 0xc7818d0c  lwc1        $f1, -0x72F4($gp)
    ctx->pc = 0x29a1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a1cc: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x29a1ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x29a1d0: 0x461f0002  mul.s       $f0, $f0, $f31
    ctx->pc = 0x29a1d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[31]);
    // 0x29a1d4: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x29A1D4u;
    SET_GPR_U32(ctx, 31, 0x29A1DCu);
    ctx->pc = 0x29A1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A1D4u;
    // 0x29a1d8: 0x46010640  add.s       $f25, $f0, $f1 (Delay Slot)
    ctx->f[25] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x29A1D4u, 0x29A1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A1DCu;
label_29a1dc:
    // 0x29a1dc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29A1DCu;
    {
        const bool branch_taken_0x29a1dc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x29A1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A1DCu;
        // 0x29a1e0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a1dc) {
            ctx->pc = 0x29A1F0u;
            goto label_29a1f0;
        }
    }
    ctx->pc = 0x29A1E4u;
    // 0x29a1e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29a1e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29a1e8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x29A1E8u;
    {
        const bool branch_taken_0x29a1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A1E8u;
        // 0x29a1ec: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a1e8) {
            ctx->pc = 0x29A204u;
            goto label_29a204;
        }
    }
    ctx->pc = 0x29A1F0u;
label_29a1f0:
    // 0x29a1f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x29a1f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x29a1f4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x29a1f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x29a1f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29a1f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29a1fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x29a1fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x29a200: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x29a200u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_29a204:
    // 0x29a204: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x29a204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x29a208: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x29a208u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29a20c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x29a20cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29a210: 0x461f0002  mul.s       $f0, $f0, $f31
    ctx->pc = 0x29a210u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[31]);
    // 0x29a214: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x29A214u;
    SET_GPR_U32(ctx, 31, 0x29A21Cu);
    ctx->pc = 0x29A218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A214u;
    // 0x29a218: 0x4600cf40  add.s       $f29, $f25, $f0 (Delay Slot)
    ctx->f[29] = FPU_ADD_S(ctx->f[25], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x29A214u, 0x29A21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A21Cu;
label_29a21c:
    // 0x29a21c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29A21Cu;
    {
        const bool branch_taken_0x29a21c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x29A220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A21Cu;
        // 0x29a220: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a21c) {
            ctx->pc = 0x29A230u;
            goto label_29a230;
        }
    }
    ctx->pc = 0x29A224u;
    // 0x29a224: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29a224u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29a228: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x29A228u;
    {
        const bool branch_taken_0x29a228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A228u;
        // 0x29a22c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a228) {
            ctx->pc = 0x29A244u;
            goto label_29a244;
        }
    }
    ctx->pc = 0x29A230u;
label_29a230:
    // 0x29a230: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x29a230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x29a234: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x29a234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x29a238: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29a238u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29a23c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x29a23cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x29a240: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x29a240u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_29a244:
    // 0x29a244: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x29a244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x29a248: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x29a248u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x29a24c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x29a24cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x29a250: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x29a250u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x29a254: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x29a254u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x29a258: 0x461f0002  mul.s       $f0, $f0, $f31
    ctx->pc = 0x29a258u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[31]);
    // 0x29a25c: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x29A25Cu;
    SET_GPR_U32(ctx, 31, 0x29A264u);
    ctx->pc = 0x29A260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A25Cu;
    // 0x29a260: 0x46040600  add.s       $f24, $f0, $f4 (Delay Slot)
    ctx->f[24] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x29A25Cu, 0x29A264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A264u;
label_29a264:
    // 0x29a264: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29A264u;
    {
        const bool branch_taken_0x29a264 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x29A268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A264u;
        // 0x29a268: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a264) {
            ctx->pc = 0x29A27Cu;
            goto label_29a27c;
        }
    }
    ctx->pc = 0x29A26Cu;
    // 0x29a26c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29a26cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29a270: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x29a270u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x29a274: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x29A274u;
    {
        const bool branch_taken_0x29a274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A274u;
        // 0x29a278: 0x8fa2020c  lw          $v0, 0x20C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a274) {
            ctx->pc = 0x29A294u;
            goto label_29a294;
        }
    }
    ctx->pc = 0x29A27Cu;
label_29a27c:
    // 0x29a27c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x29a27cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x29a280: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x29a280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x29a284: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29a284u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29a288: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x29a288u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x29a28c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x29a28cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x29a290: 0x8fa2020c  lw          $v0, 0x20C($sp)
    ctx->pc = 0x29a290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
label_29a294:
    // 0x29a294: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x29a294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x29a298: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x29a298u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x29a29c: 0x529821  addu        $s3, $v0, $s2
    ctx->pc = 0x29a29cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x29a2a0: 0x51a021  addu        $s4, $v0, $s1
    ctx->pc = 0x29a2a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x29a2a4: 0xc6630000  lwc1        $f3, 0x0($s3)
    ctx->pc = 0x29a2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29a2a8: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x29a2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a2ac: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x29a2acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x29a2b0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x29a2b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x29a2b4: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x29a2b4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x29a2b8: 0x8fa30208  lw          $v1, 0x208($sp)
    ctx->pc = 0x29a2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x29a2bc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x29a2bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x29a2c0: 0xc7828d10  lwc1        $f2, -0x72F0($gp)
    ctx->pc = 0x29a2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29a2c4: 0x729021  addu        $s2, $v1, $s2
    ctx->pc = 0x29a2c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x29a2c8: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x29a2c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x29a2cc: 0x718821  addu        $s1, $v1, $s1
    ctx->pc = 0x29a2ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x29a2d0: 0x461f0002  mul.s       $f0, $f0, $f31
    ctx->pc = 0x29a2d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[31]);
    // 0x29a2d4: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x29a2d4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x29a2d8: 0x46020680  add.s       $f26, $f0, $f2
    ctx->pc = 0x29a2d8u;
    ctx->f[26] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x29a2dc: 0xe7a30190  swc1        $f3, 0x190($sp)
    ctx->pc = 0x29a2dcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x29a2e0: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x29a2e0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x29a2e4: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x29a2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a2e8: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x29a2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a2ec: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x29a2ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29a2f0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x29a2f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x29a2f4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x29a2f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29a2f8: 0x46010882  mul.s       $f2, $f1, $f1
    ctx->pc = 0x29a2f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x29a2fc: 0x46021b00  add.s       $f12, $f3, $f2
    ctx->pc = 0x29a2fcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x29a300: 0x0  nop
    ctx->pc = 0x29a300u;
    // NOP
    // 0x29a304: 0x0  nop
    ctx->pc = 0x29a304u;
    // NOP
    // 0x29a308: 0x460c0084  c1          0xC0084
    ctx->pc = 0x29a308u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[12]);
    // 0x29a30c: 0x46021032  c.eq.s      $f2, $f2
    ctx->pc = 0x29a30cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29a310: 0x0  nop
    ctx->pc = 0x29a310u;
    // NOP
    // 0x29a314: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x29A314u;
    {
        const bool branch_taken_0x29a314 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x29A318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A314u;
        // 0x29a318: 0xe7a10194  swc1        $f1, 0x194($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 404), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a314) {
            ctx->pc = 0x29A328u;
            goto label_29a328;
        }
    }
    ctx->pc = 0x29A31Cu;
    // 0x29a31c: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x29A31Cu;
    SET_GPR_U32(ctx, 31, 0x29A324u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x29A31Cu, 0x29A324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A324u;
label_29a324:
    // 0x29a324: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x29a324u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_29a328:
    // 0x29a328: 0xc7a00190  lwc1        $f0, 0x190($sp)
    ctx->pc = 0x29a328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a32c: 0xc7a10194  lwc1        $f1, 0x194($sp)
    ctx->pc = 0x29a32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a330: 0x0  nop
    ctx->pc = 0x29a330u;
    // NOP
    // 0x29a334: 0x0  nop
    ctx->pc = 0x29a334u;
    // NOP
    // 0x29a338: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x29a338u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x29a33c: 0x0  nop
    ctx->pc = 0x29a33cu;
    // NOP
    // 0x29a340: 0x0  nop
    ctx->pc = 0x29a340u;
    // NOP
    // 0x29a344: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x29a344u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x29a348: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x29a348u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x29a34c: 0x4602a034  c.lt.s      $f20, $f2
    ctx->pc = 0x29a34cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29a350: 0xe7a00190  swc1        $f0, 0x190($sp)
    ctx->pc = 0x29a350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x29a354: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x29A354u;
    {
        const bool branch_taken_0x29a354 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29A358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A354u;
        // 0x29a358: 0xe7a10194  swc1        $f1, 0x194($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 404), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a354) {
            ctx->pc = 0x29A360u;
            goto label_29a360;
        }
    }
    ctx->pc = 0x29A35Cu;
    // 0x29a35c: 0x4600a507  neg.s       $f20, $f20
    ctx->pc = 0x29a35cu;
    ctx->f[20] = FPU_NEG_S(ctx->f[20]);
label_29a360:
    // 0x29a360: 0x4602a834  c.lt.s      $f21, $f2
    ctx->pc = 0x29a360u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29a364: 0x0  nop
    ctx->pc = 0x29a364u;
    // NOP
    // 0x29a368: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x29A368u;
    {
        const bool branch_taken_0x29a368 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29a368) {
            ctx->pc = 0x29A36Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29A368u;
            // 0x29a36c: 0x4600ad47  neg.s       $f21, $f21 (Delay Slot)
            ctx->f[21] = FPU_NEG_S(ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x29A370u;
            goto label_29a370;
        }
    }
    ctx->pc = 0x29A370u;
label_29a370:
    // 0x29a370: 0x4602b034  c.lt.s      $f22, $f2
    ctx->pc = 0x29a370u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29a374: 0x0  nop
    ctx->pc = 0x29a374u;
    // NOP
    // 0x29a378: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x29A378u;
    {
        const bool branch_taken_0x29a378 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29a378) {
            ctx->pc = 0x29A37Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29A378u;
            // 0x29a37c: 0x4600b587  neg.s       $f22, $f22 (Delay Slot)
            ctx->f[22] = FPU_NEG_S(ctx->f[22]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x29A380u;
            goto label_29a380;
        }
    }
    ctx->pc = 0x29A380u;
label_29a380:
    // 0x29a380: 0x4602b834  c.lt.s      $f23, $f2
    ctx->pc = 0x29a380u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29a384: 0x0  nop
    ctx->pc = 0x29a384u;
    // NOP
    // 0x29a388: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x29A388u;
    {
        const bool branch_taken_0x29a388 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29a388) {
            ctx->pc = 0x29A38Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29A388u;
            // 0x29a38c: 0x4600bdc7  neg.s       $f23, $f23 (Delay Slot)
            ctx->f[23] = FPU_NEG_S(ctx->f[23]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x29A390u;
            goto label_29a390;
        }
    }
    ctx->pc = 0x29A390u;
label_29a390:
    // 0x29a390: 0xc6c20000  lwc1        $f2, 0x0($s6)
    ctx->pc = 0x29a390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29a394: 0x178080  sll         $s0, $s7, 2
    ctx->pc = 0x29a394u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x29a398: 0xc6c30004  lwc1        $f3, 0x4($s6)
    ctx->pc = 0x29a398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29a39c: 0x2178021  addu        $s0, $s0, $s7
    ctx->pc = 0x29a39cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
    // 0x29a3a0: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x29a3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x29a3a4: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x29a3a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a3a8: 0xe7a201a0  swc1        $f2, 0x1A0($sp)
    ctx->pc = 0x29a3a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x29a3ac: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x29a3acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a3b0: 0xe7a301a4  swc1        $f3, 0x1A4($sp)
    ctx->pc = 0x29a3b0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 420), bits); }
    // 0x29a3b4: 0x4600f306  mov.s       $f12, $f30
    ctx->pc = 0x29a3b4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[30]);
    // 0x29a3b8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x29a3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x29a3bc: 0x2a0b82d  daddu       $s7, $s5, $zero
    ctx->pc = 0x29a3bcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a3c0: 0x8fa3022c  lw          $v1, 0x22C($sp)
    ctx->pc = 0x29a3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 556)));
    // 0x29a3c4: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x29a3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a3c8: 0x8fa20210  lw          $v0, 0x210($sp)
    ctx->pc = 0x29a3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x29a3cc: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x29a3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x29a3d0: 0x461c0002  mul.s       $f0, $f0, $f28
    ctx->pc = 0x29a3d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[28]);
    // 0x29a3d4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x29a3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x29a3d8: 0x8fa30214  lw          $v1, 0x214($sp)
    ctx->pc = 0x29a3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
    // 0x29a3dc: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x29a3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29a3e0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x29a3e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x29a3e4: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x29a3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x29a3e8: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x29a3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x29a3ec: 0x8fa3021c  lw          $v1, 0x21C($sp)
    ctx->pc = 0x29a3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
    // 0x29a3f0: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x29a3f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x29a3f4: 0x8fa20220  lw          $v0, 0x220($sp)
    ctx->pc = 0x29a3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x29a3f8: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x29a3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x29a3fc: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x29a3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    // 0x29a400: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x29a400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x29a404: 0x8fa30224  lw          $v1, 0x224($sp)
    ctx->pc = 0x29a404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 548)));
    // 0x29a408: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x29a408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x29a40c: 0xe7a001b0  swc1        $f0, 0x1B0($sp)
    ctx->pc = 0x29a40cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x29a410: 0xafb60038  sw          $s6, 0x38($sp)
    ctx->pc = 0x29a410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 22));
    // 0x29a414: 0xafa30048  sw          $v1, 0x48($sp)
    ctx->pc = 0x29a414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
    // 0x29a418: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x29a418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x29a41c: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x29a41cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x29a420: 0x8fa401f8  lw          $a0, 0x1F8($sp)
    ctx->pc = 0x29a420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x29a424: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x29a424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a428: 0x8fa501fc  lw          $a1, 0x1FC($sp)
    ctx->pc = 0x29a428u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x29a42c: 0x461c0002  mul.s       $f0, $f0, $f28
    ctx->pc = 0x29a42cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[28]);
    // 0x29a430: 0x8fa60200  lw          $a2, 0x200($sp)
    ctx->pc = 0x29a430u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x29a434: 0x8fa901e4  lw          $t1, 0x1E4($sp)
    ctx->pc = 0x29a434u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
    // 0x29a438: 0x8faa01e8  lw          $t2, 0x1E8($sp)
    ctx->pc = 0x29a438u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x29a43c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x29a43cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x29a440: 0x8fab01ec  lw          $t3, 0x1EC($sp)
    ctx->pc = 0x29a440u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x29a444: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x29a444u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x29a448: 0xe7a001b4  swc1        $f0, 0x1B4($sp)
    ctx->pc = 0x29a448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 436), bits); }
    // 0x29a44c: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x29a44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a450: 0x461b0842  mul.s       $f1, $f1, $f27
    ctx->pc = 0x29a450u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[27]);
    // 0x29a454: 0x46160842  mul.s       $f1, $f1, $f22
    ctx->pc = 0x29a454u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
    // 0x29a458: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x29a458u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x29a45c: 0xe7a201c0  swc1        $f2, 0x1C0($sp)
    ctx->pc = 0x29a45cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
    // 0x29a460: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x29a460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a464: 0x461b0002  mul.s       $f0, $f0, $f27
    ctx->pc = 0x29a464u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[27]);
    // 0x29a468: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x29a468u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x29a46c: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x29a46cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x29a470: 0xc0a621c  jal         func_298870
    ctx->pc = 0x29A470u;
    SET_GPR_U32(ctx, 31, 0x29A478u);
    ctx->pc = 0x29A474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A470u;
    // 0x29a474: 0xe7a301c4  swc1        $f3, 0x1C4($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 452), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x298870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298870u, 0x29A470u, 0x29A478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A478u;
label_29a478:
    // 0x29a478: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x29a478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a47c: 0x4600f306  mov.s       $f12, $f30
    ctx->pc = 0x29a47cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[30]);
    // 0x29a480: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x29a480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x29a484: 0x46190002  mul.s       $f0, $f0, $f25
    ctx->pc = 0x29a484u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[25]);
    // 0x29a488: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x29a488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29a48c: 0xc6c20000  lwc1        $f2, 0x0($s6)
    ctx->pc = 0x29a48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29a490: 0xc6c30004  lwc1        $f3, 0x4($s6)
    ctx->pc = 0x29a490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29a494: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x29a494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x29a498: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x29a498u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x29a49c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x29a49cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x29a4a0: 0x8fa30214  lw          $v1, 0x214($sp)
    ctx->pc = 0x29a4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
    // 0x29a4a4: 0x8fa2021c  lw          $v0, 0x21C($sp)
    ctx->pc = 0x29a4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
    // 0x29a4a8: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x29a4a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x29a4ac: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x29a4acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x29a4b0: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x29a4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x29a4b4: 0x8fa7022c  lw          $a3, 0x22C($sp)
    ctx->pc = 0x29a4b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 556)));
    // 0x29a4b8: 0x8fa80210  lw          $t0, 0x210($sp)
    ctx->pc = 0x29a4b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x29a4bc: 0x8fa30228  lw          $v1, 0x228($sp)
    ctx->pc = 0x29a4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 552)));
    // 0x29a4c0: 0x8fa20220  lw          $v0, 0x220($sp)
    ctx->pc = 0x29a4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x29a4c4: 0xe7a001a0  swc1        $f0, 0x1A0($sp)
    ctx->pc = 0x29a4c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x29a4c8: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x29a4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x29a4cc: 0xafa80010  sw          $t0, 0x10($sp)
    ctx->pc = 0x29a4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 8));
    // 0x29a4d0: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x29a4d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a4d4: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x29a4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    // 0x29a4d8: 0x26080001  addiu       $t0, $s0, 0x1
    ctx->pc = 0x29a4d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x29a4dc: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x29a4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x29a4e0: 0xafb60038  sw          $s6, 0x38($sp)
    ctx->pc = 0x29a4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 22));
    // 0x29a4e4: 0x8fa30224  lw          $v1, 0x224($sp)
    ctx->pc = 0x29a4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 548)));
    // 0x29a4e8: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x29a4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a4ec: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x29a4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x29a4f0: 0x46190842  mul.s       $f1, $f1, $f25
    ctx->pc = 0x29a4f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[25]);
    // 0x29a4f4: 0x8fa401f8  lw          $a0, 0x1F8($sp)
    ctx->pc = 0x29a4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x29a4f8: 0x8fa501fc  lw          $a1, 0x1FC($sp)
    ctx->pc = 0x29a4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x29a4fc: 0x8fa60200  lw          $a2, 0x200($sp)
    ctx->pc = 0x29a4fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x29a500: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x29a500u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x29a504: 0x8fa901e4  lw          $t1, 0x1E4($sp)
    ctx->pc = 0x29a504u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
    // 0x29a508: 0x8faa01e8  lw          $t2, 0x1E8($sp)
    ctx->pc = 0x29a508u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x29a50c: 0x8fab01ec  lw          $t3, 0x1EC($sp)
    ctx->pc = 0x29a50cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x29a510: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x29a510u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x29a514: 0xafa30048  sw          $v1, 0x48($sp)
    ctx->pc = 0x29a514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
    // 0x29a518: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x29a518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x29a51c: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x29a51cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x29a520: 0xe7a101a4  swc1        $f1, 0x1A4($sp)
    ctx->pc = 0x29a520u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 420), bits); }
    // 0x29a524: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x29a524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a528: 0x461d0002  mul.s       $f0, $f0, $f29
    ctx->pc = 0x29a528u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[29]);
    // 0x29a52c: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x29a52cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x29a530: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x29a530u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x29a534: 0xe7a201d0  swc1        $f2, 0x1D0($sp)
    ctx->pc = 0x29a534u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x29a538: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x29a538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a53c: 0x461d0002  mul.s       $f0, $f0, $f29
    ctx->pc = 0x29a53cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[29]);
    // 0x29a540: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x29a540u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x29a544: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x29a544u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x29a548: 0xc0a621c  jal         func_298870
    ctx->pc = 0x29A548u;
    SET_GPR_U32(ctx, 31, 0x29A550u);
    ctx->pc = 0x29A54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A548u;
    // 0x29a54c: 0xe7a301d4  swc1        $f3, 0x1D4($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 468), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x298870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298870u, 0x29A548u, 0x29A550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A550u;
label_29a550:
    // 0x29a550: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x29a550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a554: 0x4600f306  mov.s       $f12, $f30
    ctx->pc = 0x29a554u;
    ctx->f[12] = FPU_MOV_S(ctx->f[30]);
    // 0x29a558: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x29a558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x29a55c: 0x46180002  mul.s       $f0, $f0, $f24
    ctx->pc = 0x29a55cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
    // 0x29a560: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x29a560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29a564: 0xc6c20000  lwc1        $f2, 0x0($s6)
    ctx->pc = 0x29a564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29a568: 0xc6c30004  lwc1        $f3, 0x4($s6)
    ctx->pc = 0x29a568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29a56c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x29a56cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x29a570: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x29a570u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x29a574: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x29a574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x29a578: 0x8fa30214  lw          $v1, 0x214($sp)
    ctx->pc = 0x29a578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
    // 0x29a57c: 0x8fa2021c  lw          $v0, 0x21C($sp)
    ctx->pc = 0x29a57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
    // 0x29a580: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x29a580u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x29a584: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x29a584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x29a588: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x29a588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x29a58c: 0x8fa7022c  lw          $a3, 0x22C($sp)
    ctx->pc = 0x29a58cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 556)));
    // 0x29a590: 0x8fa80210  lw          $t0, 0x210($sp)
    ctx->pc = 0x29a590u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x29a594: 0x8fa30228  lw          $v1, 0x228($sp)
    ctx->pc = 0x29a594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 552)));
    // 0x29a598: 0x8fa20220  lw          $v0, 0x220($sp)
    ctx->pc = 0x29a598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x29a59c: 0xe7a001b0  swc1        $f0, 0x1B0($sp)
    ctx->pc = 0x29a59cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x29a5a0: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x29a5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x29a5a4: 0xafa80010  sw          $t0, 0x10($sp)
    ctx->pc = 0x29a5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 8));
    // 0x29a5a8: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x29a5a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a5ac: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x29a5acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    // 0x29a5b0: 0x26080002  addiu       $t0, $s0, 0x2
    ctx->pc = 0x29a5b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x29a5b4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x29a5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x29a5b8: 0xafb60038  sw          $s6, 0x38($sp)
    ctx->pc = 0x29a5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 22));
    // 0x29a5bc: 0x8fa30224  lw          $v1, 0x224($sp)
    ctx->pc = 0x29a5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 548)));
    // 0x29a5c0: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x29a5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a5c4: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x29a5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x29a5c8: 0x46180842  mul.s       $f1, $f1, $f24
    ctx->pc = 0x29a5c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[24]);
    // 0x29a5cc: 0x8fa401f8  lw          $a0, 0x1F8($sp)
    ctx->pc = 0x29a5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x29a5d0: 0x8fa501fc  lw          $a1, 0x1FC($sp)
    ctx->pc = 0x29a5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x29a5d4: 0x8fa60200  lw          $a2, 0x200($sp)
    ctx->pc = 0x29a5d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x29a5d8: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x29a5d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x29a5dc: 0x8fa901e4  lw          $t1, 0x1E4($sp)
    ctx->pc = 0x29a5dcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
    // 0x29a5e0: 0x8faa01e8  lw          $t2, 0x1E8($sp)
    ctx->pc = 0x29a5e0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x29a5e4: 0x8fab01ec  lw          $t3, 0x1EC($sp)
    ctx->pc = 0x29a5e4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x29a5e8: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x29a5e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x29a5ec: 0xafa30048  sw          $v1, 0x48($sp)
    ctx->pc = 0x29a5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
    // 0x29a5f0: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x29a5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x29a5f4: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x29a5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x29a5f8: 0xe7a101b4  swc1        $f1, 0x1B4($sp)
    ctx->pc = 0x29a5f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 436), bits); }
    // 0x29a5fc: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x29a5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a600: 0x46180002  mul.s       $f0, $f0, $f24
    ctx->pc = 0x29a600u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
    // 0x29a604: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x29a604u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x29a608: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x29a608u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x29a60c: 0xe7a201c0  swc1        $f2, 0x1C0($sp)
    ctx->pc = 0x29a60cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
    // 0x29a610: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x29a610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a614: 0x46180002  mul.s       $f0, $f0, $f24
    ctx->pc = 0x29a614u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
    // 0x29a618: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x29a618u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x29a61c: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x29a61cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x29a620: 0xc0a621c  jal         func_298870
    ctx->pc = 0x29A620u;
    SET_GPR_U32(ctx, 31, 0x29A628u);
    ctx->pc = 0x29A624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A620u;
    // 0x29a624: 0xe7a301c4  swc1        $f3, 0x1C4($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 452), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x298870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298870u, 0x29A620u, 0x29A628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A628u;
label_29a628:
    // 0x29a628: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x29a628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a62c: 0x4600f306  mov.s       $f12, $f30
    ctx->pc = 0x29a62cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[30]);
    // 0x29a630: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x29a630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x29a634: 0x461a0002  mul.s       $f0, $f0, $f26
    ctx->pc = 0x29a634u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[26]);
    // 0x29a638: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x29a638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29a63c: 0xc6c20000  lwc1        $f2, 0x0($s6)
    ctx->pc = 0x29a63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29a640: 0xc6c30004  lwc1        $f3, 0x4($s6)
    ctx->pc = 0x29a640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29a644: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x29a644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x29a648: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x29a648u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x29a64c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x29a64cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x29a650: 0x8fa30214  lw          $v1, 0x214($sp)
    ctx->pc = 0x29a650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
    // 0x29a654: 0x8fa2021c  lw          $v0, 0x21C($sp)
    ctx->pc = 0x29a654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
    // 0x29a658: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x29a658u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x29a65c: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x29a65cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x29a660: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x29a660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x29a664: 0x8fa7022c  lw          $a3, 0x22C($sp)
    ctx->pc = 0x29a664u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 556)));
    // 0x29a668: 0x8fa80210  lw          $t0, 0x210($sp)
    ctx->pc = 0x29a668u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x29a66c: 0x8fa30228  lw          $v1, 0x228($sp)
    ctx->pc = 0x29a66cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 552)));
    // 0x29a670: 0x8fa20220  lw          $v0, 0x220($sp)
    ctx->pc = 0x29a670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x29a674: 0xe7a001a0  swc1        $f0, 0x1A0($sp)
    ctx->pc = 0x29a674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x29a678: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x29a678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x29a67c: 0xafa80010  sw          $t0, 0x10($sp)
    ctx->pc = 0x29a67cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 8));
    // 0x29a680: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x29a680u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a684: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x29a684u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    // 0x29a688: 0x26080003  addiu       $t0, $s0, 0x3
    ctx->pc = 0x29a688u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x29a68c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x29a68cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x29a690: 0xafb60038  sw          $s6, 0x38($sp)
    ctx->pc = 0x29a690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 22));
    // 0x29a694: 0x8fa30224  lw          $v1, 0x224($sp)
    ctx->pc = 0x29a694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 548)));
    // 0x29a698: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x29a698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a69c: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x29a69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x29a6a0: 0x461a0842  mul.s       $f1, $f1, $f26
    ctx->pc = 0x29a6a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[26]);
    // 0x29a6a4: 0x8fa401f8  lw          $a0, 0x1F8($sp)
    ctx->pc = 0x29a6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x29a6a8: 0x8fa501fc  lw          $a1, 0x1FC($sp)
    ctx->pc = 0x29a6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x29a6ac: 0x8fa60200  lw          $a2, 0x200($sp)
    ctx->pc = 0x29a6acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x29a6b0: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x29a6b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x29a6b4: 0x8fa901e4  lw          $t1, 0x1E4($sp)
    ctx->pc = 0x29a6b4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
    // 0x29a6b8: 0x8faa01e8  lw          $t2, 0x1E8($sp)
    ctx->pc = 0x29a6b8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x29a6bc: 0x8fab01ec  lw          $t3, 0x1EC($sp)
    ctx->pc = 0x29a6bcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x29a6c0: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x29a6c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x29a6c4: 0xafa30048  sw          $v1, 0x48($sp)
    ctx->pc = 0x29a6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
    // 0x29a6c8: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x29a6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x29a6cc: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x29a6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x29a6d0: 0xe7a101a4  swc1        $f1, 0x1A4($sp)
    ctx->pc = 0x29a6d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 420), bits); }
    // 0x29a6d4: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x29a6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a6d8: 0x461a0002  mul.s       $f0, $f0, $f26
    ctx->pc = 0x29a6d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[26]);
    // 0x29a6dc: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x29a6dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x29a6e0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x29a6e0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x29a6e4: 0xe7a201d0  swc1        $f2, 0x1D0($sp)
    ctx->pc = 0x29a6e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x29a6e8: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x29a6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a6ec: 0x461a0002  mul.s       $f0, $f0, $f26
    ctx->pc = 0x29a6ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[26]);
    // 0x29a6f0: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x29a6f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x29a6f4: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x29a6f4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x29a6f8: 0xc0a621c  jal         func_298870
    ctx->pc = 0x29A6F8u;
    SET_GPR_U32(ctx, 31, 0x29A700u);
    ctx->pc = 0x29A6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A6F8u;
    // 0x29a6fc: 0xe7a301d4  swc1        $f3, 0x1D4($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 468), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x298870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298870u, 0x29A6F8u, 0x29A700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A700u;
label_29a700:
    // 0x29a700: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x29a700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a704: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29a704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29a708: 0xc6c10000  lwc1        $f1, 0x0($s6)
    ctx->pc = 0x29a708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a70c: 0x26080004  addiu       $t0, $s0, 0x4
    ctx->pc = 0x29a70cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x29a710: 0xc6c20004  lwc1        $f2, 0x4($s6)
    ctx->pc = 0x29a710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29a714: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x29a714u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a718: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x29a718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x29a71c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x29a71cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29a720: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x29a720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x29a724: 0x4600f306  mov.s       $f12, $f30
    ctx->pc = 0x29a724u;
    ctx->f[12] = FPU_MOV_S(ctx->f[30]);
    // 0x29a728: 0x8fa6022c  lw          $a2, 0x22C($sp)
    ctx->pc = 0x29a728u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 556)));
    // 0x29a72c: 0x8fa20210  lw          $v0, 0x210($sp)
    ctx->pc = 0x29a72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x29a730: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x29a730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x29a734: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x29a734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x29a738: 0xe7a001b0  swc1        $f0, 0x1B0($sp)
    ctx->pc = 0x29a738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x29a73c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x29a73cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x29a740: 0x8fa30218  lw          $v1, 0x218($sp)
    ctx->pc = 0x29a740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29a744: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x29a744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a748: 0x8fa20214  lw          $v0, 0x214($sp)
    ctx->pc = 0x29a748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
    // 0x29a74c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x29a74cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x29a750: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x29a750u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x29a754: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x29a754u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x29a758: 0x8fa3021c  lw          $v1, 0x21C($sp)
    ctx->pc = 0x29a758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
    // 0x29a75c: 0x8fa20228  lw          $v0, 0x228($sp)
    ctx->pc = 0x29a75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 552)));
    // 0x29a760: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x29a760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x29a764: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x29a764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x29a768: 0xe7a001b4  swc1        $f0, 0x1B4($sp)
    ctx->pc = 0x29a768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 436), bits); }
    // 0x29a76c: 0xafb60038  sw          $s6, 0x38($sp)
    ctx->pc = 0x29a76cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 22));
    // 0x29a770: 0x8fa30220  lw          $v1, 0x220($sp)
    ctx->pc = 0x29a770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x29a774: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x29a774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a778: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x29a778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x29a77c: 0x8fa20224  lw          $v0, 0x224($sp)
    ctx->pc = 0x29a77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 548)));
    // 0x29a780: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x29a780u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29a784: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x29a784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x29a788: 0x8fa401f8  lw          $a0, 0x1F8($sp)
    ctx->pc = 0x29a788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x29a78c: 0x8fa501fc  lw          $a1, 0x1FC($sp)
    ctx->pc = 0x29a78cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x29a790: 0x8fa60200  lw          $a2, 0x200($sp)
    ctx->pc = 0x29a790u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x29a794: 0x8fa901e4  lw          $t1, 0x1E4($sp)
    ctx->pc = 0x29a794u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
    // 0x29a798: 0x8faa01e8  lw          $t2, 0x1E8($sp)
    ctx->pc = 0x29a798u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x29a79c: 0x8fab01ec  lw          $t3, 0x1EC($sp)
    ctx->pc = 0x29a79cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x29a7a0: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x29a7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x29a7a4: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x29a7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
    // 0x29a7a8: 0xe7a101c0  swc1        $f1, 0x1C0($sp)
    ctx->pc = 0x29a7a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
    // 0x29a7ac: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x29a7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a7b0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x29a7b0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x29a7b4: 0xc0a621c  jal         func_298870
    ctx->pc = 0x29A7B4u;
    SET_GPR_U32(ctx, 31, 0x29A7BCu);
    ctx->pc = 0x29A7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A7B4u;
    // 0x29a7b8: 0xe7a201c4  swc1        $f2, 0x1C4($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 452), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x298870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298870u, 0x29A7B4u, 0x29A7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A7BCu;
label_29a7bc:
    // 0x29a7bc: 0x2ae20010  slti        $v0, $s7, 0x10
    ctx->pc = 0x29a7bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x29a7c0: 0x5440fe0d  bnel        $v0, $zero, . + 4 + (-0x1F3 << 2)
    ctx->pc = 0x29A7C0u;
    {
        const bool branch_taken_0x29a7c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29a7c0) {
            ctx->pc = 0x29A7C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29A7C0u;
            // 0x29a7c4: 0x26f50001  addiu       $s5, $s7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x299FF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_299ff8;
        }
    }
    ctx->pc = 0x29A7C8u;
    // 0x29a7c8: 0x8fa40204  lw          $a0, 0x204($sp)
    ctx->pc = 0x29a7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
    // 0x29a7cc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29A7CCu;
    {
        const bool branch_taken_0x29a7cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A7CCu;
        // 0x29a7d0: 0x2403007f  addiu       $v1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a7cc) {
            ctx->pc = 0x29A7E0u;
            goto label_29a7e0;
        }
    }
    ctx->pc = 0x29A7D4u;
    // 0x29a7d4: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x29a7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x29a7d8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x29A7D8u;
    {
        const bool branch_taken_0x29a7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A7D8u;
        // 0x29a7dc: 0x2402007f  addiu       $v0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a7d8) {
            ctx->pc = 0x29A830u;
            goto label_29a830;
        }
    }
    ctx->pc = 0x29A7E0u;
label_29a7e0:
    // 0x29a7e0: 0x8fa60350  lw          $a2, 0x350($sp)
    ctx->pc = 0x29a7e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 848)));
    // 0x29a7e4: 0x3c0141d8  lui         $at, 0x41D8
    ctx->pc = 0x29a7e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16856 << 16));
    // 0x29a7e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x29a7e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29a7ec: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x29a7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29a7f0: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x29a7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x29a7f4: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x29a7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29a7f8: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x29a7f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x29a7fc: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x29a7fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x29a800: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29a800u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29a804: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x29a804u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x29a808: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x29a808u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x29a80c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x29a80cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x29a810: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x29a810u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x29a814: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x29a814u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x29a818: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29a818u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x29a81c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x29a81cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x29a820: 0x46002024  .word       0x46002024                   # cvt.w.s     $f0, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29a820u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x29a824: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x29a824u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x29a828: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29a828u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x29a82c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x29a82cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_29a830:
    // 0x29a830: 0x8fa801f0  lw          $t0, 0x1F0($sp)
    ctx->pc = 0x29a830u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x29a834: 0x3c047f00  lui         $a0, 0x7F00
    ctx->pc = 0x29a834u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32512 << 16));
    // 0x29a838: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x29a838u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x29a83c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x29a83cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x29a840: 0xc5110008  lwc1        $f17, 0x8($t0)
    ctx->pc = 0x29a840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x29a844: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x29a844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x29a848: 0x8fa801e4  lw          $t0, 0x1E4($sp)
    ctx->pc = 0x29a848u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
    // 0x29a84c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x29a84cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x29a850: 0x8fa601e4  lw          $a2, 0x1E4($sp)
    ctx->pc = 0x29a850u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
    // 0x29a854: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x29a854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x29a858: 0xc5070004  lwc1        $f7, 0x4($t0)
    ctx->pc = 0x29a858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x29a85c: 0x8fa801ec  lw          $t0, 0x1EC($sp)
    ctx->pc = 0x29a85cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x29a860: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x29a860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x29a864: 0x8fa301e8  lw          $v1, 0x1E8($sp)
    ctx->pc = 0x29a864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x29a868: 0xc4c90008  lwc1        $f9, 0x8($a2)
    ctx->pc = 0x29a868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x29a86c: 0xc4c40000  lwc1        $f4, 0x0($a2)
    ctx->pc = 0x29a86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x29a870: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x29a870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a874: 0xc5060004  lwc1        $f6, 0x4($t0)
    ctx->pc = 0x29a874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x29a878: 0x8fa701ec  lw          $a3, 0x1EC($sp)
    ctx->pc = 0x29a878u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x29a87c: 0x8fa601e8  lw          $a2, 0x1E8($sp)
    ctx->pc = 0x29a87cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x29a880: 0x8fa801f0  lw          $t0, 0x1F0($sp)
    ctx->pc = 0x29a880u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x29a884: 0xc4880008  lwc1        $f8, 0x8($a0)
    ctx->pc = 0x29a884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x29a888: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x29a888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29a88c: 0xc4e50008  lwc1        $f5, 0x8($a3)
    ctx->pc = 0x29a88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x29a890: 0xc4cf0004  lwc1        $f15, 0x4($a2)
    ctx->pc = 0x29a890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x29a894: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x29a894u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a898: 0x8fa50238  lw          $a1, 0x238($sp)
    ctx->pc = 0x29a898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
    // 0x29a89c: 0x2406004f  addiu       $a2, $zero, 0x4F
    ctx->pc = 0x29a89cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x29a8a0: 0x8fa40234  lw          $a0, 0x234($sp)
    ctx->pc = 0x29a8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x29a8a4: 0x8fa30230  lw          $v1, 0x230($sp)
    ctx->pc = 0x29a8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x29a8a8: 0xc50d0000  lwc1        $f13, 0x0($t0)
    ctx->pc = 0x29a8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x29a8ac: 0xc5020004  lwc1        $f2, 0x4($t0)
    ctx->pc = 0x29a8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_29a8b0:
    // 0x29a8b0: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x29a8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x29a8b4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x29a8b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x29a8b8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x29a8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x29a8bc: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x29a8bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x29a8c0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x29a8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x29a8c4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x29a8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x29a8c8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x29a8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x29a8cc: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x29a8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x29a8d0: 0x4c1fff7  bgez        $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x29A8D0u;
    {
        const bool branch_taken_0x29a8d0 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x29A8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A8D0u;
        // 0x29a8d4: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a8d0) {
            ctx->pc = 0x29A8B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29a8b0;
        }
    }
    ctx->pc = 0x29A8D8u;
    // 0x29a8d8: 0x460d0834  c.lt.s      $f1, $f13
    ctx->pc = 0x29a8d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29a8dc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x29A8DCu;
    {
        const bool branch_taken_0x29a8dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29a8dc) {
            ctx->pc = 0x29A8F8u;
            goto label_29a8f8;
        }
    }
    ctx->pc = 0x29A8E4u;
    // 0x29a8e4: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x29a8e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29a8e8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x29A8E8u;
    {
        const bool branch_taken_0x29a8e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29a8e8) {
            ctx->pc = 0x29A904u;
            goto label_29a904;
        }
    }
    ctx->pc = 0x29A8F0u;
    // 0x29a8f0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x29A8F0u;
    {
        const bool branch_taken_0x29a8f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a8f0) {
            ctx->pc = 0x29A918u;
            goto label_29a918;
        }
    }
    ctx->pc = 0x29A8F8u;
label_29a8f8:
    // 0x29a8f8: 0x460d1834  c.lt.s      $f3, $f13
    ctx->pc = 0x29a8f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29a8fc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x29A8FCu;
    {
        const bool branch_taken_0x29a8fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29a8fc) {
            ctx->pc = 0x29A918u;
            goto label_29a918;
        }
    }
    ctx->pc = 0x29A904u;
label_29a904:
    // 0x29a904: 0x46032034  c.lt.s      $f4, $f3
    ctx->pc = 0x29a904u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29a908: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x29A908u;
    {
        const bool branch_taken_0x29a908 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29a908) {
            ctx->pc = 0x29A944u;
            goto label_29a944;
        }
    }
    ctx->pc = 0x29A910u;
    // 0x29a910: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x29A910u;
    {
        const bool branch_taken_0x29a910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a910) {
            ctx->pc = 0x29A954u;
            goto label_29a954;
        }
    }
    ctx->pc = 0x29A918u;
label_29a918:
    // 0x29a918: 0x460d0834  c.lt.s      $f1, $f13
    ctx->pc = 0x29a918u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29a91c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x29A91Cu;
    {
        const bool branch_taken_0x29a91c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29a91c) {
            ctx->pc = 0x29A938u;
            goto label_29a938;
        }
    }
    ctx->pc = 0x29A924u;
    // 0x29a924: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x29a924u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29a928: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x29A928u;
    {
        const bool branch_taken_0x29a928 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29a928) {
            ctx->pc = 0x29A944u;
            goto label_29a944;
        }
    }
    ctx->pc = 0x29A930u;
    // 0x29a930: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29A930u;
    {
        const bool branch_taken_0x29a930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a930) {
            ctx->pc = 0x29A954u;
            goto label_29a954;
        }
    }
    ctx->pc = 0x29A938u;
label_29a938:
    // 0x29a938: 0x460d2034  c.lt.s      $f4, $f13
    ctx->pc = 0x29a938u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29a93c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x29A93Cu;
    {
        const bool branch_taken_0x29a93c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29a93c) {
            ctx->pc = 0x29A954u;
            goto label_29a954;
        }
    }
    ctx->pc = 0x29A944u;
label_29a944:
    // 0x29a944: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x29a944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x29a948: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29a948u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29a94c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x29A94Cu;
    {
        const bool branch_taken_0x29a94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A94Cu;
        // 0x29a950: 0x46002301  sub.s       $f12, $f4, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a94c) {
            ctx->pc = 0x29A9B8u;
            goto label_29a9b8;
        }
    }
    ctx->pc = 0x29A954u;
label_29a954:
    // 0x29a954: 0x460d0834  c.lt.s      $f1, $f13
    ctx->pc = 0x29a954u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29a958: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x29A958u;
    {
        const bool branch_taken_0x29a958 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29a958) {
            ctx->pc = 0x29A974u;
            goto label_29a974;
        }
    }
    ctx->pc = 0x29A960u;
    // 0x29a960: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x29a960u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29a964: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x29A964u;
    {
        const bool branch_taken_0x29a964 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29a964) {
            ctx->pc = 0x29A980u;
            goto label_29a980;
        }
    }
    ctx->pc = 0x29A96Cu;
    // 0x29a96c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29A96Cu;
    {
        const bool branch_taken_0x29a96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a96c) {
            ctx->pc = 0x29A990u;
            goto label_29a990;
        }
    }
    ctx->pc = 0x29A974u;
label_29a974:
    // 0x29a974: 0x460d1834  c.lt.s      $f3, $f13
    ctx->pc = 0x29a974u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29a978: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x29A978u;
    {
        const bool branch_taken_0x29a978 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29a978) {
            ctx->pc = 0x29A990u;
            goto label_29a990;
        }
    }
    ctx->pc = 0x29A980u;
label_29a980:
    // 0x29a980: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x29a980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x29a984: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29a984u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29a988: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x29A988u;
    {
        const bool branch_taken_0x29a988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A988u;
        // 0x29a98c: 0x46001b01  sub.s       $f12, $f3, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a988) {
            ctx->pc = 0x29A9B8u;
            goto label_29a9b8;
        }
    }
    ctx->pc = 0x29A990u;
label_29a990:
    // 0x29a990: 0x460d0834  c.lt.s      $f1, $f13
    ctx->pc = 0x29a990u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29a994: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x29A994u;
    {
        const bool branch_taken_0x29a994 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29a994) {
            ctx->pc = 0x29A9ACu;
            goto label_29a9ac;
        }
    }
    ctx->pc = 0x29A99Cu;
    // 0x29a99c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x29a99cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x29a9a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29a9a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29a9a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x29A9A4u;
    {
        const bool branch_taken_0x29a9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A9A4u;
        // 0x29a9a8: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a9a4) {
            ctx->pc = 0x29A9B8u;
            goto label_29a9b8;
        }
    }
    ctx->pc = 0x29A9ACu;
label_29a9ac:
    // 0x29a9ac: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x29a9acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x29a9b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29a9b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29a9b4: 0x46006b01  sub.s       $f12, $f13, $f0
    ctx->pc = 0x29a9b4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
label_29a9b8:
    // 0x29a9b8: 0x46016834  c.lt.s      $f13, $f1
    ctx->pc = 0x29a9b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29a9bc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x29A9BCu;
    {
        const bool branch_taken_0x29a9bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29a9bc) {
            ctx->pc = 0x29A9D8u;
            goto label_29a9d8;
        }
    }
    ctx->pc = 0x29A9C4u;
    // 0x29a9c4: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x29a9c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29a9c8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x29A9C8u;
    {
        const bool branch_taken_0x29a9c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29a9c8) {
            ctx->pc = 0x29A9E4u;
            goto label_29a9e4;
        }
    }
    ctx->pc = 0x29A9D0u;
    // 0x29a9d0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x29A9D0u;
    {
        const bool branch_taken_0x29a9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a9d0) {
            ctx->pc = 0x29A9F8u;
            goto label_29a9f8;
        }
    }
    ctx->pc = 0x29A9D8u;
label_29a9d8:
    // 0x29a9d8: 0x46036834  c.lt.s      $f13, $f3
    ctx->pc = 0x29a9d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29a9dc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x29A9DCu;
    {
        const bool branch_taken_0x29a9dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29a9dc) {
            ctx->pc = 0x29A9F8u;
            goto label_29a9f8;
        }
    }
    ctx->pc = 0x29A9E4u;
label_29a9e4:
    // 0x29a9e4: 0x46041834  c.lt.s      $f3, $f4
    ctx->pc = 0x29a9e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29a9e8: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x29A9E8u;
    {
        const bool branch_taken_0x29a9e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29a9e8) {
            ctx->pc = 0x29AA24u;
            goto label_29aa24;
        }
    }
    ctx->pc = 0x29A9F0u;
    // 0x29a9f0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x29A9F0u;
    {
        const bool branch_taken_0x29a9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a9f0) {
            ctx->pc = 0x29AA34u;
            goto label_29aa34;
        }
    }
    ctx->pc = 0x29A9F8u;
label_29a9f8:
    // 0x29a9f8: 0x46016834  c.lt.s      $f13, $f1
    ctx->pc = 0x29a9f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29a9fc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x29A9FCu;
    {
        const bool branch_taken_0x29a9fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29a9fc) {
            ctx->pc = 0x29AA18u;
            goto label_29aa18;
        }
    }
    ctx->pc = 0x29AA04u;
    // 0x29aa04: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x29aa04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29aa08: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x29AA08u;
    {
        const bool branch_taken_0x29aa08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29aa08) {
            ctx->pc = 0x29AA24u;
            goto label_29aa24;
        }
    }
    ctx->pc = 0x29AA10u;
    // 0x29aa10: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29AA10u;
    {
        const bool branch_taken_0x29aa10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29aa10) {
            ctx->pc = 0x29AA34u;
            goto label_29aa34;
        }
    }
    ctx->pc = 0x29AA18u;
label_29aa18:
    // 0x29aa18: 0x46046834  c.lt.s      $f13, $f4
    ctx->pc = 0x29aa18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29aa1c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x29AA1Cu;
    {
        const bool branch_taken_0x29aa1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29aa1c) {
            ctx->pc = 0x29AA34u;
            goto label_29aa34;
        }
    }
    ctx->pc = 0x29AA24u;
label_29aa24:
    // 0x29aa24: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x29aa24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x29aa28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29aa28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29aa2c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x29AA2Cu;
    {
        const bool branch_taken_0x29aa2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AA2Cu;
        // 0x29aa30: 0x46002340  add.s       $f13, $f4, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29aa2c) {
            ctx->pc = 0x29AA98u;
            goto label_29aa98;
        }
    }
    ctx->pc = 0x29AA34u;
label_29aa34:
    // 0x29aa34: 0x46016834  c.lt.s      $f13, $f1
    ctx->pc = 0x29aa34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29aa38: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x29AA38u;
    {
        const bool branch_taken_0x29aa38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29aa38) {
            ctx->pc = 0x29AA54u;
            goto label_29aa54;
        }
    }
    ctx->pc = 0x29AA40u;
    // 0x29aa40: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x29aa40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29aa44: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x29AA44u;
    {
        const bool branch_taken_0x29aa44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29aa44) {
            ctx->pc = 0x29AA60u;
            goto label_29aa60;
        }
    }
    ctx->pc = 0x29AA4Cu;
    // 0x29aa4c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29AA4Cu;
    {
        const bool branch_taken_0x29aa4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29aa4c) {
            ctx->pc = 0x29AA70u;
            goto label_29aa70;
        }
    }
    ctx->pc = 0x29AA54u;
label_29aa54:
    // 0x29aa54: 0x46036834  c.lt.s      $f13, $f3
    ctx->pc = 0x29aa54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29aa58: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x29AA58u;
    {
        const bool branch_taken_0x29aa58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29aa58) {
            ctx->pc = 0x29AA70u;
            goto label_29aa70;
        }
    }
    ctx->pc = 0x29AA60u;
label_29aa60:
    // 0x29aa60: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x29aa60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x29aa64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29aa64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29aa68: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x29AA68u;
    {
        const bool branch_taken_0x29aa68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AA68u;
        // 0x29aa6c: 0x46001b40  add.s       $f13, $f3, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29aa68) {
            ctx->pc = 0x29AA98u;
            goto label_29aa98;
        }
    }
    ctx->pc = 0x29AA70u;
label_29aa70:
    // 0x29aa70: 0x46016834  c.lt.s      $f13, $f1
    ctx->pc = 0x29aa70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29aa74: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x29AA74u;
    {
        const bool branch_taken_0x29aa74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29aa74) {
            ctx->pc = 0x29AA8Cu;
            goto label_29aa8c;
        }
    }
    ctx->pc = 0x29AA7Cu;
    // 0x29aa7c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x29aa7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x29aa80: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29aa80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29aa84: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x29AA84u;
    {
        const bool branch_taken_0x29aa84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AA84u;
        // 0x29aa88: 0x46000b40  add.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29aa84) {
            ctx->pc = 0x29AA98u;
            goto label_29aa98;
        }
    }
    ctx->pc = 0x29AA8Cu;
label_29aa8c:
    // 0x29aa8c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x29aa8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x29aa90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29aa90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29aa94: 0x46006b40  add.s       $f13, $f13, $f0
    ctx->pc = 0x29aa94u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
label_29aa98:
    // 0x29aa98: 0x46023034  c.lt.s      $f6, $f2
    ctx->pc = 0x29aa98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29aa9c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x29AA9Cu;
    {
        const bool branch_taken_0x29aa9c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29aa9c) {
            ctx->pc = 0x29AAB8u;
            goto label_29aab8;
        }
    }
    ctx->pc = 0x29AAA4u;
    // 0x29aaa4: 0x46067834  c.lt.s      $f15, $f6
    ctx->pc = 0x29aaa4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[15], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29aaa8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x29AAA8u;
    {
        const bool branch_taken_0x29aaa8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29aaa8) {
            ctx->pc = 0x29AAC4u;
            goto label_29aac4;
        }
    }
    ctx->pc = 0x29AAB0u;
    // 0x29aab0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x29AAB0u;
    {
        const bool branch_taken_0x29aab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29aab0) {
            ctx->pc = 0x29AAD8u;
            goto label_29aad8;
        }
    }
    ctx->pc = 0x29AAB8u;
label_29aab8:
    // 0x29aab8: 0x46027834  c.lt.s      $f15, $f2
    ctx->pc = 0x29aab8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[15], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29aabc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x29AABCu;
    {
        const bool branch_taken_0x29aabc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29aabc) {
            ctx->pc = 0x29AAD8u;
            goto label_29aad8;
        }
    }
    ctx->pc = 0x29AAC4u;
label_29aac4:
    // 0x29aac4: 0x460f3834  c.lt.s      $f7, $f15
    ctx->pc = 0x29aac4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[15])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29aac8: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x29AAC8u;
    {
        const bool branch_taken_0x29aac8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29aac8) {
            ctx->pc = 0x29AB04u;
            goto label_29ab04;
        }
    }
    ctx->pc = 0x29AAD0u;
    // 0x29aad0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x29AAD0u;
    {
        const bool branch_taken_0x29aad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29aad0) {
            ctx->pc = 0x29AB14u;
            goto label_29ab14;
        }
    }
    ctx->pc = 0x29AAD8u;
label_29aad8:
    // 0x29aad8: 0x46023034  c.lt.s      $f6, $f2
    ctx->pc = 0x29aad8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29aadc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x29AADCu;
    {
        const bool branch_taken_0x29aadc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29aadc) {
            ctx->pc = 0x29AAF8u;
            goto label_29aaf8;
        }
    }
    ctx->pc = 0x29AAE4u;
    // 0x29aae4: 0x46063834  c.lt.s      $f7, $f6
    ctx->pc = 0x29aae4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29aae8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x29AAE8u;
    {
        const bool branch_taken_0x29aae8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29aae8) {
            ctx->pc = 0x29AB04u;
            goto label_29ab04;
        }
    }
    ctx->pc = 0x29AAF0u;
    // 0x29aaf0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29AAF0u;
    {
        const bool branch_taken_0x29aaf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29aaf0) {
            ctx->pc = 0x29AB14u;
            goto label_29ab14;
        }
    }
    ctx->pc = 0x29AAF8u;
label_29aaf8:
    // 0x29aaf8: 0x46023834  c.lt.s      $f7, $f2
    ctx->pc = 0x29aaf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29aafc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x29AAFCu;
    {
        const bool branch_taken_0x29aafc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29aafc) {
            ctx->pc = 0x29AB14u;
            goto label_29ab14;
        }
    }
    ctx->pc = 0x29AB04u;
label_29ab04:
    // 0x29ab04: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x29ab04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x29ab08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29ab08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ab0c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x29AB0Cu;
    {
        const bool branch_taken_0x29ab0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AB0Cu;
        // 0x29ab10: 0x46003b81  sub.s       $f14, $f7, $f0 (Delay Slot)
        ctx->f[14] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ab0c) {
            ctx->pc = 0x29AB78u;
            goto label_29ab78;
        }
    }
    ctx->pc = 0x29AB14u;
label_29ab14:
    // 0x29ab14: 0x46023034  c.lt.s      $f6, $f2
    ctx->pc = 0x29ab14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ab18: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x29AB18u;
    {
        const bool branch_taken_0x29ab18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ab18) {
            ctx->pc = 0x29AB34u;
            goto label_29ab34;
        }
    }
    ctx->pc = 0x29AB20u;
    // 0x29ab20: 0x46067834  c.lt.s      $f15, $f6
    ctx->pc = 0x29ab20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[15], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ab24: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x29AB24u;
    {
        const bool branch_taken_0x29ab24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ab24) {
            ctx->pc = 0x29AB40u;
            goto label_29ab40;
        }
    }
    ctx->pc = 0x29AB2Cu;
    // 0x29ab2c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29AB2Cu;
    {
        const bool branch_taken_0x29ab2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ab2c) {
            ctx->pc = 0x29AB50u;
            goto label_29ab50;
        }
    }
    ctx->pc = 0x29AB34u;
label_29ab34:
    // 0x29ab34: 0x46027834  c.lt.s      $f15, $f2
    ctx->pc = 0x29ab34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[15], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ab38: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x29AB38u;
    {
        const bool branch_taken_0x29ab38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ab38) {
            ctx->pc = 0x29AB50u;
            goto label_29ab50;
        }
    }
    ctx->pc = 0x29AB40u;
label_29ab40:
    // 0x29ab40: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x29ab40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x29ab44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29ab44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ab48: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x29AB48u;
    {
        const bool branch_taken_0x29ab48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AB48u;
        // 0x29ab4c: 0x46007b81  sub.s       $f14, $f15, $f0 (Delay Slot)
        ctx->f[14] = FPU_SUB_S(ctx->f[15], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ab48) {
            ctx->pc = 0x29AB78u;
            goto label_29ab78;
        }
    }
    ctx->pc = 0x29AB50u;
label_29ab50:
    // 0x29ab50: 0x46023034  c.lt.s      $f6, $f2
    ctx->pc = 0x29ab50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ab54: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x29AB54u;
    {
        const bool branch_taken_0x29ab54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ab54) {
            ctx->pc = 0x29AB6Cu;
            goto label_29ab6c;
        }
    }
    ctx->pc = 0x29AB5Cu;
    // 0x29ab5c: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x29ab5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x29ab60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29ab60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ab64: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x29AB64u;
    {
        const bool branch_taken_0x29ab64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AB64u;
        // 0x29ab68: 0x46003381  sub.s       $f14, $f6, $f0 (Delay Slot)
        ctx->f[14] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ab64) {
            ctx->pc = 0x29AB78u;
            goto label_29ab78;
        }
    }
    ctx->pc = 0x29AB6Cu;
label_29ab6c:
    // 0x29ab6c: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x29ab6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x29ab70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29ab70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ab74: 0x46001381  sub.s       $f14, $f2, $f0
    ctx->pc = 0x29ab74u;
    ctx->f[14] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_29ab78:
    // 0x29ab78: 0x46061034  c.lt.s      $f2, $f6
    ctx->pc = 0x29ab78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ab7c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x29AB7Cu;
    {
        const bool branch_taken_0x29ab7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ab7c) {
            ctx->pc = 0x29AB98u;
            goto label_29ab98;
        }
    }
    ctx->pc = 0x29AB84u;
    // 0x29ab84: 0x460f3034  c.lt.s      $f6, $f15
    ctx->pc = 0x29ab84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[15])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ab88: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x29AB88u;
    {
        const bool branch_taken_0x29ab88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ab88) {
            ctx->pc = 0x29ABA4u;
            goto label_29aba4;
        }
    }
    ctx->pc = 0x29AB90u;
    // 0x29ab90: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x29AB90u;
    {
        const bool branch_taken_0x29ab90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ab90) {
            ctx->pc = 0x29ABB8u;
            goto label_29abb8;
        }
    }
    ctx->pc = 0x29AB98u;
label_29ab98:
    // 0x29ab98: 0x460f1034  c.lt.s      $f2, $f15
    ctx->pc = 0x29ab98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[15])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ab9c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x29AB9Cu;
    {
        const bool branch_taken_0x29ab9c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ab9c) {
            ctx->pc = 0x29ABB8u;
            goto label_29abb8;
        }
    }
    ctx->pc = 0x29ABA4u;
label_29aba4:
    // 0x29aba4: 0x46077834  c.lt.s      $f15, $f7
    ctx->pc = 0x29aba4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[15], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29aba8: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x29ABA8u;
    {
        const bool branch_taken_0x29aba8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29aba8) {
            ctx->pc = 0x29ABE4u;
            goto label_29abe4;
        }
    }
    ctx->pc = 0x29ABB0u;
    // 0x29abb0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x29ABB0u;
    {
        const bool branch_taken_0x29abb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29abb0) {
            ctx->pc = 0x29ABF4u;
            goto label_29abf4;
        }
    }
    ctx->pc = 0x29ABB8u;
label_29abb8:
    // 0x29abb8: 0x46061034  c.lt.s      $f2, $f6
    ctx->pc = 0x29abb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29abbc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x29ABBCu;
    {
        const bool branch_taken_0x29abbc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29abbc) {
            ctx->pc = 0x29ABD8u;
            goto label_29abd8;
        }
    }
    ctx->pc = 0x29ABC4u;
    // 0x29abc4: 0x46073034  c.lt.s      $f6, $f7
    ctx->pc = 0x29abc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29abc8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x29ABC8u;
    {
        const bool branch_taken_0x29abc8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29abc8) {
            ctx->pc = 0x29ABE4u;
            goto label_29abe4;
        }
    }
    ctx->pc = 0x29ABD0u;
    // 0x29abd0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29ABD0u;
    {
        const bool branch_taken_0x29abd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29abd0) {
            ctx->pc = 0x29ABF4u;
            goto label_29abf4;
        }
    }
    ctx->pc = 0x29ABD8u;
label_29abd8:
    // 0x29abd8: 0x46071034  c.lt.s      $f2, $f7
    ctx->pc = 0x29abd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29abdc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x29ABDCu;
    {
        const bool branch_taken_0x29abdc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29abdc) {
            ctx->pc = 0x29ABF4u;
            goto label_29abf4;
        }
    }
    ctx->pc = 0x29ABE4u;
label_29abe4:
    // 0x29abe4: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x29abe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x29abe8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29abe8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29abec: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x29ABECu;
    {
        const bool branch_taken_0x29abec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29ABF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ABECu;
        // 0x29abf0: 0x46003bc0  add.s       $f15, $f7, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29abec) {
            ctx->pc = 0x29AC58u;
            goto label_29ac58;
        }
    }
    ctx->pc = 0x29ABF4u;
label_29abf4:
    // 0x29abf4: 0x46061034  c.lt.s      $f2, $f6
    ctx->pc = 0x29abf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29abf8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x29ABF8u;
    {
        const bool branch_taken_0x29abf8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29abf8) {
            ctx->pc = 0x29AC14u;
            goto label_29ac14;
        }
    }
    ctx->pc = 0x29AC00u;
    // 0x29ac00: 0x460f3034  c.lt.s      $f6, $f15
    ctx->pc = 0x29ac00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[15])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ac04: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x29AC04u;
    {
        const bool branch_taken_0x29ac04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ac04) {
            ctx->pc = 0x29AC20u;
            goto label_29ac20;
        }
    }
    ctx->pc = 0x29AC0Cu;
    // 0x29ac0c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29AC0Cu;
    {
        const bool branch_taken_0x29ac0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ac0c) {
            ctx->pc = 0x29AC30u;
            goto label_29ac30;
        }
    }
    ctx->pc = 0x29AC14u;
label_29ac14:
    // 0x29ac14: 0x460f1034  c.lt.s      $f2, $f15
    ctx->pc = 0x29ac14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[15])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ac18: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x29AC18u;
    {
        const bool branch_taken_0x29ac18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ac18) {
            ctx->pc = 0x29AC30u;
            goto label_29ac30;
        }
    }
    ctx->pc = 0x29AC20u;
label_29ac20:
    // 0x29ac20: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x29ac20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x29ac24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29ac24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ac28: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x29AC28u;
    {
        const bool branch_taken_0x29ac28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AC28u;
        // 0x29ac2c: 0x46007bc0  add.s       $f15, $f15, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[15], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ac28) {
            ctx->pc = 0x29AC58u;
            goto label_29ac58;
        }
    }
    ctx->pc = 0x29AC30u;
label_29ac30:
    // 0x29ac30: 0x46061034  c.lt.s      $f2, $f6
    ctx->pc = 0x29ac30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ac34: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x29AC34u;
    {
        const bool branch_taken_0x29ac34 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ac34) {
            ctx->pc = 0x29AC4Cu;
            goto label_29ac4c;
        }
    }
    ctx->pc = 0x29AC3Cu;
    // 0x29ac3c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x29ac3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x29ac40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29ac40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ac44: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x29AC44u;
    {
        const bool branch_taken_0x29ac44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AC44u;
        // 0x29ac48: 0x460033c0  add.s       $f15, $f6, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ac44) {
            ctx->pc = 0x29AC58u;
            goto label_29ac58;
        }
    }
    ctx->pc = 0x29AC4Cu;
label_29ac4c:
    // 0x29ac4c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x29ac4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x29ac50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29ac50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ac54: 0x460013c0  add.s       $f15, $f2, $f0
    ctx->pc = 0x29ac54u;
    ctx->f[15] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_29ac58:
    // 0x29ac58: 0x46112834  c.lt.s      $f5, $f17
    ctx->pc = 0x29ac58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[17])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ac5c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x29AC5Cu;
    {
        const bool branch_taken_0x29ac5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ac5c) {
            ctx->pc = 0x29AC78u;
            goto label_29ac78;
        }
    }
    ctx->pc = 0x29AC64u;
    // 0x29ac64: 0x46054034  c.lt.s      $f8, $f5
    ctx->pc = 0x29ac64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ac68: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x29AC68u;
    {
        const bool branch_taken_0x29ac68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ac68) {
            ctx->pc = 0x29AC84u;
            goto label_29ac84;
        }
    }
    ctx->pc = 0x29AC70u;
    // 0x29ac70: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x29AC70u;
    {
        const bool branch_taken_0x29ac70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ac70) {
            ctx->pc = 0x29AC98u;
            goto label_29ac98;
        }
    }
    ctx->pc = 0x29AC78u;
label_29ac78:
    // 0x29ac78: 0x46114034  c.lt.s      $f8, $f17
    ctx->pc = 0x29ac78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[17])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ac7c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x29AC7Cu;
    {
        const bool branch_taken_0x29ac7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ac7c) {
            ctx->pc = 0x29AC98u;
            goto label_29ac98;
        }
    }
    ctx->pc = 0x29AC84u;
label_29ac84:
    // 0x29ac84: 0x46084834  c.lt.s      $f9, $f8
    ctx->pc = 0x29ac84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[9], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ac88: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x29AC88u;
    {
        const bool branch_taken_0x29ac88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ac88) {
            ctx->pc = 0x29ACC4u;
            goto label_29acc4;
        }
    }
    ctx->pc = 0x29AC90u;
    // 0x29ac90: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x29AC90u;
    {
        const bool branch_taken_0x29ac90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ac90) {
            ctx->pc = 0x29ACD4u;
            goto label_29acd4;
        }
    }
    ctx->pc = 0x29AC98u;
label_29ac98:
    // 0x29ac98: 0x46112834  c.lt.s      $f5, $f17
    ctx->pc = 0x29ac98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[17])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ac9c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x29AC9Cu;
    {
        const bool branch_taken_0x29ac9c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ac9c) {
            ctx->pc = 0x29ACB8u;
            goto label_29acb8;
        }
    }
    ctx->pc = 0x29ACA4u;
    // 0x29aca4: 0x46054834  c.lt.s      $f9, $f5
    ctx->pc = 0x29aca4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[9], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29aca8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x29ACA8u;
    {
        const bool branch_taken_0x29aca8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29aca8) {
            ctx->pc = 0x29ACC4u;
            goto label_29acc4;
        }
    }
    ctx->pc = 0x29ACB0u;
    // 0x29acb0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29ACB0u;
    {
        const bool branch_taken_0x29acb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29acb0) {
            ctx->pc = 0x29ACD4u;
            goto label_29acd4;
        }
    }
    ctx->pc = 0x29ACB8u;
label_29acb8:
    // 0x29acb8: 0x46114834  c.lt.s      $f9, $f17
    ctx->pc = 0x29acb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[9], ctx->f[17])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29acbc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x29ACBCu;
    {
        const bool branch_taken_0x29acbc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29acbc) {
            ctx->pc = 0x29ACD4u;
            goto label_29acd4;
        }
    }
    ctx->pc = 0x29ACC4u;
label_29acc4:
    // 0x29acc4: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x29acc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x29acc8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29acc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29accc: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x29ACCCu;
    {
        const bool branch_taken_0x29accc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29ACD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ACCCu;
        // 0x29acd0: 0x46004c01  sub.s       $f16, $f9, $f0 (Delay Slot)
        ctx->f[16] = FPU_SUB_S(ctx->f[9], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29accc) {
            ctx->pc = 0x29AD38u;
            goto label_29ad38;
        }
    }
    ctx->pc = 0x29ACD4u;
label_29acd4:
    // 0x29acd4: 0x46112834  c.lt.s      $f5, $f17
    ctx->pc = 0x29acd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[17])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29acd8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x29ACD8u;
    {
        const bool branch_taken_0x29acd8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29acd8) {
            ctx->pc = 0x29ACF4u;
            goto label_29acf4;
        }
    }
    ctx->pc = 0x29ACE0u;
    // 0x29ace0: 0x46054034  c.lt.s      $f8, $f5
    ctx->pc = 0x29ace0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ace4: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x29ACE4u;
    {
        const bool branch_taken_0x29ace4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ace4) {
            ctx->pc = 0x29AD00u;
            goto label_29ad00;
        }
    }
    ctx->pc = 0x29ACECu;
    // 0x29acec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29ACECu;
    {
        const bool branch_taken_0x29acec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29acec) {
            ctx->pc = 0x29AD10u;
            goto label_29ad10;
        }
    }
    ctx->pc = 0x29ACF4u;
label_29acf4:
    // 0x29acf4: 0x46114034  c.lt.s      $f8, $f17
    ctx->pc = 0x29acf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[17])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29acf8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x29ACF8u;
    {
        const bool branch_taken_0x29acf8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29acf8) {
            ctx->pc = 0x29AD10u;
            goto label_29ad10;
        }
    }
    ctx->pc = 0x29AD00u;
label_29ad00:
    // 0x29ad00: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x29ad00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x29ad04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29ad04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ad08: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x29AD08u;
    {
        const bool branch_taken_0x29ad08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AD08u;
        // 0x29ad0c: 0x46004401  sub.s       $f16, $f8, $f0 (Delay Slot)
        ctx->f[16] = FPU_SUB_S(ctx->f[8], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ad08) {
            ctx->pc = 0x29AD38u;
            goto label_29ad38;
        }
    }
    ctx->pc = 0x29AD10u;
label_29ad10:
    // 0x29ad10: 0x46112834  c.lt.s      $f5, $f17
    ctx->pc = 0x29ad10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[17])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ad14: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x29AD14u;
    {
        const bool branch_taken_0x29ad14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ad14) {
            ctx->pc = 0x29AD2Cu;
            goto label_29ad2c;
        }
    }
    ctx->pc = 0x29AD1Cu;
    // 0x29ad1c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x29ad1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x29ad20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29ad20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ad24: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x29AD24u;
    {
        const bool branch_taken_0x29ad24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AD24u;
        // 0x29ad28: 0x46002c01  sub.s       $f16, $f5, $f0 (Delay Slot)
        ctx->f[16] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ad24) {
            ctx->pc = 0x29AD38u;
            goto label_29ad38;
        }
    }
    ctx->pc = 0x29AD2Cu;
label_29ad2c:
    // 0x29ad2c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x29ad2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x29ad30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29ad30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ad34: 0x46008c01  sub.s       $f16, $f17, $f0
    ctx->pc = 0x29ad34u;
    ctx->f[16] = FPU_SUB_S(ctx->f[17], ctx->f[0]);
label_29ad38:
    // 0x29ad38: 0x46058834  c.lt.s      $f17, $f5
    ctx->pc = 0x29ad38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[17], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ad3c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x29AD3Cu;
    {
        const bool branch_taken_0x29ad3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ad3c) {
            ctx->pc = 0x29AD58u;
            goto label_29ad58;
        }
    }
    ctx->pc = 0x29AD44u;
    // 0x29ad44: 0x46082834  c.lt.s      $f5, $f8
    ctx->pc = 0x29ad44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ad48: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x29AD48u;
    {
        const bool branch_taken_0x29ad48 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ad48) {
            ctx->pc = 0x29AD64u;
            goto label_29ad64;
        }
    }
    ctx->pc = 0x29AD50u;
    // 0x29ad50: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x29AD50u;
    {
        const bool branch_taken_0x29ad50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ad50) {
            ctx->pc = 0x29AD78u;
            goto label_29ad78;
        }
    }
    ctx->pc = 0x29AD58u;
label_29ad58:
    // 0x29ad58: 0x46088834  c.lt.s      $f17, $f8
    ctx->pc = 0x29ad58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[17], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ad5c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x29AD5Cu;
    {
        const bool branch_taken_0x29ad5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ad5c) {
            ctx->pc = 0x29AD78u;
            goto label_29ad78;
        }
    }
    ctx->pc = 0x29AD64u;
label_29ad64:
    // 0x29ad64: 0x46094034  c.lt.s      $f8, $f9
    ctx->pc = 0x29ad64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ad68: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x29AD68u;
    {
        const bool branch_taken_0x29ad68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ad68) {
            ctx->pc = 0x29ADA4u;
            goto label_29ada4;
        }
    }
    ctx->pc = 0x29AD70u;
    // 0x29ad70: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x29AD70u;
    {
        const bool branch_taken_0x29ad70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ad70) {
            ctx->pc = 0x29ADB4u;
            goto label_29adb4;
        }
    }
    ctx->pc = 0x29AD78u;
label_29ad78:
    // 0x29ad78: 0x46058834  c.lt.s      $f17, $f5
    ctx->pc = 0x29ad78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[17], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ad7c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x29AD7Cu;
    {
        const bool branch_taken_0x29ad7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ad7c) {
            ctx->pc = 0x29AD98u;
            goto label_29ad98;
        }
    }
    ctx->pc = 0x29AD84u;
    // 0x29ad84: 0x46092834  c.lt.s      $f5, $f9
    ctx->pc = 0x29ad84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ad88: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x29AD88u;
    {
        const bool branch_taken_0x29ad88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ad88) {
            ctx->pc = 0x29ADA4u;
            goto label_29ada4;
        }
    }
    ctx->pc = 0x29AD90u;
    // 0x29ad90: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29AD90u;
    {
        const bool branch_taken_0x29ad90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ad90) {
            ctx->pc = 0x29ADB4u;
            goto label_29adb4;
        }
    }
    ctx->pc = 0x29AD98u;
label_29ad98:
    // 0x29ad98: 0x46098834  c.lt.s      $f17, $f9
    ctx->pc = 0x29ad98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[17], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ad9c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x29AD9Cu;
    {
        const bool branch_taken_0x29ad9c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ad9c) {
            ctx->pc = 0x29ADB4u;
            goto label_29adb4;
        }
    }
    ctx->pc = 0x29ADA4u;
label_29ada4:
    // 0x29ada4: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x29ada4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x29ada8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29ada8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29adac: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x29ADACu;
    {
        const bool branch_taken_0x29adac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29ADB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ADACu;
        // 0x29adb0: 0x46004c40  add.s       $f17, $f9, $f0 (Delay Slot)
        ctx->f[17] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29adac) {
            ctx->pc = 0x29AE18u;
            goto label_29ae18;
        }
    }
    ctx->pc = 0x29ADB4u;
label_29adb4:
    // 0x29adb4: 0x46058834  c.lt.s      $f17, $f5
    ctx->pc = 0x29adb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[17], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29adb8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x29ADB8u;
    {
        const bool branch_taken_0x29adb8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29adb8) {
            ctx->pc = 0x29ADD4u;
            goto label_29add4;
        }
    }
    ctx->pc = 0x29ADC0u;
    // 0x29adc0: 0x46082834  c.lt.s      $f5, $f8
    ctx->pc = 0x29adc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29adc4: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x29ADC4u;
    {
        const bool branch_taken_0x29adc4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29adc4) {
            ctx->pc = 0x29ADE0u;
            goto label_29ade0;
        }
    }
    ctx->pc = 0x29ADCCu;
    // 0x29adcc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29ADCCu;
    {
        const bool branch_taken_0x29adcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29adcc) {
            ctx->pc = 0x29ADF0u;
            goto label_29adf0;
        }
    }
    ctx->pc = 0x29ADD4u;
label_29add4:
    // 0x29add4: 0x46088834  c.lt.s      $f17, $f8
    ctx->pc = 0x29add4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[17], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29add8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x29ADD8u;
    {
        const bool branch_taken_0x29add8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29add8) {
            ctx->pc = 0x29ADF0u;
            goto label_29adf0;
        }
    }
    ctx->pc = 0x29ADE0u;
label_29ade0:
    // 0x29ade0: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x29ade0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x29ade4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29ade4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ade8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x29ADE8u;
    {
        const bool branch_taken_0x29ade8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29ADECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ADE8u;
        // 0x29adec: 0x46004440  add.s       $f17, $f8, $f0 (Delay Slot)
        ctx->f[17] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ade8) {
            ctx->pc = 0x29AE18u;
            goto label_29ae18;
        }
    }
    ctx->pc = 0x29ADF0u;
label_29adf0:
    // 0x29adf0: 0x46058834  c.lt.s      $f17, $f5
    ctx->pc = 0x29adf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[17], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29adf4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x29ADF4u;
    {
        const bool branch_taken_0x29adf4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29adf4) {
            ctx->pc = 0x29AE0Cu;
            goto label_29ae0c;
        }
    }
    ctx->pc = 0x29ADFCu;
    // 0x29adfc: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x29adfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x29ae00: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29ae00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ae04: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x29AE04u;
    {
        const bool branch_taken_0x29ae04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AE04u;
        // 0x29ae08: 0x46002c40  add.s       $f17, $f5, $f0 (Delay Slot)
        ctx->f[17] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ae04) {
            ctx->pc = 0x29AE18u;
            goto label_29ae18;
        }
    }
    ctx->pc = 0x29AE0Cu;
label_29ae0c:
    // 0x29ae0c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x29ae0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x29ae10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29ae10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ae14: 0x46008c40  add.s       $f17, $f17, $f0
    ctx->pc = 0x29ae14u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[0]);
label_29ae18:
    // 0x29ae18: 0xc095046  jal         func_254118
    ctx->pc = 0x29AE18u;
    SET_GPR_U32(ctx, 31, 0x29AE20u);
    ctx->pc = 0x29AE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AE18u;
    // 0x29ae1c: 0x8fa4023c  lw          $a0, 0x23C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254118u, 0x29AE18u, 0x29AE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AE20u;
label_29ae20:
    // 0x29ae20: 0x8fa201f4  lw          $v0, 0x1F4($sp)
    ctx->pc = 0x29ae20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x29ae24: 0xdfbf02d0  ld          $ra, 0x2D0($sp)
    ctx->pc = 0x29ae24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x29ae28: 0xdfbe02c0  ld          $fp, 0x2C0($sp)
    ctx->pc = 0x29ae28u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x29ae2c: 0xdfb702b0  ld          $s7, 0x2B0($sp)
    ctx->pc = 0x29ae2cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x29ae30: 0xdfb602a0  ld          $s6, 0x2A0($sp)
    ctx->pc = 0x29ae30u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x29ae34: 0xdfb50290  ld          $s5, 0x290($sp)
    ctx->pc = 0x29ae34u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x29ae38: 0xdfb40280  ld          $s4, 0x280($sp)
    ctx->pc = 0x29ae38u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x29ae3c: 0xdfb30270  ld          $s3, 0x270($sp)
    ctx->pc = 0x29ae3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x29ae40: 0xdfb20260  ld          $s2, 0x260($sp)
    ctx->pc = 0x29ae40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x29ae44: 0xdfb10250  ld          $s1, 0x250($sp)
    ctx->pc = 0x29ae44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x29ae48: 0xdfb00240  ld          $s0, 0x240($sp)
    ctx->pc = 0x29ae48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x29ae4c: 0xc7bf0338  lwc1        $f31, 0x338($sp)
    ctx->pc = 0x29ae4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x29ae50: 0xc7be0330  lwc1        $f30, 0x330($sp)
    ctx->pc = 0x29ae50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x29ae54: 0xc7bd0328  lwc1        $f29, 0x328($sp)
    ctx->pc = 0x29ae54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x29ae58: 0xc7bc0320  lwc1        $f28, 0x320($sp)
    ctx->pc = 0x29ae58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x29ae5c: 0xc7bb0318  lwc1        $f27, 0x318($sp)
    ctx->pc = 0x29ae5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x29ae60: 0xc7ba0310  lwc1        $f26, 0x310($sp)
    ctx->pc = 0x29ae60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x29ae64: 0xc7b90308  lwc1        $f25, 0x308($sp)
    ctx->pc = 0x29ae64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x29ae68: 0xc7b80300  lwc1        $f24, 0x300($sp)
    ctx->pc = 0x29ae68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x29ae6c: 0xc7b702f8  lwc1        $f23, 0x2F8($sp)
    ctx->pc = 0x29ae6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x29ae70: 0xc7b602f0  lwc1        $f22, 0x2F0($sp)
    ctx->pc = 0x29ae70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x29ae74: 0xc7b502e8  lwc1        $f21, 0x2E8($sp)
    ctx->pc = 0x29ae74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x29ae78: 0xc7b402e0  lwc1        $f20, 0x2E0($sp)
    ctx->pc = 0x29ae78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29ae7c: 0x3e00008  jr          $ra
    ctx->pc = 0x29AE7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29AE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AE7Cu;
        // 0x29ae80: 0x27bd0340  addiu       $sp, $sp, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29AE7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29AE84u;
}
