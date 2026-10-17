"""Per-callee observed-register audit (B-LOGIC, src/xbox/PUSH-BC-PLAN.md
section 3.6 item 5; section 6 I-12).

A native (an idiomatic module, an x87 double routine, an inline leaf core)
may leave a caller-saved register as it likes only if no caller ever reads
the value the original leaves in it. This tool proves which registers each
function's callers read after the call ("observed"):

  * Liveness over every function's control-flow graph, from its listing
    (mips_listing.py): delay slots, likely branches, jump tables and calls. At a call site the registers live
    at the return point are observed for the callee. A call itself kills
    nothing (conservative: what is live after it is live before it), and
    reads what its callee reads before writing (a fixpoint too; every
    argument register for a runtime stub; for an indirect call the
    argument registers its caller sets right before it).
  * A fixpoint over the call graph: at `jr $ra` the live set is the
    function's own observed set (what its callers read flows out through
    its returns), and a tail jump `j g` hands the function's observed set to
    g. Rounds repeat until nothing changes.
  * Registers live after an indirect call (jalr) are added to every
    function an indirect call may reach (address built as a constant in the
    code, or no direct caller at all). A jump through a table (jr
    other than $ra) may go to any instruction of its function.
  * $v0, $v1 and $f0 are ordinary registers (a void callee's caller may read
    a $v0 it set before the call, through the callee).
  * Callee-saved registers ($s0-$s7, $gp, $sp, $fp, $ra, $f20-$f31) are
    always observed; a native keeps them as the original does.

The well-known cases (section 3.6 item 5) come out of it: $at after sqrtf
(a li.s split across the jal's delay slot, bgHittestDistGlass), $a0 after
newrnd.

The call model (Analysis.passthrough): by default a call ends the life of
the caller-saved values set before it, as compiled code assumes; a register
read after a call before any write, or handed to the next callee without
being set, is observed for that call. --passthrough makes calls kill nothing
(a value may survive any number of calls), which is sound for any code but
leaves almost nothing free.

Usage:
    python abi_audit.py <generated dir> <targets file> <out header> [--report <file>] [--passthrough]

The targets file lists the functions whose sets go into the header, one
hex address per line (# comments allowed): the leaf whitelist's entries and
every native that registers with Contract::Abi. The header is
project/game/native/ts_abi_observed.h; the part between the BEGIN/END
markers is replaced, the rest kept. A change in a set must be reviewed
before it is committed (the natives' correctness depends on it).
"""

import os
import re
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import mips_listing as ml  # noqa: E402

CALLEE_SAVED_GPR = 0
for _n in ("s0", "s1", "s2", "s3", "s4", "s5", "s6", "s7", "gp", "sp", "fp", "ra"):
    CALLEE_SAVED_GPR |= 1 << ml.REG_BIT["$" + _n]
CALLEE_SAVED_FPR = 0
for _i in range(20, 32):
    CALLEE_SAVED_FPR |= 1 << _i


