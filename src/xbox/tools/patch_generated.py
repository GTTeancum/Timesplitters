"""Writes the Xbox build's copy of a generated game function.

usage: patch_generated.py [-option ...] <generated .cpp> <register_functions_xbox.cpp> <output .cpp>

Two kinds of change are always made: the constant calls go through the
function table directly (direct_calls.py, every file), and a few files get
one-off patches from PATCHES below. Each patch replaces one generated
statement, found by the instruction comment before it; the script fails if a
patch no longer matches, so a regenerated source is not silently left
unpatched.

Options (PATCH_FLAGS from src/xbox/mk/b_codegen.mk; B-CODEGEN,
src/xbox/PUSH-BC-PLAN.md section 5.2 and REWRITE-PLAN.md M3.5/M3.9) change
the shape of the generated code, never what it does; each is off unless
given:

  -pc-stores      M3.5: drop the `ctx->pc = 0x...u;` stores nothing reads.
                  The recompiler stores pc before every instruction; only a
                  consumer reads it (a call, a return to the scheduler, a
                  syscall, a trap, the delay-slot resume test, a guest memory
                  access that leaves RAM). A liveness pass over the
                  function's control flow keeps every store some consumer
                  can see and drops the rest. A guest memory access whose pc
                  is a known constant gets that constant handed to its cold
                  path instead (PS2X_PC_READn/WRITEn, ps2_codegen_xbox.h),
                  which stores it only when the access leaves RAM: the slow
                  path sees exactly the pc it saw before.
  -delay-flags    M3.5: drop the in_delay_slot/branch_pc triple around a
                  delay-slot instruction that cannot trap (nothing but
                  register arithmetic), and, with -pc-stores, around one
                  that is a guest memory access: its cold path then sets
                  pc and the flags itself around the slow call
                  (PS2X_PC_DS_READn/WRITEn). in_delay_slot is false before
                  and after either way; only an exception reads either
                  field. (branch_pc keeps an older value: nothing reads it
                  outside an exception, which sets it first.)
  -resume-guard   M3.5: the resume switch at the top of a function runs only
                  when pc is not the function's own entry (a normal call):
                  one compare instead of the switch's lookup.
  -indirect-cache JALR goes through ps2xIndirectCall (ps2_indirect_call_xbox.h):
                  a direct-mapped cache of target -> table entry in front of
                  the same call; a miss and a missing function take
                  dispatchGuestBranch as before.
  -leaf-calls=<whitelist>
                  constant calls to the whitelisted leaves call the exact
                  inline core in ts_leaf.h instead (PS2X_LEAF_CALL), while the
                  table entry is still the translated original; whitelist
                  lines are `0x<address> <core name>` (src/xbox/tools/
                  leaf_whitelist.txt, B-LOGIC's).
  -restrict-ctx   M3.9: ctx is declared __restrict in the function (the rule
                  is in ps2_native_call_xbox.h).
  -ctx-guard      with -restrict-ctx: the scheduler checkpoints (the only
                  calls not handed ctx) are wrapped in PS2X_CTX_GUARDED_DUE,
                  which TS_CTX_GUARD=1 checks (ps2_codegen_xbox.h).

A patched copy made with options records them in a header line, and the
statistics of each in the next one; src/xbox/test/patch_generated_test.py
checks both over the whole corpus. A function the flow pass cannot model
(an unknown construct) is left exactly as generated and counted.
"""
import os
import re
import sys

import direct_calls

# file name -> [(instruction comment, generated statement, replacement, why)]
PATCHES = {
    "soundLoad_0x2052b8.cpp": [
        ("// 0x205440:", "SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15 << 16));", "SET_GPR_S32(ctx, 4, 0);",
         "soundLoad ends with a 1,000,000-step busy wait (a pause for the IOP on a PS2, "
         "about 10 ms there). Recompiled on the Xbox each step is slow, and it runs once per "
         "sound bank, so the loop limit is 0 and the loop runs once."),
        ("// 0x205444:", "SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16959);", "",
         "rest of the loop limit (see above)"),
    ],
}

KNOWN_FLAGS = ("-pc-stores", "-delay-flags", "-resume-guard", "-indirect-cache", "-restrict-ctx", "-ctx-guard")
CODEGEN_INCLUDE = '#include "ps2_codegen_xbox.h"\n'
LEAF_INCLUDE = '#include "ts_leaf.h"\n'

