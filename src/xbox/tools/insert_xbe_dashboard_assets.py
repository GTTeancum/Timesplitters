#!/usr/bin/env python3
# SPDX-License-Identifier: MIT
# From the Perfect Dark X port (scripts/insert-xbe-dashboard-assets.py), unchanged.
"""Insert retail-style dashboard metadata sections into an existing XBE.

NXDK's cxbe emits executable sections but has no equivalent of the Microsoft
XDK image builder's /TITLEINFO, /TITLEIMAGE, and /DEFAULTSAVEIMAGE switches.
Retail dashboards and CXBX-Reloaded locate those resources in inserted-file
sections named $$XTINFO, $$XTIMAGE, and $$XSIMAGE. This tool adds the same
sections without changing the linked program or requiring the proprietary XDK.
"""

from __future__ import annotations

import argparse
import hashlib
from pathlib import Path
import struct


XBE_MAGIC = b"XBEH"
SECTION_HEADER_SIZE = 56
INSERTED_FILE_FLAGS = 0x38


def align(value: int, alignment: int) -> int:
    return (value + alignment - 1) & ~(alignment - 1)


def u32(data: bytes | bytearray, offset: int) -> int:
    return struct.unpack_from("<I", data, offset)[0]


def write_u32(data: bytearray, offset: int, value: int) -> None:
    struct.pack_into("<I", data, offset, value)


def validate_xpr(path: Path, expected_size: int) -> bytes:
    payload = path.read_bytes()
    if len(payload) != expected_size or payload[:4] != b"XPR0":
        raise ValueError(
            f"{path} is not the expected {expected_size}-byte XPR0 resource"
        )
    return payload


def insert_assets(
    xbe_path: Path,
    title_info_path: Path,
    title_image_path: Path,
    save_image_path: Path,
) -> None:
    data = bytearray(xbe_path.read_bytes())
    if data[:4] != XBE_MAGIC:
        raise ValueError(f"Not an XBE: {xbe_path}")

    title_info = title_info_path.read_bytes()
    title_image = validate_xpr(title_image_path, 10_240)
    save_image = validate_xpr(save_image_path, 4_096)
    resources = (
        ("$$XTINFO", title_info),
        ("$$XTIMAGE", title_image),
        ("$$XSIMAGE", save_image),
    )

    base = u32(data, 0x104)
    header_size = u32(data, 0x108)
    image_size = u32(data, 0x10C)
    old_count = u32(data, 0x11C)
    old_table = u32(data, 0x120) - base
    old_table_end = old_table + old_count * SECTION_HEADER_SIZE

    if old_table < 0x178 or old_table_end > header_size:
        raise ValueError("XBE section table lies outside the used header")

    old_headers = bytes(data[old_table:old_table_end])
    old_raw_offsets = [
        u32(old_headers, index * SECTION_HEADER_SIZE + 12)
        for index in range(old_count)
    ]
    first_raw = min(offset for offset in old_raw_offsets if offset)

    new_count = old_count + len(resources)
    new_table = align(header_size, 16)
    names_start = new_table + new_count * SECTION_HEADER_SIZE
    name_offsets: list[int] = []
    cursor = names_start

    for name, _ in resources:
        name_offsets.append(cursor)
        cursor += len(name) + 1

    refs_start = align(cursor, 2)
    refs_size = (len(resources) + 1) * 2
    new_header_size = align(refs_start + refs_size, 4)

    if new_header_size > first_raw:
        raise ValueError(
            f"Inserted section metadata ends at 0x{new_header_size:X}, "
            f"overlapping first raw section at 0x{first_raw:X}"
        )
    if any(data[new_table:new_header_size]):
        raise ValueError("XBE header tail is not empty; refusing to overwrite it")

    data[new_table:new_table + len(old_headers)] = old_headers
    for name_offset, (name, _) in zip(name_offsets, resources):
        encoded = name.encode("ascii") + b"\0"
        data[name_offset:name_offset + len(encoded)] = encoded
    data[refs_start:refs_start + refs_size] = b"\0" * refs_size

    raw_cursor = align(len(data), 0x1000)
    if raw_cursor > len(data):
        data.extend(b"\0" * (raw_cursor - len(data)))
    virtual_cursor = base + align(image_size, 0x1000)

    for index, ((_, payload), name_offset) in enumerate(
        zip(resources, name_offsets)
    ):
        raw_address = raw_cursor
        virtual_address = virtual_cursor
        section_offset = new_table + (old_count + index) * SECTION_HEADER_SIZE
        digest = hashlib.sha1(payload).digest()

        struct.pack_into(
            "<9I20s",
            data,
            section_offset,
            INSERTED_FILE_FLAGS,
            virtual_address,
            len(payload),
            raw_address,
            len(payload),
            base + name_offset,
            0,
            base + refs_start + index * 2,
            base + refs_start + (index + 1) * 2,
            digest,
        )

        data.extend(payload)
        raw_cursor = align(len(data), 0x1000)
        if raw_cursor > len(data):
            data.extend(b"\0" * (raw_cursor - len(data)))
        virtual_cursor = align(virtual_address + len(payload), 0x20)

    write_u32(data, 0x108, new_header_size)
    write_u32(data, 0x10C, virtual_cursor - base)
    write_u32(data, 0x11C, new_count)
    write_u32(data, 0x120, base + new_table)
    xbe_path.write_bytes(data)

    print(
        f"Inserted dashboard sections into {xbe_path}: "
        f"$$XTINFO={len(title_info)}, $$XTIMAGE={len(title_image)}, "
        f"$$XSIMAGE={len(save_image)}"
    )


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--xbe", required=True, type=Path)
    parser.add_argument("--title-info", required=True, type=Path)
    parser.add_argument("--title-image", required=True, type=Path)
    parser.add_argument("--save-image", required=True, type=Path)
    args = parser.parse_args()
    insert_assets(
        args.xbe.resolve(),
        args.title_info.resolve(),
        args.title_image.resolve(),
        args.save_image.resolve(),
    )
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