def successors(fn, index, by_addr):
    """(successor indices, extra live-out bits, call record) for the
    instruction at index. A call record is (kind, callee) for the delay slot
    of a jal/jalr/j/jr: the effect happens after the slot executes."""
    insns = fn.insns
    insn = insns[index]

    def at(addr):
        return by_addr.get(addr)

    # The previous instruction, if this one is its delay slot.
    prev = insns[index - 1] if index > 0 and insns[index - 1].addr == insn.addr - 4 else None
    if prev is not None and prev.kind != "op":
        kind = prev.kind
        if kind == "branch":
            out = []
            if prev.target is not None and fn.address <= prev.target < fn.end:
                t = at(prev.target)
                out.append(("addr", prev.target))
            elif prev.target is not None:
                return [], 0, ("tail", prev.target)  # into another function: a tail jump
            if not prev.uncond and not prev.likely:
                out.append(("addr", insn.addr + 4))
            return out, 0, None
        if kind in ("jal", "jalr", "syscall"):
            return [("addr", insn.addr + 4)], 0, (kind, prev.callee)
        if kind == "j":
            if prev.callee is not None and fn.address <= prev.callee < fn.end:
                return [("addr", prev.callee)], 0, None
            return [], 0, ("tail", prev.callee)
        if kind == "jr_ra":
            return [], 0, ("ret", None)
        if kind == "jr":
            # A jump table: its targets as the translation resolved them;
            # without them, any instruction of this function.
            if prev.cases:
                return [("addr", t) for t in prev.cases], 0, None
            return [], 0, ("switch", None)
    if insn.kind == "branch":
        # The delay slot always follows; a likely branch skips it when not
        # taken.
        out = [("addr", insn.addr + 4)]
        if insn.likely:
            out.append(("addr", insn.addr + 8))
        return out, 0, None
    if insn.kind == "syscall":
        return [("addr", insn.addr + 4)], 0, ("syscall", None)
    return [("addr", insn.addr + 4)], 0, None


def indirect_args(fn, index, targets):
    """The argument registers an indirect call at index reads: the ones its
    caller sets in the straight-line run before it (and in its delay slot).
    An unknown target's argument count is not in the listing; the compiler
    sets every argument right before the call."""
    insns = fn.insns
    found = 0
    if index + 1 < len(insns) and insns[index + 1].addr == insns[index].addr + 4:
        found |= insns[index + 1].defs
    k = index - 1
    while k >= 0:
        insn = insns[k]
        if insn.kind != "op" or insns[k + 1].addr in targets:
            break
        # (the delay slot of an earlier transfer ends the run too)
        if k > 0 and insns[k - 1].kind != "op" and insns[k - 1].addr == insn.addr - 4:
            break
        found |= insn.defs
        k -= 1
    return found & ml.ARG_REGS


