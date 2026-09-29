"""Writes Xbox copies of generated game functions with small patches applied.

usage: patch_generated.py <generated .cpp> <output .cpp>

Each patch replaces one generated statement, found by the instruction comment
before it; the script fails if a patch no longer matches, so a regenerated
source is not silently left unpatched.
"""
import os
import sys

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

source, output = sys.argv[1], sys.argv[2]
name = os.path.basename(source)
lines = open(source).read().split("\n")
for anchor, old, new, why in PATCHES[name]:
    at = next(i for i, line in enumerate(lines) if line.strip().startswith(anchor))
    target = next(i for i in range(at + 1, at + 4) if lines[i].strip() == old)
    indent = lines[target][: len(lines[target]) - len(lines[target].lstrip())]
    lines[target] = indent + "// Xbox patch: " + why + "\n" + (indent + new if new else "")
open(output, "w").write("// Patched copy made by src/xbox/tools/patch_generated.py; do not edit.\n" + "\n".join(lines))
