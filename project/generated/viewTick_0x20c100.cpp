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

// Function: viewTick
// Address: 0x20c100 - 0x20c324
void viewTick_0x20c100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("viewTick_0x20c100");
#endif

    switch (ctx->pc) {
        case 0x20c14cu: goto label_20c14c;
        case 0x20c17cu: goto label_20c17c;
        case 0x20c190u: goto label_20c190;
        case 0x20c1a0u: goto label_20c1a0;
        case 0x20c1c4u: goto label_20c1c4;
        case 0x20c20cu: goto label_20c20c;
        case 0x20c218u: goto label_20c218;
        case 0x20c234u: goto label_20c234;
        case 0x20c240u: goto label_20c240;
        case 0x20c24cu: goto label_20c24c;
        case 0x20c26cu: goto label_20c26c;
        case 0x20c2f4u: goto label_20c2f4;
        default: break;
    }

    ctx->pc = 0x20c100u;

    // 0x20c100: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x20c100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x20c104: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20c104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c108: 0xffb600c0  sd          $s6, 0xC0($sp)
    ctx->pc = 0x20c108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
    // 0x20c10c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20c10cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c110: 0xffb500b0  sd          $s5, 0xB0($sp)
    ctx->pc = 0x20c110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 21));
    // 0x20c114: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x20c114u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x20c118: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x20c118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x20c11c: 0xffb30090  sd          $s3, 0x90($sp)
    ctx->pc = 0x20c11cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 19));
    // 0x20c120: 0x3c140033  lui         $s4, 0x33
    ctx->pc = 0x20c120u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)51 << 16));
    // 0x20c124: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x20c124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x20c128: 0x3c130033  lui         $s3, 0x33
    ctx->pc = 0x20c128u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)51 << 16));
    // 0x20c12c: 0xffb10070  sd          $s1, 0x70($sp)
    ctx->pc = 0x20c12cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
    // 0x20c130: 0x269299e0  addiu       $s2, $s4, -0x6620
    ctx->pc = 0x20c130u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941152));
    // 0x20c134: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x20c134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x20c138: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x20c138u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x20c13c: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x20c13cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x20c140: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x20c140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x20c144: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x20C144u;
    SET_GPR_U32(ctx, 31, 0x20C14Cu);
    ctx->pc = 0x20C148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C144u;
    // 0x20c148: 0x267199d0  addiu       $s1, $s3, -0x6630 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x20C144u, 0x20C14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C14Cu;
label_20c14c:
    // 0x20c14c: 0xc7958020  lwc1        $f21, -0x7FE0($gp)
    ctx->pc = 0x20c14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x20c150: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x20c150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x20c154: 0x27b60010  addiu       $s6, $sp, 0x10
    ctx->pc = 0x20c154u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x20c158: 0x2447a0c8  addiu       $a3, $v0, -0x5F38
    ctx->pc = 0x20c158u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942920));
    // 0x20c15c: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x20c15cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x20c160: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x20c160u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x20c164: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x20c164u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x39A0D0u));
    // 0x20c168: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x20c168u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20c16c: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x20c16cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20c170: 0xafa50018  sw          $a1, 0x18($sp)
    ctx->pc = 0x20c170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
    // 0x20c174: 0xc080e18  jal         func_203860
    ctx->pc = 0x20C174u;
    SET_GPR_U32(ctx, 31, 0x20C17Cu);
    ctx->pc = 0x20C178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C174u;
    // 0x20c178: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203860u, 0x20C174u, 0x20C17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C17Cu;
label_20c17c:
    // 0x20c17c: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x20c17cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x20c180: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x20c180u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x20c184: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x20c184u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c188: 0xc0807de  jal         func_201F78
    ctx->pc = 0x20C188u;
    SET_GPR_U32(ctx, 31, 0x20C190u);
    ctx->pc = 0x20C18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C188u;
    // 0x20c18c: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F78u, 0x20C188u, 0x20C190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C190u;
label_20c190:
    // 0x20c190: 0xaf829c5c  sw          $v0, -0x63A4($gp)
    ctx->pc = 0x20c190u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941788), GPR_U32(ctx, 2));
    // 0x20c194: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20c194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c198: 0xc080eee  jal         func_203BB8
    ctx->pc = 0x20C198u;
    SET_GPR_U32(ctx, 31, 0x20C1A0u);
    ctx->pc = 0x20C19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C198u;
    // 0x20c19c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203BB8u, 0x20C198u, 0x20C1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C1A0u;
