"""Put the Xbox sound path into an Xbox copy of the SPU2 (TS_SOUND_NATIVE).

The input is the shared ps2_spu2.cpp. Its decodeBlock and mix are compiled
out under TS_SOUND_NATIVE and src/xbox/xbox_sound_native.inl, included at
the end, defines them again: ADPCM blocks decoded once and kept (keyed by
address, bytes and filter history), voices run in blocks between envelope
and sweep steps. Every other method, the header and the class layout stay
as they are. With TS_SOUND_NATIVE=0 the copy is the original. No shared
header or source is modified. Every anchor is exact and unique.
"""
from __future__ import annotations

import argparse
import os
from pathlib import Path
import tempfile


GENERATED = "// Xbox build copy made by src/xbox/tools/patch_sound_native.py; do not edit.\n"
SPU2_INCLUDE = '#include "runtime/ps2_spu2.h"\n'
DECODE = "void Spu2::decodeBlock(Voice &v)\n{\n"
MIX = "void Spu2::mix(int16_t *out, unsigned frames)\n{\n"
GUARD_OPEN = "#if !TS_SOUND_NATIVE\n"
GUARD_CLOSE = "#endif // !TS_SOUND_NATIVE\n"
NATIVE_INCLUDE = '''
#if TS_SOUND_NATIVE
#include "xbox_sound_native.inl"
#endif
'''


def require_once(source: str, label: str, anchor: str) -> None:
    if source.count(anchor) != 1:
        raise ValueError(f"expected exactly one {label} anchor")


def guard_function(source: str, label: str, signature: str) -> str:
    """Wraps the function that starts at `signature` (a column-0 definition
    whose body ends at the next column-0 closing brace) in GUARD_OPEN/CLOSE."""
    require_once(source, label, signature)
    start = source.index(signature)
    end = source.find("\n}\n", start)
    if end < 0:
        raise ValueError(f"no end for the {label}")
    end += 3
    body = source[start:end]
    if body.count("\n{\n") != 1 or "\n}" in body[:-3]:
        raise ValueError(f"unexpected {label} layout")
    return source[:start] + GUARD_OPEN + body + GUARD_CLOSE + source[end:]


def patch_source(source: str) -> str:
    newline = "\r\n" if "\r\n" in source else "\n"
    normalized = source.replace("\r\n", "\n")
    if "\r" in normalized or (newline == "\r\n" and "\n" in source.replace("\r\n", "")):
        raise ValueError("mixed or unsupported source line endings")
    if "\x00" in source or source.startswith("﻿"):
        raise ValueError("unsupported source encoding")
    if any(marker in normalized for marker in (GENERATED, "xbox_sound_native.inl", "TS_SOUND_NATIVE")):
        raise ValueError("source already has the Xbox sound path")
    require_once(normalized, "SPU2 include", SPU2_INCLUDE)
    normalized = guard_function(normalized, "decodeBlock definition", DECODE)
    normalized = guard_function(normalized, "mix definition", MIX)
    if not normalized.endswith("\n"):
        normalized += "\n"
    normalized += NATIVE_INCLUDE
    return (GENERATED + normalized).replace("\n", newline)


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("source", type=Path)
    parser.add_argument("output", type=Path)
    args = parser.parse_args()
    temporary = None
    try:
        if args.source.resolve() == args.output.resolve() or (
                args.output.exists() and args.source.samefile(args.output)):
            raise ValueError("output must not alias the input source")
        patched = patch_source(args.source.read_bytes().decode("utf-8"))
        args.output.parent.mkdir(parents=True, exist_ok=True)
        with tempfile.NamedTemporaryFile(mode="wb", dir=args.output.parent,
                                         prefix=".xbox-sound-native-", delete=False) as stream:
            temporary = Path(stream.name)
            stream.write(patched.encode("utf-8"))
        os.replace(temporary, args.output)
        temporary = None
    except (OSError, ValueError) as error:
        parser.exit(2, f"patch_sound_native: {error}\n")
    finally:
        if temporary is not None:
            temporary.unlink(missing_ok=True)
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
