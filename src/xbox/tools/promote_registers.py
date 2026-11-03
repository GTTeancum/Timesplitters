"""Leaner form of a recompiled game function (TS_NATIVE_LOGIC, Xbox only).

usage: promote_registers.py <patched generated .cpp> <output .cpp> [full]
       (logic_generated.py calls promote() for the build)

The recompiler stores the guest pc before every instruction, sets and clears
the delay-slot flags around every delay slot, and makes every constant call
through the full call protocol. Two forms, both statement by statement:

lite (the build's): the registers stay in the context, where the original
  keeps them (on the Pentium III's seven registers that is the compact form:
  memory operands, nothing to spill). What goes is what nothing reads:
  - pc is stored only where something can read it: before a statement that
    hands the context to other code (a call, a syscall, the dispatcher, an
    exception), before a return, in a due checkpoint, before a resume entry
    that tests pc, and in the cold path of every guest access (the
    XL_READn/XL_WRITEn helpers take the instruction's pc);
  - the delay-slot flags only around a delay slot that can raise an
    exception (they are read by raiseCop0Exception alone);
  - constant calls use the lean protocol (XL_CALL_SLOT, src/xbox/xbox_logic.h),
    and calls to the hottest leaf natives run their copies while the table
    holds the native.
  Measured with the Xbox flags (-O2, i386): 10-15% less code than the
  original in each of the 24 default functions.

full: additionally the low 64 bits of each general register, each FPU
  register, fcr31, HI and LO live in host variables, loaded at entry (before
  the resume switch); before every hand-over and return the variables
  written since the context was last in step are stored (a may-be-dirty
  dataflow over the gotos), after a hand-over all are reloaded. Exact as
  well (test/test_native_logic.py), but on i386 the variables live in stack
  slots and the code is 1.5-2x the original's, so the build does not use it.

Every statement keeps its expression and its place, so the arithmetic is the
original's. Anything this pass does not recognise makes it refuse the
function (PromoteError), and the caller keeps the original.
"""
from __future__ import annotations

import re
import sys

ZERO_READS = {
    "U32": "0u",
    "S32": "0",
    "U64": "(uint64_t)0",
    "S64": "(int64_t)0",
    "VEC": "_mm_setzero_si128()",
}

FUNC = re.compile(r"^void (\w+)_0x([0-9a-f]+)\(uint8_t\* rdram, R5900Context\* ctx, PS2Runtime \*runtime\) \{$")
PC_LITERAL = re.compile(r"^ctx->pc = (0x[0-9A-Fa-f]+)u;$")
LABEL = re.compile(r"^(label_\w+):$")
GOTO = re.compile(r"\bgoto (label_\w+);")
CASE = re.compile(r"^case 0x[0-9A-Fa-f]+u: goto (label_\w+);$")
CALL_SLOT = re.compile(r"^PS2X_CALL_SLOT\((\d+), (0x[0-9A-Fa-f]+)u, (0x[0-9A-Fa-f]+)u\);$")
CHECKPOINT = "if (runtime->eeCheckpointDue()) {"
GPR_READ = re.compile(r"(?<![A-Za-z_])GPR_(U32|S32|U64|S64|VEC)\(ctx, (\d+)\)")
SET_GPR = re.compile(r"(?<![A-Za-z_])SET_GPR_(S32|U32|ZE32|U64|S64|VEC)\(")
MEMORY = re.compile(r"(?<![A-Za-z_])(READ|WRITE)(8|16|32|64|128)\(")
FREG = re.compile(r"ctx->f\[(\d+)\]")
FREG_ANY = re.compile(r"ctx->f\b")
SPECIAL = {"fcr31": "fcr31_", "hi": "hi_", "lo": "lo_"}
SPECIAL_REF = re.compile(r"ctx->(fcr31|hi|lo)\b(?!1)")
ASSIGN_AFTER = r"\s*(?:[-+*/|&^]|<<|>>)?=(?!=)"
# Context fields that stay in the context and are plain data (reading or
# writing them hands nothing to other code).
HARMLESS_FIELDS = re.compile(r"ctx->(pc|in_delay_slot|branch_pc|vu0_\w+|hi1|lo1|sa|vi)\b")
DELAY_ON = "ctx->in_delay_slot = true;"
DELAY_OFF = "ctx->in_delay_slot = false;"
STRICT_IF = "#if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS"
LOG_IF = "#ifdef PS2_FUNCTION_LOG_TRACKER"