label_20c1a0:
    // 0x20c1a0: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x20c1a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x20c1a4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x20c1a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x20c1a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20c1a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c1ac: 0xc7819c54  lwc1        $f1, -0x63AC($gp)
    ctx->pc = 0x20c1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294941780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20c1b0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x20c1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20c1b4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x20c1b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x20c1b8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x20c1b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x20c1bc: 0xc080eee  jal         func_203BB8
    ctx->pc = 0x20C1BCu;
    SET_GPR_U32(ctx, 31, 0x20C1C4u);
    ctx->pc = 0x20C1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C1BCu;
    // 0x20c1c0: 0xe7819c54  swc1        $f1, -0x63AC($gp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294941780), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x203BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203BB8u, 0x20C1BCu, 0x20C1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C1C4u;
label_20c1c4:
    // 0x20c1c4: 0x3c01c080  lui         $at, 0xC080
    ctx->pc = 0x20c1c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49280 << 16));
    // 0x20c1c8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x20c1c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x20c1cc: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x20c1ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20c1d0: 0xc7819c58  lwc1        $f1, -0x63A8($gp)
    ctx->pc = 0x20c1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294941784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20c1d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20c1d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c1d8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x20c1d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x20c1dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20c1dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20c1e0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x20c1e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x20c1e4: 0xae8099e0  sw          $zero, -0x6620($s4)
    ctx->pc = 0x20c1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294941152), GPR_U32(ctx, 0));
    // 0x20c1e8: 0xe6420008  swc1        $f2, 0x8($s2)
    ctx->pc = 0x20c1e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x20c1ec: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x20c1ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x20c1f0: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x20c1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x20c1f4: 0x46150b02  mul.s       $f12, $f1, $f21
    ctx->pc = 0x20c1f4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x20c1f8: 0x0  nop
    ctx->pc = 0x20c1f8u;
    // NOP
    // 0x20c1fc: 0x0  nop
    ctx->pc = 0x20c1fcu;
    // NOP
    // 0x20c200: 0x46146303  div.s       $f12, $f12, $f20
    ctx->pc = 0x20c200u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[20];
    // 0x20c204: 0xc0ad27e  jal         func_2B49F8
    ctx->pc = 0x20C204u;
    SET_GPR_U32(ctx, 31, 0x20C20Cu);
    ctx->pc = 0x20C208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C204u;
    // 0x20c208: 0xe7819c58  swc1        $f1, -0x63A8($gp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294941784), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B49F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B49F8u, 0x20C204u, 0x20C20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C20Cu;
label_20c20c:
    // 0x20c20c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20c20cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c210: 0xc0ad532  jal         func_2B54C8
    ctx->pc = 0x20C210u;
    SET_GPR_U32(ctx, 31, 0x20C218u);
    ctx->pc = 0x20C214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C210u;
    // 0x20c214: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B54C8u, 0x20C210u, 0x20C218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C218u;
label_20c218:
    // 0x20c218: 0xc78c9c54  lwc1        $f12, -0x63AC($gp)
    ctx->pc = 0x20c218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294941780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20c21c: 0x46156302  mul.s       $f12, $f12, $f21
    ctx->pc = 0x20c21cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x20c220: 0x0  nop
    ctx->pc = 0x20c220u;
    // NOP
    // 0x20c224: 0x0  nop
    ctx->pc = 0x20c224u;
    // NOP
    // 0x20c228: 0x46146303  div.s       $f12, $f12, $f20
    ctx->pc = 0x20c228u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[20];
    // 0x20c22c: 0xc0ad296  jal         func_2B4A58
    ctx->pc = 0x20C22Cu;
    SET_GPR_U32(ctx, 31, 0x20C234u);
    ctx->pc = 0x20C230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C22Cu;
    // 0x20c230: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4A58u, 0x20C22Cu, 0x20C234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C234u;
label_20c234:
    // 0x20c234: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20c234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c238: 0xc0ad532  jal         func_2B54C8
    ctx->pc = 0x20C238u;
    SET_GPR_U32(ctx, 31, 0x20C240u);
    ctx->pc = 0x20C23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C238u;
    // 0x20c23c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B54C8u, 0x20C238u, 0x20C240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C240u;
label_20c240:
    // 0x20c240: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20c240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c244: 0xc080eee  jal         func_203BB8
    ctx->pc = 0x20C244u;
    SET_GPR_U32(ctx, 31, 0x20C24Cu);
    ctx->pc = 0x20C248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C244u;
    // 0x20c248: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203BB8u, 0x20C244u, 0x20C24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C24Cu;