# ---- The flow pass's vocabulary (M3.5). Every name a statement calls is in
# one of these sets, or the statement is a consumer of pc. The corpus test
# lists the names it meets that are in none (all of them consumers today).
#
# PURE: register and float arithmetic, host intrinsics and the in-RAM-only
# FAST_ accesses: none takes the context as a whole or the runtime, none
# reads or writes pc, none can trap.
PURE = {
    "GPR_U32", "GPR_U64", "GPR_S32", "GPR_S64", "GPR_VEC", "SET_GPR_S32", "SET_GPR_U32", "SET_GPR_S64",
    "SET_GPR_U64", "SET_GPR_ZE32", "SET_GPR_VEC", "ADD32", "SUB32", "SLL32", "SRL32", "SRA32",
    "Ps2SignExt32ToU64", "Ps2HiLoToU64", "memcpy", "sizeof", "copysignf", "sqrtf", "static_cast",
    "FAST_READ8", "FAST_READ16", "FAST_READ32", "FAST_READ64", "FAST_READ128",
    "FAST_WRITE8", "FAST_WRITE16", "FAST_WRITE32", "FAST_WRITE64", "FAST_WRITE128",
    # The write journal's hook: (void)ctx unless PS2X_WRITE_JOURNAL, which
    # reads only the address and size.
    "ps2TraceGuestWrite",
    # Single-line if statements and do { } while (0) wrappers.
    "if", "while",
}
PURE_PREFIXES = ("FPU_", "_mm_", "_MM_", "PS2_V", "PS2_P")
# MEM: guest memory accesses; their slow path gets the context (it may raise
# an address error, which reads pc and the delay-slot fields).
MEM = {"READ8", "READ16", "READ32", "READ64", "READ128", "WRITE8", "WRITE16", "WRITE32", "WRITE64", "WRITE128"}
# KILL_FIRST: calls that store pc before anything can read it (the dispatch
# sets pc to the target first; PS2X_CALL_ENTRY likewise).
KILL_FIRST = {"dispatchGuestBranch", "PS2X_CALL_SLOT", "PS2X_INDIRECT_CALL", "PS2X_LEAF_CALL"}
KEYWORDS = {"if", "while", "sizeof", "static_cast", "switch", "return"}

CALL_NAME = re.compile(r"\b([A-Za-z_]\w*)\s*\(")
CONST_STORE = re.compile(r"ctx->pc = (0x[0-9A-Fa-f]+)u;")
ANY_STORE = re.compile(r"ctx->pc = ([^;]+);")
LABEL = re.compile(r"(label_\w+):")
GOTO = re.compile(r"goto (label_\w+);")
CASE = re.compile(r"case 0x[0-9A-Fa-f]+u: goto (label_\w+);")
MEM_CALL = re.compile(r"\b(READ|WRITE)(8|16|32|64|128)\(")
DS_TRUE, DS_FALSE = "ctx->in_delay_slot = true;", "ctx->in_delay_slot = false;"
EXIT = -1


class Unsupported(Exception):
    pass


def strip_comment(s):
    s = re.sub(r"/\*.*?\*/", "", s)
    at = s.find("//")
    return (s[:at] if at >= 0 else s).strip()


def names_of(s):
    return set(CALL_NAME.findall(s))


def is_pure_name(name):
    return name in PURE or name.startswith(PURE_PREFIXES)


def classify(s):
    """One statement (or an if/switch condition): 'pure', 'mem', 'kill',
    'use', or ('store', constant or None)."""
    m = CONST_STORE.fullmatch(s)
    if m:
        return ("store", int(m.group(1), 16))
    m = ANY_STORE.fullmatch(s)
    if m and "ctx->pc" not in m.group(1) and all(is_pure_name(n) for n in names_of(m.group(1))):
        return ("store", None)
    if "ctx->pc" in s or "runtime->" in s and not names_of(s) & KILL_FIRST:
        return "use"
    names = names_of(s)
    kills = names & KILL_FIRST
    rest = names - kills
    if kills:
        return "kill" if len(kills) == 1 and all(is_pure_name(n) for n in rest) else "use"
    if all(is_pure_name(n) for n in names):
        return "pure"
    if all(is_pure_name(n) or n in MEM for n in names):
        return "mem"
    return "use"


def unknown_names(s):
    """The names a statement calls that no set above knows (consumers)."""
    return {n for n in names_of(s) if not (is_pure_name(n) or n in MEM or n in KILL_FIRST or n in KEYWORDS)}


