#!/usr/bin/env python3
"""Convert checked original BG.PAK room geometry into source-derived XBG1 packs.

This is an offline asset converter. It installs no renderer and never treats
original vertex colors as proof that a live, possibly relit stream is unchanged.
See ../NATIVE-BACKGROUND-FORMAT.md for the format and live-binding requirements.
"""
from __future__ import annotations

import argparse
import hashlib
import json
import os
from pathlib import Path, PurePosixPath
import re
import struct
import tempfile
import zlib


MAGIC = b"TSXBGP1\0"
VERSION = 1
REQUIRES_LIVE_BINDING = 1
HEADER = struct.Struct("<8s20I32s32s2I")
TEXTURE = struct.Struct("<4I")
ROOM = struct.Struct("<16I")
BATCH = struct.Struct("<16I")
STRIP = struct.Struct("<8I")
VERTEX = struct.Struct("<11I")
U32 = struct.Struct("<I")
I32 = struct.Struct("<i")
TAG = struct.Struct("<4I")
DESCRIPTOR = struct.Struct("<5Ii")
MAX_PACK_BYTES = 64 * 1024 * 1024
MAX_SOURCE_BYTES = 256 * 1024 * 1024
CRC_OFFSET = 152
BG_NAME = re.compile(r"bg/level([1-9][0-9]*)/level\1\.raw\Z")
POINTER_FIELDS = (8, 12, 16, 20, 24, 28, 32, 36, 40, 44, 48, 52, 56, 60, 64, 72)


class FormatError(ValueError):
    """Unsupported or malformed source data or XBG1 container."""


def _span(size: int, offset: int, count: int, label: str, minimum: int = 0) -> None:
    if offset < minimum or count < 0 or offset > size or count > size - offset:
        raise FormatError(f"{label}: range outside its source")


def _slice(data: bytes, offset: int, count: int, label: str, minimum: int = 0) -> bytes:
    _span(len(data), offset, count, label, minimum)
    return data[offset:offset + count]


def _u32(data: bytes, offset: int, label: str) -> int:
    _span(len(data), offset, 4, label)
    return U32.unpack_from(data, offset)[0]


def _words(data: bytes, offset: int, count: int, label: str) -> tuple[int, ...]:
    _span(len(data), offset, count * 4, label)
    return struct.unpack_from(f"<{count}I", data, offset)


def _array(data: bytes, pointer: int, start: int, count: int, stride: int, label: str) -> bytes:
    if pointer < 16:
        raise FormatError(f"{label}: missing source array")
    return _slice(data, pointer + start * stride, count * stride, label, 16)


def _align128(value: int) -> int:
    return (value + 127) & ~127


def checksum(data: bytes) -> int:
    """CRC32 of the complete pack with its four checksum bytes zeroed."""
    _span(len(data), CRC_OFFSET, 4, "CRC field")
    crc = zlib.crc32(data[:CRC_OFFSET])
    crc = zlib.crc32(b"\0" * 4, crc)
    return zlib.crc32(data[CRC_OFFSET + 4:], crc) & 0xFFFFFFFF


def parse_pak(data: bytes, *, require_bg: bool = False) -> list[dict]:
    """Validate a complete uncompressed P4CK directory and return its entries.

    Each result has name, offset, size and data fields. The function never
    extracts files. Payload aliases are allowed; their entry identities remain
    distinct. Background names must have a canonical positive level number.
    """
    if len(data) > MAX_SOURCE_BYTES:
        raise FormatError("PAK exceeds the source-size safety limit")
    magic, directory, directory_bytes = struct.unpack("<4sII", _slice(data, 0, 12, "PAK header"))
    if magic != b"P4CK" or directory < 12 or not directory_bytes or directory_bytes % 60:
        raise FormatError("invalid P4CK directory header")
    _span(len(data), directory, directory_bytes, "PAK directory")
    names: set[str] = set()
    entries = []
    for offset in range(directory, directory + directory_bytes, 60):
        entry = data[offset:offset + 60]
        name_bytes = entry[:48]
        if b"\0" not in name_bytes:
            raise FormatError("PAK filename lacks a NUL terminator")
        try:
            name = name_bytes.split(b"\0", 1)[0].decode("ascii", "strict")
        except UnicodeDecodeError as error:
            raise FormatError("PAK filename is not ASCII") from error
        path = PurePosixPath(name)
        if (not name or "\\" in name or path.is_absolute() or ".." in path.parts or
                any(ord(char) < 32 or ord(char) == 127 for char in name) or name in names):
            raise FormatError("unsafe or duplicate PAK filename")
        names.add(name)
        if require_bg:
            match = BG_NAME.fullmatch(name)
            if match is None or int(match.group(1)) > 0xFFFFFFFF:
                raise FormatError(f"unsupported background entry name: {name}")
        payload, size, compressed = struct.unpack_from("<3I", entry, 48)
        if compressed:
            raise FormatError(f"compressed PAK entry is unsupported: {name}")
        if not size and require_bg:
            raise FormatError(f"empty PAK entry: {name}")
        _span(len(data), payload, size, f"PAK entry {name}", 12)
        if payload < directory + directory_bytes and directory < payload + size:
            raise FormatError(f"PAK entry overlaps the directory: {name}")
        entries.append({"name": name, "offset": payload, "size": size,
                        "data": data[payload:payload + size]})
    return entries


