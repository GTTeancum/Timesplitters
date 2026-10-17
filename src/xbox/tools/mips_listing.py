"""The MIPS listings in the generated code, as data (B-LOGIC's audits,
src/xbox/PUSH-BC-PLAN.md section 3.6 item 5; shared by abi_audit.py and
purity_audit.py).

Every translated function in project/generated/<name>_0x<addr>.cpp carries
its original instructions as comment lines:

    // 0x2e3180: 0x27bdff70  addiu       $sp, $sp, -0x90
        // 0x2e31a4: 0x...  daddu       $a1, $s0, $zero (Delay Slot)

nops are left out (a missing address is a nop). Instructions the
disassembler did not name appear as ".word 0x... # <name> <operands> #" or,
for some COP1 forms, as "c1 0x<code>"; both are decoded here. Files without
listing lines are runtime stubs (ps2_stubs::*); they are kept, with no
instructions, so their callers still resolve.

Register sets are Python ints, one bit per register:
    bits 0-31   $0-$31
    bits 32-63  $f0-$f31
    bit  64     HI/LO      bit 65  HI1/LO1
    bit  66     the FPU condition bit (fcr31 C)
    bit  67     the FPU accumulator (madd.s / mula.s)
"""

import os
import re

HILO, HILO1, FCC, FACC = 64, 65, 66, 67

GPR_NAMES = ["zero", "at", "v0", "v1", "a0", "a1", "a2", "a3", "t0", "t1", "t2", "t3", "t4", "t5", "t6", "t7",
             "s0", "s1", "s2", "s3", "s4", "s5", "s6", "s7", "t8", "t9", "k0", "k1", "gp", "sp", "fp", "ra"]
REG_BIT = {"$" + n: i for i, n in enumerate(GPR_NAMES)}
REG_BIT["$s8"] = 30
for i in range(32):
    REG_BIT["$f%d" % i] = 32 + i

# Registers a caller may not rely on after a call by the ABI: the ones the
# audit decides about. Everything else ($s0-$s7, $gp, $sp, $fp, $ra,
# $f20-$f31) is always "observed" (a native keeps them as the original).
CALLER_SAVED = 0
for n in ("at", "v0", "v1", "a0", "a1", "a2", "a3", "t0", "t1", "t2", "t3", "t4", "t5", "t6", "t7", "t8", "t9"):
    CALLER_SAVED |= 1 << REG_BIT["$" + n]
for i in range(20):
    CALLER_SAVED |= 1 << (32 + i)
CALLER_SAVED |= (1 << HILO) | (1 << HILO1) | (1 << FCC) | (1 << FACC)
ALL_TRACKED = CALLER_SAVED
# The EE's EABI passes eight integer arguments ($a0-$a3, $t0-$t3) and eight
# float ones ($f12-$f19).
ARG_REGS = 0
for n in ("a0", "a1", "a2", "a3", "t0", "t1", "t2", "t3"):
    ARG_REGS |= 1 << REG_BIT["$" + n]
for i in range(12, 20):
    ARG_REGS |= 1 << (32 + i)

LINE = re.compile(r"^\s*// 0x([0-9a-f]+): 0x([0-9a-f]+)\s+(\S+)\s*(.*?)\s*$")
FUNC = re.compile(r"^// Function: (\S+)")
RANGE = re.compile(r"^// Address: 0x([0-9a-f]+) - 0x([0-9a-f]+)")
FILE = re.compile(r"^(.+)_0x([0-9a-f]+)\.cpp$")
REGS = re.compile(r"\$(?:f\d+|[a-z][a-z0-9]?|zero)\b")
REL = re.compile(r"\. \+ 4 \+ \((-?0x[0-9A-Fa-f]+) << 2\)")
CALLEE = re.compile(r"func_([0-9A-Fa-f]+)")
CASE = re.compile(r"^\s*case 0x([0-9A-Fa-f]+)u: goto label_")

