"""Ahead-of-time recompiler for PS2 VU1 microprograms.

usage: vu1_recomp.py code.bin name output.cpp entry-pc [entry-pc ...]

Emits one C++ function that executes the microprogram with the exact timing
semantics of VU1Interpreter (see ps2xRuntime/include/runtime/ps2_vu1_jit.h).
Anything the generator does not support becomes a handoff to the
interpreter at that pair, so partial coverage is always safe.
"""
import re
import struct
import sys

from vu1_disasm import reachable
from vu1_isa import (FMAC_LATENCY, ACC_FORWARD_LATENCY, disasm_lower, disasm_upper, f_dest, f_fd, f_fs, f_ft,
                     f_imm11, f_imm15, f_vid, f_vis, f_vit, is_branch, branch_target, lane, lower_usage,
                     sext, upper_special, upper_usage)

SRC_BC = ["Vu1Jit::kSrcBcX", "Vu1Jit::kSrcBcY", "Vu1Jit::kSrcBcZ", "Vu1Jit::kSrcBcW"]


TRACE = False


class Unsupported(Exception):
    pass


def lanes_of(mask):
    return [c for c in range(4) if mask & lane(c)]


def fmac_kind(upper):
    """Returns (kind, src, writes_acc, reads_q) for FMAC-flagged upper ops,
    or None."""
    op = upper & 0x3F
    if op < 0x1C:
        base = op & 0x1C
        kinds = {0x00: "kAdd", 0x04: "kSub", 0x08: "kMadd", 0x0C: "kMsub", 0x18: "kMul"}
        if base in kinds:
            return kinds[base], SRC_BC[op & 3], False, False
        return None
    table = {0x1C: ("kMul", "kSrcQ"), 0x1E: ("kMul", "kSrcI"), 0x20: ("kAdd", "kSrcQ"), 0x21: ("kMadd", "kSrcQ"),
             0x22: ("kAdd", "kSrcI"), 0x23: ("kMadd", "kSrcI"), 0x24: ("kSub", "kSrcQ"), 0x25: ("kMsub", "kSrcQ"),
             0x26: ("kSub", "kSrcI"), 0x27: ("kMsub", "kSrcI"), 0x28: ("kAdd", "kSrcVec"),
             0x29: ("kMadd", "kSrcVec"), 0x2A: ("kMul", "kSrcVec"), 0x2C: ("kSub", "kSrcVec"),
             0x2D: ("kMsub", "kSrcVec"), 0x2E: ("kOpmsub", "kSrcVec")}
    if op in table:
        k, src = table[op]
        return k, "Vu1Jit::" + src, False, src == "kSrcQ"
    if op >= 0x3C:
        sp = upper_special(upper)
        if sp < 0x10 or 0x18 <= sp <= 0x1B:
            base = sp & 0x1C
            kinds = {0x00: "kAdd", 0x04: "kSub", 0x08: "kMadd", 0x0C: "kMsub", 0x18: "kMul"}
            return kinds[base], SRC_BC[sp & 3], True, False
        stable = {0x1C: ("kMul", "kSrcQ"), 0x1E: ("kMul", "kSrcI"), 0x20: ("kAdd", "kSrcQ"),
                  0x21: ("kMadd", "kSrcQ"), 0x22: ("kAdd", "kSrcI"), 0x23: ("kMadd", "kSrcI"),
                  0x24: ("kSub", "kSrcQ"), 0x25: ("kMsub", "kSrcQ"), 0x26: ("kSub", "kSrcI"),
                  0x27: ("kMsub", "kSrcI"), 0x28: ("kAdd", "kSrcVec"), 0x29: ("kMadd", "kSrcVec"),
                  0x2A: ("kMul", "kSrcVec"), 0x2C: ("kSub", "kSrcVec"), 0x2D: ("kMsub", "kSrcVec"),
                  0x2E: ("kOpmula", "kSrcVec")}
        if sp in stable:
            k, src = stable[sp]
            return k, "Vu1Jit::" + src, True, src == "kSrcQ"
    return None


