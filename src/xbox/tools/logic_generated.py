"""The TS_NATIVE_LOGIC stage of the Xbox's generated-function copies.

usage: logic_generated.py <patched copy> <register_functions_xbox.cpp>
                          [--promote=NAME,...] [--all] [--mode=lite|full]

The Makefile runs it on patch_generated.py's output, in place, when
TS_NATIVE_LOGIC=1 (patch_generated.py itself is unchanged, so the default
build's copies are too). apply():

- every function: a normal call enters with pc = the function's entry,
  which is never a resume case, so the resume switch is skipped then
  ("if (ctx->pc != entry) switch ..."); the switch's default case falls
  through to the same first instruction. Functions whose entry is also a
  resume case keep the plain switch.
- every file with constant calls includes xbox_logic.h, which gives the
  inline (-O2) files the lean call protocol;
- the functions named by --promote (every function with --all) get
  promote_registers.py's form (--mode, lite by default: pc stored only where
  read, delay-slot flags only where an exception can read them, lean calls,
  leaf copies), which also skips the resume switch on entry. A named function
  the promoter refuses keeps the two changes above and says why in its
  header and the build log; with --all, the refusal of an unnamed one (the
  stub wrappers and a few shapes the promoter does not know) is silent.
"""
from __future__ import annotations

import re
import sys

import promote_registers

SWITCH = "    switch (ctx->pc) {\n"
NAME = re.compile(r"^void (\w+_0x([0-9a-f]+))\(uint8_t\* rdram, R5900Context\* ctx, PS2Runtime \*runtime\) \{$", re.M)
CASE = re.compile(r"^        case (0x[0-9A-Fa-f]+)u: goto label_[0-9a-f]+;$", re.M)
DIRECT_INCLUDE = '#include "ps2_direct_call_xbox.h"\n'
LOGIC_INCLUDE = '#include "xbox_logic.h"\n'


def guard_resume_switch(text: str) -> str:
    functions = NAME.findall(text)
    if len(functions) != 1 or text.count(SWITCH) != 1:
        return text  # not the generator's one-function shape: unchanged
    entry = int(functions[0][1], 16)
    at = text.index(SWITCH)
    end = text.index("\n    }\n", at)
    cases = [int(c, 16) for c in CASE.findall(text[at:end])]
    if entry in cases:
        return text
    return text[:at] + "    if (ctx->pc != 0x%xu) switch (ctx->pc) {\n" % entry + text[at + len(SWITCH):]


def apply(text: str, name: str, promote: set[str], slots: dict[int, int], mode: str = "lite",
          promote_all: bool = False) -> tuple[str, str]:
    """Returns (text, note for the file header)."""
    stem = name[:-4] if name.endswith(".cpp") else name
    note = ""
    if stem in promote or promote_all:
        leaf_slots = {address: slots[address] for address in promote_registers.LEAVES if address in slots}
        try:
            promoted, report = promote_registers.promote(text, leaf_slots, mode)
            return promoted, "// TS_NATIVE_LOGIC: " + report + "\n"
        except promote_registers.PromoteError as error:
            if stem in promote:
                sys.stderr.write("[ LOGIC   ] %s kept unpromoted: %s\n" % (stem, error))
            note = "// TS_NATIVE_LOGIC: not promoted (%s).\n" % str(error).splitlines()[0][:200]
    text = guard_resume_switch(text)
    if DIRECT_INCLUDE in text and LOGIC_INCLUDE not in text:
        text = text.replace(DIRECT_INCLUDE, DIRECT_INCLUDE + LOGIC_INCLUDE, 1)
    return text, note


PATCHED_HEADER = "// Patched copy made by src/xbox/tools/patch_generated.py; do not edit.\n"


def main() -> int:
    import os

    import direct_calls

    path, table = sys.argv[1], sys.argv[2]
    promote = set()
    mode = "lite"
    promote_all = False
    for arg in sys.argv[3:]:
        if arg.startswith("--mode="):
            mode = arg[len("--mode="):]
        elif arg.startswith("--promote="):
            promote.update(n for n in arg[len("--promote="):].split(",") if n)
        elif arg == "--all":
            promote_all = True
        else:
            raise SystemExit("logic_generated: unknown option " + arg)
    text = open(path).read()
    if not text.startswith(PATCHED_HEADER) or "TS_NATIVE_LOGIC" in text.split("\n#include", 1)[0]:
        raise SystemExit("logic_generated: %s is not a fresh patch_generated.py copy" % path)
    # The header comments stay first; the stage's note follows them.
    body_at = text.index("#include")
    header, body = text[:body_at], text[body_at:]
    body, note = apply(body, os.path.basename(path), promote, direct_calls.read_slots(table), mode, promote_all)
    temporary = path + ".logic"
    with open(temporary, "w", newline="\n") as stream:
        stream.write(header + note + body)
    os.replace(temporary, path)
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
