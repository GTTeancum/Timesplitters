#!/usr/bin/env python3
"""Inspect existing PC-runtime VCU1 recordings or extract one private .xmesh.

Capture header/order: ps2xRuntime/src/lib/vu/ps2_vu_capture.h.
Only the known TimeSplitters microprogram's five draw entries are converted.
The opaque host VU1State is skipped by its recorded size, never deserialized.
This is offline evidence tooling, not a static-asset importer or runtime cache.
"""
from __future__ import annotations

import argparse
from collections import Counter
from dataclasses import dataclass
import hashlib
import json
from pathlib import Path
import struct
from typing import BinaryIO, Iterator

import xmeshbuild as mesh

CAPTURE = struct.Struct("<8I")
CAPTURE_MAGIC = 0x31554356  # little-endian bytes: VCU1
MAX_STATE_BYTES = 65536    # tool safety limit, NOT sizeof(VU1State)
MAX_RECORDS = 8192         # the existing recorder's maximum
PROGRAM_HASH = 0x38AE1E855CD83DEE  # vu1_native_ts.cpp kProgramHash
DRAW_KINDS = {0x0000: 0, 0x0D20: 1, 0x1AE0: 2, 0x3520: 2, 0x2800: 3}


class CaptureError(ValueError):
    """Invalid/truncated container or unsupported selection; never salvage silently."""


@dataclass(frozen=True)
class Record:
    index: int
    offset: int
    state_bytes: int
    pc: int
    top: int
    itop: int
    max_cycles: int
    code: bytes
    data: bytes


def _read_exact(stream: BinaryIO, size: int, label: str, offset: int) -> bytes:
    # read() can legally return fewer bytes without EOF (e.g. a pipe).
    data = bytearray()
    while len(data) < size:
        chunk = stream.read(size - len(data))
        if not chunk:
            raise CaptureError(f"truncated {label} at byte {offset}: expected {size}, got {len(data)}")
        data.extend(chunk)
    return bytes(data)


def records(stream: BinaryIO, *, limit: int = MAX_RECORDS) -> Iterator[Record]:
    """Bounded streaming parser. Exhaust it to validate the ENTIRE recording.

    VCU1 has no global record count or checksum. EOF exactly at a record
    boundary is valid; a recording cut at such a boundary is undetectable.
    Little-endian captures only. State sizes may vary between host builds.
    """
    if not 1 <= limit <= MAX_RECORDS:
        raise ValueError(f"record limit must be 1..{MAX_RECORDS}")
    offset = 0
    index = 0
    while True:
        first = stream.read(1)
        if not first:
            if index == 0:
                raise CaptureError("empty recording")
            return
        if index >= limit:
            raise CaptureError(f"record limit {limit} exceeded at byte {offset}")
        header = first + _read_exact(stream, CAPTURE.size - 1, "capture header", offset + 1)
        magic, state_size, code_size, data_size, pc, top, itop, cycles = CAPTURE.unpack(header)
        if magic != CAPTURE_MAGIC:
            raise CaptureError(f"bad VCU1 magic at byte {offset}; expected a little-endian runtime capture")
        if not 1 <= state_size <= MAX_STATE_BYTES:
            raise CaptureError(f"invalid state size {state_size} in record {index}")
        if not 0 < code_size <= mesh.VU_BYTES or code_size % 8:
            raise CaptureError(f"invalid code size {code_size} in record {index}")
        if not 0 < data_size <= mesh.VU_BYTES or data_size % 16:
            raise CaptureError(f"invalid data size {data_size} in record {index}")
        body_offset = offset + CAPTURE.size
        _read_exact(stream, state_size, "opaque VU1State", body_offset)
        code = _read_exact(stream, code_size, "microprogram", body_offset + state_size)
        data = _read_exact(stream, data_size, "VU data RAM", body_offset + state_size + code_size)
        yield Record(index, offset, state_size, pc, top, itop, cycles, code, data)
        offset = body_offset + state_size + code_size + data_size
        index += 1


def hash_program(code: bytes) -> int:
    """The exact wrapping FNV-1a identity used by hashVu1Code, NOT authentication."""
    value = 0xCBF29CE484222325
    for byte in code:
        value = ((value ^ byte) * 0x100000001B3) & 0xFFFFFFFFFFFFFFFF
    return value


