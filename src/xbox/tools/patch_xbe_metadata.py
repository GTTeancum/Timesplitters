#!/usr/bin/env python3
# SPDX-License-Identifier: MIT
# From the Perfect Dark X port (scripts/patch-xbe-metadata.py), unchanged.
"""Patch and verify the unsigned homebrew XBE certificate metadata."""

from __future__ import annotations

import argparse
import struct
from pathlib import Path


def patch_title_id(path: Path, title_id: int) -> None:
    data = bytearray(path.read_bytes())
    if len(data) < 0x120 or data[:4] != b"XBEH":
        raise ValueError(f"Not an XBE: {path}")

    image_base = struct.unpack_from("<I", data, 0x104)[0]
    certificate_va = struct.unpack_from("<I", data, 0x118)[0]
    certificate_offset = certificate_va - image_base
    title_id_offset = certificate_offset + 8
    if certificate_offset < 0 or title_id_offset + 4 > len(data):
        raise ValueError("XBE certificate lies outside the file")

    old_title_id = struct.unpack_from("<I", data, title_id_offset)[0]
    struct.pack_into("<I", data, title_id_offset, title_id)
    path.write_bytes(data)

    verify = path.read_bytes()
    actual = struct.unpack_from("<I", verify, title_id_offset)[0]
    if actual != title_id:
        raise ValueError(f"Title ID verification failed: 0x{actual:08X}")
    print(f"XBE Title ID: 0x{old_title_id:08X} -> 0x{actual:08X}")


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--xbe", type=Path, required=True)
    parser.add_argument("--title-id", type=lambda value: int(value, 0), required=True)
    args = parser.parse_args()
    patch_title_id(args.xbe.resolve(), args.title_id)
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
