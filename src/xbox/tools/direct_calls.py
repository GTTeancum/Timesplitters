"""Rewrites a generated game function's constant calls to go through the
function table directly (the Xbox build; ps2_direct_call_xbox.h).

usage: direct_calls.py <register_functions_xbox.cpp> <generated .cpp> [<output .cpp>]
       (without an output, only counts the call sites; patch_generated.py
       uses rewrite() for the build)

The recompiler emits a JAL to a known target as
    ctx->pc = 0xTu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xTu, 0xSu, 0xRu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xRu;
and each becomes
    PS2X_CALL_SLOT(slot, 0xTu, 0xRu);
with the slot of T in the compact function table. The slot is read from the
table the build made (src/xbox/tools/compact_function_table.py), so the two
cannot disagree. A target the table has no entry for keeps the
dispatchGuestBranch call, which reports the missing function. Everything else
in the file is unchanged.
"""
import os
import re
import sys

CALL = re.compile(
    r'^( *)if \(!runtime->dispatchGuestBranch\(rdram, ctx, (0x[0-9A-Fa-f]+)u, 0x[0-9A-Fa-f]+u, '
    r'(0x[0-9A-Fa-f]+)u, PS2Runtime::GuestBranchKind::DirectCall, "JAL"\)\) \{\n'
    r"\1    return;\n"
    r"\1\}\n",
    re.M,
)
INCLUDE = '#include "ps2_runtime.h"\n'
DIRECT_INCLUDE = '#include "ps2_direct_call_xbox.h"\n'


def read_slots(table_cpp):
    """address -> slot, from the compact table's sorted address array."""
    text = open(table_cpp).read()
    body = re.search(r"g_ps2RecompiledFunctionAddresses\[\d+\] = \{\n(.*?)\n\};", text, re.S).group(1)
    slots = {int(address, 16): slot for slot, address in enumerate(re.findall(r"^\s*(0x[0-9a-fA-F]+)u,$", body, re.M))}
    # A format drift must fail the build, not silently keep every call slow.
    count = int(re.search(r"g_ps2RecompiledFunctionTableSlotCount = (\d+)u;", text).group(1))
    if len(slots) != count:
        raise SystemExit("direct_calls: read %d of %d table slots from %s" % (len(slots), count, table_cpp))
    return slots


def rewrite(text, slots):
    """Returns (text, converted sites, sites kept for lack of a table entry)."""
    counts = [0, 0]

    def replace(match):
        indent, target, resume = match.group(1), match.group(2), match.group(3)
        slot = slots.get(int(target, 16))
        if slot is None:
            counts[1] += 1
            return match.group(0)
        counts[0] += 1
        return "%sPS2X_CALL_SLOT(%d, %su, %su);\n" % (indent, slot, target, resume)

    text = CALL.sub(replace, text)
    if counts[0]:
        if INCLUDE not in text:
            raise SystemExit("direct_calls: no %s to put the direct-call header after" % INCLUDE.strip())
        text = text.replace(INCLUDE, INCLUDE + DIRECT_INCLUDE, 1)
    return text, counts[0], counts[1]


if __name__ == "__main__":
    slots = read_slots(sys.argv[1])
    text, converted, kept = rewrite(open(sys.argv[2]).read(), slots)
    if len(sys.argv) > 3:
        open(sys.argv[3], "w").write(text)
    print("%s: %d direct calls, %d kept" % (os.path.basename(sys.argv[2]), converted, kept))