def _state_block(data: bytes, top: int) -> bytes:
    # Match runDraw's bounded state-block lookup. This is an input digest,
    # NOT interpretation of GS state or a guarantee of material equivalence.
    row = top + 216
    if not 0 <= row < 1024:
        raise CaptureError("render-state block is outside VU1 data RAM")
    tag = mesh.U32X4.unpack_from(data, row * 16)
    nreg = (tag[1] >> 28) or 16
    size = 1 + (tag[0] & 0x7FFF) * nreg
    if size > 32 or row + size > 1024:
        raise CaptureError("render-state block exceeds the native path's bounds")
    return data[row * 16:(row + size) * 16]


def convert_record(record: Record) -> bytes:
    """Fail closed: no caller-supplied kind can override the code/PC identity."""
    if hash_program(record.code) != PROGRAM_HASH:
        raise CaptureError("unsupported microprogram identity; no layout is inferred")
    return _convert_known_record(record)


def _convert_known_record(record: Record) -> bytes:
    """Internal: caller has already verified the microprogram identity."""
    if record.pc not in DRAW_KINDS:
        raise CaptureError(f"PC 0x{record.pc:x} is not a supported draw entry")
    if len(record.data) != mesh.VU_BYTES:
        raise CaptureError("draw requires exactly 16384 bytes of VU1 data RAM")
    if not 0 <= record.top < 1024:
        raise CaptureError("draw TOP is not a VU1 qword index")
    _state_block(record.data, record.top)
    try:
        return mesh.convert(record.data, DRAW_KINDS[record.pc], record.top)
    except ValueError as error:
        raise CaptureError(str(error)) from error


def fingerprints(record: Record, packed: bytes) -> dict:
    """Fingerprint our converter output. Never pass arbitrary packs to this helper.

    Geometry excludes TOP, source rows, unrelated VU RAM and live constants.
    It includes PC, layout, strip lengths/order and every decoded vertex byte.
    Tags and material/constant inputs have SEPARATE digests: equal geometry
    is not equal rendering and never authorizes skipping a draw.
    """
    fields = mesh.HEADER.unpack_from(packed)
    kind, strip_count, vertex_count, vertex_offset = fields[3], fields[5], fields[6], fields[8]
    geometry = hashlib.sha256(b"TSXMESH geometry observation v1\0")
    geometry.update(struct.pack("<4I", record.pc, kind, strip_count, vertex_count))
    tags = hashlib.sha256(b"TSXMESH draw tags v1\0")
    for i in range(strip_count):
        strip = mesh.STRIP.unpack_from(packed, mesh.HEADER.size + i * mesh.STRIP.size)
        geometry.update(struct.pack("<I", strip[1]))
        tags.update(struct.pack("<5I", *strip[3:]))
    geometry.update(packed[vertex_offset:])
    # The fixed input rows documented by vu1_native_ts.cpp; a superset of
    # each layout's reads. A differing digest alone does not prove a visible change.
    constants = record.data[:22 * 16] + record.data[106 * 16:122 * 16]
    return {
        "kind": mesh.NAMES[kind], "strips": strip_count, "vertices": vertex_count,
        "vertex_bytes": vertex_count * mesh.VERTEX.size,
        "geometry_sha256": geometry.hexdigest(),
        "tags_sha256": tags.hexdigest(),
        "constant_inputs_sha256": hashlib.sha256(constants).hexdigest(),
        "state_block_sha256": hashlib.sha256(_state_block(record.data, record.top)).hexdigest(),
        "data_sha256": hashlib.sha256(record.data).hexdigest(),
    }