def emit_upper(upper, out, push_flags=True):
    """Emits upper code computing into ut[] (VF result) or writing ACC.
    Returns (vf_reg_written, lanes) for the deferred VF commit."""
    op = upper & 0x3F
    dest, fs, ft, fd = f_dest(upper), f_fs(upper), f_ft(upper), f_fd(upper)
    fm = fmac_kind(upper)
    if fm:
        kind, src, to_acc, reads_q = fm
        if reads_q:
            out.append("J.readQ();")
        push = "" if push_flags else ", false"
        out.append(f"J.fmac<Vu1Jit::{kind}, {src}, {dest}{push}>(ut, {fs}, {ft});")
        if to_acc:
            for c in lanes_of(dest):
                out.append(f"s.acc[{c}] = ut[{c}];")
            return None
        return (fd, dest)
    # Non-FMAC upper operations.
    if op < 0x1C and (op & 0x1C) in (0x10, 0x14):
        is_max = (op & 0x1C) == 0x10
        out.append(f"J.minmax<{SRC_BC[op & 3]}, {'true' if is_max else 'false'}>(ut, {dest}, {fs}, {ft});")
        return (fd, dest)
    if op in (0x1D, 0x1F, 0x2B, 0x2F):
        src = "Vu1Jit::kSrcI" if op in (0x1D, 0x1F) else "Vu1Jit::kSrcVec"
        is_max = op in (0x1D, 0x2B)
        out.append(f"J.minmax<{src}, {'true' if is_max else 'false'}>(ut, {dest}, {fs}, {ft});")
        return (fd, dest)
    if op >= 0x3C:
        sp = upper_special(upper)
        if sp in (0x2F, 0x30):
            return None
        if 0x10 <= sp <= 0x13:
            div = {0x10: None, 0x11: "16.0f", 0x12: "4096.0f", 0x13: "32768.0f"}[sp]
            for c in lanes_of(dest):
                expr = f"static_cast<float>(static_cast<int32_t>(vi32(s.vf[{fs}][{c}])))"
                out.append(f"ut[{c}] = {expr}{' / ' + div if div else ''};")
            return (ft, dest)
        if 0x14 <= sp <= 0x17:
            scale = {0x14: "1.0f", 0x15: "16.0f", 0x16: "4096.0f", 0x17: "32768.0f"}[sp]
            for c in lanes_of(dest):
                out.append(f"ut[{c}] = asf(Vu1Jit::floatToInt(Vu1Jit::normOp(s.vf[{fs}][{c}]), {scale}));")
            return (ft, dest)
        if sp == 0x1D:
            for c in lanes_of(dest):
                out.append(f"ut[{c}] = std::fabs(Vu1Jit::normOp(s.vf[{fs}][{c}]));")
            return (ft, dest)
        if sp == 0x1F:
            out.append(f"J.clip({fs}, {ft});")
            return None
    raise Unsupported(f"upper 0x{upper:08x}")


EFU_EXPR = {
    0x70: ("x * x + y * y + z * z", 11),
    0x71: ("(x * x + y * y + z * z) != 0.0f ? 1.0f / (x * x + y * y + z * z) : (x * x + y * y + z * z)", 18),
    0x72: ("std::sqrt(x * x + y * y + z * z)", 18),
    0x73: ("std::sqrt(x * x + y * y + z * z) != 0.0f ? 1.0f / std::sqrt(x * x + y * y + z * z) : std::sqrt(x * x + y * y + z * z)", 24),
}


