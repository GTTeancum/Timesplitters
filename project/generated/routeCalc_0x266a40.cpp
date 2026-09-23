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

// Function: routeCalc
// Address: 0x266a40 - 0x266b90
void routeCalc_0x266a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("routeCalc_0x266a40");
#endif

    switch (ctx->pc) {
        case 0x266a78u: goto label_266a78;
        case 0x266a8cu: goto label_266a8c;
        case 0x266aa8u: goto label_266aa8;
        case 0x266ad8u: goto label_266ad8;
        case 0x266b10u: goto label_266b10;
        default: break;
    }

    ctx->pc = 0x266a40u;

    // 0x266a40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x266a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x266a44: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x266a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x266a48: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x266a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x266a4c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x266a4cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266a50: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x266a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x266a54: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x266a54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266a58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x266a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x266a5c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x266a5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266a60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x266a60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266a64: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x266a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x266a68: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x266a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x266a6c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x266a6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x266a70: 0xc09995c  jal         func_266570
    ctx->pc = 0x266A70u;
    SET_GPR_U32(ctx, 31, 0x266A78u);
    ctx->pc = 0x266A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266A70u;
    // 0x266a74: 0xffb40040  sd          $s4, 0x40($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266570u, 0x266A70u, 0x266A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266A78u;
label_266a78:
    // 0x266a78: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x266a78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x266a7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x266a7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266a80: 0xaf91b8f4  sw          $s1, -0x470C($gp)
    ctx->pc = 0x266a80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949108), GPR_U32(ctx, 17));
    // 0x266a84: 0xc099a04  jal         func_266810
    ctx->pc = 0x266A84u;
    SET_GPR_U32(ctx, 31, 0x266A8Cu);
    ctx->pc = 0x266A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266A84u;
    // 0x266a88: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266810u, 0x266A84u, 0x266A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266A8Cu;
label_266a8c:
    // 0x266a8c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x266a8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266a90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x266a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266a94: 0x4810013  bgez        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x266A94u;
    {
        const bool branch_taken_0x266a94 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x266A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266A94u;
        // 0x266a98: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266a94) {
            ctx->pc = 0x266AE4u;
            goto label_266ae4;
        }
    }
    ctx->pc = 0x266A9Cu;
    // 0x266a9c: 0x3c1401fd  lui         $s4, 0x1FD
    ctx->pc = 0x266a9cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)509 << 16));
    // 0x266aa0: 0x8f92b8e0  lw          $s2, -0x4720($gp)
    ctx->pc = 0x266aa0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949088)));
    // 0x266aa4: 0x0  nop
    ctx->pc = 0x266aa4u;
    // NOP
label_266aa8:
    // 0x266aa8: 0x2685a310  addiu       $a1, $s4, -0x5CF0
    ctx->pc = 0x266aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294943504));
    // 0x266aac: 0x9786b8e8  lhu         $a2, -0x4718($gp)
    ctx->pc = 0x266aacu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294949096)));
    // 0x266ab0: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x266ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x266ab4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x266ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266ab8: 0x458021  addu        $s0, $v0, $a1
    ctx->pc = 0x266ab8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x266abc: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x266abcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x266ac0: 0xaf92b8e8  sw          $s2, -0x4718($gp)
    ctx->pc = 0x266ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949096), GPR_U32(ctx, 18));
    // 0x266ac4: 0xaf83b8e0  sw          $v1, -0x4720($gp)
    ctx->pc = 0x266ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949088), GPR_U32(ctx, 3));
    // 0x266ac8: 0xc60c0008  lwc1        $f12, 0x8($s0)
    ctx->pc = 0x266ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x266acc: 0x86050004  lh          $a1, 0x4($s0)
    ctx->pc = 0x266accu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x266ad0: 0xc099a04  jal         func_266810
    ctx->pc = 0x266AD0u;
    SET_GPR_U32(ctx, 31, 0x266AD8u);
    ctx->pc = 0x266AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266AD0u;
    // 0x266ad4: 0xa6060000  sh          $a2, 0x0($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266810u, 0x266AD0u, 0x266AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266AD8u;
label_266ad8:
    // 0x266ad8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x266ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266adc: 0x482fff2  bltzl       $a0, . + 4 + (-0xE << 2)
    ctx->pc = 0x266ADCu;
    {
        const bool branch_taken_0x266adc = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x266adc) {
            ctx->pc = 0x266AE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266ADCu;
            // 0x266ae0: 0x8f92b8e0  lw          $s2, -0x4720($gp) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949088)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266AA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_266aa8;
        }
    }
    ctx->pc = 0x266AE4u;
