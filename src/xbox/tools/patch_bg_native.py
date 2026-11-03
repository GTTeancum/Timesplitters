"""Make the Xbox build's native VU source copy with narrow XBG fallbacks.

An already accepted transform group first tries one complete XBG borrow;
the original joined-strip and flat-strip calls retain per-strip fallbacks.
The independent ring self-check, live state/constants, GIF ordering, and
CPU fallback remain unchanged. Unknown source shapes fail.
"""
from __future__ import annotations

import argparse
import os
from pathlib import Path
import tempfile


INCLUDE = '#include "vu1_native_xf.h"'
JOINED = '                ts_native_xf::writeJoinedStrip(kind, cursor, data, vi, n);'
FLAT = '                ts_native_xf::decodeXfStrip(kind, data, vi, n, list);'
GROUP = ('                for (uint32_t k = i; k < j; ++k)\n'
         '                    gpuStrip(strips[k]);')
GROUP_REPLACEMENT = '''                bool xboxBgGroupWritten = false;
#if TS_BG_BATCH
#if TS_NATIVE_RING_SELFCHECK
                if (!ringCheck)
#endif
                {
                    const uint32_t xboxBgGroupCount = j - i;
                    if (xboxBgGroupCount <= kXboxBgMaxBatchStrips)
                    {
                        XboxBgStripSpan xboxBgSpans[kXboxBgMaxBatchStrips];
                        for (uint32_t k = 0; k < xboxBgGroupCount; ++k)
                            xboxBgSpans[k] = {strips[i + k].vi, strips[i + k].n};
                        xboxBgGroupWritten = xboxBgTryEmitGroup(
                            kind, cursor, data, xboxBgSpans, xboxBgGroupCount,
                            [](const GSXfVertex *vertices, uint32_t count, void *sink) {
                                static_cast<GS *>(sink)->emitXfStrip(vertices, count);
                            }, &gs);
                    }
                }
#endif
                if (!xboxBgGroupWritten)
                    for (uint32_t k = i; k < j; ++k)
                        gpuStrip(strips[k]);'''
ADAPTER_INCLUDE = '#include "xbox_bg_xf.h"'
GENERATED = '// Xbox build copy made by src/xbox/tools/patch_bg_native.py; do not edit.\n'


def patch_source(source: str) -> str:
    if ADAPTER_INCLUDE in source:
        raise ValueError("native source already has the Xbox BG adapter")
    for label, anchor in (("native vertex include", INCLUDE), ("joined-strip call", JOINED),
                          ("flat-strip call", FLAT), ("accepted GPU group loop", GROUP)):
        if source.count(anchor) != 1:
            raise ValueError(f"expected exactly one {label} anchor")
    source = source.replace(INCLUDE, INCLUDE + "\n" + ADAPTER_INCLUDE)
    source = source.replace(JOINED,
                            '                if (!xboxBgTryWriteJoinedStrip(kind, cursor, data, vi, n))\n'
                            '    ' + JOINED)
    source = source.replace(FLAT,
                            '                if (!xboxBgTryDecodeStrip(kind, data, vi, n, list))\n'
                            '    ' + FLAT)
    source = source.replace(GROUP, GROUP_REPLACEMENT)
    return GENERATED + source


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("source", type=Path)
    parser.add_argument("output", type=Path)
    args = parser.parse_args()
    temporary = None
    try:
        if args.source.resolve() == args.output.resolve() or (
                args.output.exists() and args.source.samefile(args.output)):
            raise ValueError("output must not alias the shared native source")
        patched = patch_source(args.source.read_text(encoding="utf-8"))
        args.output.parent.mkdir(parents=True, exist_ok=True)
        with tempfile.NamedTemporaryFile(mode="w", encoding="utf-8", newline="\n",
                                         dir=args.output.parent, prefix=".xbg-native-",
                                         delete=False) as stream:
            temporary = Path(stream.name)
            stream.write(patched)
        os.replace(temporary, args.output)
        temporary = None
    except (OSError, ValueError) as error:
        parser.exit(2, f"patch_bg_native: {error}\n")
    finally:
        if temporary is not None:
            temporary.unlink(missing_ok=True)
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