def _tag_count(tag: tuple[int, ...], *, last: bool) -> int:
    count = tag[0] & 0x7FFF
    if not 3 <= count <= 64:
        raise FormatError("strip vertex count must be 3..64")
    if tag[1] >> 28 != 3 or (tag[1] >> 26) & 3 or not tag[1] & (1 << 14):
        raise FormatError("strip must be PACKED, PRE and NREG=3")
    if ((tag[1] >> 15) & 7) != 4:
        raise FormatError("only triangle strips are supported")
    if bool(tag[0] & 0x8000) != last:
        raise FormatError("EOP must occur only on the final strip of a batch")
    return count


def _source_tables(raw: bytes, misc_names: set[str] | None) -> tuple[tuple[int, ...], bytes, list[tuple]]:
    if len(raw) > MAX_SOURCE_BYTES:
        raise FormatError("raw level exceeds the source-size safety limit")
    offsets = _words(raw, 0, 4, "background header")
    textures_at, rooms_at, portals_at, volume_at = offsets
    for at, width, name in ((textures_at, 16, "texture table"), (rooms_at, 88, "room table"),
                            (portals_at, 8, "portal table")):
        _span(len(raw), at, width, name, 16)
    if volume_at:
        _span(len(raw), volume_at, 4, "volume header", 16)
    texture_records = bytearray()
    for at in range(textures_at, len(raw) - 15, 16):
        texture_id = I32.unpack_from(raw, at)[0]
        if texture_id < 0:
            break
        if misc_names is not None and f"textures/{texture_id:04d}.qpm" not in misc_names:
            raise FormatError(f"missing source texture textures/{texture_id:04d}.qpm")
        texture_records.extend(raw[at:at + 16])
        if len(texture_records) > MAX_PACK_BYTES - HEADER.size:
            raise FormatError("texture table exceeds the pack-size limit")
    else:
        raise FormatError("unterminated texture table")
    rooms = []
    for index, at in enumerate(range(rooms_at + 44, len(raw) - 43, 44), 1):
        record = _words(raw, at, 11, "room record")
        if not record[0]:
            break
        for pointer in record[:5]:
            if pointer:
                _span(len(raw), pointer, 4, "room referenced data", 16)
        rooms.append((index, at, record))
        if HEADER.size + len(texture_records) + len(rooms) * ROOM.size > MAX_PACK_BYTES:
            raise FormatError("room table exceeds the pack-size limit")
    else:
        raise FormatError("unterminated room table")
    for at in range(portals_at + 4, len(raw) - 3, 4):
        pointer = _u32(raw, at, "portal offset")
        if not pointer:
            break
        _span(len(raw), pointer, 4, "portal target", 16)
    else:
        raise FormatError("unterminated portal table")
    return offsets, bytes(texture_records), rooms