class Analysis:
    def __init__(self, functions, entry_dead=None, passthrough=False):
        self.functions = functions
        # The call model. False (the default, "abi"): a call ends the life of
        # every caller-saved value set before it (what compiled code relies
        # on); a read after a call is that call's observation, and a read
        # by a callee of a register its caller did not set (a leftover
        # handed on) is the previous call's. True ("passthrough"): a call
        # kills nothing, so a value set before one call and read after a
        # later one counts for both; far more conservative (most caller-
        # saved registers come out observed everywhere).
        self.passthrough = passthrough
        # Entry reads whose value reaches nothing a caller sees
        # (abi_entry_dead.txt, checked by hand): not counted as reads.
        self.entry_dead = entry_dead or {}
        self.observed = {a: 0 for a in functions}
        self.indirect = 0
        # What each function reads before writing (its arguments, and what
        # passes through it): a call reads its callee's set. Unknown for the
        # stubs (no listing): every argument register.
        self.entry_use = {a: (ml.ARG_REGS if fn.stub else 0) for a, fn in functions.items()}
        self.graph = {}
        for a, fn in functions.items():
            self.graph[a] = self._build(fn)
        self.noreturn = self._noreturn()
        self.address_taken = self._address_taken()

    def _address_taken(self):
        """The functions an indirect call may reach: every one whose start
        address the code builds as a constant (lui + addiu/ori), and every
        one no instruction calls or jumps to directly (reached from a table
        in data, a thread entry, a callback). The library leaves the natives
        replace are called directly; a function both called directly and
        stored only in a data table would be missed: the boot tests in Abi
        mode, poisoning and the lockstep are the backstop
        (src/xbox/PUSH-BC-PLAN.md section 3.6 item 5)."""
        called = set()
        taken = set()
        for fn in self.functions.values():
            high = {}
            for insn in fn.insns:
                if insn.kind in ("jal", "j") and insn.callee is not None:
                    called.add(insn.callee)
                if insn.op == "lui" and len(insn.regs) == 1:
                    try:
                        high[insn.regs[0]] = int(insn.args.split(",")[1].strip(), 16) << 16
                    except (IndexError, ValueError):
                        pass
                    continue
                if insn.op in ("addiu", "ori", "daddiu") and len(insn.regs) == 2 and insn.regs[1] in high:
                    try:
                        low = int(insn.args.split(",")[2].strip(), 16)
                    except (IndexError, ValueError):
                        low = None
                    if low is not None:
                        value = (high[insn.regs[1]] + low) & 0xFFFFFFFF if insn.op != "ori" else \
                            high[insn.regs[1]] | (low & 0xFFFF)
                        if value in self.functions:
                            taken.add(value)
                for r in insn.regs[:1]:
                    if r in high and insn.defs & ml.bit(r):
                        del high[r]
        return taken | (set(self.functions) - called)

    def _noreturn(self):
        """Functions that never return (exit, abort, the kernel's ExitThread
        family): nothing after a call to one of them is reached from it.
        A function returns if it has a `jr $ra`, or a tail jump into one that
        returns; a stub returns unless it is one of the runtime's exits."""
        returns = set()
        for a, fn in self.functions.items():
            if fn.stub and fn.name not in STUB_NORETURN:
                returns.add(a)
            elif any(insn.kind == "jr_ra" for insn in fn.insns):
                returns.add(a)
        changed = True
        while changed:
            changed = False
            for a, nodes in self.graph.items():
                if a in returns:
                    continue
                for _, _, call in nodes:
                    if call is not None and call[0] == "tail" and (call[1] in returns or call[1] not in self.functions):
                        returns.add(a)
                        changed = True
                        break
        return set(self.functions) - returns

    def _build(self, fn):
        by_addr = {}
        for i, insn in enumerate(fn.insns):
            by_addr[insn.addr] = i
        targets = {insn.target for insn in fn.insns if insn.kind == "branch" and insn.target is not None}
        nodes = []
        for i, insn in enumerate(fn.insns):
            succ, extra, call = successors(fn, i, by_addr)
            if call is not None and call[0] == "jalr":
                call = ("jalr", indirect_args(fn, i - 1, targets))
            elif call is not None and call[0] == "jal" and call[1] in self.functions and \
                    self.functions[call[1]].stub:
                # A runtime stub (host code) reads its arguments only; how
                # many is not in a listing: the ones set right before the
                # call, as for an indirect call.
                call = ("jalr", indirect_args(fn, i - 1, targets), call[1])
            idx = []
            for _, addr in succ:
                j = by_addr.get(addr)
                if j is None:
                    # A nop (left out of the listing): walk to the next listed
                    # instruction, or off the end (unknown).
                    nxt = None
                    for k in range(len(fn.insns)):
                        if fn.insns[k].addr >= addr:
                            nxt = k
                            break
                    if nxt is None or addr >= fn.end:
                        # Off the end of the listing: into the next
                        # function (a tail jump to it), or a call that does
                        # not return (_exit).
                        if call is None:
                            call = ("tail", addr)
                    else:
                        idx.append(nxt)
                else:
                    idx.append(j)
            nodes.append((idx, extra, call))
        # A jump table the translation did not resolve: its targets are the
        # case blocks, which nothing else reaches (no fall-through, branch
        # or other table leads to them).
        if any(call is not None and call[0] == "switch" for _, _, call in nodes):
            reached = {0}
            for idx, _, _ in nodes:
                reached.update(idx)
            orphans = [i for i in range(len(nodes)) if i not in reached]
            if orphans:
                nodes = [(idx + orphans, extra, None) if call is not None and call[0] == "switch" else
                         (idx, extra, call) for idx, extra, call in nodes]
        return nodes

    def liveness(self, a, reads_only=False):
        """Live sets before each instruction of function a. reads_only: what
        a reads before writing, its returns contributing nothing (a call's
        own reads; what passes through it is the caller's live set, which a
        call never kills)."""
        fn = self.functions[a]
        nodes = self.graph[a]
        n = len(fn.insns)
        live_in = [0] * n
        own = 0 if reads_only else self.observed[a]
        changed = True
        anywhere = 0  # live into some instruction of the function: a jump table's target
        while changed:
            changed = False
            for i in range(n - 1, -1, -1):
                idx, extra, call = nodes[i]
                out = extra
                for j in idx:
                    out |= live_in[j]
                if call is not None:
                    kind, callee = call[0], call[1]
                    if kind == "switch":
                        out |= anywhere
                    elif kind == "ret":
                        out |= own
                    elif kind == "tail":
                        out |= own | self.entry_use.get(callee, ml.ARG_REGS)
                    elif kind == "jal":  # the callee's reads added
                        if callee in self.noreturn:
                            out = extra
                        elif not self.passthrough:
                            out &= ~ml.CALLER_SAVED
                        out |= self.entry_use.get(callee, ml.ARG_REGS)
                    elif kind == "jalr":
                        if not self.passthrough:
                            out &= ~ml.CALLER_SAVED
                        out |= callee  # (the arguments set before it)
                    # (a syscall's reads are the instruction's own; the
                    # kernel keeps the other registers)
                insn = fn.insns[i]
                value = insn.use | (out & ~insn.defs)
                if value != live_in[i]:
                    live_in[i] = value
                    anywhere |= value
                    changed = True
        if n and reads_only:
            self.entry_use[a] = live_in[0] & ml.CALLER_SAVED & ~self.entry_dead.get(a, 0)
        return live_in

    def may_write(self):
        """The caller-saved registers each function (with its callees) may
        write: a fixpoint over direct calls and tail jumps; a stub or an
        indirect call may write any of them."""
        writes = {}
        for a, fn in self.functions.items():
            if fn.stub:
                writes[a] = ml.CALLER_SAVED
                continue
            w = 0
            for insn in fn.insns:
                w |= insn.defs
                if insn.kind in ("jalr", "syscall"):
                    w |= ml.CALLER_SAVED
            writes[a] = w & ml.CALLER_SAVED
        changed = True
        while changed:
            changed = False
            for a, fn in self.functions.items():
                w = writes[a]
                for insn in fn.insns:
                    if insn.kind in ("jal", "j") and insn.callee is not None:
                        w |= writes.get(insn.callee, ml.CALLER_SAVED if insn.callee not in self.functions else 0)
                for _, _, call in self.graph[a]:
                    if call is not None and call[0] == "tail" and call[1] is not None:
                        w |= writes.get(call[1], 0)
                if w != writes[a]:
                    writes[a] = w
                    changed = True
        return writes

    def after_calls(self, a, live_in):
        """(callee or kind, live at the return point) for each call."""
        fn = self.functions[a]
        nodes = self.graph[a]
        found = []
        for i in range(len(fn.insns)):
            idx, extra, call = nodes[i]
            if call is None:
                continue
            kind, callee = call[0], call[1]
            if kind == "jalr" and len(call) == 3:
                kind, callee = "jal", call[2]  # a stub call
            after = extra
            for j in idx:
                after |= live_in[j]
            if kind == "jal":
                if callee not in self.noreturn:
                    found.append((callee, after & ml.CALLER_SAVED))
            elif kind == "jalr":
                found.append(("indirect", after & ml.CALLER_SAVED))
            # (a syscall enters the kernel, not a guest function: nothing to
            # attribute)
            elif kind == "tail":
                found.append((("tail", callee), self.observed[a]))
        return found

    def run(self):
        rounds = 0
        while True:
            rounds += 1
            before = (dict(self.observed), self.indirect, dict(self.entry_use))
            for a in self.functions:
                self.liveness(a, reads_only=True)
            for a in self.functions:
                live_in = self.liveness(a)
                for callee, mask in self.after_calls(a, live_in):
                    if callee == "indirect":
                        self.indirect |= mask
                    elif isinstance(callee, tuple):
                        target = callee[1]
                        if target in self.observed:
                            self.observed[target] |= mask
                    elif callee in self.observed:
                        self.observed[callee] |= mask
            if (self.observed, self.indirect, self.entry_use) == before or rounds > 50:
                break
        for a in self.address_taken:
            self.observed[a] |= self.indirect
        return rounds