# Leaf natives with inline copies (xbox_logic.h): target -> (leaf enum,
# GPRs read, GPRs written, FPRs read, FPRs written, call template).
LEAVES = {
    0x2D5E98: ("XL_LEAF_MUL_MATRIX", (4, 5, 6, 7), (4, 6, 7), (), (),
               "xlMulMatrixInline({r4}, {r6})",
               "xlLeafMulMatrix(rdram, ctx, runtime, {r4}, {r5}, {r6}, {r7});"),
    0x2D6188: ("XL_LEAF_UNIT_MATRIX", (4,), (), (), (), None,
               "xlLeafUnitMatrix(rdram, ctx, runtime, {r4});"),
    0x2D6120: ("XL_LEAF_COPY_MATRIX", (4, 5), (6, 7, 8, 9), (), (), None,
               "xlLeafCopyMatrix(rdram, ctx, runtime, {r4}, {r5}, {r6}, {r7}, {r8}, {r9});"),
    0x2DC5A0: ("XL_LEAF_FABSF", (), (2, 3), (12,), (0,), None,
               "xlLeafFabsf({f12}, {f0}, {r2}, {r3});"),
    0x2B5638: ("XL_LEAF_VEC_ROT_ALIGNED", (4, 5), (), (), (), None,
               "xlLeafVecRotAligned(rdram, ctx, runtime, {r4}, {r5});"),
    0x2B5570: ("XL_LEAF_VEC3_MUL4_ALIGNED", (4, 5, 6), (), (), (), None,
               "xlLeafVec3Mul4Aligned(rdram, ctx, runtime, {r4}, {r5}, {r6});"),
}

# Dirty-set bits: GPR n -> n, FPR n -> 32 + n, fcr31 64, hi 65, lo 66.
FCR31, HI, LO = 64, 65, 66
SPECIAL_BIT = {"fcr31": FCR31, "hi": HI, "lo": LO}


class PromoteError(Exception):
    pass


def match_paren(text: str, open_at: int) -> int:
    """Index just past the parenthesis matching text[open_at] == '('."""
    depth = 0
    i = open_at
    while i < len(text):
        c = text[i]
        if c == '"' or c == "'":
            j = i + 1
            while j < len(text) and text[j] != c:
                j += 2 if text[j] == "\\" else 1
            i = j + 1
            continue
        if c == "(":
            depth += 1
        elif c == ")":
            depth -= 1
            if depth == 0:
                return i + 1
        i += 1
    raise PromoteError("unbalanced parentheses: " + text)


def split_args(inner: str) -> list[str]:
    args, depth, start = [], 0, 0
    for i, c in enumerate(inner):
        if c in "([{":
            depth += 1
        elif c in ")]}":
            depth -= 1
        elif c == "," and depth == 0:
            args.append(inner[start:i])
            start = i + 1
    args.append(inner[start:])
    return [a.strip() for a in args]


def remove_trace_calls(line: str) -> str:
    """ps2TraceGuestWrite is an empty inline function (ps2_runtime.h)."""
    while True:
        at = line.find("ps2TraceGuestWrite(")
        if at < 0:
            return line
        end = match_paren(line, at + len("ps2TraceGuestWrite"))
        if end < len(line) and line[end] == ";":
            end += 1
        line = line[:at] + line[end:]


