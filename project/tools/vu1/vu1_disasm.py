"""Disassemble a VU1 microcode image and report its reachable control flow.

usage: vu1_disasm.py code.bin entry-pc [entry-pc ...]
"""
import struct
import sys

from vu1_isa import (disasm_lower, disasm_upper, is_branch, branch_target, is_conditional,
                     lower_usage, upper_usage)


def reachable(code, entries):
    """Follow control flow from the entry points (including delay slots and
    E-bit delay slots). Returns the set of reachable pair addresses and the
    register-indirect jumps found."""
    seen, work, indirect = set(), list(entries), set()
    while work:
        pc = work.pop()
        while pc not in seen and pc + 8 <= len(code):
            seen.add(pc)
            lower, upper = struct.unpack_from("<II", code, pc)
            ibit = bool(upper & 0x80000000)
            if upper & 0x40000000:  # E bit: the next pair is the delay slot
                seen.add(pc + 8)
                break
            if not ibit and is_branch(lower):
                target = branch_target(lower, pc)
                seen.add(pc + 8)  # delay slot
                if target is None:
                    indirect.add(pc)
                else:
                    work.append(target)
                if is_conditional(lower) or ((lower >> 25) & 0x7F) in (0x21, 0x25):
                    # Fall through after the delay slot (links return there too).
                    work.append(pc + 16)
                break
            pc += 8
    return seen, indirect


def main():
    code = open(sys.argv[1], "rb").read()
    entries = [int(x, 0) for x in sys.argv[2:]]
    seen, indirect = reachable(code, entries)
    targets = set()
    for pc in seen:
        lower, upper = struct.unpack_from("<II", code, pc)
        if not (upper & 0x80000000) and is_branch(lower):
            t = branch_target(lower, pc)
            if t is not None:
                targets.add(t)
    for pc in sorted(seen):
        lower, upper = struct.unpack_from("<II", code, pc)
        flags = "".join(ch for bit, ch in ((31, "I"), (30, "E"), (29, "M"), (28, "D"), (27, "T")) if upper >> bit & 1)
        low = f"loi 0x{lower:08x}" if upper & 0x80000000 else disasm_lower(lower, pc)
        label = "L:" if pc in targets or pc in entries else "  "
        print(f"{label}{pc:04x} {flags:2} {disasm_upper(upper):40} {low}")
    print(f"# reachable pairs={len(seen)} indirect-jumps={[hex(p) for p in sorted(indirect)]}", file=sys.stderr)


if __name__ == "__main__":
    main()