label_20c24c:
    // 0x20c24c: 0xc68299e0  lwc1        $f2, -0x6620($s4)
    ctx->pc = 0x20c24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294941152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20c250: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20c250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c254: 0xc66199d0  lwc1        $f1, -0x6630($s3)
    ctx->pc = 0x20c254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294941136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20c258: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20c258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c25c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x20c25cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x20c260: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x20c260u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x20c264: 0xc080eee  jal         func_203BB8
    ctx->pc = 0x20C264u;
    SET_GPR_U32(ctx, 31, 0x20C26Cu);
    ctx->pc = 0x20C268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C264u;
    // 0x20c268: 0xe66199d0  swc1        $f1, -0x6630($s3) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4294941136), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x203BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203BB8u, 0x20C264u, 0x20C26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C26Cu;
label_20c26c:
    // 0x20c26c: 0xc6450008  lwc1        $f5, 0x8($s2)
    ctx->pc = 0x20c26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x20c270: 0x32a20040  andi        $v0, $s5, 0x40
    ctx->pc = 0x20c270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
    // 0x20c274: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x20c274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20c278: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x20c278u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x20c27c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x20c27cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x20c280: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20C280u;
    {
        const bool branch_taken_0x20c280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C280u;
        // 0x20c284: 0xe6210008  swc1        $f1, 0x8($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c280) {
            ctx->pc = 0x20C298u;
            goto label_20c298;
        }
    }
    ctx->pc = 0x20C288u;
    // 0x20c288: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x20c288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20c28c: 0xc7818024  lwc1        $f1, -0x7FDC($gp)
    ctx->pc = 0x20c28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20c290: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20c290u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20c294: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x20c294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_20c298:
    // 0x20c298: 0x32a20010  andi        $v0, $s5, 0x10
    ctx->pc = 0x20c298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16);
    // 0x20c29c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x20C29Cu;
    {
        const bool branch_taken_0x20c29c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c29c) {
            ctx->pc = 0x20C2A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C29Cu;
            // 0x20c2a0: 0xc6440004  lwc1        $f4, 0x4($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C2B8u;
            goto label_20c2b8;
        }
    }
    ctx->pc = 0x20C2A4u;
    // 0x20c2a4: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x20c2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20c2a8: 0xc7818028  lwc1        $f1, -0x7FD8($gp)
    ctx->pc = 0x20c2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20c2ac: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x20c2acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x20c2b0: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x20c2b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x20c2b4: 0xc6440004  lwc1        $f4, 0x4($s2)
    ctx->pc = 0x20c2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_20c2b8:
    // 0x20c2b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20c2b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c2bc: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x20c2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20c2c0: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x20c2c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c2c4: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x20c2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20c2c8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x20c2c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c2cc: 0xc66299d0  lwc1        $f2, -0x6630($s3)
    ctx->pc = 0x20c2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294941136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20c2d0: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x20c2d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x20c2d4: 0xc68399e0  lwc1        $f3, -0x6620($s4)
    ctx->pc = 0x20c2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294941152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x20c2d8: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x20c2d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x20c2dc: 0x8f849c5c  lw          $a0, -0x63A4($gp)
    ctx->pc = 0x20c2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941788)));
    // 0x20c2e0: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x20c2e0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x20c2e4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x20c2e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x20c2e8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x20c2e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x20c2ec: 0xc0ad482  jal         func_2B5208
    ctx->pc = 0x20C2ECu;
    SET_GPR_U32(ctx, 31, 0x20C2F4u);
    ctx->pc = 0x20C2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C2ECu;
    // 0x20c2f0: 0xe7a20000  swc1        $f2, 0x0($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5208u, 0x20C2ECu, 0x20C2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C2F4u;
label_20c2f4:
    // 0x20c2f4: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x20c2f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20c2f8: 0xdfb600c0  ld          $s6, 0xC0($sp)
    ctx->pc = 0x20c2f8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x20c2fc: 0xdfb500b0  ld          $s5, 0xB0($sp)
    ctx->pc = 0x20c2fcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x20c300: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x20c300u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x20c304: 0xdfb30090  ld          $s3, 0x90($sp)
    ctx->pc = 0x20c304u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x20c308: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x20c308u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x20c30c: 0xdfb10070  ld          $s1, 0x70($sp)
    ctx->pc = 0x20c30cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x20c310: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x20c310u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20c314: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x20c314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x20c318: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x20c318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x20c31c: 0x3e00008  jr          $ra
    ctx->pc = 0x20C31Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C31Cu;
        // 0x20c320: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C31Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20C324u;
}
