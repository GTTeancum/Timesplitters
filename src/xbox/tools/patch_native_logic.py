"""TS_NATIVE_LOGIC copies of the four native game files (Xbox only).

usage: patch_native_logic.py <ts_native_*.cpp> <register_functions_xbox.cpp> <output .cpp>

The hand-ported natives call other guest functions through guestCall /
lightCall, i.e. PS2Runtime::dispatchGuestBranch: seven arguments, the call
kind's dispatch, a slot lookup and the post-call tests, out of line, for
every call. Here every literal call (the parser is patch_native_calls.py's,
with its checks) becomes xlNativeCall<slot, target> (src/xbox/xbox_logic.h):
the same ra, pc, 8-cycle checkpoint and table call, inline, with one compare
after the call. Calls to the hottest leaf natives become xlNativeLeafCall,
which runs the leaf's inline copy while the table holds that native.

ts_native_math.cpp also publishes its natives to the leaf copies
(xlNoteLeafNative) as registerTsNativeMath installs them. Tail jumps and
dynamic targets keep their original helpers. The input may be an earlier
stage's copy (ts_native_game2.cpp after patch_native_models.py partgfx);
the shared sources are never written.
"""
from __future__ import annotations

import argparse
import os
from pathlib import Path
import re
import tempfile

import patch_native_calls
from direct_calls import read_slots

HEADER = "// Xbox build copy made by src/xbox/tools/patch_native_logic.py (TS_NATIVE_LOGIC); do not edit.\n"
LEAVES = {
    0x2D5E98: "XL_LEAF_MUL_MATRIX",
    0x2D6188: "XL_LEAF_UNIT_MATRIX",
    0x2D6120: "XL_LEAF_COPY_MATRIX",
    0x2DC5A0: "XL_LEAF_FABSF",
    0x2B5638: "XL_LEAF_VEC_ROT_ALIGNED",
    0x2B5570: "XL_LEAF_VEC3_MUL4_ALIGNED",
}
SLOT_CALL = re.compile(r"xboxNativeGuestCall<(\d+)u, (0x[0-9A-Fa-f]+[uU])>")
REGISTER_LOOP = ("    for (const NativeMath &fn : kNativeMath)\n"
                 "        runtime.replaceFunction(fn.address, fn.native);\n")
PUBLISH = ("    // TS_NATIVE_LOGIC: the inline leaf copies stand for these natives\n"
           "    // while the table holds them (xbox_logic.h).\n"
           "    for (const NativeMath &fn : kNativeMath)\n"
           "        xlNoteLeafNative(fn.address, fn.native);\n"
           "    std::fprintf(stderr, \"[TS:logic] leaf copies: %u of %u natives published\\n\", xlLeafNativeCount(),\n"
           "                 static_cast<unsigned>(XL_LEAF_COUNT));\n")


def patch_source(source: str, name: str, slots: dict[int, int]) -> str:
    if patch_native_calls.GENERATED in source or HEADER in source:
        raise ValueError("already patched")
    text = patch_native_calls.patch_source(source, name, slots)
    newline = "\r\n" if "\r\n" in text else "\n"
    text = text.replace("\r\n", "\n")
    if not text.startswith(patch_native_calls.GENERATED):
        raise ValueError("unexpected native-calls output")
    text = HEADER + text[len(patch_native_calls.GENERATED):]
    if text.count(patch_native_calls.ADAPTER) != 1:
        raise ValueError("native-calls adapter include missing")
    text = text.replace(patch_native_calls.ADAPTER, '#include "xbox_logic.h"\n')
    leaves = 0

    def call(match: re.Match[str]) -> str:
        nonlocal leaves
        slot, target = match.group(1), match.group(2)
        leaf = LEAVES.get(int(target[:-1], 16))
        if leaf:
            leaves += 1
            return "xlNativeLeafCall<%su, %s, %s>" % (slot, target, leaf)
        return "xlNativeCall<%su, %s>" % (slot, target)

    text, calls = SLOT_CALL.subn(call, text)
    if calls == 0 or "xboxNativeGuestCall<" in text:
        raise ValueError("no calls rewritten in " + name)
    if name == "ts_native_math.cpp":
        if text.count(REGISTER_LOOP) != 1:
            raise ValueError("registerTsNativeMath's install loop changed")
        text = text.replace(REGISTER_LOOP, REGISTER_LOOP + PUBLISH)
    lines = text.split("\n", 1)
    text = lines[0] + "\n// %d literal calls use the lean protocol, %d of them leaf copies.\n" % (calls, leaves) + lines[1]
    return text.replace("\n", newline)


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("source", type=Path)
    parser.add_argument("table", type=Path)
    parser.add_argument("output", type=Path)
    args = parser.parse_args()
    temporary = None
    try:
        if args.output.exists() and args.source.samefile(args.output):
            raise ValueError("output must not alias the input")
        result = patch_source(args.source.read_bytes().decode("utf-8"), args.source.name, read_slots(args.table))
        args.output.parent.mkdir(parents=True, exist_ok=True)
        with tempfile.NamedTemporaryFile(mode="wb", dir=args.output.parent, prefix=".xbox-native-logic-",
                                         delete=False) as stream:
            temporary = Path(stream.name)
            stream.write(result.encode("utf-8"))
        os.replace(temporary, args.output)
        temporary = None
    except (OSError, ValueError) as error:
        parser.exit(2, "patch_native_logic: %s\n" % error)
    finally:
        if temporary is not None:
            temporary.unlink(missing_ok=True)
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