def rewrite_sets(line: str, gprs: set[int]) -> str:
    out, pos = [], 0
    while True:
        m = SET_GPR.search(line, pos)
        if not m:
            out.append(line[pos:])
            return "".join(out)
        open_at = m.end() - 1
        end = match_paren(line, open_at)
        args = split_args(line[open_at + 1:end - 1])
        if len(args) != 3 or args[0] != "ctx" or not args[1].isdigit():
            raise PromoteError("unrecognised register write: " + line)
        reg, value, kind = int(args[1]), rewrite_sets(args[2], gprs), m.group(1)
        out.append(line[pos:m.start()])
        if reg == 0:
            # The macro writes nothing and does not evaluate the value.
            replacement = "(void)0"
        elif kind in ("S32", "U32"):
            replacement = "r_%d = (uint64_t)(int64_t)(int32_t)(%s)" % (reg, value)
        elif kind == "ZE32":
            replacement = "r_%d = (uint64_t)(uint32_t)(%s)" % (reg, value)
        elif kind in ("U64", "S64"):
            replacement = "r_%d = (uint64_t)(int64_t)(%s)" % (reg, value)
        else:
            replacement = ("do { const __m128i _xv = (%s); XLCTX->r[%d] = _xv; r_%d = xlLow64(_xv); } while (0)"
                           % (value, reg, reg))
        if reg:
            gprs.add(reg)
        out.append(replacement)
        pos = end


LITE_GPR = re.compile(r"(?<![A-Za-z_])((?:SET_)?GPR_\w+)\(ctx, (\d+)")
LITE_FIELD = re.compile(r"ctx->(f\[\d+\]|fcr31(?!\w)|hi(?!\w)|lo(?!\w))")


def rewrite_line(line: str, pc: int | None, gprs: set[int], fprs: set[int], specials: set[str],
                 lite: bool = False) -> str:
    """The statement with the promoted state in host variables (lite: the
    registers stay in the context). Residual 'ctx' means the statement hands
    the context to other code."""
    text = remove_trace_calls(line)

    def memory(m: re.Match[str]) -> str:
        if pc is None:
            raise PromoteError("guest access before any pc: " + line)
        return "XL_%s%s(0x%Xu, " % (m.group(1), m.group(2), pc)

    text = MEMORY.sub(memory, text)
    if lite:
        # Register accesses are plain context data here (XLCTX: not a
        # hand-over; put back to ctx at the end).
        text = LITE_GPR.sub(lambda m: "%s(XLCTX, %s" % (m.group(1), m.group(2)), text)
        text = LITE_FIELD.sub(lambda m: "XLCTX->" + m.group(1), text)
        if FREG_ANY.search(text):
            raise PromoteError("FPU register by a computed index: " + line)
        return text

    def read(m: re.Match[str]) -> str:
        kind, reg = m.group(1), int(m.group(2))
        if reg == 0:
            return ZERO_READS[kind]
        gprs.add(reg)
        if kind == "U32":
            return "((uint32_t)r_%d)" % reg
        if kind == "S32":
            return "((int32_t)(uint32_t)r_%d)" % reg
        if kind == "U64":
            return "r_%d" % reg
        if kind == "S64":
            return "((int64_t)r_%d)" % reg
        return "xlVec(r_%d, XLCTX->r[%d])" % (reg, reg)

    text = GPR_READ.sub(read, text)
    text = rewrite_sets(text, gprs)

    def freg(m: re.Match[str]) -> str:
        fprs.add(int(m.group(1)))
        return "f_%s" % m.group(1)

    text = FREG.sub(freg, text)
    if FREG_ANY.search(text):
        raise PromoteError("FPU register by a computed index: " + line)

    def special(m: re.Match[str]) -> str:
        specials.add(m.group(1))
        return SPECIAL[m.group(1)]

    text = SPECIAL_REF.sub(special, text)
    return text


def writes_of(line: str) -> int:
    """Promoted state the statement may write (over-approximated)."""
    mask = 0
    for m in SET_GPR.finditer(line):
        args = split_args(line[m.end():match_paren(line, m.end() - 1) - 1])
        if len(args) >= 2 and args[1].isdigit() and int(args[1]):
            mask |= 1 << int(args[1])
    for m in re.finditer(r"(&)?ctx->f\[(\d+)\](" + ASSIGN_AFTER + ")?", line):
        if m.group(1) or m.group(3):
            mask |= 1 << (32 + int(m.group(2)))
    for name, bit in SPECIAL_BIT.items():
        if re.search(r"&ctx->%s\b(?!1)|ctx->%s\b(?!1)%s" % (name, name, ASSIGN_AFTER), line):
            mask |= 1 << bit
    if re.search(r"(ctx->f\[\d+\]|ctx->(fcr31|hi|lo)\b(?!1))\s*(\+\+|--)|(\+\+|--)\s*ctx->", line):
        raise PromoteError("increment of a register: " + line)
    return mask