STUB_NORETURN = {"exit", "_exit", "abort", "ExitThread", "ExitDeleteThread", "_Exit"}


def read_entry_dead(path):
    """abi_entry_dead.txt: '<hex address> <reg> ... # why' lines."""
    dead = {}
    if not os.path.exists(path):
        return dead
    for line in open(path):
        line = line.split("#", 1)[0].split()
        if len(line) >= 2:
            mask = 0
            for name in line[1:]:
                mask |= ml.bit(name if name.startswith("$") else "$" + name)
            dead[int(line[0], 16)] = dead.get(int(line[0], 16), 0) | mask
    return dead


def split(observed, writes):
    """The header's masks: every register a native must leave exactly as
    the original: callee-saved ones, observed ones, and the ones the
    original never writes (their value is the entry value; a native that
    leaves them alone matches). The rest (written by the original, read by
    no caller) the native may leave as it likes."""
    free = writes & ~observed & ml.CALLER_SAVED
    keep = ~free
    gpr = (keep & 0xFFFFFFFF) | CALLEE_SAVED_GPR
    fpr = ((keep >> 32) & 0xFFFFFFFF) | CALLEE_SAVED_FPR
    misc = (keep >> 64) & 0xF
    return gpr, fpr, misc, free


BEGIN = "    // BEGIN abi_audit.py entries"
END = "    // END abi_audit.py entries"