class Flow:
    """The control flow of one generated function, one node per body line."""

    def __init__(self, lines, start, end):
        self.lines, self.start, self.end = lines, start, end
        self.text = {i: strip_comment(lines[i]) for i in range(start, end)}
        self.match = {}
        self.labels = {}
        self.pp = {}
        self.succ = {}
        self.kind = {}
        self._braces()
        self._build()

    def _braces(self):
        stack, pp_stack = [], []
        for i in range(self.start, self.end):
            s = self.text[i]
            if not s:
                continue
            if s.startswith("#"):
                if re.match(r"#\s*if", s):
                    pp_stack.append([i, None])
                elif re.match(r"#\s*(else|elif)", s):
                    if not pp_stack or pp_stack[-1][1] is not None:
                        raise Unsupported("preprocessor else")
                    pp_stack[-1][1] = i
                elif re.match(r"#\s*endif", s):
                    if not pp_stack:
                        raise Unsupported("preprocessor endif")
                    opened, other = pp_stack.pop()
                    self.pp[opened] = (other, i)
                    if other is not None:
                        self.pp[other] = (None, i)
                else:
                    raise Unsupported("preprocessor line " + s)
                continue
            m = LABEL.fullmatch(s)
            if m:
                self.labels[m.group(1)] = i
                continue
            opens, closes = s.count("{"), s.count("}")
            if opens == closes:
                if opens and ("return" in s or "goto" in s):
                    raise Unsupported("control flow inside a one-line block")
                continue
            if s == "}":
                if not stack:
                    raise Unsupported("unbalanced close")
                self.match[stack.pop()] = i
            elif opens == closes + 1 and s.endswith("{") and closes == 0:
                if s == "{" or s.startswith("if (") or s.startswith("switch ("):
                    stack.append(i)
                else:
                    raise Unsupported("opener " + s)
            else:
                raise Unsupported("brace shape " + s)
        if stack or pp_stack:
            raise Unsupported("unbalanced")

    def _next(self, i):
        return i + 1 if i + 1 < self.end else EXIT

    def _build(self):
        inside_switch = set()
        for i in range(self.start, self.end):
            s = self.text[i]
            nxt = self._next(i)
            if i in inside_switch:
                self.kind[i], self.succ[i] = "nop", [nxt]
                continue
            if not s or LABEL.fullmatch(s) or s == "{" or s == "}":
                self.kind[i], self.succ[i] = "nop", [nxt]
            elif s.startswith("#"):
                if i in self.pp:
                    other, endif = self.pp[i]
                    if re.match(r"#\s*if", s):
                        self.succ[i] = [nxt, self._next(other if other is not None else endif)]
                    else:  # #else: the #if part's end jumps over it
                        self.succ[i] = [self._next(endif)]
                else:
                    self.succ[i] = [nxt]
                self.kind[i] = "nop"
            elif GOTO.fullmatch(s):
                label = GOTO.fullmatch(s).group(1)
                if label not in self.labels:
                    raise Unsupported("goto unknown label")
                self.kind[i], self.succ[i] = "nop", [self.labels[label]]
            elif s == "return;":
                self.kind[i], self.succ[i] = "use", [EXIT]
            elif s.endswith("return;"):
                self.kind[i], self.succ[i] = "use", [EXIT]
            elif s.startswith("switch (") and i in self.match:
                close = self.match[i]
                targets = []
                for j in range(i + 1, close):
                    t = self.text[j]
                    inside_switch.add(j)
                    m = CASE.fullmatch(t)
                    if m:
                        if m.group(1) not in self.labels:
                            raise Unsupported("case to unknown label")
                        targets.append(self.labels[m.group(1)])
                    elif t != "default: break;" and t:
                        raise Unsupported("switch body " + t)
                self.kind[i], self.succ[i] = "use", targets + [self._next(close)]
            elif s.startswith("if (") and i in self.match:
                cond = s[len("if ("):-len(") {")] if s.endswith(") {") else None
                if cond is None:
                    raise Unsupported("if shape " + s)
                c = classify(cond)
                if isinstance(c, tuple):
                    raise Unsupported("store in a condition")
                self.kind[i] = c if c in ("kill", "use", "pure") else "use"
                self.succ[i] = [nxt, self._next(self.match[i])]
            elif "goto" in s or "return" in s or "case " in s or "default:" in s or s.endswith(":"):
                raise Unsupported("statement " + s)
            else:
                self.kind[i], self.succ[i] = classify(s), [nxt]

    def preds(self):
        p = {i: [] for i in range(self.start, self.end)}
        for i, ss in self.succ.items():
            for t in ss:
                if t != EXIT:
                    p[t].append(i)
        return p

    def known_pc(self):
        """Forward: the constant pc at each node's entry on every path, or
        None (unknown)."""
        top = object()
        state = {i: top for i in range(self.start, self.end)}
        state[self.start] = None
        work = [self.start]
        while work:
            i = work.pop()
            v = state[i]
            k = self.kind[i]
            if isinstance(k, tuple):
                out = k[1]
            elif k in ("pure", "mem", "nop"):
                out = v
            else:
                out = None
            for t in self.succ[i]:
                if t == EXIT:
                    continue
                old = state[t]
                # switch cases arrive with pc = the case value: unknown here.
                new = None if self.text[i].startswith("switch (") else out
                merged = new if old is top else (old if old == new else None)
                if merged is not old and (old is top or merged != old):
                    state[t] = merged
                    work.append(t)
        return {i: (None if v is top else v) for i, v in state.items()}

    def live(self, use):
        """Backward: is pc live at each node's entry (some consumer can read
        the value it has there)."""
        live_in = {i: False for i in range(self.start, self.end)}
        preds = self.preds()

        def out(i):
            return any(t == EXIT or live_in[t] for t in self.succ[i])

        work = list(range(self.start, self.end))
        while work:
            i = work.pop()
            k = self.kind[i]
            kill = isinstance(k, tuple) or k == "kill"
            v = use[i] or (not kill and out(i))
            if v and not live_in[i]:
                live_in[i] = True
                work.extend(preds[i])
        return live_in, out