def build_level(raw: bytes, *, level: int, pak_sha256: bytes,
                misc_names: set[str] | None = None) -> bytes:
    """Build one entire source-derived pack or raise FormatError.

    Float bit patterns are copied directly. No VU reconstruction, capture
    parser, xmesh converter, or native renderer is invoked by this writer.
    """
    if not isinstance(level, int) or not 1 <= level <= 0xFFFFFFFF:
        raise FormatError("level must be a positive uint32")
    if not isinstance(pak_sha256, bytes) or len(pak_sha256) != 32:
        raise FormatError("pak_sha256 must contain exactly 32 digest bytes")
    source_offsets, textures, source_rooms = _source_tables(raw, misc_names)
    room_bytes, batch_bytes, strip_bytes, vertices = (bytearray() for _ in range(4))
    batch_count = strip_count = vertex_count = 0
    texture_count = len(textures) // TEXTURE.size
    for room_index, (source_index, room_at, room_words) in enumerate(source_rooms):
        room_first = batch_count
        model = room_words[0]
        _span(len(raw), model, 40, "model header", 16)
        part_count = _u32(raw, model, "model part count")
        if not part_count or part_count > (model - 16) // 80:
            raise FormatError("empty model or part table underflow")
        # The original BG loader fills these runtime bindings. Reading a
        # relocated model or alternate material table as original data is unsafe.
        if any(_words(raw, model + 12, 7, "model runtime fields")):
            raise FormatError("on-disk model has unsupported runtime or alternate bindings")
        first_part = model - part_count * 80
        for part_index in range(part_count):
            part_at = first_part + part_index * 80
            part = _words(raw, part_at, 20, "part")
            if part[0] & 255:
                raise FormatError("only class-0 background parts are supported")
            if part[19]:
                raise FormatError("nonzero on-disk runtime part field +0x4c")
            for field in POINTER_FIELDS:
                if part[field // 4]:
                    _span(len(raw), part[field // 4], 1, "part referenced data", 16)
            for variant in (0, 1):
                descriptor_at = part[2 + variant]
                if not descriptor_at:
                    continue
                arrays = part[5 + variant * 6:11 + variant * 6]
                for at in range(descriptor_at, len(raw) - DESCRIPTOR.size + 1, DESCRIPTOR.size):
                    texture, tag_start, tag_total, vertex_start, vertex_total, layout = DESCRIPTOR.unpack_from(raw, at)
                    if layout < 0:
                        break
                    if layout not in (0, 2):
                        raise FormatError(f"unsupported class-0 layout {layout}")
                    if texture & 0x80000000:
                        raise FormatError("inherited texture indices are unsupported")
                    if texture >= texture_count:
                        raise FormatError("batch texture index is outside the original texture table")
                    if not 1 <= tag_total <= 24 or not 3 <= vertex_total <= 64:
                        raise FormatError("batch exceeds supported strip or vertex capacity")
                    tags = _array(raw, arrays[0], tag_start, tag_total, 16, "strip tags")
                    positions = _array(raw, arrays[1], vertex_start, vertex_total, 12, "positions")
                    vectors = _array(raw, arrays[2], vertex_start, vertex_total, 16, "vector rows")
                    colors = _array(raw, arrays[3], vertex_start, vertex_total, 4, "RGBA")
                    next_size = _align128(HEADER.size + len(textures) + len(source_rooms) * ROOM.size +
                                         (batch_count + 1) * BATCH.size + (strip_count + tag_total) * STRIP.size)
                    next_size += (vertex_count + vertex_total) * VERTEX.size
                    if next_size > MAX_PACK_BYTES:
                        raise FormatError("native background pack exceeds 64 MiB")
                    consumed = 0
                    for strip in range(tag_total):
                        tag = TAG.unpack_from(tags, strip * 16)
                        count = _tag_count(tag, last=strip + 1 == tag_total)
                        strip_bytes.extend(STRIP.pack(vertex_count + consumed, count,
                            arrays[0] + (tag_start + strip) * 16, 0, *tag))
                        consumed += count
                    if consumed != vertex_total:
                        raise FormatError("strip counts do not cover the complete descriptor vertex range")
                    for vertex in range(vertex_total):
                        position = struct.unpack_from("<3I", positions, vertex * 12)
                        vector = TAG.unpack_from(vectors, vertex * 16)
                        red, green, blue, alpha = colors[vertex * 4:vertex * 4 + 4]
                        color = blue | green << 8 | red << 16 | alpha << 24
                        if layout == 0:
                            normal = (0, 0, 0)
                            s, t, q = vector[:3]
                            if q & 0x7FFFFFFF == 0:
                                q = 0x3F800000
                        else:
                            normal = vector[:3]
                            s, t, q = 0, 0, 0x3F800000
                        vertices.extend(VERTEX.pack(*position, *normal, color, s, t, q, 0))
                    batch_bytes.extend(BATCH.pack(room_index, model, part_at, part_index, variant,
                        at, texture, layout, strip_count, tag_total, vertex_count, vertex_total,
                        tag_start, vertex_start, part[0], part[1]))
                    batch_count += 1
                    strip_count += tag_total
                    vertex_count += vertex_total
                else:
                    raise FormatError("unterminated batch descriptor table")
        room_bytes.extend(ROOM.pack(source_index, room_at, room_first,
                                   batch_count - room_first, *room_words, 0))
    texture_at = HEADER.size
    room_at = texture_at + len(textures)
    batch_at = room_at + len(room_bytes)
    strip_at = batch_at + len(batch_bytes)
    vertex_at = _align128(strip_at + len(strip_bytes))
    total = vertex_at + len(vertices)
    if total > MAX_PACK_BYTES:
        raise FormatError("native background pack exceeds 64 MiB")
    header = HEADER.pack(MAGIC, VERSION, HEADER.size, REQUIRES_LIVE_BINDING, level,
        total, len(raw), len(source_rooms), batch_count, strip_count, vertex_count,
        texture_count, room_at, batch_at, strip_at, vertex_at, texture_at,
        *source_offsets, hashlib.sha256(raw).digest(), pak_sha256, 0, 0)
    result = bytearray(header + textures + room_bytes + batch_bytes + strip_bytes)
    result.extend(b"\0" * (vertex_at - len(result)))
    result.extend(vertices)
    U32.pack_into(result, CRC_OFFSET, checksum(result))
    encoded = bytes(result)
    inspect_pack(encoded)
    return encoded


def inspect_pack(data: bytes) -> dict:
    """Validate the entire pack, including hierarchy and payload CRC, before reporting."""
    if not HEADER.size <= len(data) <= MAX_PACK_BYTES:
        raise FormatError("invalid XBG1 byte size")
    h = HEADER.unpack_from(data)
    if h[0] != MAGIC or h[1:4] != (VERSION, HEADER.size, REQUIRES_LIVE_BINDING):
        raise FormatError("unsupported XBG1 header or live-binding flag")
    (level, total, raw_bytes, rooms, batches, strips, vertices, textures,
     room_at, batch_at, strip_at, vertex_at, texture_at,
     source_texture, source_room, source_portal, source_volume) = h[4:21]
    if (not level or total != len(data) or raw_bytes < 16 or h[24] or
            not all((rooms, batches, strips, vertices, textures))):
        raise FormatError("inconsistent XBG1 header")
    if h[23] != checksum(data):
        raise FormatError("XBG1 checksum mismatch")
    expected_room = HEADER.size + textures * TEXTURE.size
    expected_batch = expected_room + rooms * ROOM.size
    expected_strip = expected_batch + batches * BATCH.size
    expected_vertex = _align128(expected_strip + strips * STRIP.size)
    if (texture_at, room_at, batch_at, strip_at, vertex_at, total) != (
            HEADER.size, expected_room, expected_batch, expected_strip,
            expected_vertex, expected_vertex + vertices * VERTEX.size):
        raise FormatError("noncanonical XBG1 table positions")
    _span(raw_bytes, source_texture, (textures + 1) * 16, "source texture table", 16)
    _span(raw_bytes, source_room, (rooms + 2) * 44, "source room table", 16)
    _span(raw_bytes, source_portal, 8, "source portal table", 16)
    if source_volume:
        _span(raw_bytes, source_volume, 4, "source volume header", 16)
    if any(data[strip_at + strips * STRIP.size:vertex_at]):
        raise FormatError("nonzero vertex-alignment padding")
    for index in range(textures):
        if I32.unpack_from(data, texture_at + index * 16)[0] < 0:
            raise FormatError("negative stored texture ID")
    expected_batch_index = expected_strip_index = expected_vertex_index = 0
    previous_room = 0
    for room_index in range(rooms):
        room = ROOM.unpack_from(data, room_at + room_index * ROOM.size)
        source_index, source_offset, first, room_batch_count = room[:4]
        if source_index <= previous_room or source_offset != source_room + source_index * 44 or room[15]:
            raise FormatError("invalid source room identity or reserved word")
        _span(raw_bytes, source_offset, 44, "source room record", 16)
        for pointer in room[4:9]:
            if pointer:
                _span(raw_bytes, pointer, 4, "source room pointer", 16)
        if not room[4] or first != expected_batch_index or room_batch_count > batches - first:
            raise FormatError("room batch ranges do not partition the batch table")
        previous_room = source_index
        _span(raw_bytes, room[4], 40, "source model header", 16)
        previous_key = None
        previous_part = previous_part_word0 = previous_part_word1 = 0
        for batch_index in range(first, first + room_batch_count):
            batch = BATCH.unpack_from(data, batch_at + batch_index * BATCH.size)
            (owner, model, part, part_index, variant, descriptor, texture, layout,
             first_strip, strip_total, first_vertex, vertex_total,
             tag_start, vertex_start, part_word0, part_word1) = batch
            if owner != room_index or model != room[4] or variant > 1 or layout not in (0, 2):
                raise FormatError("batch does not match its source room or supported layout")
            if part_word0 & 255 or texture >= textures or texture & 0x80000000:
                raise FormatError("unsupported source part or texture binding")
            _span(raw_bytes, model, 40, "source model", 16)
            _span(raw_bytes, part, 80, "source part", 16)
            _span(raw_bytes, descriptor, 24, "source descriptor", 16)
            if part + 80 > model or (model - part) % 80 or part_index * 80 + 16 > part:
                raise FormatError("source part cannot precede its model header")
            key = (part_index, variant, descriptor)
            if previous_key is not None and key <= previous_key:
                raise FormatError("duplicate or unordered source descriptor identity")
            if (previous_key is not None and key[:2] == previous_key[:2] and
                    descriptor != previous_key[2] + 24):
                raise FormatError("nonconsecutive source descriptors within a variant")
            if previous_key is not None:
                if part_index == previous_key[0]:
                    if (part, part_word0, part_word1) != (
                            previous_part, previous_part_word0, previous_part_word1):
                        raise FormatError("inconsistent source part identity across batches")
                elif part != previous_part + (part_index - previous_key[0]) * 80:
                    raise FormatError("source part offsets do not match their part indices")
            previous_key = key
            previous_part, previous_part_word0, previous_part_word1 = part, part_word0, part_word1
            if (not 1 <= strip_total <= 24 or not 3 <= vertex_total <= 64 or
                    first_strip != expected_strip_index or strip_total > strips - first_strip or
                    first_vertex != expected_vertex_index or vertex_total > vertices - first_vertex):
                raise FormatError("batch ranges do not partition strip and vertex tables")
            _span(raw_bytes, tag_start * 16, strip_total * 16, "source tag indices")
            _span(raw_bytes, vertex_start * 16, vertex_total * 16, "source vector indices")
            consumed = 0
            first_tag_offset = None
            for local in range(strip_total):
                strip = STRIP.unpack_from(data, strip_at + (first_strip + local) * STRIP.size)
                vertex, strip_vertex_count, tag_offset, reserved = strip[:4]
                tag = strip[4:]
                if (reserved or vertex != first_vertex + consumed or
                        strip_vertex_count != _tag_count(tag, last=local + 1 == strip_total)):
                    raise FormatError("invalid strip range, tag or reserved field")
                _span(raw_bytes, tag_offset, 16, "source tag", 16)
                if first_tag_offset is None:
                    first_tag_offset = tag_offset
                    if tag_offset < 16 + tag_start * 16:
                        raise FormatError("source tag index underflows its source array")
                elif tag_offset != first_tag_offset + local * 16:
                    raise FormatError("nonconsecutive source tag offsets")
                consumed += strip_vertex_count
            if consumed != vertex_total:
                raise FormatError("strips do not partition their batch vertices")
            expected_strip_index += strip_total
            expected_vertex_index += vertex_total
        expected_batch_index += room_batch_count
    if (expected_batch_index, expected_strip_index, expected_vertex_index) != (batches, strips, vertices):
        raise FormatError("unowned trailing table records")
    return {"schema": "timesplitters-xbg1-report-v1", "format": "XBG1", "version": VERSION,
            "flags": REQUIRES_LIVE_BINDING, "requires_live_binding": True,
            "runtime_installed": False, "level": level, "bytes": len(data),
            "source_raw_bytes": raw_bytes, "source_raw_sha256": h[21].hex(),
            "source_pak_sha256": h[22].hex(), "crc32": f"{h[23]:08x}",
            "counts": {"rooms": rooms, "batches": batches, "strips": strips,
                       "vertices": vertices, "textures": textures},
            "offsets": {"rooms": room_at, "batches": batch_at, "strips": strip_at,
                        "vertices": vertex_at, "textures": texture_at},
            "source_offsets": {"textures": source_texture, "rooms": source_room,
                               "portals": source_portal, "volume": source_volume}}


def _read_file(path: Path, limit: int) -> bytes:
    with path.open("rb") as stream:
        data = stream.read(limit + 1)
    if len(data) > limit:
        raise FormatError(f"{path.name} exceeds the {limit}-byte safety limit")
    return data


def _aliases(path: Path, source: Path) -> bool:
    if path.resolve() == source.resolve():
        return True
    try:
        return path.samefile(source)
    except FileNotFoundError:
        return False


def _build_directory(source: Path, destination: Path, misc: Path | None, selected: list[int] | None) -> dict:
    pak = _read_file(source, MAX_SOURCE_BYTES)
    entries = parse_pak(pak, require_bg=True)
    pak_hash = hashlib.sha256(pak).digest()
    misc_names = None
    misc_hash = None
    if misc is not None:
        misc_data = _read_file(misc, MAX_SOURCE_BYTES)
        misc_names = {entry["name"] for entry in parse_pak(misc_data) if entry["size"]}
        misc_hash = hashlib.sha256(misc_data).hexdigest()
    wanted = set(selected) if selected is not None else None
    available = {int(BG_NAME.fullmatch(entry["name"]).group(1)) for entry in entries}
    if wanted is not None and (not wanted or wanted - available):
        raise FormatError(f"requested levels are missing from BG.PAK: {sorted(wanted - available)}")
    outputs = []
    summaries = []
    for entry in sorted(entries, key=lambda item: int(BG_NAME.fullmatch(item["name"]).group(1))):
        level = int(BG_NAME.fullmatch(entry["name"]).group(1))
        if wanted is not None and level not in wanted:
            continue
        encoded = build_level(entry["data"], level=level, pak_sha256=pak_hash, misc_names=misc_names)
        name = f"level{level}.xbg"
        outputs.append((name, encoded))
        summaries.append({"file": name, "sha256": hashlib.sha256(encoded).hexdigest(),
                          "source_entry": entry["name"], "source_pak_offset": entry["offset"],
                          **inspect_pack(encoded)})
    manifest = {"schema": "timesplitters-native-background-manifest-v1",
                "source_kind": "original_bg_pak", "source_pak_sha256": pak_hash.hex(),
                "source_misc_pak_sha256": misc_hash, "requires_live_binding": True,
                "runtime_installed": False, "packs": summaries,
                "counts": {key: sum(item["counts"][key] for item in summaries)
                           for key in ("rooms", "batches", "strips", "vertices", "textures")},
                "limitations": [
                    "These files contain source-derived geometry, not draw captures.",
                    "Runtime asset ownership, generations, relighting, state, ordering and GPU lifetimes are not bound.",
                    "Opaque room/material metadata does not replace visibility, collision or PVS logic.",
                    "Offline conversion does not establish rendered fidelity or performance gains."]}
    outputs.append(("manifest.json", (json.dumps(manifest, indent=2, sort_keys=True) + "\n").encode("utf-8")))
    # All selected sources and all encoded packs have passed validation before
    # touching the destination. Each publication is an atomic replacement;
    # the manifest is published last. No promise of a multi-file I/O transaction.
    for name, _ in outputs:
        if any(_aliases(destination / name, path) for path in (source, misc) if path is not None):
            raise FormatError("an output path aliases a source file")
    destination.mkdir(parents=True, exist_ok=True)
    with tempfile.TemporaryDirectory(prefix=".xbg-stage-", dir=destination) as staging:
        staging_path = Path(staging)
        for name, encoded in outputs:
            with (staging_path / name).open("wb") as stream:
                stream.write(encoded)
                stream.flush()
                os.fsync(stream.fileno())
        for name, _ in outputs:
            os.replace(staging_path / name, destination / name)
    return manifest


def main(argv: list[str] | None = None) -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    commands = parser.add_subparsers(dest="command", required=True)
    build = commands.add_parser("build", help="validate selected original levels and write XBG1 packs")
    build.add_argument("input", type=Path)
    build.add_argument("output_dir", type=Path)
    build.add_argument("--misc-pak", type=Path)
    build.add_argument("--level", type=int, action="append", help="source level number; repeat to select more")
    inspect = commands.add_parser("inspect", help="validate an entire XBG1 pack and report its metadata")
    inspect.add_argument("input", type=Path)
    args = parser.parse_args(argv)
    try:
        if args.command == "inspect":
            print(json.dumps(inspect_pack(_read_file(args.input, MAX_PACK_BYTES)), indent=2, sort_keys=True))
        else:
            result = _build_directory(args.input, args.output_dir, args.misc_pak, args.level)
            print(f"{len(result['packs'])} source levels; {result['counts']['batches']} batches; "
                  f"{result['counts']['vertices']} vertices; requires live binding, renderer unchanged")
    except (OSError, ValueError, struct.error, OverflowError) as error:
        parser.exit(2, f"xbgbuild: {error}\n")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