def is_sync(rewritten: str) -> bool:
    if rewritten.startswith("PS2X_CALL_SLOT("):
        return True
    residual = HARMLESS_FIELDS.sub("", rewritten.replace("XLCTX", ""))
    if re.search(r"\bctx\b", residual):
        return True
    for m in re.finditer(r"runtime->(\w+)", rewritten):
        if m.group(1) != "eeCheckpointDue":
            return True
    return False


class Function:
    def __init__(self, text: str):
        lines = text.split("\n")
        starts = [i for i, s in enumerate(lines) if FUNC.match(s)]
        if len(starts) != 1:
            raise PromoteError("expected one generated function")
        self.head = lines[:starts[0] + 1]
        m = FUNC.match(lines[starts[0]])
        self.name, self.entry = m.group(1) + "_0x" + m.group(2), int(m.group(2), 16)
        end = max(i for i, s in enumerate(lines) if s == "}")
        if any(s.strip() for s in lines[end + 1:]):
            raise PromoteError("text after the function")
        self.body = self.resolve_preprocessor(lines[starts[0] + 1:end])
        self.tail = lines[end:]

    @staticmethod
    def resolve_preprocessor(body: list[str]) -> list[str]:
        """Only the two directives the recompiler emits: the log tracker
        block (kept) and the strict-return diagnostics (off on the Xbox:
        its #else branch is kept)."""
        out, i = [], 0
        while i < len(body):
            s = body[i].strip()
            if s == STRICT_IF:
                j = i + 1
                while body[j].strip() != "#else":
                    j += 1
                k = j + 1
                while body[k].strip() != "#endif":
                    if body[k].strip().startswith("#"):
                        raise PromoteError("nested directive")
                    out.append(body[k])
                    k += 1
                i = k + 1
                continue
            if s == LOG_IF:
                out.extend(body[i:i + 3])
                if body[i + 2].strip() != "#endif":
                    raise PromoteError("unexpected log block")
                i += 3
                continue
            if s.startswith("#"):
                raise PromoteError("unexpected directive: " + s)
            out.append(body[i])
            i += 1
        return out


def significant(s: str) -> bool:
    return bool(s) and not s.startswith("//")


# Line kinds: comment, log, pc (literal store), pc_dynamic, delay, label,
# open_block, open_if, open_sync (an if whose condition hands over the
# context), open_switch, open_resume, checkpoint, close, goto, case, default,
# return, call (constant call), sync (statement that hands over the context),
# stmt (everything else).
CONTROL = ("label", "close", "open_if", "open_if_pc", "open_block", "open_switch", "open_resume", "goto", "return", "sync",
           "call", "open_sync", "checkpoint", "case", "default")