def function_span(lines):
    for i, line in enumerate(lines):
        if re.match(r"void \w+\(uint8_t\* rdram, R5900Context\* ctx, PS2Runtime \*runtime\) \{$", line):
            for j in range(len(lines) - 1, i, -1):
                if lines[j] == "}":
                    return i, j
    return None


def delay_regions(flow):
    """[(true line, false line)] of the delay-slot triples, lexically."""
    regions = []
    opened = None
    for i in range(flow.start, flow.end):
        s = flow.text[i]
        if s == DS_TRUE:
            opened = i
        elif s == DS_FALSE and opened is not None:
            if flow.text.get(opened + 1, "").startswith("ctx->branch_pc = "):
                regions.append((opened, i))
            opened = None
    return regions


def optimise(lines, opts, stats):
    """Applies the flow-based options to one function in place."""
    span = function_span(lines)
    if span is None:
        stats["unsupported"] += 1
        return lines
    sig, close = span
    try:
        flow = Flow(lines, sig + 1, close)
    except Unsupported as why:
        stats["unsupported"] += 1
        stats["why"] = str(why)
        return lines
    stores = [i for i, k in flow.kind.items() if isinstance(k, tuple) and k[1] is not None]
    stats["found"] += len(stores)
    regions = delay_regions(flow)
    in_region = set()
    for t, f in regions:
        in_region.update(range(t + 1, f))
    drop = set()
    replace = {}
    ds_routed = {}  # mem line in a dropped triple -> the branch's pc
    known = flow.known_pc() if opts & {"-pc-stores", "-delay-flags"} else {}

    # Delay-slot flags: a triple whose instruction is register work, or (with
    # -pc-stores) one guest memory access whose cold path then sets the
    # flags itself around the slow call (PS2X_PC_DS_READn/WRITEn).
    if "-delay-flags" in opts:
        for t, f in regions:
            body = [j for j in range(t + 2, f) if flow.text[j]]
            bpc = re.fullmatch(r"ctx->branch_pc = (0x[0-9A-Fa-f]+)u;", flow.text[t + 1])
            if all(flow.kind[j] == "pure" for j in body):
                routed = []
            elif ("-pc-stores" in opts and bpc and all(flow.kind[j] in ("pure", "mem") for j in body)
                  and all(known[j] is not None for j in body if flow.kind[j] == "mem")):
                routed = [j for j in body if flow.kind[j] == "mem"]
            else:
                stats["delay_kept"] += 1
                continue
            drop.update((t, t + 1, f))
            in_region.difference_update(range(t + 1, f))
            for j in routed:
                ds_routed[j] = int(bpc.group(1), 16)
            stats["delay_dropped"] += 1

    if "-pc-stores" in opts:
        use = {}
        for i in range(flow.start, flow.end):
            k = flow.kind[i]
            if k == "mem":
                # Routed: the cold path stores the constant pc itself. Not in
                # a delay slot whose flags are still set (an exception there
                # reads them; the store before it is kept instead).
                if known[i] is not None and i not in in_region:
                    use[i] = False
                    if i in ds_routed:
                        sub = lambda m, pc=known[i], b=ds_routed[i]: "PS2X_PC_DS_%s%s(0x%xu, 0x%xu, " % (
                            m.group(1), m.group(2), pc, b)
                    else:
                        sub = lambda m, pc=known[i]: "PS2X_PC_%s%s(0x%xu, " % (m.group(1), m.group(2), pc)
                    replace[i] = MEM_CALL.sub(sub, lines[i])
                    stats["mem_routed"] += 1
                else:
                    use[i] = True
                    stats["mem_kept"] += 1
            else:
                use[i] = k == "use"
        live_in, live_out = flow.live(use)
        for i in stores:
            if live_out(i):
                stats["kept"] += 1
            else:
                drop.add(i)
                stats["dropped"] += 1
    else:
        stats["kept"] += len(stores)

    out = []
    for i, line in enumerate(lines):
        if i in drop:
            s = flow.text.get(i, "")
            indent = line[: len(line) - len(line.lstrip())]
            m = CONST_STORE.fullmatch(s)
            if m:
                out.append(indent + "PS2X_PC_DROP(%su);" % m.group(1))
            elif s == DS_TRUE:
                # (a statement stays where the triple began: a label may
                # stand right before it)
                out.append(indent + "PS2X_DS_DROP();")
            continue
        out.append(replace.get(i, line))
    return out