STORES = {"sb", "sh", "sw", "sd", "sq", "swc1", "sdc1", "sqc2", "swl", "swr", "sdl", "sdr"}
LOADS = {"lb", "lbu", "lh", "lhu", "lw", "lwu", "ld", "lq", "lwc1", "ldc1", "lqc2"}
MERGE_LOADS = {"lwl", "lwr", "ldl", "ldr"}
NOTHING = {"nop", "sync", "sync.p", "sync.l", "ei", "di", "pref", "cache", "break", "vnop", "vwaitq", "eret", "ssnop"}
MULDIV = re.compile(r"^(mult|multu|div|divu|madd|maddu|dmult|ddiv)(1?)$")
LIKELY = re.compile(r"^(beql|bnel|beqzl|bnezl|blezl|bgtzl|bltzl|bgezl|bc1tl|bc1fl|bltzall|bgezall)$")
BRANCH = re.compile(r"^(b|beq|bne|beqz|bnez|blez|bgtz|bltz|bgez|bc1t|bc1f|bltzal|bgezal)$")


def bit(name):
    b = REG_BIT.get(name)
    return 0 if b is None or b == 0 else 1 << b


def bits(names):
    v = 0
    for n in names:
        v |= bit(n)
    return v


class Insn:
    __slots__ = ("addr", "word", "op", "args", "regs", "use", "defs", "kind", "target", "callee", "likely", "uncond",
                 "cases")

    def __init__(self, addr, word, op, args):
        self.addr = addr
        self.word = word
        self.op = op
        self.args = args
        self.regs = REGS.findall(args)
        self.use = 0
        self.defs = 0
        self.kind = "op"     # op, branch, jal, jalr, j, jr_ra, jr, syscall
        self.target = None   # branch target address
        self.callee = None   # jal / j target address
        self.likely = False
        self.uncond = False
        self.cases = []      # a jump table's targets (jr other than $ra), from the translation
        self._classify()

    def _classify(self):
        op, regs = self.op, self.regs
        if op == ".word":
            # ".word 0x... # cvt.w.s $f0, $f1 # ..." : decode the comment
            m = re.search(r"#\s*([a-z0-9.]+)\s+([^#]*)#", self.args)
            if m:
                self.op, self.args = m.group(1), m.group(2).strip()
                self.regs = REGS.findall(self.args)
                return self._classify()
            self.use = ALL_TRACKED   # unknown: reads everything, writes nothing
            return
        if op == "c1":
            self._cop1(self.word)
            return
        if op in NOTHING:
            return
        if op in STORES:
            self.use = bits(regs)
            return
        if op in LOADS:
            self.defs = bits(regs[:1])
            self.use = bits(regs[1:])
            return
        if op in MERGE_LOADS:
            self.defs = bits(regs[:1])
            self.use = bits(regs)
            return
        if op == "jal":
            self.kind = "jal"
            m = CALLEE.search(self.args)
            self.callee = int(m.group(1), 16) if m else None
            self.defs = bit("$ra")
            return  # (the callee's reads happen after the delay slot: abi_audit.py)
        if op == "jalr":
            self.kind = "jalr"
            self.use = bits(regs[-1:])
            self.defs = bits(regs[:1]) if len(regs) == 2 else bit("$ra")
            return
        if op == "j":
            self.kind = "j"
            m = CALLEE.search(self.args)
            self.callee = int(m.group(1), 16) if m else None
            return
        if op == "jr":
            self.kind = "jr_ra" if regs[:1] == ["$ra"] else "jr"
            self.use = bits(regs)
            return
        if op == "syscall":
            # The kernel call reads its number ($v1) and its arguments.
            # How many a given call takes is not in the listing; $a0 is
            # counted. The others are set by the wrapper's caller right
            # before the call, so leaving them out only loses a chain in
            # which a caller hands a kernel call a register some earlier
            # callee left behind (not something compiled code does).
            self.kind = "syscall"
            self.use = bit("$v1") | bit("$a0")
            return
        if BRANCH.match(op) or LIKELY.match(op):
            self.kind = "branch"
            self.likely = bool(LIKELY.match(op))
            m = REL.search(self.args)
            self.target = self.addr + 4 + int(m.group(1), 16) * 4 if m else None
            self.use = bits(regs)
            if op.startswith("bc1"):
                self.use |= 1 << FCC
            if op.endswith("al") or op.endswith("all"):
                self.defs |= bit("$ra")
            self.uncond = op == "b" or (op == "beq" and len(regs) >= 2 and regs[0] == regs[1]) or \
                (op == "beqz" and regs[:1] == ["$zero"])
            return
        m = MULDIV.match(op)
        if m:
            unit = HILO1 if m.group(2) else HILO
            self.use = bits(regs[-2:]) if len(regs) >= 2 else bits(regs)
            if m.group(1).startswith("madd"):
                self.use |= 1 << unit
            self.defs = 1 << unit
            if len(regs) == 3:
                self.defs |= bit(regs[0])
            return
        if op in ("mfhi", "mflo", "mfhi1", "mflo1"):
            self.defs = bits(regs[:1])
            self.use = 1 << (HILO1 if op.endswith("1") else HILO)
            return
        if op in ("mthi", "mtlo", "mthi1", "mtlo1"):
            unit = HILO1 if op.endswith("1") else HILO
            self.use = bits(regs) | (1 << unit)   # half of the unit: no kill
            self.defs = 1 << unit
            return
        if op.startswith("pmf") or op.startswith("pmt"):
            self.use = bits(regs[1:]) | (1 << HILO) | (1 << HILO1)
            self.defs = bits(regs[:1]) | ((1 << HILO) | (1 << HILO1) if op.startswith("pmt") else 0)
            return
        if op in ("mtc1", "dmtc1"):
            self.use = bits(regs[:1])
            self.defs = bits(regs[1:2])
            return
        if op in ("mfc1", "dmfc1"):
            self.defs = bits(regs[:1])
            self.use = bits(regs[1:2])
            return
        if op == "ctc1":
            self.use = bits(regs[:1]) | (1 << FCC)
            self.defs = 1 << FCC
            return
        if op == "cfc1":
            self.defs = bits(regs[:1])
            self.use = 1 << FCC
            return
        if op.startswith("c.") and (op.endswith(".s") or op.endswith(".d")):
            self.use = bits(regs)
            self.defs = 1 << FCC
            return
        if op in ("madd.s", "msub.s"):
            self.defs = bits(regs[:1])
            self.use = bits(regs[1:]) | (1 << FACC)
            return
        if op in ("adda.s", "suba.s", "mula.s"):
            self.use = bits(regs)
            self.defs = 1 << FACC
            return
        if op in ("madda.s", "msuba.s"):
            self.use = bits(regs) | (1 << FACC)
            self.defs = 1 << FACC
            return
        if op in ("movn", "movz", "movn.s", "movz.s"):
            self.defs = bits(regs[:1])
            self.use = bits(regs)     # conditional: the old value may survive
            return
        if op in ("movt", "movf", "movt.s", "movf.s"):
            self.defs = bits(regs[:1])
            self.use = bits(regs) | (1 << FCC)
            return
        if op in ("qmtc2", "qmtc2.ni", "qmtc2.i", "ctc2", "ctc2.ni", "ctc2.i", "mtc0", "mtsa", "mtsab", "mtsah"):
            self.use = bits(regs)
            return
        if op in ("qmfc2", "qmfc2.ni", "qmfc2.i", "cfc2", "cfc2.ni", "cfc2.i", "mfc0", "mfsa"):
            self.defs = bits(regs[:1])
            return
        if op.startswith("v"):       # VU0 macro ops: vf/vi registers are not tracked
            return
        # Default: the first register is written, the rest read.
        self.defs = bits(regs[:1])
        self.use = bits(regs[1:])

    def _cop1(self, word):
        fmt = (word >> 21) & 31
        ft, fs, fd, funct = (word >> 16) & 31, (word >> 11) & 31, (word >> 6) & 31, word & 63
        f = lambda n: 1 << (32 + n)
        if fmt != 0x10:
            self.use = ALL_TRACKED
            return
        if funct in (0x18, 0x1A):            # adda.s / mula.s
            self.use, self.defs = f(fs) | f(ft), 1 << FACC
        elif funct in (0x19, 0x1B):          # suba.s / msuba.s-like forms: conservative
            self.use, self.defs = f(fs) | f(ft) | (1 << FACC), 1 << FACC
        elif funct in (0x1C, 0x1D):          # madd.s / msub.s
            self.use, self.defs = f(fs) | f(ft) | (1 << FACC), f(fd)
        elif funct in (0x1E, 0x1F):          # madda.s / msuba.s
            self.use, self.defs = f(fs) | f(ft) | (1 << FACC), 1 << FACC
        elif funct >= 0x30:                  # compares
            self.use, self.defs = f(fs) | f(ft), 1 << FCC
        else:                                # sqrt.s fd, ft; rsqrt.s; max/min; arithmetic
            self.use, self.defs = f(fs) | f(ft), f(fd)


