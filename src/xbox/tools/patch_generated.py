"""Writes the Xbox build's copy of a generated game function.

usage: patch_generated.py <generated .cpp> <register_functions_xbox.cpp> <output .cpp>

Two kinds of change: the constant calls go through the function table
directly (direct_calls.py, every file), and a few files get one-off patches
from PATCHES below. Each patch replaces one generated statement, found by the
instruction comment before it; the script fails if a patch no longer matches,
so a regenerated source is not silently left unpatched.
"""
import os
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

source, table, output = sys.argv[1], sys.argv[2], sys.argv[3]
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
header = "// Patched copy made by src/xbox/tools/patch_generated.py; do not edit.\n"
if converted or kept:
    header += "// %d constant calls go through the function table directly (PS2X_CALL_SLOT)" % converted
    header += (", %d targets without a generated function keep dispatchGuestBranch.\n" % kept) if kept else ".\n"
open(output, "w").write(header + text)