def resume_guard(lines, name, stats):
    """The entry switch runs only when pc is not the function's entry."""
    entry = int(re.search(r"_0x([0-9a-f]+)\.cpp$", name).group(1), 16)
    for i, line in enumerate(lines):
        if line.strip() == "switch (ctx->pc) {":
            cases = []
            for j in range(i + 1, len(lines)):
                m = re.match(r"\s*case (0x[0-9A-Fa-f]+)u:", lines[j])
                if m:
                    cases.append(int(m.group(1), 16))
                elif lines[j].strip() == "}":
                    break
            if entry in cases:
                stats["guard_skipped"] += 1
                return lines
            indent = line[: len(line) - len(line.lstrip())]
            lines[i] = indent + "if (__builtin_expect(ctx->pc != 0x%xu, 0)) switch (PS2X_RESUME_PC(ctx->pc)) {" % entry
            stats["guarded"] += 1
            return lines
    return lines


INDIRECT = re.compile(
    r'^( *)if \(!runtime->dispatchGuestBranch\(rdram, ctx, (\w+), (0x[0-9A-Fa-f]+)u, (0x[0-9A-Fa-f]+)u, '
    r'PS2Runtime::GuestBranchKind::IndirectCall, "JALR"\)\) \{\n'
    r"\1    return;\n"
    r"\1\}\n",
    re.M,
)


def indirect_calls(text, stats):
    def replace(m):
        stats["indirect"] += 1
        return "%sPS2X_INDIRECT_CALL(%s, %su, %su);\n" % (m.group(1), m.group(2), m.group(3), m.group(4))

    return INDIRECT.sub(replace, text)


SLOT_CALL = re.compile(r"^( *)PS2X_CALL_SLOT\((\d+), (0x[0-9A-Fa-f]+)u, (0x[0-9A-Fa-f]+)u\);$", re.M)


def leaf_calls(text, whitelist, table_names, stats):
    def replace(m):
        target = int(m.group(3), 16)
        core = whitelist.get(target)
        original = table_names.get(target)
        if core is None or original is None:
            return m.group(0)
        stats["leaf"] += 1
        return "%sPS2X_LEAF_CALL(%s, %s, %s, %su, %su);" % (m.group(1), core, original, m.group(2), m.group(3),
                                                           m.group(4))

    return SLOT_CALL.sub(replace, text)


def read_whitelist(path):
    leaves = {}
    for line in open(path):
        line = line.split("#", 1)[0].strip()
        if line:
            address, core = line.split()
            leaves[int(address, 16)] = core if "::" in core else "ts_leaf::" + core
    return leaves