def analyze(stream: BinaryIO) -> dict:
    """Report every record, including unsupported ones, without retaining raw assets."""
    items = []
    counts: Counter = Counter()
    groups: dict = {}
    # Record streams normally repeat one code image. Keep ONE image/hash,
    # not every microprogram in an attacker-controlled capture.
    previous_code = None
    previous_hash = None
    for record in records(stream):
        if record.code != previous_code:
            previous_code = record.code
            previous_hash = hash_program(record.code)
        item = {"record": record.index, "offset": record.offset, "pc": record.pc,
                "top": record.top, "itop": record.itop, "max_cycles": record.max_cycles,
                "state_bytes": record.state_bytes, "program_hash": f"{previous_hash:016x}"}
        packed = None
        if previous_hash != PROGRAM_HASH:
            item.update(status="unsupported_program", reason="no geometry layout inferred")
        elif record.pc not in DRAW_KINDS:
            item.update(status="non_draw_entry", reason="constant, packet or other entry; not converted")
        else:
            try:
                packed = _convert_known_record(record)
                item.update(status="converted", **fingerprints(record, packed))
            except CaptureError as error:
                item.update(status="unsupported_draw", reason=str(error))
        counts[item["status"]] += 1
        items.append(item)
        if packed is not None and item["status"] == "converted":
            group = groups.setdefault(item["geometry_sha256"], {
                "records": [], "constant_inputs": set(), "state_blocks": set(),
                "tags": set(), "source_images": set(), "vertex_bytes": item["vertex_bytes"]})
            group["records"].append(record.index)
            for key, field in (("constant_inputs", "constant_inputs_sha256"),
                               ("state_blocks", "state_block_sha256"), ("tags", "tags_sha256"),
                               ("source_images", "data_sha256")):
                group[key].add(item[field])
    repeated = []
    for digest, group in groups.items():
        if len(group["records"]) > 1:
            repeated.append({"geometry_sha256": digest, "records": group["records"],
                             "vertex_bytes": group["vertex_bytes"],
                             **{f"distinct_{k}": len(group[k]) for k in
                                ("constant_inputs", "state_blocks", "tags", "source_images")}})
    return {
        "schema": "timesplitters-xmesh-capture-report-v1",
        "record_count": len(items), "status_counts": dict(counts),
        "unique_geometry_observations": len(groups), "repeated_geometry": repeated,
        "runtime_installed": False, "records": items,
        "limitations": [
            "Equal decoded geometry is not static-asset identity, matching frame/view identity, or safe cache reuse.",
            "Records have no frame/object IDs; order is capture order, not an inferred frame number.",
            "Materials, GS history, transforms, lighting, clipping, side effects and GPU lifetimes are not replayed.",
            "VCU1 has no checksum/count; EOF at a record boundary cannot prove the intended capture completed.",
            "Counts and byte sizes are observations, not predicted frame-time savings or visual validation.",
        ],
    }


def extract(stream: BinaryIO, selected: int) -> bytes:
    """Validate the entire stream BEFORE returning a selected pack for publication."""
    if not 0 <= selected < MAX_RECORDS:
        raise CaptureError(f"record selection must be 0..{MAX_RECORDS - 1}")
    packed = None
    for record in records(stream):
        if record.index == selected:
            packed = convert_record(record)
    if packed is None:
        raise CaptureError(f"record {selected} does not exist")
    return packed


def main(argv: list[str] | None = None) -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    sub = parser.add_subparsers(dest="command", required=True)
    inspect = sub.add_parser("inspect", help="private JSON summary; no vertex payloads")
    inspect.add_argument("input", type=Path)
    inspect.add_argument("--output", type=Path, help="otherwise print JSON to stdout")
    select = sub.add_parser("extract", help="convert one 0-based draw record")
    select.add_argument("input", type=Path)
    select.add_argument("output", type=Path)
    select.add_argument("--record", type=int, required=True)
    args = parser.parse_args(argv)
    try:
        if args.output is not None and args.input.resolve() == args.output.resolve():
            raise CaptureError("input and output must be different files")
        with args.input.open("rb") as stream:
            if args.command == "inspect":
                report = analyze(stream)
                content = (json.dumps(report, indent=2, sort_keys=True) + "\n").encode("utf-8")
            else:
                content = extract(stream, args.record)
        # Nothing is written until the complete input has passed container checks.
        if args.output is not None:
            mesh.write_atomic(args.output, content)
        else:
            print(content.decode("utf-8"), end="")
        if args.command == "extract":
            print(f"record {args.record}: {len(content)} bytes; capture-only, not installed")
    except (OSError, ValueError) as error:
        parser.exit(2, f"xmeshcapture: {error}\n")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