def main(argv):
    if len(argv) < 4:
        print(__doc__)
        return 2
    generated, targets_path, header = argv[1], argv[2], argv[3]
    report = None
    if "--report" in argv:
        report = argv[argv.index("--report") + 1]
    functions = ml.read_corpus(generated)
    analysis = Analysis(functions, passthrough="--passthrough" in argv, entry_dead=read_entry_dead(os.path.join(os.path.dirname(os.path.abspath(__file__)), "abi_entry_dead.txt")))
    rounds = analysis.run()
    writes = analysis.may_write()
    targets = []
    for line in open(targets_path):
        line = line.split("#", 1)[0].strip()
        if line:
            targets.append(int(line.split()[0], 16))
    targets = sorted(set(targets))
    lines = []
    for a in targets:
        fn = functions.get(a)
        if fn is None:
            print("abi_audit: 0x%X is not a function of the corpus" % a, file=sys.stderr)
            return 1
        gpr, fpr, misc, free = split(analysis.observed[a], writes[a])
        lines.append("        {0x%06Xu, 0x%08Xu, 0x%08Xu, 0x%Xu}, // %s; free: %s" %
                     (a, gpr, fpr, misc, fn.name, ml.mask_text(free) or "-"))
    text = open(header).read()
    head, rest = text.split(BEGIN, 1)
    _, tail = rest.split(END, 1)
    out = head + BEGIN + "\n" + "\n".join(lines) + ("\n" if lines else "") + END + tail
    if out != text:
        with open(header, "w", newline="\n") as handle:
            handle.write(out)
    if report:
        with open(report, "w") as handle:
            handle.write("rounds %d; indirect-call live set: %s\n" % (rounds, ml.mask_text(analysis.indirect) or "-"))
            for a in sorted(functions):
                handle.write("0x%06X %-40s observed: %s | free: %s\n" % (
                    a, functions[a].name, ml.mask_text(analysis.observed[a] & ml.CALLER_SAVED) or "-",
                    ml.mask_text(writes[a] & ~analysis.observed[a] & ml.CALLER_SAVED) or "-"))
    print("abi_audit: %d functions, %d rounds, %d target(s) written" % (len(functions), rounds, len(lines)))
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