def read_table_names(table):
    text = open(table).read()
    names = re.findall(r"^    (\w+),$", text.split("g_ps2RecompiledFunctionTable[")[-1], re.M)
    addresses = [int(a, 16) for a in re.findall(r"^    (0x[0-9a-fA-F]+)u,$", text, re.M)]
    return dict(zip(addresses, names))


def main(argv):
    flags = [arg for arg in argv if arg.startswith("-")]
    paths = [arg for arg in argv if not arg.startswith("-")]
    if len(paths) != 3:
        raise SystemExit(__doc__)
    opts = set()
    whitelist = None
    for flag in flags:
        if flag.startswith("-leaf-calls="):
            whitelist = flag.split("=", 1)[1]
        elif flag.startswith("-leaf-hash="):
            pass  # the whitelist's content, for the patch stamp (b_codegen.mk)
        elif flag in KNOWN_FLAGS:
            opts.add(flag)
        else:
            raise SystemExit("patch_generated: unknown option %s" % flag)
    source, table, output = paths
    name = os.path.basename(source)
    lines = open(source).read().split("\n")
    for anchor, old, new, why in PATCHES.get(name, []):
        at = next(i for i, line in enumerate(lines) if line.strip().startswith(anchor))
        target = next(i for i in range(at + 1, at + 4) if lines[i].strip() == old)
        indent = lines[target][: len(lines[target]) - len(lines[target].lstrip())]
        lines[target] = indent + "// Xbox patch: " + why + "\n" + (indent + new if new else "")
    text, converted, kept = direct_calls.rewrite("\n".join(lines), direct_calls.read_slots(table))
    # Every JAL site must have been seen: a call shape the rewrite no longer
    # recognises would otherwise leave the whole speed-up silently behind.
    left = text.count('GuestBranchKind::DirectCall, "JAL"')
    if left != kept:
        raise SystemExit("patch_generated: %d DirectCall sites left in %s, %d expected" % (left, name, kept))

    stats = {k: 0 for k in ("found", "dropped", "kept", "mem_routed", "mem_kept", "delay_dropped", "delay_kept",
                            "guarded", "guard_skipped", "indirect", "leaf", "unsupported")}
    if "-indirect-cache" in opts:
        text = indirect_calls(text, stats)
    if whitelist:
        text = leaf_calls(text, read_whitelist(whitelist), read_table_names(table), stats)
    lines = text.split("\n")
    if opts & {"-pc-stores", "-delay-flags"}:
        lines = optimise(lines, opts, stats)
    if "-resume-guard" in opts:
        lines = resume_guard(lines, name, stats)
    if "-restrict-ctx" in opts:
        for i, line in enumerate(lines):
            if re.match(r"void \w+\(uint8_t\* rdram, R5900Context\* ctx, PS2Runtime \*runtime\) \{$", line):
                lines[i] = line.replace("R5900Context* ctx", "R5900Context* __restrict ctx")
                break
        if "-ctx-guard" in opts:
            for i, line in enumerate(lines):
                if line.strip() == "if (runtime->eeCheckpointDue()) {":
                    lines[i] = line.replace("runtime->eeCheckpointDue()", "PS2X_CTX_GUARDED_DUE()")
    text = "\n".join(lines)
    if flags:
        include = direct_calls.INCLUDE
        if include not in text:
            raise SystemExit("patch_generated: no %s to put the codegen header after" % include.strip())
        text = text.replace(include, include + CODEGEN_INCLUDE + (LEAF_INCLUDE if stats["leaf"] else ""), 1)

    header = "// Patched copy made by src/xbox/tools/patch_generated.py; do not edit.\n"
    if flags:
        header += "// flags: %s\n" % " ".join(flags)
        header += ("// stats: pc stores %(found)d found, %(dropped)d dropped, %(kept)d kept; memory accesses "
                   "%(mem_routed)d routed, %(mem_kept)d kept; delay flags %(delay_dropped)d dropped, "
                   "%(delay_kept)d kept; resume guard %(guarded)d, skipped %(guard_skipped)d; indirect "
                   "%(indirect)d; leaf %(leaf)d; unsupported %(unsupported)d\n" % stats)
    if converted or kept:
        header += "// %d constant calls go through the function table directly (PS2X_CALL_SLOT)" % converted
        header += (", %d targets without a generated function keep dispatchGuestBranch.\n" % kept) if kept else ".\n"
    open(output, "w").write(header + text)
    return stats


if __name__ == "__main__":
    main(sys.argv[1:])
