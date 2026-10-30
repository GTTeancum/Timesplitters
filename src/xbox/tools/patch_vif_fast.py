"""Add Xbox-local UNPACK metadata reuse and contiguous 32-bit copy runs.

Accepts the original shared VIF source or the Xbox background-observer copy.
All register writes, observers, command accounting and fallback branches stay
in place. The fast path never suppresses VU writes or reuses source payloads.
TS_VIF_FAST=0 retains the original decoder arithmetic and copy loops.
"""
from __future__ import annotations

import argparse
import os
from pathlib import Path
import tempfile


GENERATED = "// Xbox build copy made by src/xbox/tools/patch_vif_fast.py; do not edit.\n"
INCLUDE = '#include <xmmintrin.h> // the row copies and prefetches below (SSE1)\n'
FAST_INCLUDE = '#include "xbox_vif_fast.h"\n'
DECODE = '''uint32_t PS2Memory::decodeVIF1Pieces(const Vif1Piece *pieces, size_t count, uint32_t bytes, bool chainEnd)
{
    static_assert(PS2_VU1_DATA_SIZE == 1024u * 16u, "UNPACK writes wrap at 1024 quadwords");
'''
PLAN = '''            const uint32_t vn = (opcode >> 2) & 0x3u;
            const uint32_t vl = opcode & 0x3u;
            const uint32_t components = vn + 1u;
            uint32_t bitsPerComponent = 32u;
            if (vl == 1u)
                bitsPerComponent = 16u;
            else if (vl == 2u)
                bitsPerComponent = 8u;
            else if (vl == 3u)
                bitsPerComponent = (vn == 3u) ? 4u : 16u;
            const uint32_t bitsPerVector = (vl == 3u && vn == 3u) ? 16u : (components * bitsPerComponent);
            const uint32_t bytesPerVector = (bitsPerVector + 7u) / 8u;
            // UNPACK semantics: NUM is 8-bit and NUM==0 means 256 vectors (writes).
            const uint32_t writeVectorCount = (num == 0u) ? 256u : static_cast<uint32_t>(num);

            // STCYCL controls write cycles for UNPACK.
            uint32_t cl = vif1_regs.cycle & 0xFFu;
            uint32_t wl = (vif1_regs.cycle >> 8) & 0xFFu;
            if (cl == 0u)
                cl = 1u;
            if (wl == 0u)
                wl = 1u;

            uint32_t sourceVectorCount = writeVectorCount;
            if (cl < wl)
            {
                const uint32_t fullBlocks = writeVectorCount / wl;
                uint32_t remainder = writeVectorCount % wl;
                if (remainder > cl)
                    remainder = cl;
                sourceVectorCount = fullBlocks * cl + remainder;
            }

            const uint32_t sourceBytes = sourceVectorCount * bytesPerVector;
            const uint32_t totalBytes = (sourceBytes + 3u) & ~3u;
'''
FAST_PLAN = '''#if TS_VIF_FAST
            const auto &xboxPlan = xboxUnpackPlans.get(cmd, vif1_regs.cycle);
            const uint32_t vn = xboxPlan.format >> 2u;
            const uint32_t vl = xboxPlan.format & 3u;
            const uint32_t components = vn + 1u;
            const uint32_t bytesPerVector = xboxPlan.bytesPerVector;
            const uint32_t writeVectorCount = xboxPlan.writeVectors;
            const uint32_t cl = xboxPlan.cl, wl = xboxPlan.wl;
            const uint32_t sourceVectorCount = xboxPlan.sourceVectors;
            const uint32_t sourceBytes = xboxPlan.sourceBytes;
            const uint32_t totalBytes = xboxPlan.totalBytes;
#else
'''
COPY = '''            if (!maskEnable && (vif1_regs.mode & 3u) == 0u && cl == wl && (opcode & 0xFu) == 0xCu &&
                in.avail() >= sourceBytes)
'''
FAST_COPY = '''#if TS_VIF_FAST
            if (!maskEnable && (vif1_regs.mode & 3u) == 0u && cl == wl && vl == 0u &&
                in.avail() >= sourceBytes &&
                xbox_vif_fast::unpackContiguous32(m_vu1Data, in.here(), vuAddr,
                                                  sourceVectorCount, opcode & 0xFu))
            {
                in.advance(sourceBytes);
                fastVectors += sourceVectorCount;
            }
            else
#endif
'''


def patch_source(source: str) -> str:
    newline = "\r\n" if "\r\n" in source else "\n"
    normalized = source.replace("\r\n", "\n")
    if "\r" in normalized or (newline == "\r\n" and "\n" in source.replace("\r\n", "")):
        raise ValueError("mixed or unsupported source line endings")
    if "\x00" in source or source.startswith("\ufeff"):
        raise ValueError("unsupported source encoding")
    if any(marker in normalized for marker in (GENERATED, FAST_INCLUDE, "xboxUnpackPlans", "unpackContiguous32(")):
        raise ValueError("VIF source already has the Xbox fast UNPACK adapter")
    for label, anchor in (("Xbox SSE include", INCLUDE), ("segmented decoder", DECODE),
                          ("UNPACK size/cycle calculation", PLAN), ("contiguous V4-32 branch", COPY)):
        if normalized.count(anchor) != 1:
            raise ValueError(f"expected exactly one {label} anchor")
    if not normalized.index(DECODE) < normalized.index(PLAN) < normalized.index(COPY):
        raise ValueError("unexpected segmented decoder/UNPACK order")
    normalized = normalized.replace(INCLUDE, INCLUDE + FAST_INCLUDE)
    normalized = normalized.replace(DECODE, DECODE + "#if TS_VIF_FAST\n    xbox_vif_fast::UnpackPlans xboxUnpackPlans;\n#endif\n")
    normalized = normalized.replace(PLAN, FAST_PLAN + PLAN + "#endif\n")
    normalized = normalized.replace(COPY, FAST_COPY + COPY)
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
            raise ValueError("output must not alias its input source")
        patched = patch_source(args.source.read_bytes().decode("utf-8"))
        args.output.parent.mkdir(parents=True, exist_ok=True)
        with tempfile.NamedTemporaryFile(mode="wb", dir=args.output.parent,
                                         prefix=".xbox-vif-fast-", delete=False) as stream:
            temporary = Path(stream.name)
            stream.write(patched.encode("utf-8"))
        os.replace(temporary, args.output)
        temporary = None
    except (OSError, ValueError) as error:
        parser.exit(2, f"patch_vif_fast: {error}\n")
    finally:
        if temporary is not None:
            temporary.unlink(missing_ok=True)
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