def classify(fn: Function, lite: bool = False):
    stripped = [s.strip() for s in fn.body]
    gprs: set[int] = set()
    fprs: set[int] = set()
    specials: set[str] = set()
    kinds: list[str] = []
    rewritten: list[str] = []
    writes: list[int] = []
    pc: int | None = None
    resume_switches = 0
    for s in stripped:
        m = PC_LITERAL.match(s)
        if m:
            pc = int(m.group(1), 16)
        kind, new, mask = "stmt", s, 0
        if "eeCheckpointDue" in s and s != CHECKPOINT:
            raise PromoteError("unexpected checkpoint shape: " + s)
        if not significant(s):
            kind = "comment"
        elif s in (LOG_IF, "#endif") or s.startswith("PS_LOG_ENTRY("):
            kind = "log"
        elif m:
            kind = "pc"
        elif s.startswith("ctx->pc = "):
            kind = "pc_dynamic"
            new = rewrite_line(s, pc, gprs, fprs, specials, lite)
            if is_sync(new):
                kind, new = "sync", s
        elif s in (DELAY_ON, DELAY_OFF) or re.match(r"^ctx->branch_pc = 0x[0-9A-Fa-f]+u;$", s):
            kind = "delay"
        elif LABEL.match(s):
            kind = "label"
        elif s == "}":
            kind = "close"
        elif s == "{":
            kind = "open_block"
        elif s == CHECKPOINT:
            kind = "checkpoint"
        elif s == "return;":
            kind = "return"
        elif re.match(r"^goto label_\w+;$", s):
            kind = "goto"
        elif CASE.match(s):
            kind = "case"
        elif s == "default: break;":
            kind = "default"
        elif s == "switch (ctx->pc) {":
            kind = "open_resume"
            resume_switches += 1
        elif s.startswith("switch (") and s.endswith(") {"):
            kind = "open_switch"
            new = rewrite_line(s, pc, gprs, fprs, specials, lite)
            if is_sync(new):
                raise PromoteError("switch on the context: " + s)
        elif CALL_SLOT.match(s):
            kind = "call"
        elif s.endswith("{"):
            if not s.startswith("if (") or s.startswith("} else"):
                raise PromoteError("unexpected block: " + s)
            if GOTO.search(s) or "return" in s:
                raise PromoteError("unexpected block opener: " + s)
            new = rewrite_line(s, pc, gprs, fprs, specials, lite)
            kind = "open_if"
            if is_sync(new):
                kind, new = "open_sync", s
            elif "ctx->pc" in s:
                # A resume entry inside a delay slot tests the pc the last
                # instruction stored: that store must stay.
                kind = "open_if_pc"
        else:
            if '"' not in s and re.search(r";\s*//.*$", s):
                s = re.sub(r";\s*//.*$", ";", s)  # a trailing comment (EI/DI)
            if s.count("{") != s.count("}") or not (s.endswith(";") or s.endswith("}")):
                raise PromoteError("unexpected statement: " + s)
            if GOTO.search(s):
                raise PromoteError("conditional goto: " + s)
            new = rewrite_line(s, pc, gprs, fprs, specials, lite)
            mask = 0 if lite else writes_of(s)
            if is_sync(new):
                kind, new, mask = "sync", s, 0
            elif re.search(r"\breturn\b", s):
                raise PromoteError("unexpected return: " + s)
        kinds.append(kind)
        rewritten.append(new)
        writes.append(mask)
    # A function without calls or loops has no resume switch; the lite form
    # needs none (the full form declares its variables there).
    if resume_switches > 1 or (resume_switches == 0 and not lite):
        raise PromoteError("expected one resume switch")
    return stripped, kinds, rewritten, writes, gprs, fprs, specials


