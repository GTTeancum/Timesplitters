"""Route complete GIF packets through the direct decoder in an Xbox GS copy.

The input is the GS front end as the earlier stages leave it (the shared
source, or patch_native_gif.py's copy). processGIFPacket hands every packet
to the direct decoder (src/xbox/xbox_gif_direct.h) on its path's stream,
after the existing whole-upload check; processNativePackedGIFPacket tries
it, for complete PACKED packets on a fresh stream, when every path's stream
is between tags. A declined packet goes on through the method's own body.
No shared header or source is modified. Every anchor is exact and unique.
"""
from __future__ import annotations

import argparse
import os
from pathlib import Path
import tempfile


GENERATED = "// Xbox build copy made by src/xbox/tools/patch_gif_direct.py; do not edit.\n"
GS_INCLUDE = '#include "runtime/gs/gs_frontend.h"\n'
DIRECT_INCLUDE = '#include "xbox_gif_direct.h"\n'
STREAM = '''    auto &stream = m_gifStreams[index - 1];
    if (!stream.remaining && !stream.padding && !stream.unitBytes &&
        tryProcessNativeImageUploadPacket(data, sizeBytes))
        return;
'''
STREAM_DIRECT = '''#if TS_GIF_DIRECT
    {
        XBOX_GIF_DIRECT_GS_ACCESS;
        DirectAccess access{*this};
        if (xbox_gif_direct::run(access, stream, data, sizeBytes, false, false))
            return;
    }
#endif
'''
NATIVE = '''bool GS::processNativePackedGIFPacket(const uint8_t *data, uint32_t sizeBytes)
{
'''
# The original method sets Q at every tag, the TS_GIF_NATIVE plan executor
# only at a tag's first write (as the stream does); keep each one's.
NATIVE_DIRECT = '''#if TS_GIF_DIRECT
    {
        std::lock_guard<std::recursive_mutex> directLock(m_stateMutex);
        bool idle = true;
        for (const auto &stream : m_gifStreams)
            idle = idle && !stream.remaining && !stream.padding && !stream.unitBytes;
        if (idle)
        {
            XBOX_GIF_DIRECT_GS_ACCESS;
            DirectAccess access{*this};
            GifStreamState fresh{}; // the method keeps no stream
#if defined(TS_GIF_NATIVE) && TS_GIF_NATIVE
            constexpr bool emptyTagResetsQ = false;
#else
            constexpr bool emptyTagResetsQ = true;
#endif
            if (xbox_gif_direct::run(access, fresh, data, sizeBytes, true, emptyTagResetsQ))
            {
                ++m_nativePackedGIFPacketCount;
                return true;
            }
        }
    }
#endif
'''


def require_once(source: str, label: str, anchor: str) -> None:
    if source.count(anchor) != 1:
        raise ValueError(f"expected exactly one {label} anchor")


def patch_source(source: str) -> str:
    newline = "\r\n" if "\r\n" in source else "\n"
    normalized = source.replace("\r\n", "\n")
    if "\r" in normalized or (newline == "\r\n" and "\n" in source.replace("\r\n", "")):
        raise ValueError("mixed or unsupported source line endings")
    if "\x00" in source or source.startswith("﻿"):
        raise ValueError("unsupported source encoding")
    if any(marker in normalized for marker in (GENERATED, DIRECT_INCLUDE, "xbox_gif_direct::run(")):
        raise ValueError("source already has the Xbox direct GIF route")
    require_once(normalized, "GS front-end include", GS_INCLUDE)
    require_once(normalized, "processGIFPacket stream", STREAM)
    require_once(normalized, "native PACKED GIF method", NATIVE)
    normalized = normalized.replace(GS_INCLUDE, GS_INCLUDE + DIRECT_INCLUDE)
    normalized = normalized.replace(STREAM, STREAM + STREAM_DIRECT)
    normalized = normalized.replace(NATIVE, NATIVE + NATIVE_DIRECT)
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
                                         prefix=".xbox-gif-direct-", delete=False) as stream:
            temporary = Path(stream.name)
            stream.write(patched.encode("utf-8"))
        os.replace(temporary, args.output)
        temporary = None
    except (OSError, ValueError) as error:
        parser.exit(2, f"patch_gif_direct: {error}\n")
    finally:
        if temporary is not None:
            temporary.unlink(missing_ok=True)
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
