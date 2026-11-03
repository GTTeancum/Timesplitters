#!/usr/bin/env python3
"""Export a TimeSplitters VU1 draw snapshot as Xbox-layout vertex records.

Input is exactly 16 KiB of VU1 data RAM plus the draw's layout and TOP.
This is a validation-stage capture format, NOT a PS2 archive/world importer.
It does not establish that geometry is static or replace the live renderer.
No third-party Python packages are required.
"""
from __future__ import annotations

import argparse
import hashlib
import os
from pathlib import Path
import struct
import tempfile
import zlib

MAGIC = b"TSXMESH\0"
VERSION = 1
CAPTURE_ONLY = 1
HEADER = struct.Struct("<8s12I32s8x")  # 96 bytes; CRC field at byte 48
STRIP = struct.Struct("<8I")          # first, count, source row, PRIM, GIF tag
VERTEX = struct.Struct("<11I")       # GSXfVertex's exact 44 bytes
U32X4 = struct.Struct("<4I")
VU_BYTES = 16384
NAMES = ("plain", "envmap", "lit", "skinned")
# ts_native_xf::Kind order, NOT GSXfConstants::Variant order.
# vertexBase, rgba offset, ST offset, normal offset, bone offset
LAYOUTS = ((24, 64, 128, None, None), (24, 64, None, 128, None),
           (24, 48, 96, 144, None), (32, 36, 72, 144, 108))


def _row(data: bytes, row: int) -> tuple[int, int, int, int]:
    return U32X4.unpack_from(data, row * 16)


def convert(data: bytes, kind: int, top: int) -> bytes:
    """Return a complete pack or raise ValueError; never export a partial run.

    Floats travel as bits, preserving signed zeros/NaNs except Q=+/-0,
    which becomes 1 exactly as the existing native decoder specifies.
    Camera, lighting, materials, animation and collision are not baked in.
    """
    if len(data) != VU_BYTES:
        raise ValueError("input must be exactly 16384 bytes of VU1 data RAM")
    if not isinstance(kind, int) or not 0 <= kind < len(LAYOUTS):
        raise ValueError("unsupported layout kind")
    if not isinstance(top, int) or not 0 <= top < 1024:
        raise ValueError("TOP must be a qword index in [0, 1023]")
    base, rgba, st, normal, bone = LAYOUTS[kind]
    last = max(offset for offset in (0, rgba, st, normal, bone) if offset is not None)
    strips, vertices = bytearray(), bytearray()
    first, vi = 0, top + base
    for index in range(64):
        if top + index >= 1024:
            raise ValueError("strip headers wrap VU1 memory")
        tag = _row(data, top + index)
        count = tag[0] & 0x7FFF
        prim = (tag[1] >> 15) & 0x7FF
        if not 3 <= count <= 64:
            raise ValueError("only GPU-candidate strips of 3..64 vertices are supported")
        if tag[1] >> 28 != 3 or (tag[1] >> 26) & 3 or not tag[1] & (1 << 14):
            raise ValueError("expected PACKED, NREG=3 and PRE=1 in every strip")
        if prim & 7 != 4:
            raise ValueError("only triangle-strip PRIM is supported")
        if vi + last + count > 1024:
            raise ValueError("vertex arrays wrap VU1 memory; keep the original path")
        strips.extend(STRIP.pack(first, count, vi, prim, *tag))
        for v in range(count):
            pos = _row(data, vi + v)[:3]
            norm = _row(data, vi + normal + v)[:3] if normal is not None else (0, 0, 0)
            r, g, b, a = _row(data, vi + rgba + v)
            color = (b & 255) | ((g & 255) << 8) | ((r & 255) << 16) | ((a & 255) << 24)
            s, t, q = _row(data, vi + st + v)[:3] if st is not None else (0, 0, 0x3F800000)
            if q & 0x7FFFFFFF == 0:
                q = 0x3F800000
            bi = min(_row(data, vi + bone + v)[0] & 0xFFFF, 2) if bone is not None else 0
            bone4 = (0, 0x40800000, 0x41000000)[bi]
            vertices.extend(VERTEX.pack(*pos, *norm, color, s, t, q, bone4))
        first += count
        vi += count
        if tag[0] & 0x8000:
            break
    else:
        raise ValueError("missing EOP within 64 strips; refusing a partial run")
    vertex_offset = HEADER.size + len(strips)
    total = vertex_offset + len(vertices)
    header = HEADER.pack(MAGIC, VERSION, total, kind, top, index + 1, first,
                         HEADER.size, vertex_offset, VERTEX.size, CAPTURE_ONLY,
                         0, 0, hashlib.sha256(data).digest())
    result = bytearray(header + strips + vertices)
    struct.pack_into("<I", result, 48, zlib.crc32(result))
    return bytes(result)


def write_atomic(path: Path, data: bytes) -> None:
    """Do not leave a partial output or destroy an old output on write failure."""
    temporary = None
    try:
        with tempfile.NamedTemporaryFile(dir=path.parent, prefix=path.name + ".", delete=False) as stream:
            temporary = Path(stream.name)
            stream.write(data)
            stream.flush()
            os.fsync(stream.fileno())
        os.replace(temporary, path)
        temporary = None
    finally:
        if temporary is not None:
            temporary.unlink(missing_ok=True)


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("input", type=Path, help="private raw 16 KiB VU1 data snapshot")
    parser.add_argument("output", type=Path, help="private .xmesh capture pack")
    parser.add_argument("--kind", choices=NAMES, required=True)
    parser.add_argument("--top", type=lambda value: int(value, 0), required=True, help="qword index; accepts 0x...")
    args = parser.parse_args()
    try:
        if args.input.resolve() == args.output.resolve():
            raise ValueError("input and output must be different files")
        # Bound memory even for an accidentally supplied disc image/archive.
        with args.input.open("rb") as stream:
            data = stream.read(VU_BYTES + 1)
        packed = convert(data, NAMES.index(args.kind), args.top)
        write_atomic(args.output, packed)
    except (OSError, ValueError) as error:
        parser.exit(2, f"xmeshbuild: {error}\n")
    fields = HEADER.unpack_from(packed)
    print(f"{fields[5]} strips, {fields[6]} vertices, {len(packed)} bytes; capture-only, not installed")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