label_266ae4:
    // 0x266ae4: 0x1a600005  blez        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x266AE4u;
    {
        const bool branch_taken_0x266ae4 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x266AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266AE4u;
        // 0x266ae8: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266ae4) {
            ctx->pc = 0x266AFCu;
            goto label_266afc;
        }
    }
    ctx->pc = 0x266AECu;
    // 0x266aec: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x266aecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x266af0: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x266af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x266af4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x266af4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x266af8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x266af8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_266afc:
    // 0x266afc: 0x6400010  bltz        $s2, . + 4 + (0x10 << 2)
    ctx->pc = 0x266AFCu;
    {
        const bool branch_taken_0x266afc = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x266afc) {
            ctx->pc = 0x266B40u;
            goto label_266b40;
        }
    }
    ctx->pc = 0x266B04u;
    // 0x266b04: 0x1a60000e  blez        $s3, . + 4 + (0xE << 2)
    ctx->pc = 0x266B04u;
    {
        const bool branch_taken_0x266b04 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x266B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266B04u;
        // 0x266b08: 0x3c1401fd  lui         $s4, 0x1FD (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)509 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266b04) {
            ctx->pc = 0x266B40u;
            goto label_266b40;
        }
    }
    ctx->pc = 0x266B0Cu;
    // 0x266b0c: 0x122100  sll         $a0, $s2, 4
    ctx->pc = 0x266b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_266b10:
    // 0x266b10: 0x2682a310  addiu       $v0, $s4, -0x5CF0
    ctx->pc = 0x266b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294943504));
    // 0x266b14: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x266b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x266b18: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x266b18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x266b1c: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x266b1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x266b20: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x266b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x266b24: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x266b24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x266b28: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x266b28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x266b2c: 0x84920002  lh          $s2, 0x2($a0)
    ctx->pc = 0x266b2cu;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x266b30: 0x6400003  bltz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x266B30u;
    {
        const bool branch_taken_0x266b30 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x266B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266B30u;
        // 0x266b34: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266b30) {
            ctx->pc = 0x266B40u;
            goto label_266b40;
        }
    }
    ctx->pc = 0x266B38u;
    // 0x266b38: 0x1e60fff5  bgtz        $s3, . + 4 + (-0xB << 2)
    ctx->pc = 0x266B38u;
    {
        const bool branch_taken_0x266b38 = (GPR_S32(ctx, 19) > 0);
        ctx->pc = 0x266B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266B38u;
        // 0x266b3c: 0x122100  sll         $a0, $s2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266b38) {
            ctx->pc = 0x266B10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_266b10;
        }
    }
    ctx->pc = 0x266B40u;
label_266b40:
    // 0x266b40: 0x52000003  beql        $s0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x266B40u;
    {
        const bool branch_taken_0x266b40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x266b40) {
            ctx->pc = 0x266B44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266B40u;
            // 0x266b44: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266B50u;
            goto label_266b50;
        }
    }
    ctx->pc = 0x266B48u;
    // 0x266b48: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x266B48u;
    {
        const bool branch_taken_0x266b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266B48u;
        // 0x266b4c: 0xc6000008  lwc1        $f0, 0x8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x266b48) {
            ctx->pc = 0x266B64u;
            goto label_266b64;
        }
    }
    ctx->pc = 0x266B50u;
label_266b50:
    // 0x266b50: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x266b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x266b54: 0x8f84a2f0  lw          $a0, -0x5D10($gp)
    ctx->pc = 0x266b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943472)));
    // 0x266b58: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x266b58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x266b5c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x266b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x266b60: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x266b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_266b64:
    // 0x266b64: 0xe780a2f8  swc1        $f0, -0x5D08($gp)
    ctx->pc = 0x266b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294943480), bits); }
    // 0x266b68: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x266b68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266b6c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x266b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x266b70: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x266b70u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x266b74: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x266b74u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x266b78: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x266b78u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x266b7c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x266b7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x266b80: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x266b80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x266b84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x266b84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x266b88: 0x3e00008  jr          $ra
    ctx->pc = 0x266B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266B88u;
        // 0x266b8c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266B88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266B90u;
}