def emit_lower(lower, pc, out, suppressed_vf):
    """Emits lower code. VI writes go through wvi(); returns nothing.
    suppressed_vf: VF register whose lower write is dropped (upper wins)."""
    if lower in (0, 0x8000033C):
        return
    op_hi = (lower >> 25) & 0x7F
    vft, vfs = f_ft(lower), f_fs(lower)
    vit, vis, vid = f_vit(lower), f_vis(lower), f_vid(lower)
    dest = f_dest(lower)
    imm = f_imm11(lower)

    def wvf(reg, src, mask=dest):
        if reg == 0 or reg == suppressed_vf:
            return
        for c in lanes_of(mask):
            out.append(f"s.vf[{reg}][{c}] = {src}[{c}];")

    def wvi(reg, expr):
        if reg:
            out.append(f"wvi({reg}, {expr});")

    if op_hi == 0x00:
        out.append(f"J.loadQword(lt, s.vi[{vis}] + ({imm}), {dest});")
        wvf(vft, "lt"); return
    if op_hi == 0x01:
        out.append(f"J.storeQword(s.vi[{vit}] + ({imm}), s.vf[{vfs}], {dest});"); return
    if op_hi == 0x04:
        wvi(vit, f"J.loadInteger(s.vi[{vis}] + ({imm}), {dest})"); return
    if op_hi == 0x05:
        out.append(f"J.storeInteger(s.vi[{vis}] + ({imm}), s.vi[{vit}], {dest});"); return
    if op_hi == 0x08:
        wvi(vit, f"s.vi[{vis}] + {f_imm15(lower)}"); return
    if op_hi == 0x09:
        wvi(vit, f"s.vi[{vis}] - {f_imm15(lower)}"); return
    imm24 = lower & 0xFFFFFF
    imm12 = (((lower >> 21) & 1) << 11) | (lower & 0x7FF)
    if op_hi == 0x10:
        out.append("J.commitNow();"); wvi(1, f"(s.clip & 0xFFFFFFu) == 0x{imm24:x}u ? 1 : 0"); return
    if op_hi == 0x11:
        out.append(f"J.fcset(0x{imm24:x}u);"); return
    if op_hi == 0x12:
        out.append("J.commitNow();"); wvi(1, f"(s.clip & 0x{imm24:x}u) != 0u ? 1 : 0"); return
    if op_hi == 0x13:
        out.append("J.commitNow();"); wvi(1, f"(s.clip | 0x{imm24:x}u) == 0xFFFFFFu ? 1 : 0"); return
    if op_hi == 0x14:
        out.append("J.commitNow();"); wvi(vit, f"(s.status & 0xFFFu) == 0x{imm12:x}u ? 1 : 0"); return
    if op_hi == 0x15:
        out.append(f"J.fsset(0x{imm12:x}u);"); return
    if op_hi == 0x16:
        out.append("J.commitNow();"); wvi(vit, f"static_cast<int32_t>((s.status & 0xFFFu) & 0x{imm12:x}u)"); return
    if op_hi == 0x17:
        out.append("J.commitNow();"); wvi(vit, f"static_cast<int32_t>((s.status & 0xFFFu) | 0x{imm12:x}u)"); return
    if op_hi == 0x18:
        out.append("J.commitNow();"); wvi(vit, f"(s.mac & 0xFFFFu) == static_cast<uint16_t>(s.vi[{vis}]) ? 1 : 0"); return
    if op_hi == 0x1A:
        out.append("J.commitNow();"); wvi(vit, f"static_cast<int32_t>(s.mac & static_cast<uint16_t>(s.vi[{vis}]))"); return
    if op_hi == 0x1B:
        out.append("J.commitNow();"); wvi(vit, f"static_cast<int32_t>(s.mac | static_cast<uint16_t>(s.vi[{vis}]))"); return
    if op_hi == 0x1C:
        out.append("J.commitNow();"); wvi(vit, "static_cast<int32_t>(s.clip & 0x0FFFu)"); return
    if op_hi in (0x20, 0x21, 0x24, 0x25, 0x28, 0x29, 0x2C, 0x2D, 0x2E, 0x2F):
        # Branch condition evaluation is emitted by the caller.
        if op_hi in (0x21, 0x25):
            wvi(vit, str((pc + 16) // 8))
        return
    if op_hi != 0x40:
        raise Unsupported(f"lower 0x{lower:08x}")
    direct = lower & 0x3F
    if direct == 0x30:
        wvi(vid, f"s.vi[{vis}] + s.vi[{vit}]"); return
    if direct == 0x31:
        wvi(vid, f"s.vi[{vis}] - s.vi[{vit}]"); return
    if direct == 0x32:
        wvi(vit, f"s.vi[{vis}] + ({sext((lower >> 6) & 0x1F, 5)})"); return
    if direct == 0x34:
        wvi(vid, f"s.vi[{vis}] & s.vi[{vit}]"); return
    if direct == 0x35:
        wvi(vid, f"s.vi[{vis}] | s.vi[{vit}]"); return
    if direct < 0x3C:
        raise Unsupported(f"lower 0x{lower:08x}")
    sp = upper_special(lower)
    fsf = (lower >> 21) & 3
    ftf = (lower >> 23) & 3
    if sp == 0x30:
        out.append(f"std::memcpy(lt, s.vf[{vfs}], 16);"); wvf(vft, "lt"); return
    if sp == 0x31:
        out.append(f"lt[0] = s.vf[{vfs}][1]; lt[1] = s.vf[{vfs}][2]; lt[2] = s.vf[{vfs}][3]; lt[3] = s.vf[{vfs}][0];")
        wvf(vft, "lt"); return
    if sp == 0x34:
        out.append(f"J.loadQword(lt, static_cast<uint16_t>(s.vi[{vis}]), {dest});")
        wvf(vft, "lt"); wvi(vis, f"s.vi[{vis}] + 1"); return
    if sp == 0x35:
        out.append(f"J.storeQword(static_cast<uint16_t>(s.vi[{vit}]), s.vf[{vfs}], {dest});")
        wvi(vit, f"s.vi[{vit}] + 1"); return
    if sp == 0x36:
        wvi(vis, f"s.vi[{vis}] - 1")
        out.append(f"J.loadQword(lt, static_cast<uint16_t>(s.vi[{vis}]), {dest});")
        wvf(vft, "lt"); return
    if sp == 0x37:
        wvi(vit, f"s.vi[{vit}] - 1")
        out.append(f"J.storeQword(static_cast<uint16_t>(s.vi[{vit}]), s.vf[{vfs}], {dest});"); return
    if sp == 0x38:
        out.append(f"J.div(s.vf[{vfs}][{fsf}], s.vf[{vft}][{ftf}]);"); return
    if sp == 0x39:
        out.append(f"J.sqrtQ(s.vf[{vft}][{ftf}]);"); return
    if sp == 0x3A:
        out.append(f"J.rsqrt(s.vf[{vfs}][{fsf}], s.vf[{vft}][{ftf}]);"); return
    if sp == 0x3B or sp == 0x7B:
        return  # WAITQ / WAITP: stall only
    if sp == 0x3C:
        wvi(vit, f"static_cast<int16_t>(vi32(s.vf[{vfs}][{fsf}]) & 0xFFFF)"); return
    if sp == 0x3D:
        out.append(f"lt[0] = lt[1] = lt[2] = lt[3] = asf(static_cast<int16_t>(s.vi[{vis}] & 0xFFFF));")
        wvf(vft, "lt"); return
    if sp == 0x3E:
        wvi(vit, f"J.loadInteger(static_cast<uint16_t>(s.vi[{vis}]), {dest})"); return
    if sp == 0x3F:
        out.append(f"J.storeInteger(static_cast<uint16_t>(s.vi[{vis}]), s.vi[{vit}], {dest});"); return
    if sp == 0x40:
        out.append("J.rnext();")
        out.append("lt[0] = lt[1] = lt[2] = lt[3] = asf(s.r);"); wvf(vft, "lt"); return
    if sp == 0x41:
        out.append("lt[0] = lt[1] = lt[2] = lt[3] = asf(s.r);"); wvf(vft, "lt"); return
    if sp == 0x42:
        out.append(f"s.r = 0x3F800000u | (vi32(s.vf[{vfs}][{fsf}]) & 0x007FFFFFu);"); return
    if sp == 0x43:
        out.append(f"s.r = 0x3F800000u | ((s.r ^ vi32(s.vf[{vfs}][{fsf}])) & 0x007FFFFFu);"); return
    if sp == 0x64:
        out.append("lt[0] = lt[1] = lt[2] = lt[3] = J.readP();"); wvf(vft, "lt"); return
    if sp == 0x68:
        wvi(vit, "static_cast<int32_t>(s.top & 0x3FFu)"); return
    if sp == 0x69:
        wvi(vit, "static_cast<int32_t>(s.itop & 0x3FFu)"); return
    if sp == 0x6C:
        out.append(f"J.kickStart(s.vi[{vis}]);"); return
    if sp in EFU_EXPR:
        expr, lat = EFU_EXPR[sp]
        out.append(f"{{ const float x = Vu1Jit::normOp(s.vf[{vfs}][0]), y = Vu1Jit::normOp(s.vf[{vfs}][1]), "
                   f"z = Vu1Jit::normOp(s.vf[{vfs}][2]); J.queueP({expr}, {lat}u); }}")
        return
    raise Unsupported(f"lower 0x{lower:08x}")


BRANCH_COND = {
    0x28: "static_cast<int16_t>(rb({s})) == static_cast<int16_t>(rb({t}))",
    0x29: "static_cast<int16_t>(rb({s})) != static_cast<int16_t>(rb({t}))",
    0x2C: "static_cast<int16_t>(rb({s})) < 0",
    0x2D: "static_cast<int16_t>(rb({s})) > 0",
    0x2E: "static_cast<int16_t>(rb({s})) <= 0",
    0x2F: "static_cast<int16_t>(rb({s})) >= 0",
}


def pair_latency(uu, lu, upper_vf_written, lower_vf_written, vi_written, lower):
    """Longest retirement among the pair's queued writes (pendingMax)."""
    lat = 0
    if upper_vf_written:
        lat = max(lat, uu.vf_latency or uu.latency)
    if uu.acc_write:
        lat = max(lat, ACC_FORWARD_LATENCY)
    if uu.pipeline == "fmac" and (fmac_kind_flags(uu) or uu.writes_clip):
        lat = max(lat, FMAC_LATENCY)
    if lower_vf_written:
        lat = max(lat, lu.vf_latency or lu.latency)
    if vi_written:
        lat = max(lat, lu.vi_latency or lu.latency)
    if lu.pipeline == "lsu" and lu.latency == 1:
        lat = max(lat, 1)  # store
    if lu.pipeline in ("fdiv", "efu") and lu.latency:
        lat = max(lat, lu.latency)
    if lu.writes_clip or ((lower >> 25) & 0x7F) == 0x15:
        lat = max(lat, FMAC_LATENCY)
    return lat


def fmac_kind_flags(uu):
    return getattr(uu, "_flags", False)


FS_OPS = {0x14, 0x15, 0x16, 0x17}   # FSEQ FSSET FSAND FSOR
MAC_READS = {0x18, 0x1A, 0x1B}      # FMEQ FMAND FMOR


def writes_fmac_flags(upper):
    return fmac_kind(upper) is not None and f_dest(upper) != 0


def flag_liveness(decoded, pairs, seen, labels):
    """Upper FMAC ops whose MAC/status flag entry some instruction, handoff or
    the program end may observe; None when elision is not allowed (the
    program reads or resets status). A reader at pair P sees the newest entry
    issued >= 4 cycles earlier; every pair takes >= 1 cycle, so walking back
    along all paths, the flag writers closer than 4 pairs plus the first one
    at >= 4 pairs cover every entry it can see."""
    for pc in pairs:
        lower, upper = decoded[pc]
        if not (upper & 0x80000000) and lower not in (0, 0x8000033C) and ((lower >> 25) & 0x7F) in FS_OPS:
            return None

    def branch_pair(pc):
        if pc not in decoded:
            return False
        lower, upper = decoded[pc]
        return not (upper & 0x80000000) and is_branch(lower)

    succ = {}
    for pc in pairs:
        prev = pc - 8
        if branch_pair(prev):
            bl = decoded[prev][0]
            target = branch_target(bl, prev)
            out = list(labels) if target is None else [target]
            op = (bl >> 25) & 0x7F
            if op in (0x28, 0x29, 0x2C, 0x2D, 0x2E, 0x2F) and pc + 8 in seen:
                out.append(pc + 8)
        elif prev in decoded and decoded[prev][1] & 0x40000000:
            out = []
        else:
            out = [pc + 8] if pc + 8 in seen else []
        succ[pc] = [t for t in out if t in seen]
    preds = {pc: [] for pc in pairs}
    for pc, targets in succ.items():
        for t in targets:
            preds[t].append(pc)

    live = set()

    def window_from(starts):
        stack = [(q, 1) for q in starts]
        visited = set()
        while stack:
            q, d = stack.pop()
            key = (q, min(d, 4))
            if key in visited:
                continue
            visited.add(key)
            if writes_fmac_flags(decoded[q][1]):
                live.add(q)
                if d >= 4:
                    continue
            for p in preds[q]:
                stack.append((p, d + 1))

    def last_from(start):
        stack, visited = [start], set()
        while stack:
            q = stack.pop()
            if q in visited:
                continue
            visited.add(q)
            if writes_fmac_flags(decoded[q][1]):
                live.add(q)
                continue
            stack.extend(preds[q])

    for pc in pairs:
        lower, upper = decoded[pc]
        ibit = bool(upper & 0x80000000)
        op = (lower >> 25) & 0x7F
        special = upper_special(lower)
        mac_read = not ibit and lower not in (0, 0x8000033C) and op in MAC_READS
        xgkick = not ibit and op == 0x40 and (lower & 0x3F) >= 0x3C and special == 0x6C
        # Readers and possible handoffs before this pair executes.
        if mac_read or xgkick or pc in labels:
            window_from(preds[pc])
        # Handoff after this pair: JR dispatch, leaving compiled code.
        prev = pc - 8
        if branch_pair(prev) and branch_target(decoded[prev][0], prev) is None:
            window_from([pc])
        if not succ[pc] and not (prev in decoded and decoded[prev][1] & 0x40000000):
            window_from([pc])
        # Program end after an E-bit delay slot: the last entry sets the
        # final MAC and current status bits.
        if prev in decoded and decoded[prev][1] & 0x40000000:
            last_from(pc)
    return live


def generate(code, name, entries):
    seen, indirect = reachable(code, entries)
    pairs = sorted(seen)
    decoded = {}
    for pc in pairs:
        lower, upper = struct.unpack_from("<II", code, pc)
        decoded[pc] = (lower, upper)

    def branch_at(pc):
        if pc not in decoded:
            return False
        lower, upper = decoded[pc]
        return not (upper & 0x80000000) and is_branch(lower)

    def ebit_at(pc):
        return pc in decoded and bool(decoded[pc][1] & 0x40000000)

    labels = set(entries)
    link_returns = set()
    for pc in pairs:
        lower, upper = decoded[pc]
        if branch_at(pc):
            t = branch_target(lower, pc)
            if t is not None:
                labels.add(t)
            if ((lower >> 25) & 0x7F) in (0x21, 0x25):
                link_returns.add(pc + 16)
            labels.add(pc + 16)
    labels |= link_returns
    labels &= seen
    live_flags = flag_liveness(decoded, pairs, seen, labels)
    if live_flags is not None:
        flag_ops = sum(1 for pc in pairs if writes_fmac_flags(decoded[pc][1]))
        print(f"flag entries kept={len(live_flags)} of {flag_ops}", file=sys.stderr)

    # Straight-line blocks: the budget is checked once at each block start
    # with a margin covering the block's longest possible stalls, so a
    # handoff always happens before the interpreter would have stopped.
    block_margin = {}
    start = None
    for pc in pairs:
        if pc in labels or pc - 8 not in seen:
            start = pc
            block_margin[start] = 64
        lower, upper = decoded[pc]
        lu = lower_usage(lower) if not (upper & 0x80000000) else lower_usage(0)
        stall = 54 if lu.pipeline == "efu" else 13 if lu.pipeline == "fdiv" else 4
        block_margin[start] += 1 + stall

    body = []
    emit = body.append
    known = {}
    block_index = 0
    handoff_count = 0
    for pc in pairs:
        lower, upper = decoded[pc]
        ibit = bool(upper & 0x80000000)
        prev_branch = branch_at(pc - 8)
        prev_end = ebit_at(pc - 8)
        prev_target = None
        if prev_branch:
            pl = decoded[pc - 8][0]
            prev_target = branch_target(pl, pc - 8)
        emit(f"    // {pc:04x}  {disasm_upper(upper):38} {('loi' if ibit else disasm_lower(lower, pc))}")
        if prev_branch:
            tgt = "jt" if prev_target is None else f"0x{prev_target:04x}u"
            handoff = f"(VU_SYNC(), J.handoffDelay(0x{pc:04x}u, br, {tgt}, false))"
        elif prev_end:
            handoff = f"(VU_SYNC(), J.handoffDelay(0x{pc:04x}u, false, 0u, endp))"
        else:
            handoff = f"(VU_SYNC(), J.handoff(0x{pc:04x}u))"
        if pc in labels or pc - 8 not in seen:
            body.insert(len(body) - 1, f"L_{pc:04x}:")
            known = {}
            block_index = 0
            emit(f"    if (cyc + {block_margin[pc]}u >= J.budgetEnd) return {handoff};")
        else:
            block_index += 1
        if TRACE:
            emit(f"    if (g_vu1Trace) {{ J.cyc = cyc; J.commitNow(); traceVu1Pair(s, 0x{pc:04x}u, cyc); }}")

        uu = upper_usage(upper)
        lu = lower_usage(lower) if not ibit else lower_usage(0)
        if prev_branch and not ibit and is_branch(lower):
            emit(f"    return {handoff}; // branch in delay slot")
            handoff_count += 1
            continue
        try:
            lines = []
            # Upper/lower VF interaction (VU1Interpreter::decodeInstructionPair).
            uw_reg, uw_lanes = uu.vf_write
            lw_reg, lw_lanes = lu.vf_write
            shadow = uw_reg != 0 and (uw_reg in lu.vf_read or lw_reg == uw_reg)
            suppressed = uw_reg if (shadow and lw_reg == uw_reg) else -1
            # Interlock stall. Within a straight-line block a lane needs no
            # check if it was already read (and so waited for) or was written
            # by a pair at least its latency earlier: every pair takes >= 1 cycle.
            reads = []
            read_keys = []
            for u in (uu, lu):
                for reg, mask in u.vf_read.items():
                    for c in lanes_of(mask):
                        if reg:
                            read_keys.append((("vf", reg, c), f"vfReady[{reg}][{c}]"))
                for r in range(1, 16):
                    if u.vi_read >> r & 1:
                        read_keys.append((("vi", r), f"viReady[{r}]"))
                for c in lanes_of(u.acc_read):
                    read_keys.append((("acc", c), f"accReady[{c}]"))
            for key, expr in read_keys:
                state = known.get(key)
                if state == "ready":
                    continue
                if state is not None and block_index - state[0] >= state[1]:
                    continue
                reads.append(expr)
            if lu.pipeline == "fdiv":
                reads.append("(J.qPending ? J.qReady : 0u)")
            if lu.pipeline == "efu" and not lu.wait_p:
                reads.append("J.vu_efuResourceReady()")
            if lu.wait_p:
                reads.append("J.efuWaitAll()")
            reads = sorted(set(reads))
            if reads:
                lines.append("{ uint64_t r = cyc, t;")
                for rd in reads:
                    lines.append(f"  t = {rd}; if (t > r) r = t;")
                lines.append("  cyc = r; }")
            for key, _ in read_keys:
                known[key] = "ready"
            if lu.pipeline == "xgkick":
                lines.append(f"J.cyc = cyc; if (!J.kickWait()) {{ cyc = J.cyc; return {handoff}; }} cyc = J.cyc;")
            # Branch condition reads VI before this pair's writes.
            op_hi = (lower >> 25) & 0x7F
            if not ibit and is_branch(lower):
                if op_hi in (0x20, 0x21):
                    lines.append("br = true;")
                elif op_hi in (0x24, 0x25):
                    lines.append(f"br = true; jt = (static_cast<uint32_t>(static_cast<uint16_t>(rb({f_vis(lower)}))) * 8u) & 0x3FFFu;")
                else:
                    cond = BRANCH_COND[op_hi].format(s=f_vis(lower), t=f_vit(lower))
                    lines.append(f"br = {cond};")
            # Upper into ut[] (deferred VF commit keeps the pair's read-before-write semantics).
            upper_code = []
            upper_result = emit_upper(upper, upper_code, live_flags is None or pc in live_flags)
            uu._flags = fmac_kind(upper) is not None and f_dest(upper) != 0
            lines += upper_code
            # Lower; VI old value for the branch-read quirk.
            vi_written = 0
            for r in range(1, 16):
                if lu.vi_write >> r & 1:
                    vi_written = r
                    break
            if vi_written and lu.delays_next_branch_read:
                lines.append(f"const int32_t oldVi = s.vi[{vi_written}];")
            if ibit:
                lines.append(f"s.i = Vu1Jit::normOp(asf(static_cast<int32_t>(0x{lower:08x}u)));")
            else:
                lower_code = []
                emit_lower(lower, pc, lower_code, suppressed)
                lines += lower_code
            if upper_result:
                reg, mask = upper_result
                if reg:
                    for c in lanes_of(mask):
                        lines.append(f"s.vf[{reg}][{c}] = ut[{c}];")
            # Interlock ready cycles (VU1Interpreter::markPairWrites).
            lower_vf_written = lw_reg != 0 and lw_reg != suppressed
            if lower_vf_written:
                lat = lu.vf_latency or lu.latency
                for c in lanes_of(lw_lanes):
                    lines.append(f"vfReady[{lw_reg}][{c}] = cyc + {lat}u;")
            if uw_reg:
                lat = uu.vf_latency or uu.latency
                for c in lanes_of(uw_lanes):
                    lines.append(f"vfReady[{uw_reg}][{c}] = cyc + {lat}u;")
            for r in range(1, 16):
                if lu.vi_write >> r & 1:
                    lines.append(f"viReady[{r}] = cyc + {lu.vi_latency or lu.latency}u;")
            for c in lanes_of(uu.acc_write):
                lines.append(f"accReady[{c}] = cyc + {ACC_FORWARD_LATENCY}u;")
                known[("acc", c)] = (block_index, ACC_FORWARD_LATENCY)
            if lower_vf_written:
                for c in lanes_of(lw_lanes):
                    known[("vf", lw_reg, c)] = (block_index, lu.vf_latency or lu.latency)
            if uw_reg:
                for c in lanes_of(uw_lanes):
                    known[("vf", uw_reg, c)] = (block_index, uu.vf_latency or uu.latency)
            for r in range(1, 16):
                if lu.vi_write >> r & 1:
                    known[("vi", r)] = (block_index, lu.vi_latency or lu.latency)
            if vi_written and lu.delays_next_branch_read:
                lines.append(f"bkReg = {vi_written}; bkVal = oldVi;")
            else:
                lines.append("bkReg = 0;")
            lat = pair_latency(uu, lu, uw_reg != 0, lower_vf_written, vi_written, lower if not ibit else 0)
            if lat:
                lines.append(f"if (cyc + {lat}u > pmax) pmax = cyc + {lat}u;")
            lines.append("++cyc;")
            # Helpers that queue timed results read J.cyc.
            needs = ("J.fmac<", "J.clip", "J.fsset", "J.fcset", "J.commitNow", "J.readQ", "J.div", "J.sqrtQ",
                     "J.rsqrt", "J.readP", "J.queueP", "J.store", "J.kickStart")
            if any(n in l for l in lines for n in needs):
                pos = next(i for i, l in enumerate(lines) if any(n in l for n in needs))
                lines.insert(pos, "J.cyc = cyc;")
            # Control flow after this pair.
            if prev_branch:
                if prev_target is None:
                    lines.append("if (br) { br = false; s.branchTarget = jt; pcx = jt; goto dispatch; }")
                else:
                    lines.append(f"if (br) {{ br = false; s.branchTarget = 0x{prev_target:04x}u; goto L_{prev_target:04x}; }}")
            if prev_end:
                lines.append(f"if (endp) {{ VU_SYNC(); J.finish(0x{(pc + 8) & 0x3FFF:04x}u); return true; }}")
            if upper & 0x40000000:
                lines.append("endp = true;")
            emit("    {")
            for line in lines:
                emit("        " + line)
            emit("    }")
            if pc + 8 not in seen:
                # Fallthrough leaves reachable code: only possible after an
                # unconditional branch or program end; hand back otherwise.
                emit(f"    return (VU_SYNC(), J.handoff(0x{(pc + 8) & 0x3FFF:04x}u));")
        except Unsupported as error:
            emit(f"    return {handoff}; // unsupported: {error}")
            handoff_count += 1

    body, dead = eliminate_dead_ready_stores(body)

    dispatch = sorted(labels)
    out = []
    out.append("// Generated by project/tools/vu1/vu1_recomp.py. Do not edit.")
    out.append("#include \"runtime/ps2_vu1_jit.h\"")
    out.append("#include <algorithm>")
    out.append("#include <cmath>")
    out.append("#include <cstring>")
    out.append("")
    out.append("namespace")
    out.append("{")
    out.append("inline uint32_t vi32(float value) { uint32_t bits; std::memcpy(&bits, &value, 4); return bits; }")
    out.append("inline float asf(int32_t bits) { float value; std::memcpy(&value, &bits, 4); return value; }")
    out.append("inline float asf(uint32_t bits) { float value; std::memcpy(&value, &bits, 4); return value; }")
    out.append("")
    out.append(f"bool run_{name}(Vu1Jit &J, uint32_t pcx)")
    out.append("{")
    out.append("    VU1State &s = J.s;")
    out.append("    float ut[4], lt[4];")
    out.append("    bool br = false, endp = false;")
    out.append("    uint32_t jt = 0;")
    out.append("    (void)ut; (void)lt; (void)jt;")
    out.append("    uint64_t cyc = J.cyc, pmax = J.pendingMax;")
    out.append("    int bkReg = J.bkReg; int32_t bkVal = J.bkVal;")
    out.append("    uint64_t (*const vfReady)[4] = J.vfReady; uint64_t *const viReady = J.viReady; uint64_t *const accReady = J.accReady;")
    out.append("#define VU_SYNC() (J.cyc = cyc, J.pendingMax = pmax, J.bkReg = static_cast<uint8_t>(bkReg), J.bkVal = bkVal)")
    out.append("    auto rb = [&](int reg) -> int32_t { return reg == 0 ? 0 : (bkReg == reg ? bkVal : s.vi[reg]); };")
    out.append("    auto wvi = [&s](int reg, int32_t value) { s.vi[reg] = static_cast<int16_t>(value); };")
    out.append("dispatch:")
    out.append("    switch (pcx)")
    out.append("    {")
    for pc in dispatch:
        out.append(f"    case 0x{pc:04x}u: goto L_{pc:04x};")
    out.append("    default: return (VU_SYNC(), J.handoff(pcx));")
    out.append("    }")
    out += body
    out.append("}")
    out.append("")
    out.append("struct Register")
    out.append("{")
    out.append(f"    Register() {{ registerVu1CompiledProgram({{0x{fnv(code):016x}ull, &run_{name}, \"{name}\"}}); }}")
    out.append("} registration;")
    out.append("}")
    print(f"pairs={len(pairs)} labels={len(labels)} handoffs={handoff_count} dead_ready_stores={dead}", file=sys.stderr)
    return "\n".join(out) + "\n"


READY_STORE = re.compile(r"^\s+((?:vfReady\[\d+\]\[\d\])|(?:viReady\[\d+\])|(?:accReady\[\d\])) = cyc \+ \d+u;$")
READY_READ = re.compile(r"t = ((?:vfReady\[\d+\]\[\d\])|(?:viReady\[\d+\])|(?:accReady\[\d\]));")
BARRIER = ("return", "goto", "J.finish", "dispatch", "kickWait")


def eliminate_dead_ready_stores(body):
    """Drops interlock ready-cycle stores that are overwritten later in the
    same straight-line stretch before anything could observe them (a stall
    check, a jump, a handoff to the interpreter or the program end)."""
    later = set()
    keep = [True] * len(body)
    for index in range(len(body) - 1, -1, -1):
        line = body[index]
        if line.startswith("L_") or any(b in line for b in BARRIER):
            later.clear()
            continue
        store = READY_STORE.match(line)
        if store:
            key = store.group(1)
            if key in later:
                keep[index] = False
            else:
                later.add(key)
            continue
        for key in READY_READ.findall(line):
            later.discard(key)
    dead = keep.count(False)
    return [line for line, k in zip(body, keep) if k], dead


def fnv(data):
    h = 0xcbf29ce484222325
    for b in data:
        h ^= b
        h = (h * 0x100000001b3) & 0xFFFFFFFFFFFFFFFF
    return h


def main():
    global TRACE
    if "--trace" in sys.argv:
        sys.argv.remove("--trace")
        TRACE = True
    code = open(sys.argv[1], "rb").read()
    name = sys.argv[2]
    entries = [int(x, 0) for x in sys.argv[4:]]
    text = generate(code, name, entries)
    with open(sys.argv[3], "w", newline="\n") as f:
        f.write(text)


if __name__ == "__main__":
    main()