class Function:
    __slots__ = ("name", "address", "end", "insns", "stub", "path")

    def __init__(self, name, address, end, insns, stub, path):
        self.name, self.address, self.end, self.insns, self.stub, self.path = name, address, end, insns, stub, path


def read_function(path):
    m = FILE.match(os.path.basename(path))
    if not m:
        return None
    name, address = m.group(1), int(m.group(2), 16)
    end = None
    insns = []
    table = None  # the jr whose jump table the translation spells out next
    with open(path, encoding="utf-8", errors="replace") as handle:
        for line in handle:
            if table is not None:
                cm = CASE.match(line)
                if cm:
                    table.cases.append(int(cm.group(1), 16))
                    continue
                if "dispatchGuestBranch" in line or LINE.match(line):
                    table = None
            lm = LINE.match(line)
            if lm:
                args = lm.group(4).replace("(Delay Slot)", "").strip()
                insns.append(Insn(int(lm.group(1), 16), int(lm.group(2), 16), lm.group(3), args))
                if insns[-1].kind == "jr":
                    table = insns[-1]
                continue
            rm = RANGE.match(line)
            if rm:
                end = int(rm.group(2), 16)
    insns.sort(key=lambda i: i.addr)
    # The same address twice (a delay slot listed under a branch and again as
    # a branch target): keep one.
    unique = []
    for insn in insns:
        if not unique or unique[-1].addr != insn.addr:
            unique.append(insn)
    # An unaligned load pair (ldl/ldr, lwl/lwr into one register, next to
    # each other) writes the whole register: the first half reads nothing
    # of the old value that survives the second.
    pair = {"ldl": "ldr", "ldr": "ldl", "lwl": "lwr", "lwr": "lwl"}
    for first, second in zip(unique, unique[1:]):
        if first.op in pair and second.op == pair[first.op] and second.addr == first.addr + 4 and \
                first.regs[:1] == second.regs[:1] and first.regs[:1] != first.regs[1:2]:
            first.use = bits(first.regs[1:])
    # A variadic function spills every argument register in its prologue
    # (va_start): the spills of the ones a call does not pass are never read
    # back (the format decides), so they do not count as reads. Recognised
    # by the spill of $t3, the last EABI argument register.
    prologue = []
    for k, insn in enumerate(unique[:32]):
        if insn.kind != "op":
            if k + 1 < len(unique) and unique[k + 1].addr == insn.addr + 4:
                prologue.append(unique[k + 1])  # (its delay slot runs first)
            break
        prologue.append(insn)
    spills = [insn for insn in prologue if insn.op in ("sd", "sw", "sq") and len(insn.regs) == 2 and
              insn.regs[1] == "$sp" and bit(insn.regs[0]) & ARG_REGS]
    if any(insn.regs[0] == "$t3" for insn in spills):
        for insn in spills:
            insn.use = bit("$sp")
    # A nop in a delay slot is left out like any other: put it back, so
    # every branch, call and jump has its slot.
    listed = {insn.addr for insn in unique}
    slots = [Insn(insn.addr + 4, 0, "nop", "") for insn in unique
             if insn.kind != "op" and insn.kind != "syscall" and insn.addr + 4 not in listed]
    if slots:
        unique = sorted(unique + slots, key=lambda i: i.addr)
    if end is None:
        end = (unique[-1].addr + 4) if unique else address + 4
    return Function(name, address, end, unique, not unique, path)


def read_corpus(generated):
    functions = {}
    for entry in sorted(os.listdir(generated)):
        if entry.endswith(".cpp"):
            fn = read_function(os.path.join(generated, entry))
            if fn:
                functions[fn.address] = fn
    return functions


def mask_text(mask):
    names = []
    for i in range(32):
        if mask >> i & 1:
            names.append("$" + GPR_NAMES[i])
    for i in range(32):
        if mask >> (32 + i) & 1:
            names.append("$f%d" % i)
    for b, n in ((HILO, "hilo"), (HILO1, "hilo1"), (FCC, "fcc"), (FACC, "facc")):
        if mask >> b & 1:
            names.append(n)
    return " ".join(names)