def promote(text: str, leaf_slots: dict[int, int] | None = None, mode: str = "lite") -> tuple[str, str]:
    """Returns (promoted text, one-line report). leaf_slots: target -> slot
    of the leaf natives whose call sites may run the inline copy (None: any
    known leaf at any slot). mode: "lite" (registers stay in the context;
    only what nothing reads goes) or "full" (registers in host variables)."""
    if mode not in ("full", "lite"):
        raise ValueError("mode must be full or lite")
    lite = mode == "lite"
    fn = Function(text)
    body = fn.body
    n = len(body)
    stripped, kinds, rewritten, writes, gprs, fprs, specials = classify(fn, lite)
    labels = {LABEL.match(stripped[i]).group(1): i for i in range(n) if kinds[i] == "label"}
    if len(labels) != sum(1 for k in kinds if k == "label"):
        raise PromoteError("duplicate label")

    # ---- which pc stores and delay-slot flags something can read
    # Observation points: a statement handing over the context (it, or the
    # code it runs, may read pc), a return, the end of the function and a
    # due checkpoint (pc is then where the original resumes). The constant
    # call macro stores its own pc. Only the last literal store before an
    # observation point matters; every other one is overwritten unseen.
    keep = [False] * n
    checkpoint_pc: dict[int, int] = {}
    # Labels whose code starts by testing pc (a resume entry inside a delay
    # slot): every way in must arrive with the original's pc, so the store
    # before each goto to them and before falling into them stays.
    pc_labels = set()
    for i in range(n):
        if kinds[i] != "open_if_pc":
            continue
        # The labels directly before the test (a chain falls through them).
        j = i - 1
        chain = []
        while j >= 0 and kinds[j] in ("comment", "label"):
            if kinds[j] == "label":
                chain.append(LABEL.match(stripped[j]).group(1))
            j -= 1
        if not chain:
            raise PromoteError("pc test without its label")
        pc_labels.update(chain)
        # Falling in: the original's pc is the last instruction's store,
        # before the straight-line statements that precede the chain.
        while j >= 0 and kinds[j] in ("comment", "stmt", "delay"):
            j -= 1
        if j >= 0 and kinds[j] == "pc":
            keep[j] = True
        elif not (j >= 0 and kinds[j] in ("goto", "return")):
            raise PromoteError("pc-testing label reached without a pc store")
    last_pc: int | None = None
    for i in range(n + 1):
        k = kinds[i] if i < n else "end"
        if k == "pc":
            last_pc = i
            continue
        if k in ("comment", "delay"):
            continue
        # A goto into a pc-testing chain keeps the store before it (the
        # dispatcher's resume cases enter with pc = the case already).
        needs_pc = k == "goto" and GOTO.search(stripped[i]).group(1) in pc_labels
        if needs_pc and last_pc is None:
            raise PromoteError("goto to a pc-testing label without a pc store")
        if last_pc is not None:
            if k == "checkpoint":
                checkpoint_pc[i] = int(PC_LITERAL.match(stripped[last_pc]).group(1), 16)
            elif k in ("sync", "open_sync", "open_if_pc", "return", "end") or needs_pc:
                keep[last_pc] = True
        last_pc = None
    for i in range(n):
        if kinds[i] == "checkpoint" and i not in checkpoint_pc:
            raise PromoteError("checkpoint without its pc")
        if kinds[i] == "delay":
            keep[i] = True
    # The delay-slot flags are read only by an exception raised in the slot
    # (raiseCop0Exception); keep them where the slot hands over the context.
    i = 0
    while i < n:
        if stripped[i] == DELAY_ON:
            j = i + 1
            while j < n and stripped[j] != DELAY_OFF:
                if kinds[j] in CONTROL and kinds[j] != "sync":
                    raise PromoteError("control flow inside a delay slot")
                j += 1
            if j == n:
                raise PromoteError("unterminated delay slot")
            needed = any(kinds[x] == "sync" for x in range(i, j))
            for x in range(i, j + 1):
                if kinds[x] == "delay":
                    keep[x] = needed
            i = j + 1
        else:
            i += 1

    # ---- leaf call sites: the JAL's ra is the resume address and the delay
    # slot leaves it alone, so the inline copy returns to the fallthrough.
    leaf_at: dict[int, tuple] = {}
    for i in range(n):
        if kinds[i] != "call":
            continue
        slot, target, resume = CALL_SLOT.match(stripped[i]).groups()
        target_value = int(target, 16)
        leaf = LEAVES.get(target_value)
        if leaf is None or (leaf_slots is not None and leaf_slots.get(target_value) != int(slot)):
            continue
        ra_ok = False
        for x in range(i - 1, max(-1, i - 24), -1):
            if kinds[x] in CONTROL:
                break
            if kinds[x] == "stmt" and writes_of(stripped[x]) & (1 << 31):
                ra_ok = stripped[x] == "SET_GPR_U32(ctx, 31, %su);" % resume
                break
        if not ra_ok:
            continue
        leaf_at[i] = (slot, target, resume, leaf)
        if lite:
            continue  # the copy works on the context
        mask = 0
        for reg in leaf[1]:
            gprs.add(reg)
        for reg in leaf[2]:
            mask |= 1 << reg
            gprs.add(reg)
        for reg in leaf[3]:
            fprs.add(reg)
        for reg in leaf[4]:
            mask |= 1 << (32 + reg)
            fprs.add(reg)
        writes[i] = mask

    # ---- may-be-dirty dataflow (written since the context was last in step)
    # 0 is both "clean" and "unreachable": the merge is a union.
    edges: dict[str, int] = {name: 0 for name in labels}
    state_before = [0] * n
    final_state = 0
    for _ in range(1000):
        changed = False
        state = 0
        stack: list[tuple[str, int]] = []
        for i in range(n):
            k = kinds[i]
            if k == "label":
                state |= edges[LABEL.match(stripped[i]).group(1)]
            state_before[i] = state
            if k in ("stmt", "pc_dynamic"):
                state |= writes[i]
            elif k == "call":
                state = state | writes[i] if i in leaf_at else 0
            elif k == "sync":
                state = 0
            elif k == "open_sync":
                state = 0
                stack.append(("if", 0))
            elif k in ("open_if", "open_if_pc", "checkpoint"):
                stack.append(("if", state))
            elif k == "open_block":
                stack.append(("block", state))
            elif k in ("open_switch", "open_resume"):
                stack.append(("switch", state))
            elif k == "close":
                if not stack:
                    raise PromoteError("unbalanced block")
                what, before = stack.pop()
                if what == "if":
                    state |= before
                elif what == "switch":
                    state = before
            elif k in ("goto", "case"):
                target = GOTO.search(stripped[i]).group(1)
                if target not in edges:
                    raise PromoteError("goto to an unknown label: " + target)
                if edges[target] | state != edges[target]:
                    edges[target] |= state
                    changed = True
                if k == "goto":
                    state = 0
            elif k == "return":
                state = 0
        if stack:
            raise PromoteError("unbalanced blocks at the end")
        final_state = state
        if not changed:
            break
    else:
        raise PromoteError("dataflow did not settle")

    # ---- emit
    def spill(mask: int) -> str:
        parts = ["SET_GPR_U64(ctx, %d, r_%d);" % (r, r) for r in range(1, 32) if mask & (1 << r)]
        parts += ["ctx->f[%d] = f_%d;" % (r, r) for r in range(32) if mask & (1 << (32 + r))]
        parts += ["ctx->%s = %s;" % (name, SPECIAL[name]) for name, bit in SPECIAL_BIT.items() if mask & (1 << bit)]
        return " ".join(parts)

    def reload() -> str:
        parts = ["r_%d = GPR_U64(ctx, %d);" % (r, r) for r in sorted(gprs)]
        parts += ["f_%d = ctx->f[%d];" % (r, r) for r in sorted(fprs)]
        parts += ["%s = ctx->%s;" % (SPECIAL[name], name) for name in sorted(specials)]
        return " ".join(parts)

    names = {}
    for reg in range(32):
        names["r%d" % reg] = "r_%d" % reg
        names["f%d" % reg] = "f_%d" % reg

    out: list[str] = []
    stack: list[tuple[str, int]] = []
    leaves_used = dropped_pc = syncs = 0
    previous = None  # kind of the previous significant line
    for i in range(n):
        line, k, state = body[i], kinds[i], state_before[i]
        indent = line[:len(line) - len(line.lstrip())]
        if k in ("comment", "log"):
            out.append(line)
            continue
        if k in ("pc", "delay"):
            if keep[i]:
                out.append(line)
                previous = k
            else:
                dropped_pc += k == "pc"
            continue
        if k == "open_resume":
            cases = []
            for x in range(i + 1, n):
                if kinds[x] == "case":
                    cases.append(int(stripped[x].split()[1].rstrip("u:"), 16))
                elif kinds[x] not in ("default", "comment"):
                    break
            out.append(indent + ("// Guest registers stay in the context; pc only where read "
                                 "(src/xbox/tools/promote_registers.py)." if lite else
                                 "// Guest registers in host variables (src/xbox/tools/promote_registers.py)."))
            if gprs:
                out.append(indent + "uint64_t " + ", ".join("r_%d = GPR_U64(ctx, %d)" % (r, r) for r in sorted(gprs)) + ";")
            if fprs:
                out.append(indent + "float " + ", ".join("f_%d = ctx->f[%d]" % (r, r) for r in sorted(fprs)) + ";")
            for name in sorted(specials):
                out.append(indent + "%s %s = ctx->%s;" % ("uint32_t" if name == "fcr31" else "uint64_t",
                                                          SPECIAL[name], name))
            # Normal entry (pc = the entry) skips the resume switch.
            guard = "" if fn.entry in cases else "if (ctx->pc != 0x%xu) " % fn.entry
            out.append(indent + guard + "switch (ctx->pc) {")
            stack.append(("switch", i))
            previous = k
            continue
        if k == "return":
            s = spill(state)
            if stack and stack[-1][0] == "checkpoint":
                s = ("ctx->pc = 0x%Xu;" % checkpoint_pc[stack[-1][1]]) + (" " + s if s else "")
            elif not (stack and stack[-1][0] == "sync") and previous not in ("pc", "pc_dynamic", "sync"):
                raise PromoteError("return without its pc at line %d" % i)
            out.append(indent + (s + " " if s else "") + "return;")
            previous = k
            continue
        if k == "checkpoint":
            out.append(line)
            stack.append(("checkpoint", i))
        elif k in ("open_if", "open_if_pc", "open_switch", "open_block"):
            out.append(indent + rewritten[i])
            stack.append(("block", i))
        elif k == "open_sync":
            s = spill(state)
            if s:
                out.append(indent + s)
            out.append(line)
            stack.append(("sync", i))
            syncs += 1
        elif k == "close":
            what, _ = stack.pop()
            out.append(line)
            if what == "sync" and reload():
                out.append(indent + reload())
        elif k == "call":
            slot, target, resume = CALL_SLOT.match(stripped[i]).groups()
            syncs += 1
            s = spill(state)
            if i in leaf_at:
                leaves_used += 1
                leaf = leaf_at[i][3]
                cond = "g_ps2RecompiledFunctionTable[%s] == g_xlLeafNative[%s]" % (slot, leaf[0])
                if lite:
                    # The copy on the context (its own preconditions, and
                    # pc = ra = the fallthrough when it runs).
                    out.append(indent + "ctx->pc = %su;" % target)
                    out.append(indent + "if (runtime->eeCheckpointDue(PS2X_GUEST_DISPATCH_CYCLES)) return;")
                    out.append(indent + "if (!(%s && xlLeafOnContext<%s>(rdram, ctx, runtime)))" % (cond, leaf[0]))
                    out.append(indent + "    XL_CALL_TABLE(%s, %su, %su);" % (slot, target, resume))
                    previous = k
                    continue
                if leaf[5]:
                    cond += " && " + leaf[5].format(**names)
                out.append(indent + "ctx->pc = %su;" % target)
                out.append(indent + "if (runtime->eeCheckpointDue(PS2X_GUEST_DISPATCH_CYCLES)) { %sreturn; }"
                           % ((s + " ") if s else ""))
                out.append(indent + "if (%s) {" % cond)
                out.append(indent + "    " + leaf[6].format(**names))
                out.append(indent + "} else {")
                if s:
                    out.append(indent + "    " + s)
                out.append(indent + "    XL_CALL_TABLE(%s, %su, %su);" % (slot, target, resume))
                if reload():
                    out.append(indent + "    " + reload())
                out.append(indent + "}")
            else:
                if s:
                    out.append(indent + s)
                out.append(indent + "XL_CALL_SLOT(%s, %su, %su);" % (slot, target, resume))
                if reload():
                    out.append(indent + reload())
        elif k == "sync":
            s = spill(state)
            if s:
                out.append(indent + s)
            out.append(line)
            if reload():
                out.append(indent + reload())
            syncs += 1
        else:
            out.append(indent + rewritten[i])
        previous = k

    # Falling off the end (unreachable in practice) returns with the
    # context complete, as the original does.
    tail_spill = spill(final_state)
    if tail_spill:
        out.append("    " + tail_spill)

    result = [line.replace("XLCTX", "ctx") for line in out]
    report = ("%s (%s): %d GPRs, %d FPRs%s in host variables; %d pc stores dropped; %d context hand-offs; "
              "%d leaf calls inline" % (fn.name, mode, len(gprs), len(fprs),
                                        (", " + "/".join(sorted(specials))) if specials else "",
                                        dropped_pc, syncs, leaves_used))
    head = fn.head[:-1] + ["// Register-promoted: " + report, fn.head[-1]]
    text_out = "\n".join(head + result + fn.tail)
    anchor = '#include "ps2_runtime.h"\n'
    if '#include "xbox_logic.h"' not in text_out:
        if anchor not in text_out:
            raise PromoteError("no runtime include")
        text_out = text_out.replace(anchor, anchor + '#include "xbox_logic.h"\n', 1)
    return text_out, report


def main() -> int:
    source, output = sys.argv[1], sys.argv[2]
    mode = sys.argv[3] if len(sys.argv) > 3 else "lite"
    text, report = promote(open(source, encoding="utf-8").read(), None, mode)
    open(output, "w", encoding="utf-8", newline="\n").write(text)
    print(report)
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
